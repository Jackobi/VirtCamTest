// Fill out your copyright notice in the Description page of Project Settings.


#include "RemoteCameraComponent.h"
#include "ILiveLinkClient.h"
#include "Roles/LiveLinkCameraRole.h"
#include "Roles/LiveLinkTransformRole.h"
//#include "RemoteCameraSettings.h"
#include "VPUtilities/Public/VPSettings.h"

#if WITH_EDITOR
//#include "Editor.h"
#include "Modules/ModuleManager.h"
#include "LevelEditor.h"
#include "IAssetViewport.h"
#include "SLevelViewport.h"

#include "IConcertModule.h"
#include "IConcertClient.h"
#include "IConcertSession.h"
#include "IConcertSyncClient.h"
#include "IMultiUserClientModule.h"
#endif

namespace RemoteCameraComponent
{
	static const FName LevelEditorName(TEXT("LevelEditor"));
}

URemoteCameraComponent::URemoteCameraComponent()
{
	// Don't run on CDO
	if (!HasAnyFlags(RF_ClassDefaultObject))
	{
		// Hook into the Live Link Client for our Tick
		IModularFeatures& ModularFeatures = IModularFeatures::Get();

		if (ModularFeatures.IsModularFeatureAvailable(ILiveLinkClient::ModularFeatureName))
		{
			ILiveLinkClient& LiveLinkClient = ModularFeatures.GetModularFeature<ILiveLinkClient>(ILiveLinkClient::ModularFeatureName);
			LiveLinkClient.OnLiveLinkTicked().AddUObject(this, &URemoteCameraComponent::Update);
		}
		else
		{
			UE_LOG(LogRemoteCamera, Error, TEXT("LiveLink is not available. Some VCamCore features may not work as expected"));
		}

#if WITH_EDITOR
		// Add the necessary event listeners so we can start/end properly
		if (FLevelEditorModule* LevelEditorModule = FModuleManager::GetModulePtr<FLevelEditorModule>(RemoteCameraComponent::LevelEditorName))
		{
			LevelEditorModule->OnMapChanged().AddUObject(this, &URemoteCameraComponent::OnMapChanged);
		}

		FEditorDelegates::BeginPIE.AddUObject(this, &URemoteCameraComponent::OnBeginPIE);
		FEditorDelegates::EndPIE.AddUObject(this, &URemoteCameraComponent::OnEndPIE);

		if (GEditor)
		{
			GEditor->OnObjectsReplaced().AddUObject(this, &URemoteCameraComponent::HandleObjectReplaced);
		}
		MultiUserStartup();
#endif

		TArray<UCineCameraComponent*> CameraComponents;
		if (GetOwner())
		{
			GetOwner()->GetComponents(CameraComponents);
			if (CameraComponents.Num() > 0)
			{
				TargetCamera = CameraComponents[0];
			}
		}
	}
}

void URemoteCameraComponent::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	bLockViewportToCamera = false;
	UpdateActorLock();

	for (URemoteCameraOutputBase* Provider : OutputProviders)
	{
		if (Provider)
		{
			Provider->Deinitialize();
		}
	}

#if WITH_EDITOR
	// Remove all event listeners
	if (FLevelEditorModule* LevelEditorModule = FModuleManager::GetModulePtr<FLevelEditorModule>(RemoteCameraComponent::LevelEditorName))
	{
		LevelEditorModule->OnMapChanged().RemoveAll(this);
	}

	FEditorDelegates::BeginPIE.RemoveAll(this);
	FEditorDelegates::EndPIE.RemoveAll(this);

	if (GEditor)
	{
		GEditor->OnObjectsReplaced().RemoveAll(this);
	}
	MultiUserShutdown();
#endif
}

void URemoteCameraComponent::HandleObjectReplaced(const TMap<UObject*, UObject*>& ReplacementMap)
{
	for (const TPair<UObject*, UObject*> ReplacementPair : ReplacementMap)
	{
		UObject* FromObject = ReplacementPair.Key;
		UObject* ToObject = ReplacementPair.Value;

		if (ToObject == this)
		{
			if (URemoteCameraComponent* OldComponent = Cast<URemoteCameraComponent>(FromObject))
			{
				OldComponent->NotifyComponentWasReplaced(this);
			}

			OnComponentReplaced.Broadcast(this);
		}
	}
}

void URemoteCameraComponent::NotifyComponentWasReplaced(URemoteCameraComponent* ReplacementComponent)
{
	// This function should only ever be called when we have a valid component replacing us
	check(ReplacementComponent);

	// Make sure to copy over our delegate bindings to the component replacing us
	ReplacementComponent->OnComponentReplaced = OnComponentReplaced;

	OnComponentReplaced.Clear();

	DestroyComponent();
}

