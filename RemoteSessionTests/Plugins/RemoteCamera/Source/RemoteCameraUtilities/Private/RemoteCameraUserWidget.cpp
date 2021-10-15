//

#include "RemoteCameraUserWidget.h"

#include "Engine/UserInterfaceSettings.h"
#include "Engine/Classes/Components/PostProcessComponent.h"
#include "Engine/Classes/Engine/TextureRenderTarget2D.h"
#include "Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "UObject/ConstructorHelpers.h"
#include "Slate/Public/Widgets/SVirtualWindow.h"
#include "Slate/SceneViewport.h"
#include "Slate/WidgetRenderer.h"
#include "Widgets/Layout/SConstraintCanvas.h"
#include "Widgets/Layout/SDPIScaler.h"
#include "Input/HittestGrid.h"
#include "GameFramework/WorldSettings.h"
#include "HAL/PlatformApplicationMisc.h"


#if WITH_EDITOR
#include "Modules/ModuleManager.h"
#include "LevelEditor.h"
#include "SLevelViewport.h"
#endif

namespace
{
	const FName NAME_LevelEditorName = "LevelEditor";
	const FName NAME_SlateUI = "SlateUI";
	const FName NAME_TintColorAndOpacity = "TintColorAndOpacity";
	const FName NAME_OpacityFromTexture = "OpacityFromTexture";

	EVisibility ConvertWindowVisibilityToVisibility(EWindowVisibility visibility)
	{
		switch (visibility)
		{
		case EWindowVisibility::Visible:
			return EVisibility::Visible;
		case EWindowVisibility::SelfHitTestInvisible:
			return EVisibility::SelfHitTestInvisible;
		default:
			checkNoEntry();
			return EVisibility::SelfHitTestInvisible;
		}
	}
}

/////////////////////////////////////////////////////
// FRCWidgetPostProcessHitTester
class FRCWidgetPostProcessHitTester : public ICustomHitTestPath
{
public:
	FRCWidgetPostProcessHitTester(UWorld* InWorld, TSharedPtr<SVirtualWindow> InSlateWindow)
		: World(InWorld)
		, SlateWindow(InSlateWindow)
		, WidgetDrawSize(FIntPoint::ZeroValue)
		, LastLocalHitLocation(FVector2D::ZeroVector)
	{}

	virtual TArray<FWidgetAndPointer> GetBubblePathAndVirtualCursors(const FGeometry& InGeometry, FVector2D DesktopSpaceCoordinate, bool bIgnoreEnabledStatus) const override
	{
		// Get the list of widget at the requested location.
		TArray<FWidgetAndPointer> ArrangedWidgets;
		if (TSharedPtr<SVirtualWindow> SlateWindowPin = SlateWindow.Pin())
		{
			FVector2D LocalMouseCoordinate = InGeometry.AbsoluteToLocal(DesktopSpaceCoordinate);
			float CursorRadius = 0.f;
			ArrangedWidgets = SlateWindowPin->GetHittestGrid().GetBubblePath(LocalMouseCoordinate, CursorRadius, bIgnoreEnabledStatus);

			TSharedRef<FVirtualPointerPosition> VirtualMouseCoordinate = MakeShared<FVirtualPointerPosition>();
			VirtualMouseCoordinate->CurrentCursorPosition = LocalMouseCoordinate;
			VirtualMouseCoordinate->LastCursorPosition = LastLocalHitLocation;

			LastLocalHitLocation = LocalMouseCoordinate;

			for (FWidgetAndPointer& ArrangedWidget : ArrangedWidgets)
			{
				ArrangedWidget.PointerPosition = VirtualMouseCoordinate;
			}
		}

		return ArrangedWidgets;
	}

	virtual void ArrangeCustomHitTestChildren(FArrangedChildren& ArrangedChildren) const override
	{
		// Add the displayed slate to the list of widgets.
		if (TSharedPtr<SVirtualWindow> SlateWindowPin = SlateWindow.Pin())
		{
			FGeometry WidgetGeom;
			ArrangedChildren.AddWidget(FArrangedWidget(SlateWindowPin.ToSharedRef(), WidgetGeom.MakeChild(WidgetDrawSize, FSlateLayoutTransform())));
		}
	}

