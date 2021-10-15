//Copyright

#pragma once

#include "CoreMinimal.h"
#include "UMG/Public/Components/WidgetComponent.h"
#include "MyFullScreenUserWidget.generated.h"

class SVirtualWindow;
class UPostProcessComponent;
class FMyWidgetPostProcessHitTester;

#if WITH_EDITOR
class SLevelViewport;
#endif

UENUM(BlueprintType)
enum class EMyWidgetDisplayType : uint8
{
	Inactive,
	Viewport,
	PostProcess,
	Composure,
};

USTRUCT(BlueprintType)
struct FMyFullScreenUserWidget_PostProcess
{
	GENERATED_BODY()

public:
	FMyFullScreenUserWidget_PostProcess();
	bool Display(UWorld* World, UUserWidget* Widget, bool bInRenderToTextureOnly, float InDPIScale);
	void Hide(UWorld* World);
	void Tick(UWorld* World, float DeltaSeconds);

	TSharedPtr<SVirtualWindow> REMOTESESSIONTESTS_API GetSlateWindow() const;
	

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
	TSharedPtr<FMyWidgetPostProcessHitTester> CustomHitTestPath;

	/** Only render to the UTextureRenderTarget2D - do not output to the final viewport. */
	bool bRenderToTextureOnly;
};

UCLASS()
class REMOTESESSIONTESTS_API UMyFullScreenUserWidget : public UObject
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = "Post Process")
		FMyFullScreenUserWidget_PostProcess PostProcessDisplayType;
	UPROPERTY(EditAnywhere, Category = "User Widget")
		TSubclassOf<UUserWidget> WidgetClass;
	UPROPERTY(Transient, DuplicateTransient)
		UUserWidget* Widget;

	virtual void Tick(const float DeltaTime);
	void SetDisplayTypes(EMyWidgetDisplayType InEditorDisplayType, EMyWidgetDisplayType InGameDisplayType, EMyWidgetDisplayType InPIEDisplayType);
	void SetAllTargetViewports(TWeakPtr<SLevelViewport> InTargetViewport);
	bool Display(UWorld* World);
	bool IsDisplayed();
	void Hide();
	void ResetAllTargetViewports();
	UUserWidget* GetWidget() const { return Widget; };

	
};