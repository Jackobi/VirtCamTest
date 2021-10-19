// Fill out your copyright notice in the Description page of Project Settings.

#include "RemoteCameraOutputBase.h"
#include "RemoteCameraComponent.h"
#include "UMG/Public/Blueprint/UserWidget.h"

#if WITH_EDITOR
#include "Editor.h"
#endif

DEFINE_LOG_CATEGORY(LogRemoteCamera)

URemoteCameraOutputBase::URemoteCameraOutputBase()
	: bIsActive(false)
	, bInitialized(false)
{

}

URemoteCameraOutputBase::~URemoteCameraOutputBase()
{

}

void URemoteCameraOutputBase::BeginDestroy()
{
	Deinitialize();

	Super::BeginDestroy();
}

void URemoteCameraOutputBase::Initialize()
{
	bool bWasInitialized = bInitialized;
	bInitialized = true;

	if (!bWasInitialized && bIsActive)
	{
#if WITH_EDITOR
		if (GEditor && GEditor->GetActiveViewport() && (GEditor->GetActiveViewport()->GetSizeXY().X < 1))
		{
			bInitialized = false;
		}
		else
#endif
		{
			if (IsOuterComponentEnabled())
			{
				Activate();
			}

		}
	}
}

void URemoteCameraOutputBase::Deinitialize()
{
	if (IsOuterComponentEnabled() && bIsActive)
	{
		Deactivate();
	}

	bInitialized = false;
}

void URemoteCameraOutputBase::Activate()
{
	CreateUMG();
	DisplayUMG();
}

void URemoteCameraOutputBase::Deactivate()
{
	DestroyUMG();
}

void URemoteCameraOutputBase::Tick(const float DeltaTime)
{
	if (bIsActive && UMGWidget && UMGClass)
	{
		UMGWidget->Tick(DeltaTime);
	}
}

void URemoteCameraOutputBase::SetActive(const bool bInIsActive)
{
	bIsActive = bInIsActive;

	if (IsOuterComponentEnabled())
	{
		if (bIsActive)
		{
			Activate();
		}
		else
		{
			Deactivate();
		}
	}
}

void URemoteCameraOutputBase::SetTargetCamera(const UCineCameraComponent* InTargetCamera)
{
	UE_LOG(LogRemoteCamera, Log, TEXT("Target camera changed!"));
	TargetCamera = InTargetCamera;

	NotifyWidgetOfComponentChange();
}

void URemoteCameraOutputBase::SetUMGClass(const TSubclassOf<UUserWidget> InUMGClass)
{
	UMGClass = InUMGClass;
}

void URemoteCameraOutputBase::CreateUMG()
{
	if (!UMGClass)
	{
		UE_LOG(LogRemoteCamera, Error, TEXT("No UMG Widget class to create widget from!"));
		return;
	}

	if (UMGWidget)
	{
		UE_LOG(LogRemoteCamera, Error, TEXT("CreateUMG widget already set - failed to create"));
		return;
	}

	UMGWidget = NewObject<UVPFullScreenUserWidget>(this, UVPFullScreenUserWidget::StaticClass());
	UMGWidget->SetDisplayTypes(DisplayType, DisplayType, DisplayType);
	UMGWidget->PostProcessDisplayType.bReceiveHardwareInput = true;

#if WITH_EDITOR
	UMGWidget->SetAllTargetViewports(GetTargetLevelViewport());
#endif

	UMGWidget->WidgetClass = UMGClass;
	UE_LOG(LogRemoteCamera, Log, TEXT("Create UMG widget named %s from class %s"), *UMGWidget->GetName(), *UMGWidget->WidgetClass->GetName());
}

void URemoteCameraOutputBase::DisplayUMG()
{
	if (UMGWidget)
	{
		UWorld* ActorWorld = nullptr;
		int32 WorldType = -1;

		for (const FWorldContext& Context : GEngine->GetWorldContexts())
		{
			if (Context.World())
			{
				if ((Context.WorldType == EWorldType::PIE) || (Context.WorldType == EWorldType::Game))
				{
					ActorWorld = Context.World();
					WorldType = (int32)Context.WorldType;
					break;
				}
				else if (Context.WorldType == EWorldType::Editor)
				{
					ActorWorld = Context.World();
					WorldType = (int32)Context.WorldType;
				}
			}
		}

		if (ActorWorld)
		{
			UMGWidget->Display(ActorWorld);
			UE_LOG(LogRemoteCamera, Log, TEXT("DisplayUMG widget displayed in WorldType %d"), WorldType);
		}

		NotifyWidgetOfComponentChange();
	}
	else
	{
		UE_LOG(LogRemoteCamera, Error, TEXT("No UMG Widget to display - create UMG widget first"));
	}
}

