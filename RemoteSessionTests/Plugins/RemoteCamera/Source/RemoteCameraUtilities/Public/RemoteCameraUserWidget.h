//Copyright

#pragma once

#include "CoreMinimal.h"
#include "UMG/Public/Components/WidgetComponent.h"
#include "RemoteCameraUserWidget.generated.h"

class SVirtualWindow;
class SConstraintCanvas;
class UPostProcessComponent;
class FRCWidgetPostProcessHitTester;

#if WITH_EDITOR
class SLevelViewport;
#endif

UENUM(BlueprintType)
enum class ERCWidgetDisplayType : uint8
{
	Inactive,
	Viewport,
	PostProcess,
	Composure,
};

USTRUCT()
struct FRemoteCameraUserWidget_Viewport
{
	GENERATED_BODY()

public:
	FRemoteCameraUserWidget_Viewport();
	bool Display(UWorld* World, UUserWidget* Widget, float InDPIScale);
	void Hide(UWorld* World);
	void Tick(UWorld* World, float DeltaSeconds);

#if WITH_EDITOR
	/** If set, use this viewport instead of GetFirstActiveLevelViewport() */
	TWeakPtr<SLevelViewport> TargetViewport;
#endif

private:
	bool bAddedToGameViewport;

	/** Constraint widget that contains the widget we want to display. */
	TWeakPtr<SConstraintCanvas> FullScreenCanvasWidget;

#if WITH_EDITOR
	/** Level viewport the widget was added to. */
	TWeakPtr<SLevelViewport> OverlayWidgetLevelViewport;
#endif
};

USTRUCT(BlueprintType)
struct FRemoteCameraUserWidget_PostProcess
{
	GENERATED_BODY()

public:
	FRemoteCameraUserWidget_PostProcess();
	bool Display(UWorld* World, UUserWidget* Widget, bool bInRenderToTextureOnly, float InDPIScale);
	void Hide(UWorld* World);
	void Tick(UWorld* World, float DeltaSeconds);

	TSharedPtr<SVirtualWindow> REMOTECAMERAUTILITIES_API GetSlateWindow() const;


private:
	bool CreatePostProcessComponent(UWorld* World);
	void ReleasePostProcessComponent();

	bool CreateRenderer(UWorld* World, UUserWidget* Widget, float InDPIScale);
	void ReleaseRenderer();
	void TickRenderer(UWorld* World, float DeltaSeconds);

	FIntPoint CalculateWidgetDrawSize(UWorld* World);
	bool IsTextureSizeValid(FIntPoint Size) const;

	void RegisterHitTesterWithViewport(UWorld* World);
	void UnRegisterHitTesterWithViewport();

public:
	/**
	 * Post process material used to display the widget.
	 * SlateUI [Texture]
	 * TintColorAndOpacity [Vector]
	 * OpacityFromTexture [Scalar]
	 */
	UPROPERTY(EditAnywhere, Category = PostProcess)
		UMaterialInterface* PostProcessMaterial;

	/** Tint color and opacity for this component. */
	UPROPERTY(EditAnywhere, Category = PostProcess)
		FLinearColor PostProcessTintColorAndOpacity;

	/** Sets the amount of opacity from the widget's UI texture to use when rendering the translucent or masked UI to the viewport (0.0-1.0). */
	UPROPERTY(EditAnywhere, Category = PostProcess, meta = (ClampMin = 0.0f, ClampMax = 1.0f))
		float PostProcessOpacityFromTexture;

	/** The size of the rendered widget. */
	UPROPERTY(EditAnywhere, Category = PostProcess, meta = (InlineEditConditionToggle))
		bool bWidgetDrawSize;

	/** The size of the rendered widget. */
	UPROPERTY(EditAnywhere, Category = PostProcess, meta = (EditCondition = bWidgetDrawSize))
		FIntPoint WidgetDrawSize;

	/** Is the virtual window created to host the widget focusable? */
	UPROPERTY(EditAnywhere, AdvancedDisplay, Category = PostProcess)
		bool bWindowFocusable;

	/** The visibility of the virtual window created to host the widget. */
	UPROPERTY(EditAnywhere, AdvancedDisplay, Category = PostProcess)
		EWindowVisibility WindowVisibility;

	/** Register with the viewport for hardware input from the mouse and keyboard. It can and will steal focus from the viewport. */
	UPROPERTY(EditAnywhere, AdvancedDisplay, Category = PostProcess)
		bool bReceiveHardwareInput;

