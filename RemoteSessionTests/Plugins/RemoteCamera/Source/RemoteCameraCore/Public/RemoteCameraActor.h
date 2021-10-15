// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CineCameraActor.h"
#include "RemoteCameraOutputBase.h"
#include "RemoteCameraActor.generated.h"

class URemoteCameraComponent;

UCLASS(Abstract)
class REMOTECAMERACORE_API ARemoteCameraActor : public ACineCameraActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	//ARemoteCameraActor(const FObjectInitializer& ObjectInitializer);
	virtual void PostActorCreated() override;

private:
	UPROPERTY(EditAnywhere, Category = "Remote Camera")
		URemoteCameraComponent* RemoteCameraComponent = nullptr;

};
