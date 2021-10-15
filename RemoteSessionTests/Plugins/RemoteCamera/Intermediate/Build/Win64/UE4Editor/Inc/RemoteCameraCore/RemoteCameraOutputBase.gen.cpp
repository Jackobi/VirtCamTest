// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteCameraCore/Public/RemoteCameraOutputBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteCameraOutputBase() {}
// Cross Module References
	REMOTECAMERACORE_API UClass* Z_Construct_UClass_URemoteCameraOutputBase_NoRegister();
	REMOTECAMERACORE_API UClass* Z_Construct_UClass_URemoteCameraOutputBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RemoteCameraCore();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	REMOTECAMERAUTILITIES_API UClass* Z_Construct_UClass_URemoteCameraUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URemoteCameraOutputBase::execSetUMGClass)
	{
		P_GET_OBJECT(UClass,Z_Param_InUMGClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUMGClass(Z_Param_InUMGClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteCameraOutputBase::execSetTargetCamera)
	{
		P_GET_OBJECT(UCineCameraComponent,Z_Param_InTargetCamera);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetCamera(Z_Param_InTargetCamera);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteCameraOutputBase::execIsInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInitialized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteCameraOutputBase::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteCameraOutputBase::execSetActive)
	{
		P_GET_UBOOL(Z_Param_bInIsActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActive(Z_Param_bInIsActive);
		P_NATIVE_END;
	}
	void URemoteCameraOutputBase::StaticRegisterNativesURemoteCameraOutputBase()
	{
		UClass* Class = URemoteCameraOutputBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsActive", &URemoteCameraOutputBase::execIsActive },
			{ "IsInitialized", &URemoteCameraOutputBase::execIsInitialized },
			{ "SetActive", &URemoteCameraOutputBase::execSetActive },
			{ "SetTargetCamera", &URemoteCameraOutputBase::execSetTargetCamera },
			{ "SetUMGClass", &URemoteCameraOutputBase::execSetUMGClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URemoteCameraOutputBase_IsActive_Statics
	{
		struct RemoteCameraOutputBase_eventIsActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URemoteCameraOutputBase_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteCameraOutputBase_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteCameraOutputBase_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteCameraOutputBase_eventIsActive_Parms), &Z_Construct_UFunction_URemoteCameraOutputBase_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteCameraOutputBase_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraOutputBase_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraOutputBase_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Output" },
		{ "Comment", "// Returns if this output provider is currently active or not\n" },
		{ "ModuleRelativePath", "Public/RemoteCameraOutputBase.h" },
		{ "ToolTip", "Returns if this output provider is currently active or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteCameraOutputBase_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteCameraOutputBase, nullptr, "IsActive", nullptr, nullptr, sizeof(RemoteCameraOutputBase_eventIsActive_Parms), Z_Construct_UFunction_URemoteCameraOutputBase_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraOutputBase_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraOutputBase_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraOutputBase_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteCameraOutputBase_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteCameraOutputBase_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteCameraOutputBase_IsInitialized_Statics
	{
		struct RemoteCameraOutputBase_eventIsInitialized_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URemoteCameraOutputBase_IsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteCameraOutputBase_eventIsInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteCameraOutputBase_IsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteCameraOutputBase_eventIsInitialized_Parms), &Z_Construct_UFunction_URemoteCameraOutputBase_IsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteCameraOutputBase_IsInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraOutputBase_IsInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraOutputBase_IsInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Output" },
		{ "Comment", "// Returns if this output provider has been initialized or not\n" },
		{ "ModuleRelativePath", "Public/RemoteCameraOutputBase.h" },
		{ "ToolTip", "Returns if this output provider has been initialized or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteCameraOutputBase_IsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteCameraOutputBase, nullptr, "IsInitialized", nullptr, nullptr, sizeof(RemoteCameraOutputBase_eventIsInitialized_Parms), Z_Construct_UFunction_URemoteCameraOutputBase_IsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraOutputBase_IsInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraOutputBase_IsInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraOutputBase_IsInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteCameraOutputBase_IsInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteCameraOutputBase_IsInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteCameraOutputBase_SetActive_Statics
	{
		struct RemoteCameraOutputBase_eventSetActive_Parms
		{
			bool bInIsActive;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInIsActive_MetaData[];
#endif
		static void NewProp_bInIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraOutputBase_SetActive_Statics::NewProp_bInIsActive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_URemoteCameraOutputBase_SetActive_Statics::NewProp_bInIsActive_SetBit(void* Obj)
	{
		((RemoteCameraOutputBase_eventSetActive_Parms*)Obj)->bInIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteCameraOutputBase_SetActive_Statics::NewProp_bInIsActive = { "bInIsActive", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteCameraOutputBase_eventSetActive_Parms), &Z_Construct_UFunction_URemoteCameraOutputBase_SetActive_Statics::NewProp_bInIsActive_SetBit, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraOutputBase_SetActive_Statics::NewProp_bInIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraOutputBase_SetActive_Statics::NewProp_bInIsActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteCameraOutputBase_SetActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraOutputBase_SetActive_Statics::NewProp_bInIsActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraOutputBase_SetActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/RemoteCameraOutputBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteCameraOutputBase_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteCameraOutputBase, nullptr, "SetActive", nullptr, nullptr, sizeof(RemoteCameraOutputBase_eventSetActive_Parms), Z_Construct_UFunction_URemoteCameraOutputBase_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraOutputBase_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraOutputBase_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraOutputBase_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteCameraOutputBase_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteCameraOutputBase_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteCameraOutputBase_SetTargetCamera_Statics
	{
		struct RemoteCameraOutputBase_eventSetTargetCamera_Parms
		{
			const UCineCameraComponent* InTargetCamera;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTargetCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InTargetCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraOutputBase_SetTargetCamera_Statics::NewProp_InTargetCamera_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URemoteCameraOutputBase_SetTargetCamera_Statics::NewProp_InTargetCamera = { "InTargetCamera", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteCameraOutputBase_eventSetTargetCamera_Parms, InTargetCamera), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraOutputBase_SetTargetCamera_Statics::NewProp_InTargetCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraOutputBase_SetTargetCamera_Statics::NewProp_InTargetCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteCameraOutputBase_SetTargetCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraOutputBase_SetTargetCamera_Statics::NewProp_InTargetCamera,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraOutputBase_SetTargetCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Output" },
		{ "Comment", "// Sets the TargetCamera parameter\n" },
		{ "ModuleRelativePath", "Public/RemoteCameraOutputBase.h" },
		{ "ToolTip", "Sets the TargetCamera parameter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteCameraOutputBase_SetTargetCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteCameraOutputBase, nullptr, "SetTargetCamera", nullptr, nullptr, sizeof(RemoteCameraOutputBase_eventSetTargetCamera_Parms), Z_Construct_UFunction_URemoteCameraOutputBase_SetTargetCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraOutputBase_SetTargetCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraOutputBase_SetTargetCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraOutputBase_SetTargetCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteCameraOutputBase_SetTargetCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteCameraOutputBase_SetTargetCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteCameraOutputBase_SetUMGClass_Statics
	{
		struct RemoteCameraOutputBase_eventSetUMGClass_Parms
		{
			const TSubclassOf<UUserWidget>  InUMGClass;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InUMGClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InUMGClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraOutputBase_SetUMGClass_Statics::NewProp_InUMGClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URemoteCameraOutputBase_SetUMGClass_Statics::NewProp_InUMGClass = { "InUMGClass", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteCameraOutputBase_eventSetUMGClass_Parms, InUMGClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraOutputBase_SetUMGClass_Statics::NewProp_InUMGClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraOutputBase_SetUMGClass_Statics::NewProp_InUMGClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteCameraOutputBase_SetUMGClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraOutputBase_SetUMGClass_Statics::NewProp_InUMGClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraOutputBase_SetUMGClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Output" },
		{ "Comment", "// Sets the UMG class to be rendered in this output provider\n" },
		{ "ModuleRelativePath", "Public/RemoteCameraOutputBase.h" },
		{ "ToolTip", "Sets the UMG class to be rendered in this output provider" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteCameraOutputBase_SetUMGClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteCameraOutputBase, nullptr, "SetUMGClass", nullptr, nullptr, sizeof(RemoteCameraOutputBase_eventSetUMGClass_Parms), Z_Construct_UFunction_URemoteCameraOutputBase_SetUMGClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraOutputBase_SetUMGClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraOutputBase_SetUMGClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraOutputBase_SetUMGClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteCameraOutputBase_SetUMGClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteCameraOutputBase_SetUMGClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URemoteCameraOutputBase_NoRegister()
	{
		return URemoteCameraOutputBase::StaticClass();
	}
	struct Z_Construct_UClass_URemoteCameraOutputBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UMGClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UMGClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseOverrideResolution_MetaData[];
#endif
		static void NewProp_bUseOverrideResolution_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseOverrideResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverrideResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[];
#endif
		static void NewProp_bInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UMGWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UMGWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteCameraOutputBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteCameraCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URemoteCameraOutputBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URemoteCameraOutputBase_IsActive, "IsActive" }, // 1055073640
		{ &Z_Construct_UFunction_URemoteCameraOutputBase_IsInitialized, "IsInitialized" }, // 3641674390
		{ &Z_Construct_UFunction_URemoteCameraOutputBase_SetActive, "SetActive" }, // 3458027429
		{ &Z_Construct_UFunction_URemoteCameraOutputBase_SetTargetCamera, "SetTargetCamera" }, // 3407016475
		{ &Z_Construct_UFunction_URemoteCameraOutputBase_SetUMGClass, "SetUMGClass" }, // 4036011843
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraOutputBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "RemoteCameraOutputBase.h" },
		{ "ModuleRelativePath", "Public/RemoteCameraOutputBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_UMGClass_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "// The UMG class to be rendered in this output provider\n" },
		{ "ModuleRelativePath", "Public/RemoteCameraOutputBase.h" },
		{ "ToolTip", "The UMG class to be rendered in this output provider" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_UMGClass = { "UMGClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteCameraOutputBase, UMGClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_UMGClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_UMGClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_bUseOverrideResolution_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "// Override the default output resolution with a custom value - NOTE you must toggle bIsActive off then back on for this to take effect\n" },
		{ "ModuleRelativePath", "Public/RemoteCameraOutputBase.h" },
		{ "ToolTip", "Override the default output resolution with a custom value - NOTE you must toggle bIsActive off then back on for this to take effect" },
	};
#endif
	void Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_bUseOverrideResolution_SetBit(void* Obj)
	{
		((URemoteCameraOutputBase*)Obj)->bUseOverrideResolution = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_bUseOverrideResolution = { "bUseOverrideResolution", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URemoteCameraOutputBase), &Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_bUseOverrideResolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_bUseOverrideResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_bUseOverrideResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_OverrideResolution_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "// When bUseOverrideResolution is set, use this custom resolution\n" },
		{ "ModuleRelativePath", "Public/RemoteCameraOutputBase.h" },
		{ "ToolTip", "When bUseOverrideResolution is set, use this custom resolution" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_OverrideResolution = { "OverrideResolution", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteCameraOutputBase, OverrideResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_OverrideResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_OverrideResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "// If set, this output provider will execute every frame\n" },
		{ "ModuleRelativePath", "Public/RemoteCameraOutputBase.h" },
		{ "ToolTip", "If set, this output provider will execute every frame" },
	};
#endif
	void Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((URemoteCameraOutputBase*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URemoteCameraOutputBase), &Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_bIsActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_bInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteCameraOutputBase.h" },
	};
#endif
	void Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_bInitialized_SetBit(void* Obj)
	{
		((URemoteCameraOutputBase*)Obj)->bInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_bInitialized = { "bInitialized", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URemoteCameraOutputBase), &Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_bInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_bInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_bInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_UMGWidget_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteCameraOutputBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_UMGWidget = { "UMGWidget", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteCameraOutputBase, UMGWidget), Z_Construct_UClass_URemoteCameraUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_UMGWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_UMGWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteCameraOutputBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_UMGClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_bUseOverrideResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_OverrideResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_bIsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_bInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraOutputBase_Statics::NewProp_UMGWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteCameraOutputBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteCameraOutputBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URemoteCameraOutputBase_Statics::ClassParams = {
		&URemoteCameraOutputBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URemoteCameraOutputBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraOutputBase_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteCameraOutputBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraOutputBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteCameraOutputBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URemoteCameraOutputBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URemoteCameraOutputBase, 869003718);
	template<> REMOTECAMERACORE_API UClass* StaticClass<URemoteCameraOutputBase>()
	{
		return URemoteCameraOutputBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URemoteCameraOutputBase(Z_Construct_UClass_URemoteCameraOutputBase, &URemoteCameraOutputBase::StaticClass, TEXT("/Script/RemoteCameraCore"), TEXT("URemoteCameraOutputBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteCameraOutputBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