bool URemoteCameraComponent::CanUpdate() const
{
	UWorld* World = GetWorld();
	if (bEnabled && !IsPendingKill() && !bIsEditorObjectButPIEIsRunning && World)
	{
		// Check for an Inactive type of world which means nothing should ever execute on this object
		// @TODO: This is far from optimal as it means a zombie object has been created that never gets GC'ed
		// Apparently, we should be using OnRegister/OnUnregister() instead of doing everything in the constructor, but it was throwing GC errors when trying that
		if (World->WorldType != EWorldType::Inactive)
		{
			//Deprecated implementation
			//if (this->GetOwner()->GetComponentsByClass(UCineCameraComponent::StaticClass()).Num() > 0)

			//TArray<UCineCameraComponent*> CameraComponents;
			TArray<UCineCameraComponent*> CameraComponents;
			GetOwner()->GetComponents(CameraComponents);
			if (CameraComponents.Num() > 0)
			{
				return true;
			}
			//if (const USceneComponent* ParentComponent = GetAttachParent())
			//{
			//	if (ParentComponent->IsA<UCineCameraComponent>())
			//	{
			//		// Component is valid to use if it is enabled, has a parent and that parent is a CineCamera derived component
			//		return true;
			//	}
			//}
		}
	}
	return false;
}

/*
void URemoteCameraComponent::OnAttachmentChanged()
{
	Super::OnAttachmentChanged();

	// Attachment change event was a detach. We only want to respond to attaches 
	if (GetAttachParent() == nullptr)
	{
		return;
	}

	UCineCameraComponent* TargetCamera = GetTargetCamera();

	// This flag must be false on the attached CameraComponent or the UMG will not render correctly if the aspect ratios are mismatched
	if (TargetCamera)
	{
		TargetCamera->bConstrainAspectRatio = false;
	}

	for (URemoteCameraOutputBase* Provider : OutputProviders)
	{
		if (Provider)
		{
			Provider->SetTargetCamera(TargetCamera);
		}
	}

#if WITH_EDITOR
	CheckForErrors();
#endif
}
*/

#if WITH_EDITOR
void URemoteCameraComponent::CheckForErrors()
{
	Super::CheckForErrors();

	if (!GetTargetCamera())
	{
		UE_LOG(LogRemoteCamera, Error, TEXT("Attached Parent should have a CineCamera derived component."));
	}
}

void URemoteCameraComponent::PreEditChange(FProperty* PropertyThatWillChange)
{
	// Copy the property that is going to be changed so we can use it in PostEditChange if needed (for ArrayClear, ArrayRemove, etc.)
	if (PropertyThatWillChange)
	{
		static FName NAME_OutputProviders = GET_MEMBER_NAME_CHECKED(URemoteCameraComponent, OutputProviders);
		//static FName NAME_ModifierStack = GET_MEMBER_NAME_CHECKED(URemoteCameraComponent, ModifierStack);

		// Name property withing the Modifier Stack Entry struct. Possible collision due to just being called "Name"
		//static FName NAME_ModifierStackEntryName = GET_MEMBER_NAME_CHECKED(FModifierStackEntry, Name);
		static FName NAME_Enabled = GET_MEMBER_NAME_CHECKED(URemoteCameraComponent, bEnabled);

		const FName PropertyThatWillChangeName = PropertyThatWillChange->GetFName();

		if (PropertyThatWillChangeName == NAME_OutputProviders)
		{
			SavedOutputProviders.Empty();
			SavedOutputProviders = OutputProviders;
		}
		//else if (PropertyThatWillChangeName == NAME_ModifierStack || PropertyThatWillChangeName == NAME_ModifierStackEntryName)
		//{
		//	SavedModifierStack = ModifierStack;
		//}
		else if (PropertyThatWillChangeName == NAME_Enabled)
		{
			// If the property's owner is a struct (like FModifierStackEntry), act on it in PostEditChangeProperty(), not here
			if (PropertyThatWillChange->GetOwner<UClass>())
			{
				void* PropertyData = PropertyThatWillChange->ContainerPtrToValuePtr<void>(this);
				bool bWasEnabled = false;
				PropertyThatWillChange->CopySingleValue(&bWasEnabled, PropertyData);

				// Changing the enabled state needs to be done here instead of PostEditChange
				SetEnabled(!bWasEnabled);
			}
		}
	}

	Super::PreEditChange(PropertyThatWillChange);
}

void URemoteCameraComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	FProperty* Property = PropertyChangedEvent.MemberProperty;
	if (Property && PropertyChangedEvent.ChangeType != EPropertyChangeType::Interactive)
	{
		static FName NAME_LockViewportToCamera = GET_MEMBER_NAME_CHECKED(URemoteCameraComponent, bLockViewportToCamera);
		static FName NAME_Enabled = GET_MEMBER_NAME_CHECKED(URemoteCameraComponent, bEnabled);
		//static FName NAME_ModifierStack = GET_MEMBER_NAME_CHECKED(URemoteCameraComponent, ModifierStack);
		static FName NAME_TargetViewport = GET_MEMBER_NAME_CHECKED(URemoteCameraComponent, TargetViewport);

		const FName PropertyName = Property->GetFName();

		if (PropertyName == NAME_LockViewportToCamera)
		{
			UpdateActorLock();
		}
		else if (PropertyName == NAME_Enabled)
		{
			// Only act here if we are a struct (like FModifierStackEntry)
			if (!Property->GetOwner<UClass>())
			{
				SetEnabled(bEnabled);
			}
		}
		//else if (PropertyName == NAME_ModifierStack)
		//{
		//	EnforceModifierStackNameUniqueness();
		//}
		else if (PropertyName == NAME_TargetViewport)
		{
			if (bEnabled)
			{
				SetEnabled(false);
				SetEnabled(true);

				if (bLockViewportToCamera)
				{
					SetActorLock(false);
					SetActorLock(true);
				}
			}
		}
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}

