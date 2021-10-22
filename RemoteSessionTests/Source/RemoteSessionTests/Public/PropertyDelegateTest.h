//Copyright

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PropertyDelegateTest.generated.h"

UCLASS(Blueprintable, BlueprintType)
class REMOTESESSIONTESTS_API APropertyDelegateTest : public AActor
{
	GENERATED_BODY()

public:
	APropertyDelegateTest();

	UFUNCTION(BlueprintSetter)
		void SetEnabled(bool bNewEnabled);
	UFUNCTION(BlueprintGetter)
		bool GetEnabled() { return bEnabled; };

	UPROPERTY(EditAnywhere, BlueprintGetter = GetEnabled, BlueprintSetter = SetEnabled, Category = "Test")
		bool bEnabled;
		
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:

#if WITH_EDITOR
	virtual void PreEditChange(FProperty* PropertyThatWillChange) override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual void PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent) override;
#endif
};