	virtual TSharedPtr<struct FVirtualPointerPosition> TranslateMouseCoordinateForCustomHitTestChild(const TSharedRef<SWidget>& ChildWidget, const FGeometry& ViewportGeometry, const FVector2D& ScreenSpaceMouseCoordinate, const FVector2D& LastScreenSpaceMouseCoordinate) const override
	{
		return nullptr;
	}

	void SetWidgetDrawSize(FIntPoint NewWidgetDrawSize)
	{
		WidgetDrawSize = NewWidgetDrawSize;
	}

private:
	TWeakObjectPtr<UWorld> World;
	TWeakPtr<SVirtualWindow> SlateWindow;
	FIntPoint WidgetDrawSize;
	mutable FVector2D LastLocalHitLocation;
};

//
//
FRemoteCameraUserWidget_Viewport::FRemoteCameraUserWidget_Viewport()
	: bAddedToGameViewport(false)
{

}

bool FRemoteCameraUserWidget_Viewport::Display(UWorld* World, UUserWidget* Widget, float InDPIScale)
{
	TSharedPtr<SConstraintCanvas> FullScreenWidgetPinned = FullScreenCanvasWidget.Pin();
	if (Widget == nullptr || World == nullptr || FullScreenWidgetPinned.IsValid())
	{
		return false;
	}

	UGameViewportClient* ViewportClient = nullptr;
#if WITH_EDITOR
	TSharedPtr<SLevelViewport> ActiveLevelViewport;
#endif

	bool bResult = false;
	if (World->WorldType == EWorldType::Game || World->WorldType == EWorldType::PIE)
	{
		ViewportClient = World->GetGameViewport();
		bResult = ViewportClient != nullptr;
	}
#if WITH_EDITOR
	else if (FModuleManager::Get().IsModuleLoaded(NAME_LevelEditorName))
	{
		FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>(NAME_LevelEditorName);
		if (TargetViewport.IsValid())
		{
			ActiveLevelViewport = TargetViewport.Pin();
		}
		else
		{
			ActiveLevelViewport = LevelEditorModule.GetFirstActiveLevelViewport();
		}
		bResult = ActiveLevelViewport.IsValid();
	}
#endif

	if (bResult)
	{
		TSharedRef<SConstraintCanvas> FullScreenCanvas = SNew(SConstraintCanvas);
		FullScreenCanvasWidget = FullScreenCanvas;

		FullScreenCanvas->AddSlot()
			.Offset(FMargin(0, 0, 0, 0))
			.Anchors(FAnchors(0, 0, 1, 1))
			.Alignment(FVector2D(0, 0))
			[
				SNew(SDPIScaler)
				.DPIScale(InDPIScale)
				[
					Widget->TakeWidget()
				]
			];

		if (ViewportClient)
		{
			ViewportClient->AddViewportWidgetContent(FullScreenCanvas);
		}
#if WITH_EDITOR
		else
		{
			check(ActiveLevelViewport.IsValid());
			ActiveLevelViewport->AddOverlayWidget(FullScreenCanvas);
			OverlayWidgetLevelViewport = ActiveLevelViewport;
		}
#endif
	}

	return bResult;
}

void FRemoteCameraUserWidget_Viewport::Hide(UWorld* World)
{
	TSharedPtr<SConstraintCanvas> FullScreenWidgetPinned = FullScreenCanvasWidget.Pin();
	if (FullScreenWidgetPinned.IsValid())
	{
		// Remove from Viewport and Fullscreen, in case the settings changed before we had the chance to hide.
		UGameViewportClient* ViewportClient = World ? World->GetGameViewport() : nullptr;
		if (ViewportClient)
		{
			ViewportClient->RemoveViewportWidgetContent(FullScreenWidgetPinned.ToSharedRef());
		}

#if WITH_EDITOR
		TSharedPtr<SLevelViewport> OverlayWidgetLevelViewportPinned = OverlayWidgetLevelViewport.Pin();
		if (OverlayWidgetLevelViewportPinned)
		{
			OverlayWidgetLevelViewportPinned->RemoveOverlayWidget(FullScreenWidgetPinned.ToSharedRef());
		}
		OverlayWidgetLevelViewport.Reset();
#endif

		FullScreenCanvasWidget.Reset();
	}
}

void FRemoteCameraUserWidget_Viewport::Tick(UWorld* World, float DeltaSeconds)
{

}

//
// 