void URemoteCameraComponent::PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent)
{
	FProperty* Property = PropertyChangedEvent.PropertyChain.GetActiveNode()->GetValue();
	if (Property && PropertyChangedEvent.ChangeType != EPropertyChangeType::Interactive)
	{
		static FName NAME_OutputProviders = GET_MEMBER_NAME_CHECKED(URemoteCameraComponent, OutputProviders);

		if (Property->GetFName() == NAME_OutputProviders)
		{
			FProperty* ActualProperty = PropertyChangedEvent.PropertyChain.GetActiveNode()->GetNextNode() ? PropertyChangedEvent.PropertyChain.GetActiveNode()->GetNextNode()->GetValue() : nullptr;
			if (ActualProperty == nullptr)
			{
				const int32 ChangedIndex = PropertyChangedEvent.GetArrayIndex(PropertyChangedEvent.GetPropertyName().ToString());
				if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ValueSet)
				{
					if (OutputProviders.IsValidIndex(ChangedIndex))
					{
						URemoteCameraOutputBase* ChangedProvider = OutputProviders[ChangedIndex];

						// If we changed the output type, be sure to delete the old one before setting up the new one
						if (SavedOutputProviders.IsValidIndex(ChangedIndex) && (SavedOutputProviders[ChangedIndex] != ChangedProvider))
						{
							DestroyOutputProvider(SavedOutputProviders[ChangedIndex]);
						}

						if (ChangedProvider)
						{
							ChangedProvider->Initialize();
						}
					}
				}
				else if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ArrayRemove)
				{
					if (SavedOutputProviders.IsValidIndex(ChangedIndex))
					{
						DestroyOutputProvider(SavedOutputProviders[ChangedIndex]);
					}
				}
				else if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ArrayClear)
				{
					for (URemoteCameraOutputBase* ClearedProvider : SavedOutputProviders)
					{
						DestroyOutputProvider(ClearedProvider);
					}
				}
			}

			// We created this in PreEditChange, so we need to always get rid of it
			SavedOutputProviders.Empty();
		}
	}

	Super::PostEditChangeChainProperty(PropertyChangedEvent);
}
#endif

void URemoteCameraComponent::Update()
{
	if (!CanUpdate())
	{
		return;
	}

	// If requested then disable the component if we're spawned by sequencer
	if (bDisableComponentWhenSpawnedBySequencer)
	{
		static const FName SequencerActorTag(TEXT("SequencerActor"));
		AActor* OwningActor = GetOwner();
		if (OwningActor && OwningActor->ActorHasTag(SequencerActorTag))
		{
			UE_LOG(LogRemoteCamera, Warning, TEXT("%s was spawned by Sequencer. Disabling the component because \"Disable Component When Spawned By Sequencer\" was true."), *GetFullName(OwningActor->GetOuter()));
			SetEnabled(false);
			return;
		}
	}
	UCineCameraComponent* CameraComponent = GetTargetCamera();

	if (!CameraComponent)
	{
		UE_LOG(LogRemoteCamera, Error, TEXT("Parent component wasn't valid for Update"));
		return;
	}

	const float DeltaTime = GetDeltaTime();

	if (CanEvaluateModifierStack())
	{
		UE_LOG(LogRemoteCamera, Log, TEXT("Evaluating modifier stack..."));
		// Ensure the actor lock reflects the state of the lock property
		// This is needed as UActorComponent::ConsolidatedPostEditChange will cause the component to be reconstructed on PostEditChange
		// if the component is inherited
		if (bLockViewportToCamera != bIsLockedToViewport)
		{
			UpdateActorLock();
		}

		FLiveLinkCameraBlueprintData InitialLiveLinkData;
		GetLiveLinkDataForCurrentFrame(InitialLiveLinkData);

		CopyLiveLinkDataToCamera(InitialLiveLinkData, CameraComponent);

		/*
		for (FModifierStackEntry& ModifierStackEntry : ModifierStack)
		{
			if (!ModifierStackEntry.bEnabled)
			{
				continue;
			}

			if (UVCamModifier* Modifier = ModifierStackEntry.GeneratedModifier)
			{
				// Initialize the Modifier if required
				if (Modifier->DoesRequireInitialization())
				{
					Modifier->Initialize(ModifierContext);
				}

				Modifier->Apply(ModifierContext, CameraComponent, DeltaTime);
			}
		}
		*/

		SendCameraDataViaMultiUser();
	}	

	for (URemoteCameraOutputBase* Provider : OutputProviders)
	{
		if (Provider)
		{
			// Initialize the Provider if required
			if (!Provider->IsInitialized())
			{
				UE_LOG(LogRemoteCamera, Log, TEXT("Initialized provider"));
				Provider->Initialize();
			}

			Provider->Tick(DeltaTime);	
		}
	}
}

