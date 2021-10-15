//

#include "MyModifierInterface.h"
#include "MyRemoteSessionComponent.h"

//Default fallback implementation
void IMyModifierInterface::OnMyRemoteSessionComponentChanged_Implementation(UMyRemoteSessionComponent* RemoteSessionComponent)
{
	UE_LOG(LogMyRemoteSession, Warning, TEXT("The default function for OnMyRemoteSessionComponentChanged. New component is: %s"), *RemoteSessionComponent->GetName());
}