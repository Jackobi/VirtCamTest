// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Roles/LiveLinkCameraTypes.h"
#include "RemoteCameraOutputBase.h"
#include "GameplayTagContainer.h"
#include "RemoteCameraMultiUser.h"

#if WITH_EDITOR
#include "UnrealEdMisc.h"
#endif

#include "RemoteCameraComponent.generated.h"

#if WITH_EDITOR
class FLevelEditorViewportClient;
#endif

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnComponentReplaced, URemoteCameraComponent*, NewComponent);

UENUM(BlueprintType)
enum class ERCTargetViewportID : uint8
{
	CurrentlySelected,
	Viewport1,
	Viewport2,
	Viewport3,
	Viewport4
};

UCLASS(Blueprintable, ClassGroup = (RemoteCamera), meta = (BlueprintSpawnableComponent))
class REMOTECAMERACORE_API URemoteCameraComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	URemoteCameraComponent();

	virtual void OnComponentDestroyed(bool bDestroyingHierarchy) override;

	TSharedPtr<FSceneViewport> GetTargetSceneViewport() const;
	TWeakPtr<SWindow> GetTargetInputWindow() const;

#if WITH_EDITOR
	FLevelEditorViewportClient* GetTargetLevelViewportClient() const;
	TSharedPtr<SLevelViewport> GetTargetLevelViewport() const;

	virtual void CheckForErrors() override;
	virtual void PreEditChange(FProperty* PropertyThatWillChange) override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual void PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent) override;
#endif
	/* Handle edge cases of this component being replaced by another during reconstruction. */
	UPROPERTY(BlueprintAssignable, Category = "Remote Camera")
		FOnComponentReplaced OnComponentReplaced;

	UFUNCTION()
		void HandleObjectReplaced(const TMap<UObject*, UObject*>& ReplacementMap);
	
	bool CanUpdate() const;

	void Update();

	UFUNCTION(BlueprintSetter)
		void SetEnabled(bool bNewEnabled);

	UFUNCTION(BlueprintGetter)
		bool IsEnabled() const { return bEnabled; };

	// Returns the Target CineCameraComponent
	UFUNCTION(BlueprintPure, Category = "Remote Camera")
		UCineCameraComponent* GetTargetCamera() const;

	/////////////////////////
	// Output Provider access

	//Add a new output provider
	UFUNCTION(BlueprintCallable, Category = "Remote Camera", Meta = (DeterminesOutputType = "ProviderClass", DynamicOutputParam = "CreatedProvider", ReturnDisplayName = "Success"))
		bool AddOutputProvider(UPARAM(meta = (AllowAbstract = "false")) TSubclassOf<URemoteCameraOutputBase> ProviderClass, URemoteCameraOutputBase*& CreatedProvider);
	//Insert a new output provider in the list at the given index
	UFUNCTION(BlueprintCallable, Category = "Remote Camera", Meta = (DeterminesOutputType = "ProviderClass", DynamicOutputParam = "CreatedProvider", ReturnDisplayName = "Success"))
		bool InsertOutputProvider(int32 Index, UPARAM(meta = (AllowAbstract = "false")) TSubclassOf<URemoteCameraOutputBase> ProviderClass, URemoteCameraOutputBase*& CreatedProvider);
	// Moves an existing Output Provider in the stack from its current index to a new index
	UFUNCTION(BlueprintCallable, Category = "Remote Camera", Meta = (ReturnDisplayName = "Success"))
		bool SetOutputProviderIndex(int32 OriginalIndex, int32 NewIndex);
	// Remove all Output Providers from the Component.
	UFUNCTION(BlueprintCallable, Category = "Remote Camera")
		void RemoveAllOutputProviders();
	//Remove a single output provider by reference
	UFUNCTION(BlueprintCallable, Category = "Remote Camera")
		bool RemoveOutputProvider(const URemoteCameraOutputBase* Provider);
	//Remove a single output provider at the given index
	UFUNCTION(BlueprintCallable, Category = "Remote Camera")
		bool RemoveOutputProviderByIndex(const int32 ProviderIndex);
	//Returns the number of output providers
	UFUNCTION(BlueprintPure, Category = "Remote Camera")
		int32 GetNumberOfOutputProviders() const;
	//Returns the array of output providers
	UFUNCTION(BlueprintPure, Category = "Remote Camera")
		void GetAllOutputProviders(TArray<URemoteCameraOutputBase*>& Providers) const;
	//Returns a single output provider at the given index
	UFUNCTION(BlueprintPure, Category = "Remote Camera")
		URemoteCameraOutputBase* GetOutputProviderByIndex(const int32 ProviderIndex) const;
	//Returns a pointer to an output provider that matches the given subclass
	UFUNCTION(BlueprintPure, Category = "Remote Camera", Meta = (DeterminesOutputType = "ProviderClass", DynamicOutputParam = "FoundProviders"))
		void GetOutputProvidersByClass(UPARAM(meta = (AllowAbstract = "false")) TSubclassOf<URemoteCameraOutputBase> ProviderClass, TArray<URemoteCameraOutputBase*>& FoundProviders) const;