void URemoteCameraComponent::SetEnabled(bool bNewEnabled)
{
	if (!bNewEnabled)
	{
		for (URemoteCameraOutputBase* Provider : OutputProviders)
		{
			if (Provider)
			{
				Provider->Deinitialize();
			}
		}
	}
	bEnabled = bNewEnabled;

	if (bNewEnabled)
	{
		for (URemoteCameraOutputBase* Provider : OutputProviders)
		{
			if (Provider)
			{
				Provider->Initialize();
			}
		}
	}
}

UCineCameraComponent* URemoteCameraComponent::GetTargetCamera() const
{
	//return Cast<UCineCameraComponent>(GetAttachParent());
	return TargetCamera;
}

void URemoteCameraComponent::GetLiveLinkDataForCurrentFrame(FLiveLinkCameraBlueprintData& LiveLinkData)
{
	IModularFeatures& ModularFeatures = IModularFeatures::Get();
	if (ModularFeatures.IsModularFeatureAvailable(ILiveLinkClient::ModularFeatureName))
	{
		ILiveLinkClient& LiveLinkClient = ModularFeatures.GetModularFeature<ILiveLinkClient>(ILiveLinkClient::ModularFeatureName);
		FLiveLinkSubjectFrameData EvaluatedFrame;

		// Manually get all enabled and virtual LiveLink subjects so we can test roles without generating warnings
		const bool bIncludeDisabledSubjects = false;
		const bool bIncludeVirtualSubjects = true;
		TArray<FLiveLinkSubjectKey> AllEnabledSubjectKeys = LiveLinkClient.GetSubjects(bIncludeDisabledSubjects, bIncludeVirtualSubjects);
		const FLiveLinkSubjectKey* FoundSubjectKey = AllEnabledSubjectKeys.FindByPredicate([=](FLiveLinkSubjectKey& InSubjectKey) { return InSubjectKey.SubjectName == LiveLinkSubject; });

		if (FoundSubjectKey)
		{
			if (LiveLinkClient.DoesSubjectSupportsRole(*FoundSubjectKey, ULiveLinkCameraRole::StaticClass()))
			{
				if (LiveLinkClient.EvaluateFrame_AnyThread(LiveLinkSubject, ULiveLinkCameraRole::StaticClass(), EvaluatedFrame))
				{
					FLiveLinkBlueprintDataStruct WrappedBlueprintData(FLiveLinkCameraBlueprintData::StaticStruct(), &LiveLinkData);
					GetDefault<ULiveLinkCameraRole>()->InitializeBlueprintData(EvaluatedFrame, WrappedBlueprintData);
				}
			}
			else if (LiveLinkClient.DoesSubjectSupportsRole(*FoundSubjectKey, ULiveLinkTransformRole::StaticClass()))
			{
				if (LiveLinkClient.EvaluateFrame_AnyThread(LiveLinkSubject, ULiveLinkTransformRole::StaticClass(), EvaluatedFrame))
				{
					LiveLinkData.FrameData.Transform = EvaluatedFrame.FrameData.Cast<FLiveLinkTransformFrameData>()->Transform;
				}
			}
		}
	}
}

void URemoteCameraComponent::CopyLiveLinkDataToCamera(const FLiveLinkCameraBlueprintData& LiveLinkData, UCineCameraComponent* CameraComponent)
{
	const FLiveLinkCameraStaticData& StaticData = LiveLinkData.StaticData;
	const FLiveLinkCameraFrameData& FrameData = LiveLinkData.FrameData;


	if (CameraComponent)
	{
		if (StaticData.bIsFieldOfViewSupported) { CameraComponent->SetFieldOfView(FrameData.FieldOfView); }
		if (StaticData.bIsAspectRatioSupported) { CameraComponent->SetAspectRatio(FrameData.AspectRatio); }
		if (StaticData.bIsProjectionModeSupported) { CameraComponent->SetProjectionMode(FrameData.ProjectionMode == ELiveLinkCameraProjectionMode::Perspective ? ECameraProjectionMode::Perspective : ECameraProjectionMode::Orthographic); }

		if (StaticData.bIsFocalLengthSupported) { CameraComponent->CurrentFocalLength = FrameData.FocalLength; }
		if (StaticData.bIsApertureSupported) { CameraComponent->CurrentAperture = FrameData.Aperture; }
		if (StaticData.FilmBackWidth > 0.0f) { CameraComponent->Filmback.SensorWidth = StaticData.FilmBackWidth; }
		if (StaticData.FilmBackHeight > 0.0f) { CameraComponent->Filmback.SensorHeight = StaticData.FilmBackHeight; }
		if (StaticData.bIsFocusDistanceSupported) { CameraComponent->FocusSettings.ManualFocusDistance = FrameData.FocusDistance; }

		// Naive Transform copy. Should really use something like FLiveLinkTransformControllerData
		CameraComponent->SetRelativeTransform(FrameData.Transform);
	}
}