	/** The background color of the render target */
	UPROPERTY(EditAnywhere, AdvancedDisplay, Category = PostProcess)
		FLinearColor RenderTargetBackgroundColor;

	/** The blend mode for the widget. */
	UPROPERTY(EditAnywhere, AdvancedDisplay, Category = PostProcess)
		EWidgetBlendMode RenderTargetBlendMode;

	/** List of composure layers that are expecting to use the WidgetRenderTarget. */
	//UPROPERTY(EditAnywhere, Category = PostProcess)
	//	TArray<ACompositingElement*> ComposureLayerTargets;

	/** The target to which the user widget is rendered. */
	UPROPERTY(Transient)
		UTextureRenderTarget2D* WidgetRenderTarget;

#if WITH_EDITOR
	/** If set, use this viewport instead of GetFirstActiveLevelViewport() */
	TWeakPtr<SLevelViewport> TargetViewport;
#endif
private:
	/** Post process component used to add the material to the post process chain. */
	UPROPERTY(Transient)
		UPostProcessComponent* PostProcessComponent;

	/** The dynamic instance of the material that the render target is attached to. */
	UPROPERTY(Transient)
		UMaterialInstanceDynamic* PostProcessMaterialInstance;

	/** The slate window that contains the user widget content. */
	TSharedPtr<SVirtualWindow> SlateWindow;

	/** The slate viewport we are registered to. */
	TWeakPtr<SViewport> ViewportWidget;

	/** Helper class for drawing widgets to a render target. */
	FWidgetRenderer* WidgetRenderer;

	/** The size of the rendered widget */
	FIntPoint CurrentWidgetDrawSize;

	/** Hit tester when we want the hardware input. */
	TSharedPtr<FRCWidgetPostProcessHitTester> CustomHitTestPath;

	/** Only render to the UTextureRenderTarget2D - do not output to the final viewport. */
	bool bRenderToTextureOnly;
};

UCLASS()
class REMOTECAMERAUTILITIES_API URemoteCameraUserWidget : public UObject
{
	GENERATED_BODY()

public:
	URemoteCameraUserWidget(const FObjectInitializer& ObjectInitializer);

	virtual void BeginDestroy() override;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	void Tick(float DeltaSeconds);

	UPROPERTY(EditAnywhere, Category = "Post Process", meta = (ShowOnlyInnerProperties))
		FRemoteCameraUserWidget_Viewport ViewportDisplayType;
	UPROPERTY(EditAnywhere, Category = "Post Process", meta = (ShowOnlyInnerProperties))
		FRemoteCameraUserWidget_PostProcess PostProcessDisplayType;
	UPROPERTY(EditAnywhere, Category = "User Widget")
		TSubclassOf<UUserWidget> WidgetClass;
	
private:
	UPROPERTY(Transient, DuplicateTransient)
		UUserWidget* Widget;

	bool bDisplayRequested;
	ERCWidgetDisplayType CurrentDisplayType;
	TWeakObjectPtr<UWorld> World;
public:
	//virtual void Tick(const float DeltaTime);
	void SetDisplayTypes(ERCWidgetDisplayType InEditorDisplayType, ERCWidgetDisplayType InGameDisplayType, ERCWidgetDisplayType InPIEDisplayType);
	void SetAllTargetViewports(TWeakPtr<SLevelViewport> InTargetViewport);
	bool ShouldDisplay(UWorld* InWorld) const;
	ERCWidgetDisplayType GetDisplayType(UWorld* InWorld) const;
	bool Display(UWorld* InWorld);
	bool IsDisplayed();
	void Hide();
	
	void OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld);
	
	UUserWidget* GetWidget() const { return Widget; };
protected:
	UPROPERTY(EditAnywhere, Category = "User Interface")
		ERCWidgetDisplayType EditorDisplayType;
	UPROPERTY(EditAnywhere, Category = "User Interface")
		ERCWidgetDisplayType GameDisplayType;
	UPROPERTY(EditAnywhere, Category = "User Interface")
		ERCWidgetDisplayType PIEDisplayType;

	void InitWidget();
	void ReleaseWidget();
	float GetViewportDPIScale();
	FVector2D FindSceneViewportSize();

public:
#if WITH_EDITOR
	TWeakPtr<SLevelViewport> TargetViewport;

	void ResetAllTargetViewports();
#endif

};