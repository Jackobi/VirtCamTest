// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteCameraCore/Public/RemoteCameraMultiUser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteCameraMultiUser() {}
// Cross Module References
	REMOTECAMERACORE_API UScriptStruct* Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent();
	UPackage* Z_Construct_UPackage__Script_RemoteCameraCore();
	REMOTECAMERACORE_API UScriptStruct* Z_Construct_UScriptStruct_FMultiUserRemoteCameraData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	REMOTECAMERACORE_API UScriptStruct* Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraLensSettings();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings();
// End Cross Module References
class UScriptStruct* FMultiUserRemoteCameraComponentEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern REMOTECAMERACORE_API uint32 Get_Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent, Z_Construct_UPackage__Script_RemoteCameraCore(), TEXT("MultiUserRemoteCameraComponentEvent"), sizeof(FMultiUserRemoteCameraComponentEvent), Get_Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Hash());
	}
	return Singleton;
}
template<> REMOTECAMERACORE_API UScriptStruct* StaticStruct<FMultiUserRemoteCameraComponentEvent>()
{
	return FMultiUserRemoteCameraComponentEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiUserRemoteCameraComponentEvent(FMultiUserRemoteCameraComponentEvent::StaticStruct, TEXT("/Script/RemoteCameraCore"), TEXT("MultiUserRemoteCameraComponentEvent"), false, nullptr, nullptr);
static struct FScriptStruct_RemoteCameraCore_StaticRegisterNativesFMultiUserRemoteCameraComponentEvent
{
	FScriptStruct_RemoteCameraCore_StaticRegisterNativesFMultiUserRemoteCameraComponentEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MultiUserRemoteCameraComponentEvent")),new UScriptStruct::TCppStructOps<FMultiUserRemoteCameraComponentEvent>);
	}
} ScriptStruct_RemoteCameraCore_StaticRegisterNativesFMultiUserRemoteCameraComponentEvent;
	struct Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackingName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n*/" },
		{ "ModuleRelativePath", "Public/RemoteCameraMultiUser.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiUserRemoteCameraComponentEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Statics::NewProp_TrackingName_MetaData[] = {
		{ "Comment", "/* Name of the tracking camera */" },
		{ "ModuleRelativePath", "Public/RemoteCameraMultiUser.h" },
		{ "ToolTip", "Name of the tracking camera" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Statics::NewProp_TrackingName = { "TrackingName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiUserRemoteCameraComponentEvent, TrackingName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Statics::NewProp_TrackingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Statics::NewProp_TrackingName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Statics::NewProp_CameraData_MetaData[] = {
		{ "Comment", "/* Camera data */" },
		{ "ModuleRelativePath", "Public/RemoteCameraMultiUser.h" },
		{ "ToolTip", "Camera data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Statics::NewProp_CameraData = { "CameraData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiUserRemoteCameraComponentEvent, CameraData), Z_Construct_UScriptStruct_FMultiUserRemoteCameraData, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Statics::NewProp_CameraData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Statics::NewProp_CameraData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Statics::NewProp_TrackingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Statics::NewProp_CameraData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteCameraCore,
		nullptr,
		&NewStructOps,
		"MultiUserRemoteCameraComponentEvent",
		sizeof(FMultiUserRemoteCameraComponentEvent),
		alignof(FMultiUserRemoteCameraComponentEvent),
		Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RemoteCameraCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiUserRemoteCameraComponentEvent"), sizeof(FMultiUserRemoteCameraComponentEvent), Get_Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiUserRemoteCameraComponentEvent_Hash() { return 1988045056U; }
class UScriptStruct* FMultiUserRemoteCameraData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern REMOTECAMERACORE_API uint32 Get_Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiUserRemoteCameraData, Z_Construct_UPackage__Script_RemoteCameraCore(), TEXT("MultiUserRemoteCameraData"), sizeof(FMultiUserRemoteCameraData), Get_Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Hash());
	}
	return Singleton;
}
template<> REMOTECAMERACORE_API UScriptStruct* StaticStruct<FMultiUserRemoteCameraData>()
{
	return FMultiUserRemoteCameraData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiUserRemoteCameraData(FMultiUserRemoteCameraData::StaticStruct, TEXT("/Script/RemoteCameraCore"), TEXT("MultiUserRemoteCameraData"), false, nullptr, nullptr);
static struct FScriptStruct_RemoteCameraCore_StaticRegisterNativesFMultiUserRemoteCameraData
{
	FScriptStruct_RemoteCameraCore_StaticRegisterNativesFMultiUserRemoteCameraData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MultiUserRemoteCameraData")),new UScriptStruct::TCppStructOps<FMultiUserRemoteCameraData>);
	}
} ScriptStruct_RemoteCameraCore_StaticRegisterNativesFMultiUserRemoteCameraData;
	struct Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraActorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraActorLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraActorRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraActorRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponentLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraComponentLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponentRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraComponentRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAperture_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentAperture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFocalLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentFocalLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FocusSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LensSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmbackSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilmbackSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteCameraMultiUser.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiUserRemoteCameraData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CameraActorLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteCameraMultiUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CameraActorLocation = { "CameraActorLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiUserRemoteCameraData, CameraActorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CameraActorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CameraActorLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CameraActorRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteCameraMultiUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CameraActorRotation = { "CameraActorRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiUserRemoteCameraData, CameraActorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CameraActorRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CameraActorRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CameraComponentLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteCameraMultiUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CameraComponentLocation = { "CameraComponentLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiUserRemoteCameraData, CameraComponentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CameraComponentLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CameraComponentLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CameraComponentRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteCameraMultiUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CameraComponentRotation = { "CameraComponentRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiUserRemoteCameraData, CameraComponentRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CameraComponentRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CameraComponentRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CurrentAperture_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteCameraMultiUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CurrentAperture = { "CurrentAperture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiUserRemoteCameraData, CurrentAperture), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CurrentAperture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CurrentAperture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CurrentFocalLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteCameraMultiUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CurrentFocalLength = { "CurrentFocalLength", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiUserRemoteCameraData, CurrentFocalLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CurrentFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CurrentFocalLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_FocusSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteCameraMultiUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_FocusSettings = { "FocusSettings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiUserRemoteCameraData, FocusSettings), Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_FocusSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_FocusSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_LensSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteCameraMultiUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_LensSettings = { "LensSettings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiUserRemoteCameraData, LensSettings), Z_Construct_UScriptStruct_FCameraLensSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_LensSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_LensSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_FilmbackSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteCameraMultiUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_FilmbackSettings = { "FilmbackSettings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiUserRemoteCameraData, FilmbackSettings), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_FilmbackSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_FilmbackSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CameraActorLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CameraActorRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CameraComponentLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CameraComponentRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CurrentAperture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_CurrentFocalLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_FocusSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_LensSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::NewProp_FilmbackSettings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteCameraCore,
		nullptr,
		&NewStructOps,
		"MultiUserRemoteCameraData",
		sizeof(FMultiUserRemoteCameraData),
		alignof(FMultiUserRemoteCameraData),
		Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiUserRemoteCameraData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RemoteCameraCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiUserRemoteCameraData"), sizeof(FMultiUserRemoteCameraData), Get_Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiUserRemoteCameraData_Hash() { return 2352887734U; }
class UScriptStruct* FMultiUserRemoteCameraFocusData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern REMOTECAMERACORE_API uint32 Get_Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData, Z_Construct_UPackage__Script_RemoteCameraCore(), TEXT("MultiUserRemoteCameraFocusData"), sizeof(FMultiUserRemoteCameraFocusData), Get_Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Hash());
	}
	return Singleton;
}
template<> REMOTECAMERACORE_API UScriptStruct* StaticStruct<FMultiUserRemoteCameraFocusData>()
{
	return FMultiUserRemoteCameraFocusData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiUserRemoteCameraFocusData(FMultiUserRemoteCameraFocusData::StaticStruct, TEXT("/Script/RemoteCameraCore"), TEXT("MultiUserRemoteCameraFocusData"), false, nullptr, nullptr);
static struct FScriptStruct_RemoteCameraCore_StaticRegisterNativesFMultiUserRemoteCameraFocusData
{
	FScriptStruct_RemoteCameraCore_StaticRegisterNativesFMultiUserRemoteCameraFocusData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MultiUserRemoteCameraFocusData")),new UScriptStruct::TCppStructOps<FMultiUserRemoteCameraFocusData>);
	}
} ScriptStruct_RemoteCameraCore_StaticRegisterNativesFMultiUserRemoteCameraFocusData;
	struct Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualFocusDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ManualFocusDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusSmoothInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusSmoothInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSmoothFocusChanges_MetaData[];
