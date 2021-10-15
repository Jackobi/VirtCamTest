// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteCameraCore/Public/RemoteCameraComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteCameraComponent() {}
// Cross Module References
	REMOTECAMERACORE_API UFunction* Z_Construct_UDelegateFunction_RemoteCameraCore_OnComponentReplaced__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RemoteCameraCore();
	REMOTECAMERACORE_API UClass* Z_Construct_UClass_URemoteCameraComponent_NoRegister();
	REMOTECAMERACORE_API UEnum* Z_Construct_UEnum_RemoteCameraCore_ERCTargetViewportID();
	REMOTECAMERACORE_API UClass* Z_Construct_UClass_URemoteCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	REMOTECAMERACORE_API UClass* Z_Construct_UClass_URemoteCameraOutputBase_NoRegister();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RemoteCameraCore_OnComponentReplaced__DelegateSignature_Statics
	{
		struct _Script_RemoteCameraCore_eventOnComponentReplaced_Parms
		{
			URemoteCameraComponent* NewComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RemoteCameraCore_OnComponentReplaced__DelegateSignature_Statics::NewProp_NewComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RemoteCameraCore_OnComponentReplaced__DelegateSignature_Statics::NewProp_NewComponent = { "NewComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RemoteCameraCore_eventOnComponentReplaced_Parms, NewComponent), Z_Construct_UClass_URemoteCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_RemoteCameraCore_OnComponentReplaced__DelegateSignature_Statics::NewProp_NewComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RemoteCameraCore_OnComponentReplaced__DelegateSignature_Statics::NewProp_NewComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RemoteCameraCore_OnComponentReplaced__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RemoteCameraCore_OnComponentReplaced__DelegateSignature_Statics::NewProp_NewComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RemoteCameraCore_OnComponentReplaced__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RemoteCameraCore_OnComponentReplaced__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RemoteCameraCore, nullptr, "OnComponentReplaced__DelegateSignature", nullptr, nullptr, sizeof(_Script_RemoteCameraCore_eventOnComponentReplaced_Parms), Z_Construct_UDelegateFunction_RemoteCameraCore_OnComponentReplaced__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RemoteCameraCore_OnComponentReplaced__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RemoteCameraCore_OnComponentReplaced__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RemoteCameraCore_OnComponentReplaced__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RemoteCameraCore_OnComponentReplaced__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RemoteCameraCore_OnComponentReplaced__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ERCTargetViewportID_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RemoteCameraCore_ERCTargetViewportID, Z_Construct_UPackage__Script_RemoteCameraCore(), TEXT("ERCTargetViewportID"));
		}
		return Singleton;
	}
	template<> REMOTECAMERACORE_API UEnum* StaticEnum<ERCTargetViewportID>()
	{
		return ERCTargetViewportID_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERCTargetViewportID(ERCTargetViewportID_StaticEnum, TEXT("/Script/RemoteCameraCore"), TEXT("ERCTargetViewportID"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RemoteCameraCore_ERCTargetViewportID_Hash() { return 2184294917U; }
	UEnum* Z_Construct_UEnum_RemoteCameraCore_ERCTargetViewportID()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RemoteCameraCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERCTargetViewportID"), 0, Get_Z_Construct_UEnum_RemoteCameraCore_ERCTargetViewportID_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERCTargetViewportID::CurrentlySelected", (int64)ERCTargetViewportID::CurrentlySelected },
				{ "ERCTargetViewportID::Viewport1", (int64)ERCTargetViewportID::Viewport1 },
				{ "ERCTargetViewportID::Viewport2", (int64)ERCTargetViewportID::Viewport2 },
				{ "ERCTargetViewportID::Viewport3", (int64)ERCTargetViewportID::Viewport3 },
				{ "ERCTargetViewportID::Viewport4", (int64)ERCTargetViewportID::Viewport4 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CurrentlySelected.Name", "ERCTargetViewportID::CurrentlySelected" },
				{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
				{ "Viewport1.Name", "ERCTargetViewportID::Viewport1" },
				{ "Viewport2.Name", "ERCTargetViewportID::Viewport2" },
				{ "Viewport3.Name", "ERCTargetViewportID::Viewport3" },
				{ "Viewport4.Name", "ERCTargetViewportID::Viewport4" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RemoteCameraCore,
				nullptr,
				"ERCTargetViewportID",
				"ERCTargetViewportID",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(URemoteCameraComponent::execGetLiveLinkDataForCurrentFrame)
	{
		P_GET_STRUCT_REF(FLiveLinkCameraBlueprintData,Z_Param_Out_LiveLinkData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLiveLinkDataForCurrentFrame(Z_Param_Out_LiveLinkData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteCameraComponent::execGetOutputProvidersByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ProviderClass);
		P_GET_TARRAY_REF(URemoteCameraOutputBase*,Z_Param_Out_FoundProviders);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOutputProvidersByClass(Z_Param_ProviderClass,Z_Param_Out_FoundProviders);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteCameraComponent::execGetOutputProviderByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ProviderIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URemoteCameraOutputBase**)Z_Param__Result=P_THIS->GetOutputProviderByIndex(Z_Param_ProviderIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteCameraComponent::execGetAllOutputProviders)
	{
		P_GET_TARRAY_REF(URemoteCameraOutputBase*,Z_Param_Out_Providers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllOutputProviders(Z_Param_Out_Providers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteCameraComponent::execGetNumberOfOutputProviders)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfOutputProviders();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteCameraComponent::execRemoveOutputProviderByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ProviderIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveOutputProviderByIndex(Z_Param_ProviderIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteCameraComponent::execRemoveOutputProvider)
	{
		P_GET_OBJECT(URemoteCameraOutputBase,Z_Param_Provider);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveOutputProvider(Z_Param_Provider);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteCameraComponent::execRemoveAllOutputProviders)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllOutputProviders();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteCameraComponent::execSetOutputProviderIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OriginalIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetOutputProviderIndex(Z_Param_OriginalIndex,Z_Param_NewIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteCameraComponent::execInsertOutputProvider)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_OBJECT(UClass,Z_Param_ProviderClass);
		P_GET_OBJECT_REF(URemoteCameraOutputBase,Z_Param_Out_CreatedProvider);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InsertOutputProvider(Z_Param_Index,Z_Param_ProviderClass,Z_Param_Out_CreatedProvider);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteCameraComponent::execAddOutputProvider)
	{
		P_GET_OBJECT(UClass,Z_Param_ProviderClass);
		P_GET_OBJECT_REF(URemoteCameraOutputBase,Z_Param_Out_CreatedProvider);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddOutputProvider(Z_Param_ProviderClass,Z_Param_Out_CreatedProvider);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteCameraComponent::execGetTargetCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCineCameraComponent**)Z_Param__Result=P_THIS->GetTargetCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteCameraComponent::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteCameraComponent::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bNewEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bNewEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteCameraComponent::execHandleObjectReplaced)
	{
		P_GET_TMAP_REF(UObject*,UObject*,Z_Param_Out_ReplacementMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleObjectReplaced(Z_Param_Out_ReplacementMap);
		P_NATIVE_END;
	}
	void URemoteCameraComponent::StaticRegisterNativesURemoteCameraComponent()
	{
		UClass* Class = URemoteCameraComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOutputProvider", &URemoteCameraComponent::execAddOutputProvider },
			{ "GetAllOutputProviders", &URemoteCameraComponent::execGetAllOutputProviders },
			{ "GetLiveLinkDataForCurrentFrame", &URemoteCameraComponent::execGetLiveLinkDataForCurrentFrame },
			{ "GetNumberOfOutputProviders", &URemoteCameraComponent::execGetNumberOfOutputProviders },
			{ "GetOutputProviderByIndex", &URemoteCameraComponent::execGetOutputProviderByIndex },
			{ "GetOutputProvidersByClass", &URemoteCameraComponent::execGetOutputProvidersByClass },
			{ "GetTargetCamera", &URemoteCameraComponent::execGetTargetCamera },
			{ "HandleObjectReplaced", &URemoteCameraComponent::execHandleObjectReplaced },
			{ "InsertOutputProvider", &URemoteCameraComponent::execInsertOutputProvider },
			{ "IsEnabled", &URemoteCameraComponent::execIsEnabled },
			{ "RemoveAllOutputProviders", &URemoteCameraComponent::execRemoveAllOutputProviders },
			{ "RemoveOutputProvider", &URemoteCameraComponent::execRemoveOutputProvider },
			{ "RemoveOutputProviderByIndex", &URemoteCameraComponent::execRemoveOutputProviderByIndex },
			{ "SetEnabled", &URemoteCameraComponent::execSetEnabled },
			{ "SetOutputProviderIndex", &URemoteCameraComponent::execSetOutputProviderIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URemoteCameraComponent_AddOutputProvider_Statics
	{
		struct RemoteCameraComponent_eventAddOutputProvider_Parms
		{
			TSubclassOf<URemoteCameraOutputBase>  ProviderClass;
			URemoteCameraOutputBase* CreatedProvider;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProviderClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CreatedProvider;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraComponent_AddOutputProvider_Statics::NewProp_ProviderClass_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URemoteCameraComponent_AddOutputProvider_Statics::NewProp_ProviderClass = { "ProviderClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteCameraComponent_eventAddOutputProvider_Parms, ProviderClass), Z_Construct_UClass_URemoteCameraOutputBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraComponent_AddOutputProvider_Statics::NewProp_ProviderClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_AddOutputProvider_Statics::NewProp_ProviderClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URemoteCameraComponent_AddOutputProvider_Statics::NewProp_CreatedProvider = { "CreatedProvider", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteCameraComponent_eventAddOutputProvider_Parms, CreatedProvider), Z_Construct_UClass_URemoteCameraOutputBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemoteCameraComponent_AddOutputProvider_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteCameraComponent_eventAddOutputProvider_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteCameraComponent_AddOutputProvider_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteCameraComponent_eventAddOutputProvider_Parms), &Z_Construct_UFunction_URemoteCameraComponent_AddOutputProvider_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteCameraComponent_AddOutputProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_AddOutputProvider_Statics::NewProp_ProviderClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_AddOutputProvider_Statics::NewProp_CreatedProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_AddOutputProvider_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraComponent_AddOutputProvider_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Camera" },
		{ "Comment", "//Add a new output provider\n" },
		{ "DeterminesOutputType", "ProviderClass" },
		{ "DynamicOutputParam", "CreatedProvider" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
		{ "ReturnDisplayName", "Success" },
		{ "ToolTip", "Add a new output provider" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteCameraComponent_AddOutputProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteCameraComponent, nullptr, "AddOutputProvider", nullptr, nullptr, sizeof(RemoteCameraComponent_eventAddOutputProvider_Parms), Z_Construct_UFunction_URemoteCameraComponent_AddOutputProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_AddOutputProvider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraComponent_AddOutputProvider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_AddOutputProvider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteCameraComponent_AddOutputProvider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteCameraComponent_AddOutputProvider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteCameraComponent_GetAllOutputProviders_Statics
	{
		struct RemoteCameraComponent_eventGetAllOutputProviders_Parms
		{
			TArray<URemoteCameraOutputBase*> Providers;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Providers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Providers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URemoteCameraComponent_GetAllOutputProviders_Statics::NewProp_Providers_Inner = { "Providers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URemoteCameraOutputBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URemoteCameraComponent_GetAllOutputProviders_Statics::NewProp_Providers = { "Providers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteCameraComponent_eventGetAllOutputProviders_Parms, Providers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteCameraComponent_GetAllOutputProviders_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_GetAllOutputProviders_Statics::NewProp_Providers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_GetAllOutputProviders_Statics::NewProp_Providers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraComponent_GetAllOutputProviders_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Camera" },
		{ "Comment", "//Returns the array of output providers\n" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
		{ "ToolTip", "Returns the array of output providers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteCameraComponent_GetAllOutputProviders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteCameraComponent, nullptr, "GetAllOutputProviders", nullptr, nullptr, sizeof(RemoteCameraComponent_eventGetAllOutputProviders_Parms), Z_Construct_UFunction_URemoteCameraComponent_GetAllOutputProviders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_GetAllOutputProviders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraComponent_GetAllOutputProviders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_GetAllOutputProviders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteCameraComponent_GetAllOutputProviders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteCameraComponent_GetAllOutputProviders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteCameraComponent_GetLiveLinkDataForCurrentFrame_Statics
	{
		struct RemoteCameraComponent_eventGetLiveLinkDataForCurrentFrame_Parms
		{
			FLiveLinkCameraBlueprintData LiveLinkData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LiveLinkData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteCameraComponent_GetLiveLinkDataForCurrentFrame_Statics::NewProp_LiveLinkData = { "LiveLinkData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteCameraComponent_eventGetLiveLinkDataForCurrentFrame_Parms, LiveLinkData), Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteCameraComponent_GetLiveLinkDataForCurrentFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_GetLiveLinkDataForCurrentFrame_Statics::NewProp_LiveLinkData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraComponent_GetLiveLinkDataForCurrentFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Camera" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteCameraComponent_GetLiveLinkDataForCurrentFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteCameraComponent, nullptr, "GetLiveLinkDataForCurrentFrame", nullptr, nullptr, sizeof(RemoteCameraComponent_eventGetLiveLinkDataForCurrentFrame_Parms), Z_Construct_UFunction_URemoteCameraComponent_GetLiveLinkDataForCurrentFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_GetLiveLinkDataForCurrentFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraComponent_GetLiveLinkDataForCurrentFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_GetLiveLinkDataForCurrentFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteCameraComponent_GetLiveLinkDataForCurrentFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteCameraComponent_GetLiveLinkDataForCurrentFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteCameraComponent_GetNumberOfOutputProviders_Statics
	{
		struct RemoteCameraComponent_eventGetNumberOfOutputProviders_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteCameraComponent_GetNumberOfOutputProviders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteCameraComponent_eventGetNumberOfOutputProviders_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteCameraComponent_GetNumberOfOutputProviders_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_GetNumberOfOutputProviders_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraComponent_GetNumberOfOutputProviders_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Camera" },
		{ "Comment", "//Returns the number of output providers\n" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
		{ "ToolTip", "Returns the number of output providers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteCameraComponent_GetNumberOfOutputProviders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteCameraComponent, nullptr, "GetNumberOfOutputProviders", nullptr, nullptr, sizeof(RemoteCameraComponent_eventGetNumberOfOutputProviders_Parms), Z_Construct_UFunction_URemoteCameraComponent_GetNumberOfOutputProviders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_GetNumberOfOutputProviders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraComponent_GetNumberOfOutputProviders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_GetNumberOfOutputProviders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteCameraComponent_GetNumberOfOutputProviders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteCameraComponent_GetNumberOfOutputProviders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteCameraComponent_GetOutputProviderByIndex_Statics
	{
		struct RemoteCameraComponent_eventGetOutputProviderByIndex_Parms
		{
			int32 ProviderIndex;
			URemoteCameraOutputBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProviderIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraComponent_GetOutputProviderByIndex_Statics::NewProp_ProviderIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteCameraComponent_GetOutputProviderByIndex_Statics::NewProp_ProviderIndex = { "ProviderIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteCameraComponent_eventGetOutputProviderByIndex_Parms, ProviderIndex), METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraComponent_GetOutputProviderByIndex_Statics::NewProp_ProviderIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_GetOutputProviderByIndex_Statics::NewProp_ProviderIndex_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URemoteCameraComponent_GetOutputProviderByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteCameraComponent_eventGetOutputProviderByIndex_Parms, ReturnValue), Z_Construct_UClass_URemoteCameraOutputBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteCameraComponent_GetOutputProviderByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_GetOutputProviderByIndex_Statics::NewProp_ProviderIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_GetOutputProviderByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraComponent_GetOutputProviderByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Camera" },
		{ "Comment", "//Returns a single output provider at the given index\n" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
		{ "ToolTip", "Returns a single output provider at the given index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteCameraComponent_GetOutputProviderByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteCameraComponent, nullptr, "GetOutputProviderByIndex", nullptr, nullptr, sizeof(RemoteCameraComponent_eventGetOutputProviderByIndex_Parms), Z_Construct_UFunction_URemoteCameraComponent_GetOutputProviderByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_GetOutputProviderByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraComponent_GetOutputProviderByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_GetOutputProviderByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteCameraComponent_GetOutputProviderByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteCameraComponent_GetOutputProviderByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteCameraComponent_GetOutputProvidersByClass_Statics
	{
		struct RemoteCameraComponent_eventGetOutputProvidersByClass_Parms
		{
			TSubclassOf<URemoteCameraOutputBase>  ProviderClass;
			TArray<URemoteCameraOutputBase*> FoundProviders;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProviderClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoundProviders_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FoundProviders;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraComponent_GetOutputProvidersByClass_Statics::NewProp_ProviderClass_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URemoteCameraComponent_GetOutputProvidersByClass_Statics::NewProp_ProviderClass = { "ProviderClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteCameraComponent_eventGetOutputProvidersByClass_Parms, ProviderClass), Z_Construct_UClass_URemoteCameraOutputBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraComponent_GetOutputProvidersByClass_Statics::NewProp_ProviderClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_GetOutputProvidersByClass_Statics::NewProp_ProviderClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URemoteCameraComponent_GetOutputProvidersByClass_Statics::NewProp_FoundProviders_Inner = { "FoundProviders", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URemoteCameraOutputBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URemoteCameraComponent_GetOutputProvidersByClass_Statics::NewProp_FoundProviders = { "FoundProviders", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteCameraComponent_eventGetOutputProvidersByClass_Parms, FoundProviders), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteCameraComponent_GetOutputProvidersByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_GetOutputProvidersByClass_Statics::NewProp_ProviderClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_GetOutputProvidersByClass_Statics::NewProp_FoundProviders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_GetOutputProvidersByClass_Statics::NewProp_FoundProviders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraComponent_GetOutputProvidersByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Camera" },
		{ "Comment", "//Returns a pointer to an output provider that matches the given subclass\n" },
		{ "DeterminesOutputType", "ProviderClass" },
		{ "DynamicOutputParam", "FoundProviders" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
		{ "ToolTip", "Returns a pointer to an output provider that matches the given subclass" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteCameraComponent_GetOutputProvidersByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteCameraComponent, nullptr, "GetOutputProvidersByClass", nullptr, nullptr, sizeof(RemoteCameraComponent_eventGetOutputProvidersByClass_Parms), Z_Construct_UFunction_URemoteCameraComponent_GetOutputProvidersByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_GetOutputProvidersByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraComponent_GetOutputProvidersByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_GetOutputProvidersByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteCameraComponent_GetOutputProvidersByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteCameraComponent_GetOutputProvidersByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteCameraComponent_GetTargetCamera_Statics
	{
		struct RemoteCameraComponent_eventGetTargetCamera_Parms
		{
			UCineCameraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraComponent_GetTargetCamera_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URemoteCameraComponent_GetTargetCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteCameraComponent_eventGetTargetCamera_Parms, ReturnValue), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraComponent_GetTargetCamera_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_GetTargetCamera_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteCameraComponent_GetTargetCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_GetTargetCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraComponent_GetTargetCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Camera" },
		{ "Comment", "// Returns the Target CineCameraComponent\n" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
		{ "ToolTip", "Returns the Target CineCameraComponent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteCameraComponent_GetTargetCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteCameraComponent, nullptr, "GetTargetCamera", nullptr, nullptr, sizeof(RemoteCameraComponent_eventGetTargetCamera_Parms), Z_Construct_UFunction_URemoteCameraComponent_GetTargetCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_GetTargetCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraComponent_GetTargetCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_GetTargetCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteCameraComponent_GetTargetCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteCameraComponent_GetTargetCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteCameraComponent_HandleObjectReplaced_Statics
	{
		struct RemoteCameraComponent_eventHandleObjectReplaced_Parms
		{
			TMap<UObject*,UObject*> ReplacementMap;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplacementMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplacementMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplacementMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReplacementMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URemoteCameraComponent_HandleObjectReplaced_Statics::NewProp_ReplacementMap_ValueProp = { "ReplacementMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URemoteCameraComponent_HandleObjectReplaced_Statics::NewProp_ReplacementMap_Key_KeyProp = { "ReplacementMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraComponent_HandleObjectReplaced_Statics::NewProp_ReplacementMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_URemoteCameraComponent_HandleObjectReplaced_Statics::NewProp_ReplacementMap = { "ReplacementMap", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteCameraComponent_eventHandleObjectReplaced_Parms, ReplacementMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraComponent_HandleObjectReplaced_Statics::NewProp_ReplacementMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_HandleObjectReplaced_Statics::NewProp_ReplacementMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteCameraComponent_HandleObjectReplaced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_HandleObjectReplaced_Statics::NewProp_ReplacementMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_HandleObjectReplaced_Statics::NewProp_ReplacementMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_HandleObjectReplaced_Statics::NewProp_ReplacementMap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraComponent_HandleObjectReplaced_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteCameraComponent_HandleObjectReplaced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteCameraComponent, nullptr, "HandleObjectReplaced", nullptr, nullptr, sizeof(RemoteCameraComponent_eventHandleObjectReplaced_Parms), Z_Construct_UFunction_URemoteCameraComponent_HandleObjectReplaced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_HandleObjectReplaced_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraComponent_HandleObjectReplaced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_HandleObjectReplaced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteCameraComponent_HandleObjectReplaced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteCameraComponent_HandleObjectReplaced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteCameraComponent_InsertOutputProvider_Statics
	{
		struct RemoteCameraComponent_eventInsertOutputProvider_Parms
		{
			int32 Index;
			TSubclassOf<URemoteCameraOutputBase>  ProviderClass;
			URemoteCameraOutputBase* CreatedProvider;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProviderClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CreatedProvider;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteCameraComponent_InsertOutputProvider_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteCameraComponent_eventInsertOutputProvider_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraComponent_InsertOutputProvider_Statics::NewProp_ProviderClass_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URemoteCameraComponent_InsertOutputProvider_Statics::NewProp_ProviderClass = { "ProviderClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteCameraComponent_eventInsertOutputProvider_Parms, ProviderClass), Z_Construct_UClass_URemoteCameraOutputBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraComponent_InsertOutputProvider_Statics::NewProp_ProviderClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_InsertOutputProvider_Statics::NewProp_ProviderClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URemoteCameraComponent_InsertOutputProvider_Statics::NewProp_CreatedProvider = { "CreatedProvider", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteCameraComponent_eventInsertOutputProvider_Parms, CreatedProvider), Z_Construct_UClass_URemoteCameraOutputBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemoteCameraComponent_InsertOutputProvider_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteCameraComponent_eventInsertOutputProvider_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteCameraComponent_InsertOutputProvider_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteCameraComponent_eventInsertOutputProvider_Parms), &Z_Construct_UFunction_URemoteCameraComponent_InsertOutputProvider_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteCameraComponent_InsertOutputProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_InsertOutputProvider_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_InsertOutputProvider_Statics::NewProp_ProviderClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_InsertOutputProvider_Statics::NewProp_CreatedProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_InsertOutputProvider_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraComponent_InsertOutputProvider_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Camera" },
		{ "Comment", "//Insert a new output provider in the list at the given index\n" },
		{ "DeterminesOutputType", "ProviderClass" },
		{ "DynamicOutputParam", "CreatedProvider" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
		{ "ReturnDisplayName", "Success" },
		{ "ToolTip", "Insert a new output provider in the list at the given index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteCameraComponent_InsertOutputProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteCameraComponent, nullptr, "InsertOutputProvider", nullptr, nullptr, sizeof(RemoteCameraComponent_eventInsertOutputProvider_Parms), Z_Construct_UFunction_URemoteCameraComponent_InsertOutputProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_InsertOutputProvider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraComponent_InsertOutputProvider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_InsertOutputProvider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteCameraComponent_InsertOutputProvider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteCameraComponent_InsertOutputProvider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteCameraComponent_IsEnabled_Statics
	{
		struct RemoteCameraComponent_eventIsEnabled_Parms
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
	void Z_Construct_UFunction_URemoteCameraComponent_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteCameraComponent_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteCameraComponent_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteCameraComponent_eventIsEnabled_Parms), &Z_Construct_UFunction_URemoteCameraComponent_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteCameraComponent_IsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraComponent_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteCameraComponent_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteCameraComponent, nullptr, "IsEnabled", nullptr, nullptr, sizeof(RemoteCameraComponent_eventIsEnabled_Parms), Z_Construct_UFunction_URemoteCameraComponent_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraComponent_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteCameraComponent_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteCameraComponent_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteCameraComponent_RemoveAllOutputProviders_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraComponent_RemoveAllOutputProviders_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Camera" },
		{ "Comment", "// Remove all Output Providers from the Component.\n" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
		{ "ToolTip", "Remove all Output Providers from the Component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteCameraComponent_RemoveAllOutputProviders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteCameraComponent, nullptr, "RemoveAllOutputProviders", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraComponent_RemoveAllOutputProviders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_RemoveAllOutputProviders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteCameraComponent_RemoveAllOutputProviders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteCameraComponent_RemoveAllOutputProviders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProvider_Statics
	{
		struct RemoteCameraComponent_eventRemoveOutputProvider_Parms
		{
			const URemoteCameraOutputBase* Provider;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Provider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Provider;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProvider_Statics::NewProp_Provider_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProvider_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteCameraComponent_eventRemoveOutputProvider_Parms, Provider), Z_Construct_UClass_URemoteCameraOutputBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProvider_Statics::NewProp_Provider_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProvider_Statics::NewProp_Provider_MetaData)) };
	void Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProvider_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteCameraComponent_eventRemoveOutputProvider_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProvider_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteCameraComponent_eventRemoveOutputProvider_Parms), &Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProvider_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProvider_Statics::NewProp_Provider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProvider_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProvider_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Camera" },
		{ "Comment", "//Remove a single output provider by reference\n" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
		{ "ToolTip", "Remove a single output provider by reference" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteCameraComponent, nullptr, "RemoveOutputProvider", nullptr, nullptr, sizeof(RemoteCameraComponent_eventRemoveOutputProvider_Parms), Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProvider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProvider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProvider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProvider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProvider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProviderByIndex_Statics
	{
		struct RemoteCameraComponent_eventRemoveOutputProviderByIndex_Parms
		{
			int32 ProviderIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProviderIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProviderByIndex_Statics::NewProp_ProviderIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProviderByIndex_Statics::NewProp_ProviderIndex = { "ProviderIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteCameraComponent_eventRemoveOutputProviderByIndex_Parms, ProviderIndex), METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProviderByIndex_Statics::NewProp_ProviderIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProviderByIndex_Statics::NewProp_ProviderIndex_MetaData)) };
	void Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProviderByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteCameraComponent_eventRemoveOutputProviderByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProviderByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteCameraComponent_eventRemoveOutputProviderByIndex_Parms), &Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProviderByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProviderByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProviderByIndex_Statics::NewProp_ProviderIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProviderByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProviderByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Camera" },
		{ "Comment", "//Remove a single output provider at the given index\n" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
		{ "ToolTip", "Remove a single output provider at the given index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProviderByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteCameraComponent, nullptr, "RemoveOutputProviderByIndex", nullptr, nullptr, sizeof(RemoteCameraComponent_eventRemoveOutputProviderByIndex_Parms), Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProviderByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProviderByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProviderByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProviderByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProviderByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProviderByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteCameraComponent_SetEnabled_Statics
	{
		struct RemoteCameraComponent_eventSetEnabled_Parms
		{
			bool bNewEnabled;
		};
		static void NewProp_bNewEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URemoteCameraComponent_SetEnabled_Statics::NewProp_bNewEnabled_SetBit(void* Obj)
	{
		((RemoteCameraComponent_eventSetEnabled_Parms*)Obj)->bNewEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteCameraComponent_SetEnabled_Statics::NewProp_bNewEnabled = { "bNewEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteCameraComponent_eventSetEnabled_Parms), &Z_Construct_UFunction_URemoteCameraComponent_SetEnabled_Statics::NewProp_bNewEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteCameraComponent_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_SetEnabled_Statics::NewProp_bNewEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraComponent_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteCameraComponent_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteCameraComponent, nullptr, "SetEnabled", nullptr, nullptr, sizeof(RemoteCameraComponent_eventSetEnabled_Parms), Z_Construct_UFunction_URemoteCameraComponent_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraComponent_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteCameraComponent_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteCameraComponent_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteCameraComponent_SetOutputProviderIndex_Statics
	{
		struct RemoteCameraComponent_eventSetOutputProviderIndex_Parms
		{
			int32 OriginalIndex;
			int32 NewIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OriginalIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteCameraComponent_SetOutputProviderIndex_Statics::NewProp_OriginalIndex = { "OriginalIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteCameraComponent_eventSetOutputProviderIndex_Parms, OriginalIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteCameraComponent_SetOutputProviderIndex_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteCameraComponent_eventSetOutputProviderIndex_Parms, NewIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemoteCameraComponent_SetOutputProviderIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteCameraComponent_eventSetOutputProviderIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteCameraComponent_SetOutputProviderIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteCameraComponent_eventSetOutputProviderIndex_Parms), &Z_Construct_UFunction_URemoteCameraComponent_SetOutputProviderIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteCameraComponent_SetOutputProviderIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_SetOutputProviderIndex_Statics::NewProp_OriginalIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_SetOutputProviderIndex_Statics::NewProp_NewIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCameraComponent_SetOutputProviderIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCameraComponent_SetOutputProviderIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Camera" },
		{ "Comment", "// Moves an existing Output Provider in the stack from its current index to a new index\n" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
		{ "ReturnDisplayName", "Success" },
		{ "ToolTip", "Moves an existing Output Provider in the stack from its current index to a new index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteCameraComponent_SetOutputProviderIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteCameraComponent, nullptr, "SetOutputProviderIndex", nullptr, nullptr, sizeof(RemoteCameraComponent_eventSetOutputProviderIndex_Parms), Z_Construct_UFunction_URemoteCameraComponent_SetOutputProviderIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_SetOutputProviderIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteCameraComponent_SetOutputProviderIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCameraComponent_SetOutputProviderIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteCameraComponent_SetOutputProviderIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteCameraComponent_SetOutputProviderIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URemoteCameraComponent_NoRegister()
	{
		return URemoteCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_URemoteCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnComponentReplaced_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComponentReplaced;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLockedToViewport_MetaData[];
#endif
		static void NewProp_bIsLockedToViewport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLockedToViewport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Role;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LiveLinkSubject_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LiveLinkSubject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockViewportToCamera_MetaData[];
#endif
		static void NewProp_bLockViewportToCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockViewportToCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableComponentWhenSpawnedBySequencer_MetaData[];
#endif
		static void NewProp_bDisableComponentWhenSpawnedBySequencer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableComponentWhenSpawnedBySequencer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableOutputOnMultiUserReceiver_MetaData[];
#endif
		static void NewProp_bDisableOutputOnMultiUserReceiver_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableOutputOnMultiUserReceiver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateFrequencyMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateFrequencyMs;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetViewport_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetViewport_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetViewport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputProviders_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutputProviders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputProviders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutputProviders;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteCameraCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URemoteCameraComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URemoteCameraComponent_AddOutputProvider, "AddOutputProvider" }, // 3168551211
		{ &Z_Construct_UFunction_URemoteCameraComponent_GetAllOutputProviders, "GetAllOutputProviders" }, // 4184663054
		{ &Z_Construct_UFunction_URemoteCameraComponent_GetLiveLinkDataForCurrentFrame, "GetLiveLinkDataForCurrentFrame" }, // 736519648
		{ &Z_Construct_UFunction_URemoteCameraComponent_GetNumberOfOutputProviders, "GetNumberOfOutputProviders" }, // 1358132518
		{ &Z_Construct_UFunction_URemoteCameraComponent_GetOutputProviderByIndex, "GetOutputProviderByIndex" }, // 1007103862
		{ &Z_Construct_UFunction_URemoteCameraComponent_GetOutputProvidersByClass, "GetOutputProvidersByClass" }, // 431066317
		{ &Z_Construct_UFunction_URemoteCameraComponent_GetTargetCamera, "GetTargetCamera" }, // 2163110253
		{ &Z_Construct_UFunction_URemoteCameraComponent_HandleObjectReplaced, "HandleObjectReplaced" }, // 3525298554
		{ &Z_Construct_UFunction_URemoteCameraComponent_InsertOutputProvider, "InsertOutputProvider" }, // 3648821510
		{ &Z_Construct_UFunction_URemoteCameraComponent_IsEnabled, "IsEnabled" }, // 4219328317
		{ &Z_Construct_UFunction_URemoteCameraComponent_RemoveAllOutputProviders, "RemoveAllOutputProviders" }, // 4169025212
		{ &Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProvider, "RemoveOutputProvider" }, // 2189523817
		{ &Z_Construct_UFunction_URemoteCameraComponent_RemoveOutputProviderByIndex, "RemoveOutputProviderByIndex" }, // 936767482
		{ &Z_Construct_UFunction_URemoteCameraComponent_SetEnabled, "SetEnabled" }, // 3181186319
		{ &Z_Construct_UFunction_URemoteCameraComponent_SetOutputProviderIndex, "SetOutputProviderIndex" }, // 3882607378
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "RemoteCamera" },
		{ "IncludePath", "RemoteCameraComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_OnComponentReplaced_MetaData[] = {
		{ "Category", "Remote Camera" },
		{ "Comment", "/* Handle edge cases of this component being replaced by another during reconstruction. */" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
		{ "ToolTip", "Handle edge cases of this component being replaced by another during reconstruction." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_OnComponentReplaced = { "OnComponentReplaced", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteCameraComponent, OnComponentReplaced), Z_Construct_UDelegateFunction_RemoteCameraCore_OnComponentReplaced__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_OnComponentReplaced_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_OnComponentReplaced_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bEnabled_MetaData[] = {
		{ "BlueprintGetter", "IsEnabled" },
		{ "BlueprintSetter", "SetEnabled" },
		{ "Category", "Remote Camera" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
	};
#endif
	void Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((URemoteCameraComponent*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URemoteCameraComponent), &Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_TargetCamera_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_TargetCamera = { "TargetCamera", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteCameraComponent, TargetCamera), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_TargetCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_TargetCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bIsLockedToViewport_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
	};
#endif
	void Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bIsLockedToViewport_SetBit(void* Obj)
	{
		((URemoteCameraComponent*)Obj)->bIsLockedToViewport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bIsLockedToViewport = { "bIsLockedToViewport", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URemoteCameraComponent), &Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bIsLockedToViewport_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bIsLockedToViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bIsLockedToViewport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_Role_MetaData[] = {
		{ "Category", "Remote Camera" },
		{ "Comment", "/**\n\x09 * The role of this virtual camera.  If this value is set and the corresponding tag set on the editor matches this value, then this\n\x09 * camera is the sender and the authority in the case when connected to a multi-user session.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
		{ "ToolTip", "The role of this virtual camera.  If this value is set and the corresponding tag set on the editor matches this value, then this\ncamera is the sender and the authority in the case when connected to a multi-user session." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteCameraComponent, Role), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_Role_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_LiveLinkSubject_MetaData[] = {
		{ "Category", "Remote Camera" },
		{ "Comment", "// LiveLink subject name for the incoming camera transform\n" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
		{ "ToolTip", "LiveLink subject name for the incoming camera transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_LiveLinkSubject = { "LiveLinkSubject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteCameraComponent, LiveLinkSubject), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_LiveLinkSubject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_LiveLinkSubject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bLockViewportToCamera_MetaData[] = {
		{ "Category", "Remote Camera" },
		{ "Comment", "// If true, render the viewport from the point of view of the parented CineCamera\n" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
		{ "ToolTip", "If true, render the viewport from the point of view of the parented CineCamera" },
	};
#endif
	void Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bLockViewportToCamera_SetBit(void* Obj)
	{
		((URemoteCameraComponent*)Obj)->bLockViewportToCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bLockViewportToCamera = { "bLockViewportToCamera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URemoteCameraComponent), &Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bLockViewportToCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bLockViewportToCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bLockViewportToCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bDisableComponentWhenSpawnedBySequencer_MetaData[] = {
		{ "Category", "Remote Camera" },
		{ "Comment", "// If true, the component will force bEnabled to false when it is part of a spawnable in Sequencer\n" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
		{ "ToolTip", "If true, the component will force bEnabled to false when it is part of a spawnable in Sequencer" },
	};
#endif
	void Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bDisableComponentWhenSpawnedBySequencer_SetBit(void* Obj)
	{
		((URemoteCameraComponent*)Obj)->bDisableComponentWhenSpawnedBySequencer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bDisableComponentWhenSpawnedBySequencer = { "bDisableComponentWhenSpawnedBySequencer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URemoteCameraComponent), &Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bDisableComponentWhenSpawnedBySequencer_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bDisableComponentWhenSpawnedBySequencer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bDisableComponentWhenSpawnedBySequencer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bDisableOutputOnMultiUserReceiver_MetaData[] = {
		{ "Category", "Remote Camera" },
		{ "Comment", "// Do we disable the output if the virtual camera is in a Multi-user session and the camera is a \"receiver\" from multi-user\n" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
		{ "ToolTip", "Do we disable the output if the virtual camera is in a Multi-user session and the camera is a \"receiver\" from multi-user" },
	};
#endif
	void Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bDisableOutputOnMultiUserReceiver_SetBit(void* Obj)
	{
		((URemoteCameraComponent*)Obj)->bDisableOutputOnMultiUserReceiver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bDisableOutputOnMultiUserReceiver = { "bDisableOutputOnMultiUserReceiver", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URemoteCameraComponent), &Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bDisableOutputOnMultiUserReceiver_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bDisableOutputOnMultiUserReceiver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bDisableOutputOnMultiUserReceiver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_UpdateFrequencyMs_MetaData[] = {
		{ "Category", "Remote Camera" },
		{ "ClampMin", "30.0" },
		{ "Comment", "// Indicates the frequency which camera updates are sent when in Multi-user mode. This has a minimum value of 30ms.\n" },
		{ "DisplayName", "Update Frequencey" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
		{ "ToolTip", "Indicates the frequency which camera updates are sent when in Multi-user mode. This has a minimum value of 30ms." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_UpdateFrequencyMs = { "UpdateFrequencyMs", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteCameraComponent, UpdateFrequencyMs), METADATA_PARAMS(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_UpdateFrequencyMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_UpdateFrequencyMs_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_TargetViewport_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_TargetViewport_MetaData[] = {
		{ "Category", "Remote Camera" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_TargetViewport = { "TargetViewport", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteCameraComponent, TargetViewport), Z_Construct_UEnum_RemoteCameraCore_ERCTargetViewportID, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_TargetViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_TargetViewport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_OutputProviders_Inner_MetaData[] = {
		{ "Category", "Remote Camera" },
		{ "Comment", "//List of output providers\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
		{ "ToolTip", "List of output providers" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_OutputProviders_Inner = { "OutputProviders", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URemoteCameraOutputBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_OutputProviders_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_OutputProviders_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_OutputProviders_MetaData[] = {
		{ "Category", "Remote Camera" },
		{ "Comment", "//List of output providers\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RemoteCameraComponent.h" },
		{ "ToolTip", "List of output providers" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_OutputProviders = { "OutputProviders", nullptr, (EPropertyFlags)0x0010008000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteCameraComponent, OutputProviders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_OutputProviders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_OutputProviders_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteCameraComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_OnComponentReplaced,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_TargetCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bIsLockedToViewport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_Role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_LiveLinkSubject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bLockViewportToCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bDisableComponentWhenSpawnedBySequencer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_bDisableOutputOnMultiUserReceiver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_UpdateFrequencyMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_TargetViewport_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_TargetViewport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_OutputProviders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraComponent_Statics::NewProp_OutputProviders,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteCameraComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URemoteCameraComponent_Statics::ClassParams = {
		&URemoteCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URemoteCameraComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteCameraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteCameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URemoteCameraComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URemoteCameraComponent, 1474206312);
	template<> REMOTECAMERACORE_API UClass* StaticClass<URemoteCameraComponent>()
	{
		return URemoteCameraComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URemoteCameraComponent(Z_Construct_UClass_URemoteCameraComponent, &URemoteCameraComponent::StaticClass, TEXT("/Script/RemoteCameraCore"), TEXT("URemoteCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteCameraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