FRemoteCameraUserWidget_PostProcess::FRemoteCameraUserWidget_PostProcess()
	: PostProcessMaterial(nullptr)
	, PostProcessTintColorAndOpacity(FLinearColor::White)
	, PostProcessOpacityFromTexture(1.0f)
	, bWidgetDrawSize(false)
	, WidgetDrawSize(FIntPoint(640, 360))
	, bWindowFocusable(true)
	, WindowVisibility(EWindowVisibility::SelfHitTestInvisible)
	, bReceiveHardwareInput(false)
	, RenderTargetBackgroundColor(FLinearColor(0.0f, 0.0f, 0.0f, 1.0f))
	, RenderTargetBlendMode(EWidgetBlendMode::Masked)
	, WidgetRenderTarget(nullptr)
	, PostProcessComponent(nullptr)
	, PostProcessMaterialInstance(nullptr)
	, WidgetRenderer(nullptr)
	, CurrentWidgetDrawSize(FIntPoint::ZeroValue)
{

}

bool FRemoteCameraUserWidget_PostProcess::Display(UWorld* World, UUserWidget* Widget, bool bInRenderToTextureOnly, float InDPIScale)
{
	bRenderToTextureOnly = bInRenderToTextureOnly;

	bool bOk = CreateRenderer(World, Widget, InDPIScale);
	if (!bRenderToTextureOnly)
	{
		bOk &= CreatePostProcessComponent(World);
	}

	return bOk;
}

void FRemoteCameraUserWidget_PostProcess::Hide(UWorld* World)
{
	if (!bRenderToTextureOnly)
	{
		ReleasePostProcessComponent();
	}

	ReleaseRenderer();
}

void FRemoteCameraUserWidget_PostProcess::Tick(UWorld* World, float DeltaSeconds)
{
	TickRenderer(World, DeltaSeconds);
}

TSharedPtr<SVirtualWindow> FRemoteCameraUserWidget_PostProcess::GetSlateWindow() const
{
	return SlateWindow;
}

bool FRemoteCameraUserWidget_PostProcess::CreatePostProcessComponent(UWorld* World)
{
	ReleasePostProcessComponent();
	if (World && PostProcessMaterial)
	{
		AWorldSettings* WorldSetting = World->GetWorldSettings();
		PostProcessComponent = NewObject<UPostProcessComponent>(WorldSetting, NAME_None, RF_Transient);
		PostProcessComponent->bEnabled = true;
		PostProcessComponent->bUnbound = true;
		PostProcessComponent->RegisterComponent();

		PostProcessMaterialInstance = UMaterialInstanceDynamic::Create(PostProcessMaterial, World);

		// set the parameter immediately
		PostProcessMaterialInstance->SetTextureParameterValue(NAME_SlateUI, WidgetRenderTarget);
		PostProcessMaterialInstance->SetVectorParameterValue(NAME_TintColorAndOpacity, PostProcessTintColorAndOpacity);
		PostProcessMaterialInstance->SetScalarParameterValue(NAME_OpacityFromTexture, PostProcessOpacityFromTexture);

		PostProcessComponent->Settings.WeightedBlendables.Array.SetNumZeroed(1);
		PostProcessComponent->Settings.WeightedBlendables.Array[0].Weight = 1.f;
		PostProcessComponent->Settings.WeightedBlendables.Array[0].Object = PostProcessMaterialInstance;
	}

	return PostProcessComponent && PostProcessMaterialInstance;
}

void FRemoteCameraUserWidget_PostProcess::ReleasePostProcessComponent()
{
	if (PostProcessComponent)
	{
		PostProcessComponent->UnregisterComponent();
	}
	PostProcessComponent = nullptr;
	PostProcessMaterialInstance = nullptr;
}

