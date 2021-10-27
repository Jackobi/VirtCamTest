#include "PropertyDelegateTest.h"

#if WITH_EDITOR
#include "IConcertModule.h"
#include "IConcertClient.h"
#include "IConcertSyncClient.h"
#include "IMultiUserClientModule.h"

#include "VPSettings.h"
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

//void APropertyDelegateTest::BeginDestroy()
//{
//	HandleDestruction();
//}

void APropertyDelegateTest::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	HandleDestruction();
}

void APropertyDelegateTest::SetEnabled(bool bNewEnabled)
{
	UE_LOG(LogTemp, Log, TEXT("Set Enabled function"));
	bEnabled = bNewEnabled;
}

void APropertyDelegateTest::HandleDestruction()
{
	UE_LOG(LogTemp, Log, TEXT("Handle destruction"));

#if WITH_EDITOR

	MultiUserShutdown();

#endif //WITH_EDITOR
}
bool APropertyDelegateTest::DoRolesMatch() const
{
#if WITH_EDITOR
	UVPSettings* Settings = UVPSettings::GetVPSettings();
	// We are in a valid camera role if the user has not assigned a role or the current VPSettings role matches the
	// assigned role.
	return !TestRole.IsValid() || Settings->GetRoles().HasTag(TestRole);
#else
	return true;
#endif
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
void APropertyDelegateTest::OnMapChanged(UWorld* World, EMapChangeType ChangeType)
{
	UWorld* ComponentWorld = GetWorld();
	if (World == ComponentWorld && ChangeType == EMapChangeType::TearDownWorld)
	{
		HandleDestruction();
	}
}

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
	if (DoRolesMatch())
	{
		UE_LOG(LogTemp, Log, TEXT("Roles match!"));
	}
	else
	{

		UE_LOG(LogTemp, Warning, TEXT("Roles don't match!"));
	}

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
	WeakSession = InSession;
}

void APropertyDelegateTest::SessionShutdown(TSharedRef<IConcertClientSession> InSession)
{
	WeakSession.Reset();
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
	UE_LOG(LogTemp, Log, TEXT("Shutting down multi-user client"));

	if (IMultiUserClientModule::IsAvailable())
	{
		UE_LOG(LogTemp, Log, TEXT("Client module is available"));
		if (TSharedPtr<IConcertSyncClient> ConcertSyncClient = IMultiUserClientModule::Get().GetClient())
		{
			UE_LOG(LogTemp, Log, TEXT("Concert Sync retrieved"));
			IConcertClientRef ConcertClient = ConcertSyncClient->GetConcertClient();
			UE_LOG(LogTemp, Log, TEXT("Concert client was retrieved"));
			TSharedPtr<IConcertClientSession> ConcertClientSession = ConcertClient->GetCurrentSession();
			UE_LOG(LogTemp, Log, TEXT("Concert session was retrieved")); 
			if (ConcertClientSession.IsValid())
			{
				UE_LOG(LogTemp, Log, TEXT("Concert session is valid, calling session shutdown directly..."));
				SessionShutdown(ConcertClientSession.ToSharedRef());
			}
			ConcertClient->OnSessionStartup().Remove(OnSessionStartupHandle);
			OnSessionStartupHandle.Reset();
			UE_LOG(LogTemp, Log, TEXT("Removed session startup handle"));
			ConcertClient->OnSessionShutdown().Remove(OnSessionShutdownHandle);
			OnSessionShutdownHandle.Reset();
			UE_LOG(LogTemp, Log, TEXT("Removed session shutdown handle"));
		}
	}
}
#endif //WITH_EDITOR