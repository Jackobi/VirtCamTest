// Fill out your copyright notice in the Description page of Project Settings.


#include "MyRemoteSessionComponent.h"

#if WITH_EDITOR
//#include "Editor.h"
#include "Modules/ModuleManager.h"
#include "LevelEditor.h"
#include "IAssetViewport.h"
#include "SLevelViewport.h"
#endif

namespace MyRemoteSessionComponent
{
	static const FName LevelEditorName(TEXT("LevelEditor"));
}

// Sets default values for this component's properties
UMyRemoteSessionComponent::UMyRemoteSessionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UMyRemoteSessionComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UMyRemoteSessionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UMyRemoteSessionComponent::SetEnabled(bool bNewEnabled)
{
	if (!bNewEnabled)
	{
		for (UMyOutputProvider* Provider : OutputProviders)
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
		for (UMyOutputProvider* Provider : OutputProviders)
		{
			if (Provider)
			{
				Provider->Initialize();
			}
		}
	}
}

UMyOutputProvider* UMyRemoteSessionComponent::GetOutputProviderByIndex(const int32 ProviderIndex) const
{
	if (OutputProviders.IsValidIndex(ProviderIndex))
	{
		return OutputProviders[ProviderIndex];
	}
	return nullptr;
}

TSharedPtr<FSceneViewport> UMyRemoteSessionComponent::GetTargetSceneViewport() const
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

TWeakPtr<SWindow> UMyRemoteSessionComponent::GetTargetInputWindow() const
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

#if WITH_EDITOR
FLevelEditorViewportClient* UMyRemoteSessionComponent::GetTargetLevelViewportClient() const
{
	FLevelEditorViewportClient* OutClient = nullptr;

	TSharedPtr<SLevelViewport> LevelViewport = GetTargetLevelViewport();
	if (LevelViewport.IsValid())
	{
		OutClient = &LevelViewport->GetLevelViewportClient();
	}

	return OutClient;
}

TSharedPtr<SLevelViewport> UMyRemoteSessionComponent::GetTargetLevelViewport() const
{
	TSharedPtr<SLevelViewport> OutLevelViewport = nullptr;

	if (TargetViewport == EMyTargetViewportID::CurrentlySelected)
	{
		if (FLevelEditorModule* LevelEditorModule = FModuleManager::GetModulePtr<FLevelEditorModule>(MyRemoteSessionComponent::LevelEditorName))
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
#endif