bool FRemoteCameraUserWidget_PostProcess::CreateRenderer(UWorld* World, UUserWidget* Widget, float InDPIScale)
{
	ReleaseRenderer();

	if (World && Widget)
	{
		const FIntPoint CalculatedWidgetSize = CalculateWidgetDrawSize(World);
		if (IsTextureSizeValid(CalculatedWidgetSize))
		{
			CurrentWidgetDrawSize = CalculatedWidgetSize;

			const bool bApplyGammaCorrection = true;
			WidgetRenderer = new FWidgetRenderer(bApplyGammaCorrection);
			WidgetRenderer->SetIsPrepassNeeded(true);

			SlateWindow = SNew(SVirtualWindow).Size(CurrentWidgetDrawSize);
			SlateWindow->SetIsFocusable(bWindowFocusable);
			SlateWindow->SetVisibility(ConvertWindowVisibilityToVisibility(WindowVisibility));
			SlateWindow->SetContent(SNew(SDPIScaler).DPIScale(InDPIScale)
				[
					Widget->TakeWidget()
				]
			);

			RegisterHitTesterWithViewport(World);

			if (!Widget->IsDesignTime() && World->IsGameWorld())
			{
				UGameInstance* GameInstance = World->GetGameInstance();
				UGameViewportClient* GameViewportClient = GameInstance ? GameInstance->GetGameViewportClient() : nullptr;
				if (GameViewportClient)
				{
					SlateWindow->AssignParentWidget(GameViewportClient->GetGameViewportWidget());
				}
			}

			FLinearColor ActualBackgroundColor = RenderTargetBackgroundColor;
			switch (RenderTargetBlendMode)
			{
			case EWidgetBlendMode::Opaque:
				ActualBackgroundColor.A = 1.0f;
				break;
			case EWidgetBlendMode::Masked:
				ActualBackgroundColor.A = 0.0f;
				break;
			}

			AWorldSettings* WorldSetting = World->GetWorldSettings();
			WidgetRenderTarget = NewObject<UTextureRenderTarget2D>(WorldSetting, NAME_None, RF_Transient);
			WidgetRenderTarget->ClearColor = ActualBackgroundColor;
			WidgetRenderTarget->InitCustomFormat(CurrentWidgetDrawSize.X, CurrentWidgetDrawSize.Y, PF_B8G8R8A8, false);
			WidgetRenderTarget->UpdateResourceImmediate();

			if (!bRenderToTextureOnly && PostProcessMaterialInstance)
			{
				PostProcessMaterialInstance->SetTextureParameterValue(NAME_SlateUI, WidgetRenderTarget);
			}
		}
	}

	return WidgetRenderer && WidgetRenderTarget;
}

void FRemoteCameraUserWidget_PostProcess::ReleaseRenderer()
{
	if (WidgetRenderer)
	{
		BeginCleanup(WidgetRenderer);
		WidgetRenderer = nullptr;
	}
	UnRegisterHitTesterWithViewport();

	SlateWindow.Reset();
	WidgetRenderTarget = nullptr;
	CurrentWidgetDrawSize = FIntPoint::ZeroValue;
}

void FRemoteCameraUserWidget_PostProcess::TickRenderer(UWorld* World, float DeltaSeconds)
{
	check(World);
	if (WidgetRenderTarget)
	{
		const float DrawScale = 1.0f;

		const FIntPoint NewCalculatedWidgetSize = CalculateWidgetDrawSize(World);
		if (NewCalculatedWidgetSize != CurrentWidgetDrawSize)
		{
			if (IsTextureSizeValid(NewCalculatedWidgetSize))
			{
				CurrentWidgetDrawSize = NewCalculatedWidgetSize;
				WidgetRenderTarget->InitCustomFormat(CurrentWidgetDrawSize.X, CurrentWidgetDrawSize.Y, PF_B8G8R8A8, false);
				WidgetRenderTarget->UpdateResourceImmediate();
				SlateWindow->Resize(CurrentWidgetDrawSize);
				if (CustomHitTestPath)
				{
					CustomHitTestPath->SetWidgetDrawSize(CurrentWidgetDrawSize);
				}
			}
			else
			{
				Hide(World);
			}
		}

		if (WidgetRenderer)
		{
			WidgetRenderer->DrawWindow(
				WidgetRenderTarget,
				SlateWindow->GetHittestGrid(),
				SlateWindow.ToSharedRef(),
				DrawScale,
				CurrentWidgetDrawSize,
				DeltaSeconds);
		}
	}
}

