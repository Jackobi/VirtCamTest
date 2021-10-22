#include "PropertyDelegateTest.h"

APropertyDelegateTest::APropertyDelegateTest()
{
	PrimaryActorTick.bCanEverTick = false;
}

void APropertyDelegateTest::SetEnabled(bool bNewEnabled)
{
	UE_LOG(LogTemp, Log, TEXT("Set Enabled function"));
	bEnabled = bNewEnabled;
}

void APropertyDelegateTest::BeginPlay()
{
	Super::BeginPlay();
}

void APropertyDelegateTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

#if WITH_EDITOR
void APropertyDelegateTest::PreEditChange(FProperty* PropertyThatWillChange)
{
	if (PropertyThatWillChange)
	{
		const FName PropertyName = PropertyThatWillChange->GetFName();

		UE_LOG(LogTemp, Log, TEXT("Pre Edit Change, PropertyName: %s"), *PropertyName.ToString());

		const FName NAME_Enabled = GET_MEMBER_NAME_CHECKED(APropertyDelegateTest, bEnabled);
		
		if (PropertyName == NAME_Enabled)
		{
			UE_LOG(LogTemp, Log, TEXT("Changing enabled state..."));

			void* PropertyData = PropertyThatWillChange->ContainerPtrToValuePtr<void>(this);
			bool bWasEnabled = false;
			PropertyThatWillChange->CopySingleValue(&bWasEnabled, PropertyData);

			SetEnabled(!bWasEnabled);
		}
	}

	Super::PreEditChange(PropertyThatWillChange);
}

void APropertyDelegateTest::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	FProperty* Property = PropertyChangedEvent.MemberProperty;
	if (Property && PropertyChangedEvent.ChangeType != EPropertyChangeType::Interactive)
	{
		const FName PropertyName = Property->GetFName();

		UE_LOG(LogTemp, Log, TEXT("Post Edit Change, PropertyName: %s"), *PropertyName.ToString());

		const FName NAME_Enabled = GET_MEMBER_NAME_CHECKED(APropertyDelegateTest, bEnabled);

		if (PropertyName == NAME_Enabled)
		{
			if (!Property->GetOwner<UClass>())
			{
				UE_LOG(LogTemp, Log, TEXT("Changing enabled state..."));
				SetEnabled(bEnabled);
			}
		}
	}
	
	Super::PostEditChangeProperty(PropertyChangedEvent);
}

void APropertyDelegateTest::PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent)
{
	//Handles property changes within properties (structs, editInLine, etc.)
	FProperty* Property = PropertyChangedEvent.PropertyChain.GetActiveNode()->GetValue();
	const FName PropertyName = Property->GetFName();
	UE_LOG(LogTemp, Log, TEXT("Post Edit Change Chain, PropertyName: %s"), *PropertyName.ToString());
	Super::PostEditChangeChainProperty(PropertyChangedEvent);
}
#endif //WITH_EDITOR