float URemoteCameraComponent::GetDeltaTime()
{
	float DeltaTime = 0.f;
	const double CurrentEvaluationTime = FPlatformTime::Seconds();

	if (LastEvaluationTime >= 0.0)
	{
		DeltaTime = CurrentEvaluationTime - LastEvaluationTime;
	}

	LastEvaluationTime = CurrentEvaluationTime;
	return DeltaTime;
}

void URemoteCameraComponent::UpdateActorLock()
{

	if (GetTargetCamera() == nullptr)
	{
		UE_LOG(LogRemoteCamera, Warning, TEXT("UpdateActorLock has been called, but there is no valid TargetCamera!"));
		return;
	}

	for (const FWorldContext& Context : GEngine->GetWorldContexts())
	{
#if WITH_EDITOR
		if (Context.WorldType == EWorldType::Editor)
		{
			if (FLevelEditorViewportClient* LevelViewportClient = GetTargetLevelViewportClient())
			{
				if (bLockViewportToCamera)
				{
					Backup_ActorLock = LevelViewportClient->GetActiveActorLock();
					LevelViewportClient->SetActorLock(GetTargetCamera()->GetOwner());
					// If bLockedCameraView is not true then the viewport is locked to the actor's transform and not the camera component
					LevelViewportClient->bLockedCameraView = true;
					bIsLockedToViewport = true;
				}
				else if (Backup_ActorLock.IsValid())
				{
					LevelViewportClient->SetActorLock(Backup_ActorLock.Get());
					Backup_ActorLock = nullptr;
					// If bLockedCameraView is not true then the viewport is locked to the actor's transform and not the camera component
					LevelViewportClient->bLockedCameraView = true;
					bIsLockedToViewport = false;
				}
				else
				{
					LevelViewportClient->SetActorLock(nullptr);
					bIsLockedToViewport = false;
				}
			}
		}
		else
#endif
		{
			UWorld* ActorWorld = Context.World();
			if (ActorWorld)
			{
				APlayerController* PlayerController = ActorWorld->GetGameInstance()->GetFirstLocalPlayerController(ActorWorld);
				if (PlayerController)
				{
					if (bLockViewportToCamera)
					{
						Backup_ViewTarget = PlayerController->GetViewTarget();
						PlayerController->SetViewTarget(GetTargetCamera()->GetOwner());
						bIsLockedToViewport = true;
					}
					else if (Backup_ViewTarget.IsValid())
					{
						PlayerController->SetViewTarget(Backup_ViewTarget.Get());
						Backup_ViewTarget = nullptr;
						bIsLockedToViewport = false;
					}
					else
					{
						PlayerController->SetViewTarget(nullptr);
						bIsLockedToViewport = false;
					}
				}
			}
		}
	}
}

void URemoteCameraComponent::DestroyOutputProvider(URemoteCameraOutputBase* Provider)
{
	if (Provider)
	{
		Provider->Deinitialize();
		Provider->ConditionalBeginDestroy();
		Provider = nullptr;
	}
}

TSharedPtr<FSceneViewport> URemoteCameraComponent::GetTargetSceneViewport() const
{
	TSharedPtr<FSceneViewport> SceneViewport;
#if WITH_EDITOR
	if (GIsEditor)
	{
		for (const FWorldContext& Context : GEngine->GetWorldContexts())
		{
			if (Context.WorldType == EWorldType::PIE)
			{
				FSlatePlayInEditorInfo* SlatePlayInEditorSession = GEditor->SlatePlayInEditorMap.Find(Context.ContextHandle);
				if (SlatePlayInEditorSession)
				{
					if (SlatePlayInEditorSession->DestinationSlateViewport.IsValid())
					{
						TSharedPtr<IAssetViewport> DestinationLevelViewport = SlatePlayInEditorSession->DestinationSlateViewport.Pin();
						SceneViewport = DestinationLevelViewport->GetSharedActiveViewport();
					}
					else if (SlatePlayInEditorSession->SlatePlayInEditorWindowViewport.IsValid())
					{
						SceneViewport = SlatePlayInEditorSession->SlatePlayInEditorWindowViewport;
					}
					//If PIE is active, always choose it
					break;
				}
			}
			else if (Context.WorldType == EWorldType::Editor)
			{
				if (FLevelEditorViewportClient* LevelViewportClient = GetTargetLevelViewportClient())
				{
					TSharedPtr<SEditorViewport> ViewportWidget = LevelViewportClient->GetEditorViewportWidget();
					if (ViewportWidget.IsValid())
					{
						SceneViewport = ViewportWidget->GetSceneViewport();
					}
				}
			}
		}
	}
#else
	if (UGameEngine* GameEngine = Cast<UGameEngine>(GEngine))
	{
		SceneViewport = GameEngine->SceneViewport;
	}
#endif
	return SceneViewport;
}

