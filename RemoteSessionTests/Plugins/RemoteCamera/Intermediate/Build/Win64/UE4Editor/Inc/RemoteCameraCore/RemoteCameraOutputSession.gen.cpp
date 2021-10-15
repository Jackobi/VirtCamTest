// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteCameraCore/Public/RemoteCameraOutputSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteCameraOutputSession() {}
// Cross Module References
	REMOTECAMERACORE_API UClass* Z_Construct_UClass_URemoteCameraOutputSession_NoRegister();
	REMOTECAMERACORE_API UClass* Z_Construct_UClass_URemoteCameraOutputSession();
	REMOTECAMERACORE_API UClass* Z_Construct_UClass_URemoteCameraOutputBase();
	UPackage* Z_Construct_UPackage__Script_RemoteCameraCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	REMOTESESSION_API UClass* Z_Construct_UClass_URemoteSessionMediaOutput_NoRegister();
	REMOTESESSION_API UClass* Z_Construct_UClass_URemoteSessionMediaCapture_NoRegister();
// End Cross Module References
	void URemoteCameraOutputSession::StaticRegisterNativesURemoteCameraOutputSession()
	{
	}
	UClass* Z_Construct_UClass_URemoteCameraOutputSession_NoRegister()
	{
		return URemoteCameraOutputSession::StaticClass();
	}
	struct Z_Construct_UClass_URemoteCameraOutputSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PortNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDummyUMGClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultDummyUMGClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaOutput_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaOutput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaCapture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaCapture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteCameraOutputSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URemoteCameraOutputBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteCameraCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraOutputSession_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RemoteCameraOutputSession.h" },
		{ "ModuleRelativePath", "Public/RemoteCameraOutputSession.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraOutputSession_Statics::NewProp_PortNumber_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "// Network port number - change this only if connecting multiple RemoteSession devices to the same PC\n" },
		{ "ModuleRelativePath", "Public/RemoteCameraOutputSession.h" },
		{ "ToolTip", "Network port number - change this only if connecting multiple RemoteSession devices to the same PC" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemoteCameraOutputSession_Statics::NewProp_PortNumber = { "PortNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteCameraOutputSession, PortNumber), METADATA_PARAMS(Z_Construct_UClass_URemoteCameraOutputSession_Statics::NewProp_PortNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraOutputSession_Statics::NewProp_PortNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraOutputSession_Statics::NewProp_DefaultDummyUMGClass_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "// The default dummy UMG to use when we haven't selected any particular widget;\n" },
		{ "ModuleRelativePath", "Public/RemoteCameraOutputSession.h" },
		{ "ToolTip", "The default dummy UMG to use when we haven't selected any particular widget;" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_URemoteCameraOutputSession_Statics::NewProp_DefaultDummyUMGClass = { "DefaultDummyUMGClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteCameraOutputSession, DefaultDummyUMGClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraOutputSession_Statics::NewProp_DefaultDummyUMGClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraOutputSession_Statics::NewProp_DefaultDummyUMGClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraOutputSession_Statics::NewProp_MediaOutput_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteCameraOutputSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URemoteCameraOutputSession_Statics::NewProp_MediaOutput = { "MediaOutput", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteCameraOutputSession, MediaOutput), Z_Construct_UClass_URemoteSessionMediaOutput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraOutputSession_Statics::NewProp_MediaOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraOutputSession_Statics::NewProp_MediaOutput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraOutputSession_Statics::NewProp_MediaCapture_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteCameraOutputSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URemoteCameraOutputSession_Statics::NewProp_MediaCapture = { "MediaCapture", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteCameraOutputSession, MediaCapture), Z_Construct_UClass_URemoteSessionMediaCapture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraOutputSession_Statics::NewProp_MediaCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraOutputSession_Statics::NewProp_MediaCapture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteCameraOutputSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraOutputSession_Statics::NewProp_PortNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraOutputSession_Statics::NewProp_DefaultDummyUMGClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraOutputSession_Statics::NewProp_MediaOutput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraOutputSession_Statics::NewProp_MediaCapture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteCameraOutputSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteCameraOutputSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URemoteCameraOutputSession_Statics::ClassParams = {
		&URemoteCameraOutputSession::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URemoteCameraOutputSession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraOutputSession_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteCameraOutputSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraOutputSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteCameraOutputSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URemoteCameraOutputSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URemoteCameraOutputSession, 3359914593);
	template<> REMOTECAMERACORE_API UClass* StaticClass<URemoteCameraOutputSession>()
	{
		return URemoteCameraOutputSession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URemoteCameraOutputSession(Z_Construct_UClass_URemoteCameraOutputSession, &URemoteCameraOutputSession::StaticClass, TEXT("/Script/RemoteCameraCore"), TEXT("URemoteCameraOutputSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteCameraOutputSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
