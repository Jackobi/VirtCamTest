// Fill out your copyright notice in the Description page of Project Settings.


#include "RemoteCameraActor.h"
#include "RemoteCameraComponent.h"

// Sets default values
//ARemoteCameraActor::ARemoteCameraActor(const FObjectInitializer& ObjectInitializer)
//	: ACineCameraActor(ObjectInitializer)
//{
//	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//	PrimaryActorTick.bCanEverTick = true;
//
//	if (!HasAnyFlags(RF_ClassDefaultObject))
//	{
//		RemoteCameraComponent = CreateDefaultSubobject<URemoteCameraComponent>("Remote Camera Component");
//		RemoteCameraComponent->SetupAttachment(GetCameraComponent());
//	}
//}


void ARemoteCameraActor::PostActorCreated()
{
	Super::PostActorCreated();

	// Don't run on CDO
	if (!HasAnyFlags(RF_ClassDefaultObject))
	{
		RemoteCameraComponent = NewObject<URemoteCameraComponent>(this, TEXT("Remote Camera Component"));
		if (RemoteCameraComponent)
		{
			//RemoteCameraComponent->AttachToComponent(GetCineCameraComponent(), FAttachmentTransformRules::KeepRelativeTransform);
			RemoteCameraComponent->RegisterComponent();
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("RemoteCameraActor - unable to create Remote Camera Component"));
		}
	}
}