TWeakPtr<SWindow> URemoteCameraComponent::GetTargetInputWindow() const
{
	TWeakPtr<SWindow> InputWindow;

#if WITH_EDITOR
	if (GIsEditor)
	{
		for (const FWorldContext& Context : GEngine->GetWorldContexts())
		{
			if (Context.WorldType == EWorldType::PIE)
			{
				FSlatePlayInEditorInfo* SlatePlayInEditorSession = GEditor->SlatePlayInEditorMap.Find(Context.ContextHandle);
				if (SlatePlayInEditorSession)
				{
					if (SlatePlayInEditorSession->DestinationSlateViewport.IsValid())
					{
						TSharedPtr<IAssetViewport> DestinationLevelViewport = SlatePlayInEditorSession->DestinationSlateViewport.Pin();
						InputWindow = FSlateApplication::Get().FindWidgetWindow(DestinationLevelViewport->AsWidget());
					}
					else if (SlatePlayInEditorSession->SlatePlayInEditorWindowViewport.IsValid())
					{
						InputWindow = SlatePlayInEditorSession->SlatePlayInEditorWindow;
					}

					// If PIE is active always choose it
					break;
				}
			}
			else if (Context.WorldType == EWorldType::Editor)
			{
				if (FLevelEditorViewportClient* LevelViewportClient = GetTargetLevelViewportClient())
				{
					TSharedPtr<SEditorViewport> ViewportWidget = LevelViewportClient->GetEditorViewportWidget();
					if (ViewportWidget.IsValid())
					{
						InputWindow = FSlateApplication::Get().FindWidgetWindow(ViewportWidget.ToSharedRef());
					}
				}
			}
		}
	}
#else
	if (UGameEngine* GameEngine = Cast<UGameEngine>(GEngine))
	{
		InputWindow = GameEngine->GameViewportWindow;
	}
#endif

	return InputWindow;
}

bool URemoteCameraComponent::AddOutputProvider(TSubclassOf<URemoteCameraOutputBase> ProviderClass, URemoteCameraOutputBase*& CreatedProvider)
{
	CreatedProvider = nullptr;

	if (ProviderClass)
	{
		int NewItemIndex = OutputProviders.Emplace(NewObject<URemoteCameraOutputBase>(this, ProviderClass.Get()));
		CreatedProvider = OutputProviders[NewItemIndex];
	}

	return CreatedProvider != nullptr;
}

bool URemoteCameraComponent::InsertOutputProvider(int32 Index, TSubclassOf<URemoteCameraOutputBase> ProviderClass, URemoteCameraOutputBase*& CreatedProvider)
{
	CreatedProvider = nullptr;

	if (Index < 0 || Index > OutputProviders.Num())
	{
		UE_LOG(LogRemoteCamera, Warning, TEXT("Insert Output Provider failed with invalid index %d for stack of size %d."), Index, OutputProviders.Num());
		return false;
	}

	if (ProviderClass)
	{
		OutputProviders.EmplaceAt(Index, NewObject<URemoteCameraOutputBase>(this, ProviderClass.Get()));
		CreatedProvider = OutputProviders[Index];
	}

	return CreatedProvider != nullptr;
}

bool URemoteCameraComponent::SetOutputProviderIndex(int32 OriginalIndex, int32 NewIndex)
{
	if (!OutputProviders.IsValidIndex(OriginalIndex))
	{
		UE_LOG(LogRemoteCamera, Warning, TEXT("Set Output Provider Index failed as the Original Index, %d, was out of range for stack of size %d"), OriginalIndex, OutputProviders.Num());
		return false;
	}

	if (!OutputProviders.IsValidIndex(NewIndex))
	{
		UE_LOG(LogRemoteCamera, Warning, TEXT("Set Output Provider Index failed as the New Index, %d, was out of range for stack of size %d"), NewIndex, OutputProviders.Num());
		return false;
	}

	URemoteCameraOutputBase* Provider = OutputProviders[OriginalIndex];
	OutputProviders.RemoveAtSwap(OriginalIndex);
	OutputProviders.Insert(Provider, NewIndex);

	return true;
}

void URemoteCameraComponent::RemoveAllOutputProviders()
{
	OutputProviders.Empty();
}

bool URemoteCameraComponent::RemoveOutputProvider(const URemoteCameraOutputBase* Provider)
{
	int32 NumRemoved = OutputProviders.RemoveAll([Provider](const URemoteCameraOutputBase* ProviderInArray) { return ProviderInArray == Provider; });
	return NumRemoved > 0;
}

bool URemoteCameraComponent::RemoveOutputProviderByIndex(const int32 ProviderIndex)
{
	if (OutputProviders.IsValidIndex(ProviderIndex))
	{
		OutputProviders.RemoveAt(ProviderIndex);
		return true;
	}
	return false;
}

int32 URemoteCameraComponent::GetNumberOfOutputProviders() const
{
	return OutputProviders.Num();
}

void URemoteCameraComponent::GetAllOutputProviders(TArray<URemoteCameraOutputBase*>& Providers) const
{
	Providers = OutputProviders;
}