#endif
		static void NewProp_bSmoothFocusChanges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSmoothFocusChanges;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//class UCineCameraComponent;\n" },
		{ "ModuleRelativePath", "Public/RemoteCameraMultiUser.h" },
		{ "ToolTip", "class UCineCameraComponent;" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiUserRemoteCameraFocusData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::NewProp_ManualFocusDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteCameraMultiUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::NewProp_ManualFocusDistance = { "ManualFocusDistance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiUserRemoteCameraFocusData, ManualFocusDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::NewProp_ManualFocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::NewProp_ManualFocusDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::NewProp_FocusSmoothInterpSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteCameraMultiUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::NewProp_FocusSmoothInterpSpeed = { "FocusSmoothInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiUserRemoteCameraFocusData, FocusSmoothInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::NewProp_FocusSmoothInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::NewProp_FocusSmoothInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::NewProp_bSmoothFocusChanges_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteCameraMultiUser.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::NewProp_bSmoothFocusChanges_SetBit(void* Obj)
	{
		((FMultiUserRemoteCameraFocusData*)Obj)->bSmoothFocusChanges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::NewProp_bSmoothFocusChanges = { "bSmoothFocusChanges", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMultiUserRemoteCameraFocusData), &Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::NewProp_bSmoothFocusChanges_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::NewProp_bSmoothFocusChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::NewProp_bSmoothFocusChanges_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::NewProp_ManualFocusDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::NewProp_FocusSmoothInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::NewProp_bSmoothFocusChanges,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteCameraCore,
		nullptr,
		&NewStructOps,
		"MultiUserRemoteCameraFocusData",
		sizeof(FMultiUserRemoteCameraFocusData),
		alignof(FMultiUserRemoteCameraFocusData),
		Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RemoteCameraCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiUserRemoteCameraFocusData"), sizeof(FMultiUserRemoteCameraFocusData), Get_Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiUserRemoteCameraFocusData_Hash() { return 4227788582U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
