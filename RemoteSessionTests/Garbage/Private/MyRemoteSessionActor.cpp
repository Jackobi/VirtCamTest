// Fill out your copyright notice in the Description page of Project Settings.


#include "MyRemoteSessionActor.h"
#include "MyRemoteSessionComponent.h"

// Sets default values
AMyRemoteSessionActor::AMyRemoteSessionActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!HasAnyFlags(RF_ClassDefaultObject))
	{
		RemoteSessionComponent = CreateDefaultSubobject<UMyRemoteSessionComponent>("Remote Session Component");
	}

}

// Called when the game starts or when spawned
void AMyRemoteSessionActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyRemoteSessionActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

