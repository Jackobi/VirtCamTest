// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MyModifierInterface.generated.h"

class UVCamComponent;

UINTERFACE(MinimalAPI, BlueprintType, Blueprintable)
class UMyModifierInterface : public UInterface
{
	GENERATED_BODY()
};

/**
   The interface for all VCam modifier Blueprints to inherit so that we can enforce some common behaviors.
 */
class REMOTESESSIONTESTS_API IMyModifierInterface
{
	GENERATED_BODY()
public:
	//Function used to monitor the status of a RemoteSessionComponent. If it changed, function will be triggered.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Active Remote Session Update")
		void OnMyRemoteSessionComponentChanged(UMyRemoteSessionComponent* RemoteSessionComponent);

	virtual void OnMyRemoteSessionComponentChanged_Implementation(UMyRemoteSessionComponent* RemoteSessionComponent);
};
