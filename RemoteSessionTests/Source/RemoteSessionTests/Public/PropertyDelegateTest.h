//Copyright

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "PropertyDelegateTest.generated.h"

class IConcertClientSession;

UCLASS(Blueprintable, BlueprintType)
class REMOTESESSIONTESTS_API APropertyDelegateTest : public AActor
{
	GENERATED_BODY()

public:
	APropertyDelegateTest();

	//virtual void BeginDestroy() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UFUNCTION(BlueprintSetter)
		void SetEnabled(bool bNewEnabled);
	UFUNCTION(BlueprintGetter)
		bool GetEnabled() { return bEnabled; };

	UPROPERTY(EditAnywhere, BlueprintGetter = GetEnabled, BlueprintSetter = SetEnabled, Category = "Test")
		bool bEnabled;
	UPROPERTY(EditAnywhere, Category = "Test")
		bool bOtherTest;
	UPROPERTY(EditAnywhere)
		FGameplayTag TestRole;

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void HandleDestruction();

	bool DoRolesMatch() const;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:

#if WITH_EDITOR
	void OnMapChanged(UWorld* World, EMapChangeType ChangeType);

	virtual void PreEditChange(FProperty* PropertyThatWillChange) override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual void PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent) override;

	/* Concert Functions */
	void SessionStartup(TSharedRef<IConcertClientSession> InSession);
	void SessionShutdown(TSharedRef<IConcertClientSession> InSession);

	void MultiUserStartup();
	void MultiUserShutdown();

	FDelegateHandle OnSessionStartupHandle;
	FDelegateHandle OnSessionShutdownHandle;
	TWeakPtr<IConcertClientSession> WeakSession;
	/* End Concert Functions */

#endif
};