FIntPoint FRemoteCameraUserWidget_PostProcess::CalculateWidgetDrawSize(UWorld* World)
{
	if (bWidgetDrawSize)
	{
		return WidgetDrawSize;
	}

	if (World->WorldType == EWorldType::Game || World->WorldType == EWorldType::PIE)
	{
		if (UGameViewportClient* ViewportClient = World->GetGameViewport())
		{
			// The viewport maybe resizing or not yet initialized.
			//See TickRenderer(), it will be resize on the next tick to the proper size.
			//We initialized all the rendering with an small size.

			const float SmallWidgetSize = 16.f;
			FVector2D OutSize = FVector2D(SmallWidgetSize, SmallWidgetSize);
			ViewportClient->GetViewportSize(OutSize);
			if (OutSize.X < SMALL_NUMBER)
			{
				OutSize = FVector2D(SmallWidgetSize, SmallWidgetSize);
			}
			return OutSize.IntPoint();
		}
	}
#if WITH_EDITOR
	else if (FModuleManager::Get().IsModuleLoaded(NAME_LevelEditorName))
	{
		FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>(NAME_LevelEditorName);
		TSharedPtr<SLevelViewport> ActiveLevelViewport;
		if (TargetViewport.IsValid())
		{
			ActiveLevelViewport = TargetViewport.Pin();
		}
		else
		{
			ActiveLevelViewport = LevelEditorModule.GetFirstActiveLevelViewport();
		}
		if (ActiveLevelViewport.IsValid())
		{
			if (TSharedPtr<FSceneViewport> SharedActiveViewport = ActiveLevelViewport->GetSharedActiveViewport())
			{
				return SharedActiveViewport->GetSize();
			}
		}
	}
#endif
	return FIntPoint::ZeroValue;
}

bool FRemoteCameraUserWidget_PostProcess::IsTextureSizeValid(FIntPoint Size) const
{
	const int32 MaxAllowedDrawSize = GetMax2DTextureDimension();
	return Size.X > 0 && Size.Y > 0 && Size.X <= MaxAllowedDrawSize && Size.Y <= MaxAllowedDrawSize;
}

void FRemoteCameraUserWidget_PostProcess::RegisterHitTesterWithViewport(UWorld* World)
{
	if (!bReceiveHardwareInput && FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().RegisterVirtualWindow(SlateWindow.ToSharedRef());
	}

	TSharedPtr<SViewport> EngineViewportWidget;
	if (World->WorldType == EWorldType::Game || World->WorldType == EWorldType::PIE)
	{
		EngineViewportWidget = GEngine->GetGameViewportWidget();
	}
#if WITH_EDITOR
	else if (FModuleManager::Get().IsModuleLoaded(NAME_LevelEditorName))
	{
		FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>(NAME_LevelEditorName);

		TSharedPtr<SLevelViewport> ActiveLevelViewport;
		if (TargetViewport.IsValid())
		{
			ActiveLevelViewport = TargetViewport.Pin();
		}
		else
		{
			ActiveLevelViewport = LevelEditorModule.GetFirstActiveLevelViewport();
		}
		if (ActiveLevelViewport.IsValid())
		{
			EngineViewportWidget = ActiveLevelViewport->GetViewportWidget().Pin();
		}
	}
#endif

	if (EngineViewportWidget && bReceiveHardwareInput)
	{
		if (EngineViewportWidget->GetCustomHitTestPath())
		{
			UE_LOG(LogTemp, Warning, TEXT("Can't register a hit tester for FullScreenUserWidget. There is already one defined."));
		}
		else
		{

			ViewportWidget = EngineViewportWidget;
			CustomHitTestPath = MakeShared<FRCWidgetPostProcessHitTester>(World, SlateWindow);
			CustomHitTestPath->SetWidgetDrawSize(CurrentWidgetDrawSize);
			EngineViewportWidget->SetCustomHitTestPath(CustomHitTestPath);
		}
	}
}

void FRemoteCameraUserWidget_PostProcess::UnRegisterHitTesterWithViewport()
{
	if (SlateWindow.IsValid() && FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().UnregisterVirtualWindow(SlateWindow.ToSharedRef());
	}

	if (TSharedPtr<SViewport> ViewportWidgetPin = ViewportWidget.Pin())
	{
		if (ViewportWidgetPin->GetCustomHitTestPath() == CustomHitTestPath)
		{
			ViewportWidgetPin->SetCustomHitTestPath(nullptr);
		}
	}

	ViewportWidget.Reset();
	CustomHitTestPath.Reset();
}

//========================================
//FullScreenWidget

