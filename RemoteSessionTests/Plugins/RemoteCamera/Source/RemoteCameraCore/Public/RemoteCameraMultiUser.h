//

#pragma once

#include "CoreMinimal.h"
#include "CineCameraComponent.h"
#include "UObject/ObjectMacros.h"

#include "RemoteCameraMultiUser.generated.h"

struct FConcertSessionContext;
class IConcertClientSession;
//class UCineCameraComponent;

USTRUCT()
struct FMultiUserRemoteCameraFocusData
{
	GENERATED_BODY()
public:
	
	FMultiUserRemoteCameraFocusData() = default;
	FMultiUserRemoteCameraFocusData(const UCineCameraComponent* InCineCameraComponent);

	FCameraFocusSettings ToCameraFocusSettings() const;

	UPROPERTY()
		float ManualFocusDistance = 100000.0f;
	UPROPERTY()
		float FocusSmoothInterpSpeed = 8.0f;
	UPROPERTY()
		bool bSmoothFocusChanges = false;	
};

USTRUCT()
struct FMultiUserRemoteCameraData
{
	GENERATED_BODY()
public:
	FMultiUserRemoteCameraData()
		: CameraActorLocation(FVector::ZeroVector)
		, CameraActorRotation(FRotator::ZeroRotator)
		, CameraComponentLocation(FVector::ZeroVector)
		, CameraComponentRotation(FRotator::ZeroRotator)
		, CurrentAperture(0.0f)
		, CurrentFocalLength(0.0f)
	{}
	FMultiUserRemoteCameraData(const AActor* InOwner, const UCineCameraComponent* InCineCameraComponent);

	void ApplyTo(AActor* InOwner, UCineCameraComponent* InCineCameraComponent) const;

	UPROPERTY()
		FVector CameraActorLocation;
	UPROPERTY()
		FRotator CameraActorRotation;
	UPROPERTY()
		FVector CameraComponentLocation;
	UPROPERTY()
		FRotator CameraComponentRotation;

	UPROPERTY()
		float CurrentAperture;
	UPROPERTY()
		float CurrentFocalLength;
	UPROPERTY()
		FMultiUserRemoteCameraFocusData FocusSettings;
	UPROPERTY()
		FCameraLensSettings LensSettings;
	UPROPERTY()
		FCameraFilmbackSettings FilmbackSettings;
};

/*
*/
USTRUCT()
struct FMultiUserRemoteCameraComponentEvent
{
	GENERATED_BODY()
public:
	/* Name of the tracking camera */
	UPROPERTY()
		FString TrackingName;
	/* Camera data */
	UPROPERTY()
		FMultiUserRemoteCameraData CameraData;
};