// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyOutputProvider.h"

#if WITH_EDITOR
#include "UnrealEdMisc.h"
#endif

#include "MyRemoteSessionComponent.generated.h"

//class UMyOutputProvider;

#if WITH_EDITOR
class FLevelEditorViewportClient;
#endif

UENUM(BlueprintType)
enum class EMyTargetViewportID : uint8
{
	CurrentlySelected,
	Viewport1,
	Viewport2,
	Viewport3,
	Viewport4
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class REMOTESESSIONTESTS_API UMyRemoteSessionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMyRemoteSessionComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, BlueprintSetter = SetEnabled, BlueprintGetter = IsEnabled, Category = "Remote Session")
		bool bEnabled = true;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	UFUNCTION(BlueprintSetter)
		void SetEnabled(bool bNewEnabled);

	UFUNCTION(BlueprintGetter)
		bool IsEnabled() const { return bEnabled; };

	UFUNCTION(BlueprintPure, Category = "Remote Session")
		UMyOutputProvider* GetOutputProviderByIndex(const int32 ProviderIndex) const;
	
	TSharedPtr<FSceneViewport> GetTargetSceneViewport() const;
	TWeakPtr<SWindow> GetTargetInputWindow() const;

#if WITH_EDITOR
	FLevelEditorViewportClient* GetTargetLevelViewportClient() const;
	TSharedPtr<SLevelViewport> GetTargetLevelViewport() const;
#endif

	UPROPERTY(EditAnywhere, Category = "Remote Session")
		bool bEnableRemoteSession;
	UPROPERTY(EditAnywhere, Instanced, Category = "Remote Session")
		TArray<UMyOutputProvider*> OutputProviders;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Remote Session")
		EMyTargetViewportID TargetViewport = EMyTargetViewportID::CurrentlySelected;
};
