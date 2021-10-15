// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UnrealClient.h"
#include "RemoteCameraUserWidget.h"
#include "CineCameraComponent.h"

#include "RemoteCameraOutputBase.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogRemoteCamera, Log, All);

class UUserWidget;
class SLevelViewport;

#if WITH_EDITOR
class FLevelEditorViewportClient;
#endif

/**
 *
 */
UCLASS(BlueprintType, Abstract, EditInlineNew)
class REMOTECAMERACORE_API URemoteCameraOutputBase : public UObject
{
	GENERATED_BODY()
public:
	URemoteCameraOutputBase();
	~URemoteCameraOutputBase();

	virtual void BeginDestroy() override;

	// Called when the provider is brought online such as after instantiating or loading a component containing this provider 
	// Use Initialize for any setup logic that needs to survive between Start / Stop cycles such as spawning transient objects 
	// 
	// If bForceInitialization is true then it will force a reinitialization even if the provider was already initialized
	virtual void Initialize();

	// Called when the provider is being shutdown such as before changing level or on exit
	virtual void Deinitialize();

	// Called when the provider is Activated
	virtual void Activate();

	// Called when the provider is Deactivated
	virtual void Deactivate();

	virtual void Tick(const float DeltaTime);

	UFUNCTION(BlueprintCallable, Category = "Output")
		void SetActive(const bool bInIsActive);

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	// Returns if this output provider is currently active or not
	UFUNCTION(BlueprintPure, Category = "Output")
		bool IsActive() const { return bIsActive; };

	// Returns if this output provider has been initialized or not
	UFUNCTION(BlueprintPure, Category = "Output")
		bool IsInitialized() const { return bInitialized; };

	// Sets the TargetCamera parameter
	UFUNCTION(BlueprintCallable, Category = "Output")
		void SetTargetCamera(const UCineCameraComponent* InTargetCamera);

	// Sets the UMG class to be rendered in this output provider
	UFUNCTION(BlueprintCallable, Category = "Output")
		void SetUMGClass(const TSubclassOf<UUserWidget> InUMGClass);

	// The UMG class to be rendered in this output provider
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output")
		TSubclassOf<UUserWidget> UMGClass;
	
	// Override the default output resolution with a custom value - NOTE you must toggle bIsActive off then back on for this to take effect
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output")
		bool bUseOverrideResolution = false;

	// When bUseOverrideResolution is set, use this custom resolution
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output")
		FIntPoint OverrideResolution = { 2048, 1536 };

	URemoteCameraUserWidget* GetUMGWidget() { return UMGWidget; };

	/** Temporarily disable the output.  Caller must eventually call RestoreOutput. */
	void SuspendOutput()
	{
		if (IsActive())
		{
			bWasActive = true;
			SetActive(false);
		}
	}

	/** Restore the output state from previous call to disable output. */
	void RestoreOutput()
	{
		if (bWasActive && !IsActive())
		{
			SetActive(true);
		}
		bWasActive = false;
	}

protected:
	// If set, this output provider will execute every frame
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output")
		bool bIsActive = false;

	UPROPERTY(Transient)
		bool bInitialized = false;

	ERCWidgetDisplayType DisplayType = ERCWidgetDisplayType::PostProcess;

	virtual void CreateUMG();

	void DisplayUMG();
	void DestroyUMG();

	URemoteCameraOutputBase* GetOtherOutputProviderByIndex(int32 Index) const;

	TSharedPtr<FSceneViewport> GetTargetSceneViewport() const;
	TWeakPtr<SWindow> GetTargetInputWindow() const;

#if WITH_EDITOR
	FLevelEditorViewportClient* GetTargetLevelViewportClient() const;
	TSharedPtr<SLevelViewport> GetTargetLevelViewport() const;
#endif

	UPROPERTY(Transient)
		URemoteCameraUserWidget* UMGWidget = nullptr;

private:
	void NotifyWidgetOfComponentChange() const;

	bool IsOuterComponentEnabled() const;

	TSoftObjectPtr<UCineCameraComponent> TargetCamera;
	bool bWasActive = false;
};