URemoteCameraOutputBase* URemoteCameraComponent::GetOutputProviderByIndex(const int32 ProviderIndex) const
{
	if (OutputProviders.IsValidIndex(ProviderIndex))
	{
		return OutputProviders[ProviderIndex];
	}
	return nullptr;
}

void URemoteCameraComponent::GetOutputProvidersByClass(TSubclassOf<URemoteCameraOutputBase> ProviderClass, TArray<URemoteCameraOutputBase*>& FoundProviders) const
{
	FoundProviders.Empty();

	if (ProviderClass)
	{
		FoundProviders = OutputProviders.FilterByPredicate([ProviderClass](const URemoteCameraOutputBase* ProviderInArray) { return ProviderInArray->IsA(ProviderClass); });
	}
}

void URemoteCameraComponent::SendCameraDataViaMultiUser()
{
	if (!IsCameraInProductionRole())
	{
		return;
	}
#if WITH_EDITOR
	// Update frequency 15 Hz
	const double LocationUpdateFrequencySeconds = UpdateFrequencyMs / 1000.0;
	const double CurrentTime = FPlatformTime::Seconds();

	double DeltaTime = CurrentTime - PreviousUpdateTime;
	SecondsSinceLastLocationUpdate += DeltaTime;

	if (SecondsSinceLastLocationUpdate >= LocationUpdateFrequencySeconds)
	{
		TSharedPtr<IConcertClientSession> Session = WeakSession.Pin();
		if (Session.IsValid())
		{
			TArray<FGuid> ClientIds = Session->GetSessionClientEndpointIds();
			FMultiUserRemoteCameraComponentEvent CameraEvent{ GetNameForMultiUser(), { GetOwner(), GetTargetCamera() } };
			Session->SendCustomEvent(CameraEvent, ClientIds, EConcertMessageFlags::None);
		}
		SecondsSinceLastLocationUpdate = 0;
	}
	PreviousUpdateTime = CurrentTime;
#endif
}

bool URemoteCameraComponent::IsCameraInProductionRole() const
{
#if WITH_EDITOR
	UVPSettings* Settings = UVPSettings::GetVPSettings();	
	// We are in a valid camera role if the user has not assigned a role or the current VPSettings role matches the
	// assigned role.
	return !Role.IsValid() || Settings->GetRoles().HasTag(Role);
#else
	return true;
#endif
}

bool URemoteCameraComponent::CanEvaluateModifierStack() const
{
	UE_LOG(LogRemoteCamera, Log, TEXT("Checking can evaluate modifiers..."));
	if (IsMultiUserSession())
	{
		UE_LOG(LogRemoteCamera, Log, TEXT("Checking production role..."));
		return IsCameraInProductionRole();
	}
	return true;
	//return !IsMultiUserSession() || (IsMultiUserSession() && IsCameraInProductionRole());
}

bool URemoteCameraComponent::IsMultiUserSession() const
{
#if WITH_EDITOR
	return WeakSession.IsValid();
#else
	return false;
#endif
}

#if WITH_EDITOR
FLevelEditorViewportClient* URemoteCameraComponent::GetTargetLevelViewportClient() const
{
	FLevelEditorViewportClient* OutClient = nullptr;

	TSharedPtr<SLevelViewport> LevelViewport = GetTargetLevelViewport();
	if (LevelViewport.IsValid())
	{
		OutClient = &LevelViewport->GetLevelViewportClient();
	}

	return OutClient;
}

TSharedPtr<SLevelViewport> URemoteCameraComponent::GetTargetLevelViewport() const
{
	TSharedPtr<SLevelViewport> OutLevelViewport = nullptr;

	if (TargetViewport == ERCTargetViewportID::CurrentlySelected)
	{
		if (FLevelEditorModule* LevelEditorModule = FModuleManager::GetModulePtr<FLevelEditorModule>(RemoteCameraComponent::LevelEditorName))
		{
			OutLevelViewport = LevelEditorModule->GetFirstActiveLevelViewport();
		}
	}
	else
	{
		if (GEditor)
		{
			for (FLevelEditorViewportClient* Client : GEditor->GetLevelViewportClients())
			{
				// We only care about the fully rendered 3D viewport...seems like there should be a better way to check for this
				if (!Client->IsOrtho())
				{
					TSharedPtr<SLevelViewport> LevelViewport = StaticCastSharedPtr<SLevelViewport>(Client->GetEditorViewportWidget());
					if (LevelViewport.IsValid())
					{
						const FString WantedViewportString = FString::Printf(TEXT("Viewport %d.Viewport"), (int32)TargetViewport);
						const FString ViewportConfigKey = LevelViewport->GetConfigKey().ToString();
						if (ViewportConfigKey.Contains(*WantedViewportString, ESearchCase::CaseSensitive, ESearchDir::FromStart))
						{
							OutLevelViewport = LevelViewport;
							break;
						}
					}
				}
			}
		}
	}

	return OutLevelViewport;
}