URemoteCameraUserWidget::URemoteCameraUserWidget(const  FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, bDisplayRequested(false)
	, CurrentDisplayType(ERCWidgetDisplayType::Inactive)
{
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> PostProcessMaterial_Finder(TEXT("/RemoteCamera/Assets/Materials/WidgetPostProcessMaterial"));
	PostProcessDisplayType.PostProcessMaterial = PostProcessMaterial_Finder.Object;
}

void URemoteCameraUserWidget::BeginDestroy()
{
	Hide();
	Super::BeginDestroy();
}

bool URemoteCameraUserWidget::ShouldDisplay(UWorld* InWorld) const
{
#if UE_SERVER
	return false;
#else
	if (GUsingNullRHI || HasAnyFlags(RF_ArchetypeObject | RF_ClassDefaultObject) || IsRunningDedicatedServer())
	{
		return false;
	}

	return GetDisplayType(InWorld) != ERCWidgetDisplayType::Inactive;
#endif //!UE_SERVER
}

ERCWidgetDisplayType URemoteCameraUserWidget::GetDisplayType(UWorld* InWorld) const
{
	if (InWorld)
	{
		if (InWorld->WorldType == EWorldType::Game)
		{
			return GameDisplayType;
		}
#if WITH_EDITOR
		else if (InWorld->WorldType == EWorldType::PIE)
		{
			return PIEDisplayType;
		}
		else if (InWorld->WorldType == EWorldType::Editor)
		{
			return EditorDisplayType;
		}
#endif // WITH_EDITOR
	}
	return ERCWidgetDisplayType::Inactive;
}

bool URemoteCameraUserWidget::IsDisplayed()
{
	return CurrentDisplayType != ERCWidgetDisplayType::Inactive;
}

bool URemoteCameraUserWidget::Display(UWorld* InWorld)
{
	bDisplayRequested = true;

	World = InWorld;

	bool bWasAdded = false;
	if (InWorld && WidgetClass && ShouldDisplay(InWorld) && CurrentDisplayType == ERCWidgetDisplayType::Inactive)
	{
		CurrentDisplayType = GetDisplayType(InWorld);

		InitWidget();

		const float DPIScale = GetViewportDPIScale();

		if (CurrentDisplayType == ERCWidgetDisplayType::Viewport)
		{
			bWasAdded = ViewportDisplayType.Display(InWorld, Widget, DPIScale);
		}
		else if ((CurrentDisplayType == ERCWidgetDisplayType::PostProcess) || (CurrentDisplayType == ERCWidgetDisplayType::Composure))
		{
			bWasAdded = PostProcessDisplayType.Display(InWorld, Widget, (CurrentDisplayType == ERCWidgetDisplayType::Composure), DPIScale);
		}

		if (bWasAdded)
		{
			FWorldDelegates::LevelRemovedFromWorld.AddUObject(this, &URemoteCameraUserWidget::OnLevelRemovedFromWorld);

			// If we are using Composure as our output, then send the WidgetRenderTarget to each one
			/*
			if (CurrentDisplayType == ERCWidgetDisplayType::Composure)
			{
				static const FString TextureCompClassName("BP_TextureRTCompElement_C");
				static const FName TextureInputPropertyName("TextureRTInput");

				for (ACompositingElement* Layer : PostProcessDisplayType.ComposureLayerTargets)
				{
					if (Layer && (Layer->GetClass()->GetName() == TextureCompClassName))
					{
						FProperty* TextureInputProperty = Layer->GetClass()->FindPropertyByName(TextureInputPropertyName);
						if (TextureInputProperty)
						{
							FObjectProperty* TextureInputObjectProperty = CastField<FObjectProperty>(TextureInputProperty);
							if (TextureInputObjectProperty)
							{
								UTextureRenderTarget2D** DestTextureRT2D = TextureInputProperty->ContainerPtrToValuePtr<UTextureRenderTarget2D*>(Layer);
								if (DestTextureRT2D)
								{
									TextureInputObjectProperty->SetObjectPropertyValue(DestTextureRT2D, PostProcessDisplayType.WidgetRenderTarget);
									Layer->RerunConstructionScripts();
								}
							}
						}
					}
					else if (Layer)
					{
						UE_LOG(LogRemoteCamera, Warning, TEXT("VPFullScreenUserWidget - ComposureLayerTarget entry '%s' is not the correct class '%s'"), *Layer->GetName(), *TextureCompClassName);
					}
				}
			}
			*/
		}
	}

	return bWasAdded;
}

void URemoteCameraUserWidget::Hide()
{
	bDisplayRequested = false;

	if (CurrentDisplayType != ERCWidgetDisplayType::Inactive)
	{
		ReleaseWidget();
		FWorldDelegates::LevelRemovedFromWorld.RemoveAll(this);

		if (CurrentDisplayType == ERCWidgetDisplayType::Viewport)
		{
			ViewportDisplayType.Hide(World.Get());
		}
		else if ((CurrentDisplayType == ERCWidgetDisplayType::PostProcess) || (CurrentDisplayType == ERCWidgetDisplayType::Composure))
		{
			PostProcessDisplayType.Hide(World.Get());
		}
		CurrentDisplayType = ERCWidgetDisplayType::Inactive;
	}

	World.Reset();
}

void URemoteCameraUserWidget::Tick(float DeltaSeconds)
{
	if (CurrentDisplayType != ERCWidgetDisplayType::Inactive)
	{
		UWorld* CurrentWorld = World.Get();
		if (CurrentWorld == nullptr)
		{
			Hide();
		}
		else
		{
			if (CurrentDisplayType == ERCWidgetDisplayType::Viewport)
			{
				ViewportDisplayType.Tick(CurrentWorld, DeltaSeconds);
			}
			//else if ((CurrentDisplayType == ERCWidgetDisplayType::PostProcess) || (CurrentDisplayType == ERCWidgetDisplayType::Composure))
			else if (CurrentDisplayType == ERCWidgetDisplayType::PostProcess)
			{
				PostProcessDisplayType.Tick(CurrentWorld, DeltaSeconds);
			}
		}
	}
}

void URemoteCameraUserWidget::SetDisplayTypes(ERCWidgetDisplayType InEditorDisplayType, ERCWidgetDisplayType InGameDisplayType, ERCWidgetDisplayType InPIEDisplayType)
{
	EditorDisplayType = InEditorDisplayType;
	GameDisplayType = InGameDisplayType;
	PIEDisplayType = InPIEDisplayType;
}

void URemoteCameraUserWidget::InitWidget()
{
	// Don't do any work if Slate is not initialized
	if (FSlateApplication::IsInitialized())
	{
		if (WidgetClass && Widget == nullptr)
		{
			check(World.Get());
			Widget = CreateWidget(World.Get(), WidgetClass);
			Widget->SetFlags(RF_Transient);
		}
	}
}

void URemoteCameraUserWidget::ReleaseWidget()
{
	Widget = nullptr;
}

void URemoteCameraUserWidget::OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld)
{
	// If the InLevel is invalid, then the entire world is about to disappear.
	//Hide the widget to clear the memory and reference to the world it may hold.
	if (InLevel == nullptr && InWorld && InWorld == World.Get())
	{
		Hide();
	}
}

