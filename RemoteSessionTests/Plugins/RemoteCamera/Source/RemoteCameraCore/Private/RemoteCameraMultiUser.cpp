//

#include "RemoteCameraMultiUser.h"

#include "CineCameraComponent.h"
//#include "GameFramework/Actor.h"

FMultiUserRemoteCameraFocusData::FMultiUserRemoteCameraFocusData(const UCineCameraComponent* CineCamera)
	: ManualFocusDistance(CineCamera->CurrentFocusDistance)
	, FocusSmoothInterpSpeed(CineCamera->FocusSettings.FocusSmoothingInterpSpeed)
	, bSmoothFocusChanges(CineCamera->FocusSettings.bSmoothFocusChanges)
{}

FCameraFocusSettings FMultiUserRemoteCameraFocusData::ToCameraFocusSettings() const
{
	FCameraFocusSettings Result;
	Result.FocusMethod = ECameraFocusMethod::Manual;
	Result.ManualFocusDistance = ManualFocusDistance;
	Result.bSmoothFocusChanges = bSmoothFocusChanges;
	Result.FocusSmoothingInterpSpeed = FocusSmoothInterpSpeed;
	Result.FocusOffset = 0.0f;
	return Result;
}

FMultiUserRemoteCameraData::FMultiUserRemoteCameraData(const AActor* InOwner, const UCineCameraComponent* InCineCameraComponent)
{
	CameraActorLocation = InOwner->GetActorLocation();
	CameraActorRotation = InOwner->GetActorRotation();
	CameraComponentLocation = InCineCameraComponent->GetRelativeLocation();
	CameraComponentRotation = InCineCameraComponent->GetRelativeRotation();

	CurrentAperture = InCineCameraComponent->CurrentAperture;
	CurrentFocalLength = InCineCameraComponent->CurrentFocalLength;
	FocusSettings = FMultiUserRemoteCameraFocusData(InCineCameraComponent);

	LensSettings = InCineCameraComponent->LensSettings;

	FilmbackSettings = InCineCameraComponent->Filmback;
}

void FMultiUserRemoteCameraData::ApplyTo(AActor* InOwner, UCineCameraComponent* InCineCameraComponent) const
{
	InOwner->SetActorLocationAndRotation(CameraActorLocation, CameraActorRotation);
	InCineCameraComponent->SetRelativeLocationAndRotation(CameraComponentLocation, CameraComponentRotation);
	InCineCameraComponent->CurrentAperture = CurrentAperture;
	InCineCameraComponent->CurrentFocalLength = CurrentFocalLength;
	InCineCameraComponent->FocusSettings = FocusSettings.ToCameraFocusSettings();
	InCineCameraComponent->LensSettings = LensSettings;
	InCineCameraComponent->Filmback = FilmbackSettings;
}