void URemoteCameraComponent::OnMapChanged(UWorld* World, EMapChangeType ChangeType)
{
	UWorld* ComponentWorld = GetWorld();
	if (World == ComponentWorld && ChangeType == EMapChangeType::TearDownWorld)
	{
		OnComponentDestroyed(true);
	}
}

void URemoteCameraComponent::OnBeginPIE(const bool bInIsSimulating)
{
	UWorld* World = GetWorld();

	if (!World)
	{
		return;
	}

	if (World->WorldType == EWorldType::Editor)
	{
		// Deinitialize all output providers in the editor world
		for (URemoteCameraOutputBase* Provider : OutputProviders)
		{
			if (Provider)
			{
				Provider->Deinitialize();
			}
		}

		// Ensure the Editor components do not update during PIE
		bIsEditorObjectButPIEIsRunning = true;
	}
}

void URemoteCameraComponent::OnEndPIE(const bool bInIsSimulating)
{
	UWorld* World = GetWorld();

	if (!World)
	{
		return;
	}

	if (World->WorldType == EWorldType::PIE)
	{
		// Disable all output providers in the PIE world
		for (URemoteCameraOutputBase* Provider : OutputProviders)
		{
			if (Provider)
			{
				Provider->Deinitialize();
			}
		}
	}
	else if (World->WorldType == EWorldType::Editor)
	{
		// Allow the Editor components to start updating again
		bIsEditorObjectButPIEIsRunning = false;
	}
}

void URemoteCameraComponent::SessionStartup(TSharedRef<IConcertClientSession> InSession)
{
	UE_LOG(LogRemoteCamera, Log, TEXT("Multi-User Session is starting up..."));
	WeakSession = InSession;

	InSession->RegisterCustomEventHandler<FMultiUserRemoteCameraComponentEvent>(this, &URemoteCameraComponent::HandleCameraComponentEventData);
	PreviousUpdateTime = FPlatformTime::Seconds();
}

void URemoteCameraComponent::SessionShutdown(TSharedRef<IConcertClientSession> InSession)
{
	UE_LOG(LogRemoteCamera, Log, TEXT("Multi-User Session is shutting down..."));
	TSharedPtr<IConcertClientSession> Session = WeakSession.Pin();
	if (Session.IsValid())
	{
		Session->UnregisterCustomEventHandler<FMultiUserRemoteCameraComponentEvent>(this);
		for (URemoteCameraOutputBase* Provider : OutputProviders)
		{
			Provider->RestoreOutput();
		}
	}

	WeakSession.Reset();
}

FString URemoteCameraComponent::GetNameForMultiUser() const
{
	return GetOwner()->GetPathName();
}

void URemoteCameraComponent::HandleCameraComponentEventData(const FConcertSessionContext& InEventContext, const FMultiUserRemoteCameraComponentEvent& InEvent)
{
	if (InEvent.TrackingName == GetNameForMultiUser())
	{
		// If the role matches the currently defined VP Role then we should not update the camera
		// data for this actor and the modifier stack is the "owner"
		
		if (!IsCameraInProductionRole())
		{
			InEvent.CameraData.ApplyTo(GetOwner(), GetTargetCamera());
			if (bDisableOutputOnMultiUserReceiver)
			{
				for (URemoteCameraOutputBase* Provider : OutputProviders)
				{
					Provider->SuspendOutput();
				}
			}
		}
	}
}

void URemoteCameraComponent::MultiUserStartup()
{
	if (TSharedPtr<IConcertSyncClient> ConcertSyncClient = IMultiUserClientModule::Get().GetClient())
	{
		IConcertClientRef ConcertClient = ConcertSyncClient->GetConcertClient();

		OnSessionStartupHandle = ConcertClient->OnSessionStartup().AddUObject(this, &URemoteCameraComponent::SessionStartup);
		OnSessionShutdownHandle = ConcertClient->OnSessionShutdown().AddUObject(this, &URemoteCameraComponent::SessionShutdown);

		TSharedPtr<IConcertClientSession> ConcertClientSession = ConcertClient->GetCurrentSession();
		if (ConcertClientSession.IsValid())
		{
			SessionStartup(ConcertClientSession.ToSharedRef());
		}
	}
}

void URemoteCameraComponent::MultiUserShutdown()
{
	if (IMultiUserClientModule::IsAvailable())
	{
		if (TSharedPtr<IConcertSyncClient> ConcertSyncClient = IMultiUserClientModule::Get().GetClient())
		{
			IConcertClientRef ConcertClient = ConcertSyncClient->GetConcertClient();

			TSharedPtr<IConcertClientSession> ConcertClientSession = ConcertClient->GetCurrentSession();
			if (ConcertClientSession.IsValid())
			{
				SessionShutdown(ConcertClientSession.ToSharedRef());
			}

			ConcertClient->OnSessionStartup().Remove(OnSessionStartupHandle);
			OnSessionStartupHandle.Reset();

			ConcertClient->OnSessionShutdown().Remove(OnSessionShutdownHandle);
			OnSessionShutdownHandle.Reset();
		}
	}
}
#endif