FVector2D URemoteCameraUserWidget::FindSceneViewportSize()
{
	FVector2D OutSize;

	UWorld* CurrentWorld = World.Get();
	if (CurrentWorld && (CurrentWorld->WorldType == EWorldType::Game || CurrentWorld->WorldType == EWorldType::PIE))
	{
		if (UGameViewportClient* ViewportClient = World->GetGameViewport())
		{
			ViewportClient->GetViewportSize(OutSize);
		}
	}
#if WITH_EDITOR
	else if (FModuleManager::Get().IsModuleLoaded(NAME_LevelEditorName))
	{
		FLevelEditorModule& LevelEditorModule = FModuleManager::GetModuleChecked<FLevelEditorModule>(NAME_LevelEditorName);
		TSharedPtr<SLevelViewport> ActiveLevelViewport;
		if (TargetViewport.IsValid())
		{
			ActiveLevelViewport = TargetViewport.Pin();
		}
		else
		{
			ActiveLevelViewport = LevelEditorModule.GetFirstActiveLevelViewport();
		}
		if (ActiveLevelViewport.IsValid())
		{
			if (TSharedPtr<FSceneViewport> SharedActiveViewport = ActiveLevelViewport->GetSharedActiveViewport())
			{
				OutSize = FVector2D(SharedActiveViewport->GetSize());
			}
		}
	}
#endif

	return OutSize;
}

