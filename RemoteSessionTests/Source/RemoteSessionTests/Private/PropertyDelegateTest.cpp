#include "PropertyDelegateTest.h"

#if WITH_EDITOR
#include "IConcertModule.h"
#include "IConcertClient.h"
#include "IConcertSyncClient.h"
#include "IMultiUserClientModule.h"
#endif //WITH_EDITOR

APropertyDelegateTest::APropertyDelegateTest()
{
	PrimaryActorTick.bCanEverTick = false;

	//Don't run on class default object!
	if (!HasAnyFlags(RF_ClassDefaultObject))
	{
#if WITH_EDITOR

		MultiUserStartup();

#endif //WITH_EDITOR
	}
}

void APropertyDelegateTest::BeginDestroy()
{
#if WITH_EDITOR

	MultiUserShutdown();

#endif //WITH_EDITOR
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
void APropertyDelegateTest::SessionStartup(TSharedRef<IConcertClientSession> InSession)
{
}
void APropertyDelegateTest::SessionShutdown(TSharedRef<IConcertClientSession> InSession)
{
}
void APropertyDelegateTest::MultiUserStartup()
{
	if (TSharedPtr<IConcertSyncClient> ConcertSyncClient = IMultiUserClientModule::Get().GetClient())
	{
		IConcertClientRef ConcertClient = ConcertSyncClient->GetConcertClient();

		OnSessionStartupHandle = ConcertClient->OnSessionStartup().AddUObject(this, &APropertyDelegateTest::SessionStartup);
		OnSessionShutdownHandle = ConcertClient->OnSessionShutdown().AddUObject(this, &APropertyDelegateTest::SessionShutdown);

		TSharedPtr<IConcertClientSession> ConcertClientSession = ConcertClient->GetCurrentSession();
		if (ConcertClientSession.IsValid())
		{
			SessionStartup(ConcertClientSession.ToSharedRef());
		}
	}
}
void APropertyDelegateTest::MultiUserShutdown()
{
	if (IMultiUserClientModule::IsAvailable())
	{
		if (TSharedPtr<IConcertSyncClient> ConcertSyncClient = IMultiUserClientModule::Get().GetClient())
		{
			IConcertClientRef ConcertClient = ConcertSyncClient->GetConcertClient();

			TSharedPtr<IConcertClientSession> ConcertClientSession = ConcertClient->GetCurrentSession();
			if (ConcertClientSession.IsValid())
			{
				SessionShutdown(ConcertClientSession.ToSharedRef());
			}

			ConcertClient->OnSessionStartup().Remove(OnSessionStartupHandle);
			OnSessionStartupHandle.Reset();

			ConcertClient->OnSessionShutdown().Remove(OnSessionShutdownHandle);
			OnSessionShutdownHandle.Reset();
		}
	}
}
#endif //WITH_EDITOR