void URemoteCameraOutputBase::DestroyUMG()
{
	if (UMGWidget)
	{
		if (UMGWidget->IsDisplayed())
		{
			UMGWidget->Hide();
			UE_LOG(LogRemoteCamera, Log, TEXT("DestroyUMG: widget %s is hidden"), *UMGWidget->GetName());
		}
#if WITH_EDITOR
		UMGWidget->ResetAllTargetViewports();
#endif

		UMGWidget->ConditionalBeginDestroy();
		UMGWidget = nullptr;
	}
}


URemoteCameraOutputBase* URemoteCameraOutputBase::GetOtherOutputProviderByIndex(int32 Index) const
{
	if (Index > INDEX_NONE)
	{
		if (URemoteCameraComponent* OuterComponent = GetTypedOuter<URemoteCameraComponent>())
		{
			if (URemoteCameraOutputBase* Provider = OuterComponent->GetOutputProviderByIndex(Index))
			{
				return Provider;
			}
			else
			{
				UE_LOG(LogRemoteCamera, Warning, TEXT("GetOtherOutputProviderByIndex - specified index is out of range"));
			}
		}
	}
	return nullptr;
}


TSharedPtr<FSceneViewport> URemoteCameraOutputBase::GetTargetSceneViewport() const
{
	TSharedPtr<FSceneViewport> SceneViewport;

	if (URemoteCameraComponent* OuterComponent = GetTypedOuter<URemoteCameraComponent>())
	{
		SceneViewport = OuterComponent->GetTargetSceneViewport();
	}

	return SceneViewport;
}

TWeakPtr<SWindow> URemoteCameraOutputBase::GetTargetInputWindow() const
{
	TWeakPtr<SWindow> InputWindow;
	if (URemoteCameraComponent* OuterComponent = GetTypedOuter<URemoteCameraComponent>())
	{
		InputWindow = OuterComponent->GetTargetInputWindow();
	}
	return InputWindow;
}

void URemoteCameraOutputBase::NotifyWidgetOfComponentChange() const
{
	UE_LOG(LogRemoteCamera, Log, TEXT("Notified of component change!"));
	/*
	if (UMGWidget && UMGWidget->IsDisplayed())
	{
		UUserWidget* DisplayedWidget = UMGWidget->GetWidget();
		
		if (DisplayedWidget && DisplayedWidget->Implements<UMyModifierInterface>())
		{
			if (URemoteCameraComponent* OwningComponent = Cast< URemoteCameraComponent>(this->GetOuter()))
			{
				URemoteCameraComponent* SessionComponent = bIsActive ? OwningComponent : nullptr;

				IMyModifierInterface::Execute_OnMyRemoteSessionComponentChanged(DisplayedWidget, SessionComponent);
			}
		}
		
	}
	*/
}

bool URemoteCameraOutputBase::IsOuterComponentEnabled() const
{
	if (URemoteCameraComponent* OuterComponent = GetTypedOuter<URemoteCameraComponent>())
	{
		return OuterComponent->IsEnabled();
	}

	return false;
}

#if WITH_EDITOR
FLevelEditorViewportClient* URemoteCameraOutputBase::GetTargetLevelViewportClient() const
{
	FLevelEditorViewportClient* ViewportClient = nullptr;

	if (URemoteCameraComponent* OuterComponent = GetTypedOuter<URemoteCameraComponent>())
	{
		ViewportClient = OuterComponent->GetTargetLevelViewportClient();
	}

	return ViewportClient;
}

TSharedPtr<SLevelViewport> URemoteCameraOutputBase::GetTargetLevelViewport() const
{
	TSharedPtr<SLevelViewport> LevelViewport;

	if (URemoteCameraComponent* OuterComponent = GetTypedOuter<URemoteCameraComponent>())
	{
		LevelViewport = OuterComponent->GetTargetLevelViewport();
	}

	return LevelViewport;
}

void URemoteCameraOutputBase::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	FProperty* Property = PropertyChangedEvent.MemberProperty;

	if (Property && PropertyChangedEvent.ChangeType != EPropertyChangeType::Interactive)
	{
		static FName NAME_IsActive = GET_MEMBER_NAME_CHECKED(URemoteCameraOutputBase, bIsActive);
		static FName NAME_UMGClass = GET_MEMBER_NAME_CHECKED(URemoteCameraOutputBase, UMGClass);

		if (Property->GetFName() == NAME_IsActive)
		{
			SetActive(bIsActive);
		}
		else if (Property->GetFName() == NAME_UMGClass)
		{
			if (bIsActive)
			{
				SetActive(false);
				SetActive(true);
			}
		}
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif