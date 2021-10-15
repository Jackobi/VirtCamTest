// Fill out your copyright notice in the Description page of Project Settings.

#include "MyOutputProvider.h"
#include "MyRemoteSessionComponent.h"
#include "MyModifierInterface.h"
#include "UMG/Public/Blueprint/UserWidget.h"

#if WITH_EDITOR
#include "Editor.h"
#endif

DEFINE_LOG_CATEGORY(LogMyRemoteSession)

UMyOutputProvider::UMyOutputProvider()
	: bIsActive(false)
	, bInitialized(false)
{

}

UMyOutputProvider::~UMyOutputProvider()
{

}

void UMyOutputProvider::BeginDestroy()
{
	Deinitialize();

	Super::BeginDestroy();
}

void UMyOutputProvider::Initialize()
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

void UMyOutputProvider::Deinitialize()
{
	if (IsOuterComponentEnabled() && bIsActive)
	{
		Deactivate();
	}

	bInitialized = false;
}

void UMyOutputProvider::Activate()
{
	CreateUMG();
	DisplayUMG();
}

void UMyOutputProvider::Deactivate()
{
	DestroyUMG();
}

void UMyOutputProvider::Tick(const float DeltaTime)
{
	if (bIsActive && UMGWidget && UMGClass)
	{
		UMGWidget->Tick(DeltaTime);
	}
}

void UMyOutputProvider::SetActive(const bool bInIsActive)
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

void UMyOutputProvider::SetTargetCamera(const UCineCameraComponent* InTargetCamera)
{
	TargetCamera = InTargetCamera;

	NotifyWidgetOfComponentChange();
}

void UMyOutputProvider::SetUMGClass(const TSubclassOf<UUserWidget> InUMGClass)
{
	UMGClass = InUMGClass;
}

void UMyOutputProvider::CreateUMG()
{
	if (!UMGClass)
	{
		return;
	}

	if (UMGWidget)
	{
		UE_LOG(LogMyRemoteSession, Error, TEXT("CreateUMG widget already set - failed to create"));
		return;
	}

	UMGWidget = NewObject<UMyFullScreenUserWidget>(this, UMyFullScreenUserWidget::StaticClass());
	UMGWidget->SetDisplayTypes(DisplayType, DisplayType, DisplayType);
	UMGWidget->PostProcessDisplayType.bReceiveHardwareInput = true;

#if WITH_EDITOR
	UMGWidget->SetAllTargetViewports(GetTargetLevelViewport());
#endif

	UMGWidget->WidgetClass = UMGClass;
	UE_LOG(LogMyRemoteSession, Log, TEXT("Create UMG widget named %s from class %s"), *UMGWidget->GetName(), *UMGWidget->WidgetClass->GetName());
}

void UMyOutputProvider::DisplayUMG()
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
			UE_LOG(LogMyRemoteSession, Log, TEXT("DisplayUMG widget displayed in WorldType %d"), WorldType);
		}

		NotifyWidgetOfComponentChange();
	}
}

void UMyOutputProvider::DestroyUMG()
{
	if (UMGWidget)
	{
		if (UMGWidget->IsDisplayed())
		{
			UMGWidget->Hide();
			UE_LOG(LogMyRemoteSession, Log, TEXT("DestrpyUMG widget %s hidden"), *UMGWidget->GetName());
		}
#if WITH_EDITOR
		UMGWidget->ResetAllTargetViewports();
#endif

		UMGWidget->ConditionalBeginDestroy();
		UMGWidget = nullptr;
	}
}

UMyOutputProvider* UMyOutputProvider::GetOtherOutputProviderByIndex(int32 Index) const
{
	if (Index > INDEX_NONE)
	{
		if (UMyRemoteSessionComponent* OuterComponent = GetTypedOuter<UMyRemoteSessionComponent>())
		{
			if (UMyOutputProvider* Provider = OuterComponent->GetOutputProviderByIndex(Index))
			{
				return Provider;
			}
			else
			{
				UE_LOG(LogMyRemoteSession, Warning, TEXT("GetOtherOutputProviderByIndex - specified index is out of range"));
			}
		}
	}
	return nullptr;
}

TSharedPtr<FSceneViewport> UMyOutputProvider::GetTargetSceneViewport() const
{
	TSharedPtr<FSceneViewport> SceneViewport;

	if (UMyRemoteSessionComponent* OuterComponent = GetTypedOuter<UMyRemoteSessionComponent>())
	{
		SceneViewport = OuterComponent->GetTargetSceneViewport();
	}

	return SceneViewport;
}

TWeakPtr<SWindow> UMyOutputProvider::GetTargetInputWindow() const
{
	TWeakPtr<SWindow> InputWindow;
	if (UMyRemoteSessionComponent* OuterComponent = GetTypedOuter<UMyRemoteSessionComponent>())
	{
		InputWindow = OuterComponent->GetTargetInputWindow();
	}
	return InputWindow;
}

void UMyOutputProvider::NotifyWidgetOfComponentChange() const
{
	if (UMGWidget && UMGWidget->IsDisplayed())
	{
		UUserWidget* DisplayedWidget = UMGWidget->GetWidget();
		if (DisplayedWidget && DisplayedWidget->Implements<UMyModifierInterface>())
		{
			if (UMyRemoteSessionComponent* OwningComponent = Cast< UMyRemoteSessionComponent>(this->GetOuter()))
			{
				UMyRemoteSessionComponent* SessionComponent = bIsActive ? OwningComponent : nullptr;

				IMyModifierInterface::Execute_OnMyRemoteSessionComponentChanged(DisplayedWidget, SessionComponent);
			}
		}
	}
}

bool UMyOutputProvider::IsOuterComponentEnabled() const
{
	if (UMyRemoteSessionComponent* OuterComponent = GetTypedOuter<UMyRemoteSessionComponent>())
	{
		return OuterComponent->IsEnabled();
	}

	return false;
}

#if WITH_EDITOR
FLevelEditorViewportClient* UMyOutputProvider::GetTargetLevelViewportClient() const
{
	FLevelEditorViewportClient* ViewportClient = nullptr;

	if (UMyRemoteSessionComponent* OuterComponent = GetTypedOuter<UMyRemoteSessionComponent>())
	{
		ViewportClient = OuterComponent->GetTargetLevelViewportClient();
	}

	return ViewportClient;
}

TSharedPtr<SLevelViewport> UMyOutputProvider::GetTargetLevelViewport() const
{
	TSharedPtr<SLevelViewport> LevelViewport;
	
	if (UMyRemoteSessionComponent* OuterComponent = GetTypedOuter<UMyRemoteSessionComponent>())
	{
		LevelViewport = OuterComponent->GetTargetLevelViewport();
	}
	
	return LevelViewport;
}

void UMyOutputProvider::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	FProperty* Property = PropertyChangedEvent.MemberProperty;

	if (Property && PropertyChangedEvent.ChangeType != EPropertyChangeType::Interactive)
	{
		static FName NAME_IsActive = GET_MEMBER_NAME_CHECKED(UMyOutputProvider, bIsActive);
		static FName NAME_UMGClass = GET_MEMBER_NAME_CHECKED(UMyOutputProvider, UMGClass);

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