float URemoteCameraUserWidget::GetViewportDPIScale()
{
	float UIScale = 1.0f;
	float PlatformScale = FPlatformApplicationMisc::GetDPIScaleFactorAtPoint(10.0f, 10.0f);

	UWorld* CurrentWorld = World.Get();
	if ((CurrentDisplayType == ERCWidgetDisplayType::Viewport) && CurrentWorld && (CurrentWorld->WorldType == EWorldType::Game || CurrentWorld->WorldType == EWorldType::PIE))
	{
		// If we are in Game or PIE in Viewport display mode, the GameLayerManager will scale correctly so just return the Platform Scale
		UIScale = PlatformScale;
	}
	else
	{
		// Otherwise when in Editor mode, the editor automatically scales to the platform size, so we only care about the UI scale
		FIntPoint ViewportSize = FindSceneViewportSize().IntPoint();

		const UUserInterfaceSettings* UserInterfaceSettings = GetDefault<UUserInterfaceSettings>(UUserInterfaceSettings::StaticClass());
		if (UserInterfaceSettings)
		{
			UIScale = UserInterfaceSettings->GetDPIScaleBasedOnSize(ViewportSize);
		}
	}

	return UIScale;
}

#if WITH_EDITOR
void URemoteCameraUserWidget::SetAllTargetViewports(TWeakPtr<SLevelViewport> InTargetViewport)
{
	TargetViewport = InTargetViewport;
	ViewportDisplayType.TargetViewport = InTargetViewport;
	PostProcessDisplayType.TargetViewport = InTargetViewport;
}

void URemoteCameraUserWidget::ResetAllTargetViewports()
{
	TargetViewport.Reset();
	ViewportDisplayType.TargetViewport.Reset();
	PostProcessDisplayType.TargetViewport.Reset();
}

void URemoteCameraUserWidget::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	FProperty* Property = PropertyChangedEvent.MemberProperty;

	if (Property && PropertyChangedEvent.ChangeType != EPropertyChangeType::Interactive)
	{
		static FName NAME_WidgetClass = GET_MEMBER_NAME_CHECKED(URemoteCameraUserWidget, WidgetClass);
		static FName NAME_EditorDisplayType = GET_MEMBER_NAME_CHECKED(URemoteCameraUserWidget, EditorDisplayType);
		static FName NAME_PostProcessMaterial = GET_MEMBER_NAME_CHECKED(FRemoteCameraUserWidget_PostProcess, PostProcessMaterial);
		static FName NAME_WidgetDrawSize = GET_MEMBER_NAME_CHECKED(FRemoteCameraUserWidget_PostProcess, WidgetDrawSize);
		static FName NAME_WindowFocusable = GET_MEMBER_NAME_CHECKED(FRemoteCameraUserWidget_PostProcess, bWindowFocusable);
		static FName NAME_WindowVisibility = GET_MEMBER_NAME_CHECKED(FRemoteCameraUserWidget_PostProcess, WindowVisibility);
		static FName NAME_ReceiveHardwareInput = GET_MEMBER_NAME_CHECKED(FRemoteCameraUserWidget_PostProcess, bReceiveHardwareInput);
		static FName NAME_RenderTargetBackgroundColor = GET_MEMBER_NAME_CHECKED(FRemoteCameraUserWidget_PostProcess, RenderTargetBackgroundColor);
		static FName NAME_RenderTargetBlendMode = GET_MEMBER_NAME_CHECKED(FRemoteCameraUserWidget_PostProcess, RenderTargetBlendMode);
		static FName NAME_PostProcessTintColorAndOpacity = GET_MEMBER_NAME_CHECKED(FRemoteCameraUserWidget_PostProcess, PostProcessTintColorAndOpacity);
		static FName NAME_PostProcessOpacityFromTexture = GET_MEMBER_NAME_CHECKED(FRemoteCameraUserWidget_PostProcess, PostProcessOpacityFromTexture);

		if (Property->GetFName() == NAME_WidgetClass
			|| Property->GetFName() == NAME_EditorDisplayType
			|| Property->GetFName() == NAME_PostProcessMaterial
			|| Property->GetFName() == NAME_WidgetDrawSize
			|| Property->GetFName() == NAME_WindowFocusable
			|| Property->GetFName() == NAME_WindowVisibility
			|| Property->GetFName() == NAME_ReceiveHardwareInput
			|| Property->GetFName() == NAME_RenderTargetBackgroundColor
			|| Property->GetFName() == NAME_RenderTargetBlendMode
			|| Property->GetFName() == NAME_PostProcessTintColorAndOpacity
			|| Property->GetFName() == NAME_PostProcessOpacityFromTexture)
		{
			bool bWasRequestedDisplay = bDisplayRequested;
			UWorld* CurrentWorld = World.Get();
			Hide();
			if (bWasRequestedDisplay && CurrentWorld)
			{
				Display(CurrentWorld);
			}
		}
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif //WITH_EDITOR
