// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteCameraCore/Public/RemoteCameraActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteCameraActor() {}
// Cross Module References
	REMOTECAMERACORE_API UClass* Z_Construct_UClass_ARemoteCameraActor_NoRegister();
	REMOTECAMERACORE_API UClass* Z_Construct_UClass_ARemoteCameraActor();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor();
	UPackage* Z_Construct_UPackage__Script_RemoteCameraCore();
	REMOTECAMERACORE_API UClass* Z_Construct_UClass_URemoteCameraComponent_NoRegister();
// End Cross Module References
	void ARemoteCameraActor::StaticRegisterNativesARemoteCameraActor()
	{
	}
	UClass* Z_Construct_UClass_ARemoteCameraActor_NoRegister()
	{
		return ARemoteCameraActor::StaticClass();
	}
	struct Z_Construct_UClass_ARemoteCameraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemoteCameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARemoteCameraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACineCameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteCameraCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARemoteCameraActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Rendering AutoPlayerActivation Input Rendering" },
		{ "IncludePath", "RemoteCameraActor.h" },
		{ "ModuleRelativePath", "Public/RemoteCameraActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARemoteCameraActor_Statics::NewProp_RemoteCameraComponent_MetaData[] = {
		{ "Category", "Remote Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RemoteCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARemoteCameraActor_Statics::NewProp_RemoteCameraComponent = { "RemoteCameraComponent", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARemoteCameraActor, RemoteCameraComponent), Z_Construct_UClass_URemoteCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARemoteCameraActor_Statics::NewProp_RemoteCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARemoteCameraActor_Statics::NewProp_RemoteCameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARemoteCameraActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARemoteCameraActor_Statics::NewProp_RemoteCameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARemoteCameraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARemoteCameraActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARemoteCameraActor_Statics::ClassParams = {
		&ARemoteCameraActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARemoteCameraActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARemoteCameraActor_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ARemoteCameraActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARemoteCameraActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARemoteCameraActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARemoteCameraActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARemoteCameraActor, 3890758027);
	template<> REMOTECAMERACORE_API UClass* StaticClass<ARemoteCameraActor>()
	{
		return ARemoteCameraActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARemoteCameraActor(Z_Construct_UClass_ARemoteCameraActor, &ARemoteCameraActor::StaticClass, TEXT("/Script/RemoteCameraCore"), TEXT("ARemoteCameraActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARemoteCameraActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