private:
	UPROPERTY(EditAnywhere, BlueprintSetter = SetEnabled, BlueprintGetter = IsEnabled, Category = "Remote Camera")
		bool bEnabled = true;
	UPROPERTY(Transient)
		UCineCameraComponent* TargetCamera;
	UPROPERTY(Transient)
		bool bIsLockedToViewport = false;
	// Variable used for pausing update on editor objects while PIE is running
	bool bIsEditorObjectButPIEIsRunning = false;

	TArray<URemoteCameraOutputBase*> SavedOutputProviders;
	void CopyLiveLinkDataToCamera(const FLiveLinkCameraBlueprintData& LiveLinkData, UCineCameraComponent* CameraComponent);

	// When another component replaces us, get a notification so we can clean up
	void NotifyComponentWasReplaced(URemoteCameraComponent* ReplacementComponent);

	double LastEvaluationTime;

	float GetDeltaTime();
	void SetActorLock(bool bNewActorLock) { bLockViewportToCamera = bNewActorLock; UpdateActorLock(); }
	void UpdateActorLock();
	void DestroyOutputProvider(URemoteCameraOutputBase* Provider);
	//void ResetAllOutputProviders();
	
	TWeakObjectPtr<AActor> Backup_ActorLock;
	TWeakObjectPtr<AActor> Backup_ViewTarget;

#if WITH_EDITOR
	void OnMapChanged(UWorld* World, EMapChangeType ChangeType);
	void OnBeginPIE(const bool bInIsSimulating);
	void OnEndPIE(const bool bInIsSimulating);

	/* Concert functions */
	void HandleCameraComponentEventData(const FConcertSessionContext& InEventContext, const FMultiUserRemoteCameraComponentEvent& InEvent);
	void SessionStartup(TSharedRef<IConcertClientSession> InSession);
	void SessionShutdown(TSharedRef<IConcertClientSession> InSession);

	FString GetNameForMultiUser() const;

	void MultiUserStartup();
	void MultiUserShutdown();

	FDelegateHandle OnSessionStartupHandle;
	FDelegateHandle OnSessionShutdownHandle;
	TWeakPtr<IConcertClientSession> WeakSession;

	double SecondsSinceLastLocationUpdate = 0;
	double PreviousUpdateTime = 0;
#endif

	bool IsCameraInProductionRole() const;

	void SendCameraDataViaMultiUser();

	bool IsMultiUserSession() const;

	bool CanEvaluateModifierStack() const;

public:
	/**
	 * The role of this virtual camera.  If this value is set and the corresponding tag set on the editor matches this value, then this
	 * camera is the sender and the authority in the case when connected to a multi-user session.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Remote Camera")
		FGameplayTag Role;
	// LiveLink subject name for the incoming camera transform
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Remote Camera")
		FLiveLinkSubjectName LiveLinkSubject;
	// If true, render the viewport from the point of view of the parented CineCamera
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Remote Camera")
		bool bLockViewportToCamera = false;
	// If true, the component will force bEnabled to false when it is part of a spawnable in Sequencer
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Remote Camera")
		bool bDisableComponentWhenSpawnedBySequencer = true;
	// Do we disable the output if the virtual camera is in a Multi-user session and the camera is a "receiver" from multi-user
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "Remote Camera")
		bool bDisableOutputOnMultiUserReceiver = true;
	// Indicates the frequency which camera updates are sent when in Multi-user mode. This has a minimum value of 30ms.
	UPROPERTY(EditAnywhere, AdvancedDisplay, Category = "Remote Camera", meta = (ForceUnits = ms, ClampMin = "30.0"), DisplayName = "Update Frequencey")
		float UpdateFrequencyMs = 66.6f;
	//
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Remote Camera")
		ERCTargetViewportID TargetViewport = ERCTargetViewportID::CurrentlySelected;
	//List of output providers
	UPROPERTY(EditAnywhere, Instanced, Category = "Remote Camera")
		TArray<URemoteCameraOutputBase*> OutputProviders;

	UFUNCTION(BlueprintCallable, Category = "Remote Camera")
		void GetLiveLinkDataForCurrentFrame(FLiveLinkCameraBlueprintData& LiveLinkData);
};
