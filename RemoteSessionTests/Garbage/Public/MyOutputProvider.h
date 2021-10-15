// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyFullScreenUserWidget.h"
#include "CineCameraComponent.h"
#include "MyOutputProvider.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogMyRemoteSession, Log, All);

class UUserWidget;
//class UCineCameraComponent;
class FLevelEditorViewportClient;
class SLevelViewport;


/**
 * 
 */
UCLASS(BlueprintType, Abstract, EditInlineNew)
class REMOTESESSIONTESTS_API UMyOutputProvider : public UObject
{
	GENERATED_BODY()
public:
	UMyOutputProvider();
	~UMyOutputProvider();

	virtual void BeginDestroy() override;

	virtual void Initialize();

	virtual void Deinitialize();

	virtual void Activate();

	virtual void Deactivate();

	virtual void Tick(const float DeltaTime);

	UFUNCTION(BlueprintCallable, Category = "Output")
		void SetActive(const bool bInIsActive);

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	UFUNCTION(BlueprintPure, Category = "Output")
		bool IsActive() const { return bIsActive; };
	UFUNCTION(BlueprintPure, Category = "Output")
		bool IsInitialized() const { return bInitialized; };
	UFUNCTION(BlueprintCallable, Category = "Output")
		void SetTargetCamera(const UCineCameraComponent* InTargetCamera);
	UFUNCTION(BlueprintCallable, Category = "Output")
		void SetUMGClass(const TSubclassOf<UUserWidget> InUMGClass);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output")
		TSubclassOf<UUserWidget> UMGClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output")
		bool bUseOverrideResolution = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output")
		FIntPoint OverrideResolution = { 2048, 1536 };

	UMyFullScreenUserWidget* GetUMGWidget() { return UMGWidget; };

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output")
		bool bIsActive = false;
	UPROPERTY(Transient)
		bool bInitialized = false;

	EMyWidgetDisplayType DisplayType = EMyWidgetDisplayType::PostProcess;

	virtual void CreateUMG();

	void DisplayUMG();
	void DestroyUMG();

	UMyOutputProvider* GetOtherOutputProviderByIndex(int32 Index) const;

	TSharedPtr<FSceneViewport> GetTargetSceneViewport() const;
	TWeakPtr<SWindow> GetTargetInputWindow() const;

#if WITH_EDITOR
	FLevelEditorViewportClient* GetTargetLevelViewportClient() const;
	TSharedPtr<SLevelViewport> GetTargetLevelViewport() const;
#endif

	UPROPERTY(Transient)
		UMyFullScreenUserWidget* UMGWidget = nullptr;

private:
	void NotifyWidgetOfComponentChange() const;
	bool IsOuterComponentEnabled() const;
	TSoftObjectPtr<UCineCameraComponent> TargetCamera;
};
