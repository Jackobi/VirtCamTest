// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteCameraUtilities/Public/RemoteCameraUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteCameraUserWidget() {}
// Cross Module References
	REMOTECAMERAUTILITIES_API UEnum* Z_Construct_UEnum_RemoteCameraUtilities_ERCWidgetDisplayType();
	UPackage* Z_Construct_UPackage__Script_RemoteCameraUtilities();
	REMOTECAMERAUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWindowVisibility();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetBlendMode();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	REMOTECAMERAUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteCameraUserWidget_Viewport();
	REMOTECAMERAUTILITIES_API UClass* Z_Construct_UClass_URemoteCameraUserWidget_NoRegister();
	REMOTECAMERAUTILITIES_API UClass* Z_Construct_UClass_URemoteCameraUserWidget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	static UEnum* ERCWidgetDisplayType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RemoteCameraUtilities_ERCWidgetDisplayType, Z_Construct_UPackage__Script_RemoteCameraUtilities(), TEXT("ERCWidgetDisplayType"));
		}
		return Singleton;
	}
	template<> REMOTECAMERAUTILITIES_API UEnum* StaticEnum<ERCWidgetDisplayType>()
	{
		return ERCWidgetDisplayType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERCWidgetDisplayType(ERCWidgetDisplayType_StaticEnum, TEXT("/Script/RemoteCameraUtilities"), TEXT("ERCWidgetDisplayType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RemoteCameraUtilities_ERCWidgetDisplayType_Hash() { return 1975650164U; }
	UEnum* Z_Construct_UEnum_RemoteCameraUtilities_ERCWidgetDisplayType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RemoteCameraUtilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERCWidgetDisplayType"), 0, Get_Z_Construct_UEnum_RemoteCameraUtilities_ERCWidgetDisplayType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERCWidgetDisplayType::Inactive", (int64)ERCWidgetDisplayType::Inactive },
				{ "ERCWidgetDisplayType::Viewport", (int64)ERCWidgetDisplayType::Viewport },
				{ "ERCWidgetDisplayType::PostProcess", (int64)ERCWidgetDisplayType::PostProcess },
				{ "ERCWidgetDisplayType::Composure", (int64)ERCWidgetDisplayType::Composure },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Composure.Name", "ERCWidgetDisplayType::Composure" },
				{ "Inactive.Name", "ERCWidgetDisplayType::Inactive" },
				{ "ModuleRelativePath", "Public/RemoteCameraUserWidget.h" },
				{ "PostProcess.Name", "ERCWidgetDisplayType::PostProcess" },
				{ "Viewport.Name", "ERCWidgetDisplayType::Viewport" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RemoteCameraUtilities,
				nullptr,
				"ERCWidgetDisplayType",
				"ERCWidgetDisplayType",
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
class UScriptStruct* FRemoteCameraUserWidget_PostProcess::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern REMOTECAMERAUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess, Z_Construct_UPackage__Script_RemoteCameraUtilities(), TEXT("RemoteCameraUserWidget_PostProcess"), sizeof(FRemoteCameraUserWidget_PostProcess), Get_Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Hash());
	}
	return Singleton;
}
template<> REMOTECAMERAUTILITIES_API UScriptStruct* StaticStruct<FRemoteCameraUserWidget_PostProcess>()
{
	return FRemoteCameraUserWidget_PostProcess::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemoteCameraUserWidget_PostProcess(FRemoteCameraUserWidget_PostProcess::StaticStruct, TEXT("/Script/RemoteCameraUtilities"), TEXT("RemoteCameraUserWidget_PostProcess"), false, nullptr, nullptr);
static struct FScriptStruct_RemoteCameraUtilities_StaticRegisterNativesFRemoteCameraUserWidget_PostProcess
{
	FScriptStruct_RemoteCameraUtilities_StaticRegisterNativesFRemoteCameraUserWidget_PostProcess()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RemoteCameraUserWidget_PostProcess")),new UScriptStruct::TCppStructOps<FRemoteCameraUserWidget_PostProcess>);
	}
} ScriptStruct_RemoteCameraUtilities_StaticRegisterNativesFRemoteCameraUserWidget_PostProcess;
	struct Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PostProcessMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessTintColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessTintColorAndOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessOpacityFromTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostProcessOpacityFromTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWidgetDrawSize_MetaData[];
#endif
		static void NewProp_bWidgetDrawSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWidgetDrawSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetDrawSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetDrawSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWindowFocusable_MetaData[];
#endif
		static void NewProp_bWindowFocusable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWindowFocusable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WindowVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindowVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WindowVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReceiveHardwareInput_MetaData[];
#endif
		static void NewProp_bReceiveHardwareInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReceiveHardwareInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTargetBackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderTargetBackgroundColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RenderTargetBlendMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTargetBlendMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RenderTargetBlendMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetRenderTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetRenderTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PostProcessComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PostProcessMaterialInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RemoteCameraUserWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteCameraUserWidget_PostProcess>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessMaterial_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/**\n\x09 * Post process material used to display the widget.\n\x09 * SlateUI [Texture]\n\x09 * TintColorAndOpacity [Vector]\n\x09 * OpacityFromTexture [Scalar]\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteCameraUserWidget.h" },
		{ "ToolTip", "Post process material used to display the widget.\nSlateUI [Texture]\nTintColorAndOpacity [Vector]\nOpacityFromTexture [Scalar]" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessMaterial = { "PostProcessMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteCameraUserWidget_PostProcess, PostProcessMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessTintColorAndOpacity_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** Tint color and opacity for this component. */" },
		{ "ModuleRelativePath", "Public/RemoteCameraUserWidget.h" },
		{ "ToolTip", "Tint color and opacity for this component." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessTintColorAndOpacity = { "PostProcessTintColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteCameraUserWidget_PostProcess, PostProcessTintColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessTintColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessTintColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessOpacityFromTexture_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Sets the amount of opacity from the widget's UI texture to use when rendering the translucent or masked UI to the viewport (0.0-1.0). */" },
		{ "ModuleRelativePath", "Public/RemoteCameraUserWidget.h" },
		{ "ToolTip", "Sets the amount of opacity from the widget's UI texture to use when rendering the translucent or masked UI to the viewport (0.0-1.0)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessOpacityFromTexture = { "PostProcessOpacityFromTexture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteCameraUserWidget_PostProcess, PostProcessOpacityFromTexture), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessOpacityFromTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessOpacityFromTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** The size of the rendered widget. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/RemoteCameraUserWidget.h" },
		{ "ToolTip", "The size of the rendered widget." },
	};
#endif
	void Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize_SetBit(void* Obj)
	{
		((FRemoteCameraUserWidget_PostProcess*)Obj)->bWidgetDrawSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize = { "bWidgetDrawSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRemoteCameraUserWidget_PostProcess), &Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_WidgetDrawSize_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** The size of the rendered widget. */" },
		{ "EditCondition", "bWidgetDrawSize" },
		{ "ModuleRelativePath", "Public/RemoteCameraUserWidget.h" },
		{ "ToolTip", "The size of the rendered widget." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_WidgetDrawSize = { "WidgetDrawSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteCameraUserWidget_PostProcess, WidgetDrawSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_WidgetDrawSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_WidgetDrawSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_bWindowFocusable_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** Is the virtual window created to host the widget focusable? */" },
		{ "ModuleRelativePath", "Public/RemoteCameraUserWidget.h" },
		{ "ToolTip", "Is the virtual window created to host the widget focusable?" },
	};
#endif
	void Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_bWindowFocusable_SetBit(void* Obj)
	{
		((FRemoteCameraUserWidget_PostProcess*)Obj)->bWindowFocusable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_bWindowFocusable = { "bWindowFocusable", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRemoteCameraUserWidget_PostProcess), &Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_bWindowFocusable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_bWindowFocusable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_bWindowFocusable_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_WindowVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_WindowVisibility_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** The visibility of the virtual window created to host the widget. */" },
		{ "ModuleRelativePath", "Public/RemoteCameraUserWidget.h" },
		{ "ToolTip", "The visibility of the virtual window created to host the widget." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_WindowVisibility = { "WindowVisibility", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteCameraUserWidget_PostProcess, WindowVisibility), Z_Construct_UEnum_UMG_EWindowVisibility, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_WindowVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_WindowVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** Register with the viewport for hardware input from the mouse and keyboard. It can and will steal focus from the viewport. */" },
		{ "ModuleRelativePath", "Public/RemoteCameraUserWidget.h" },
		{ "ToolTip", "Register with the viewport for hardware input from the mouse and keyboard. It can and will steal focus from the viewport." },
	};
#endif
	void Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput_SetBit(void* Obj)
	{
		((FRemoteCameraUserWidget_PostProcess*)Obj)->bReceiveHardwareInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput = { "bReceiveHardwareInput", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRemoteCameraUserWidget_PostProcess), &Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_RenderTargetBackgroundColor_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** The background color of the render target */" },
		{ "ModuleRelativePath", "Public/RemoteCameraUserWidget.h" },
		{ "ToolTip", "The background color of the render target" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_RenderTargetBackgroundColor = { "RenderTargetBackgroundColor", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteCameraUserWidget_PostProcess, RenderTargetBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_RenderTargetBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_RenderTargetBackgroundColor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** The blend mode for the widget. */" },
		{ "ModuleRelativePath", "Public/RemoteCameraUserWidget.h" },
		{ "ToolTip", "The blend mode for the widget." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode = { "RenderTargetBlendMode", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteCameraUserWidget_PostProcess, RenderTargetBlendMode), Z_Construct_UEnum_UMG_EWidgetBlendMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_WidgetRenderTarget_MetaData[] = {
		{ "Comment", "/** The target to which the user widget is rendered. */" },
		{ "ModuleRelativePath", "Public/RemoteCameraUserWidget.h" },
		{ "ToolTip", "The target to which the user widget is rendered." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_WidgetRenderTarget = { "WidgetRenderTarget", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteCameraUserWidget_PostProcess, WidgetRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_WidgetRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_WidgetRenderTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessComponent_MetaData[] = {
		{ "Comment", "/** Post process component used to add the material to the post process chain. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RemoteCameraUserWidget.h" },
		{ "ToolTip", "Post process component used to add the material to the post process chain." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessComponent = { "PostProcessComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteCameraUserWidget_PostProcess, PostProcessComponent), Z_Construct_UClass_UPostProcessComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessMaterialInstance_MetaData[] = {
		{ "Comment", "/** The dynamic instance of the material that the render target is attached to. */" },
		{ "ModuleRelativePath", "Public/RemoteCameraUserWidget.h" },
		{ "ToolTip", "The dynamic instance of the material that the render target is attached to." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessMaterialInstance = { "PostProcessMaterialInstance", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteCameraUserWidget_PostProcess, PostProcessMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessMaterialInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessTintColorAndOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessOpacityFromTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_WidgetDrawSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_bWindowFocusable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_WindowVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_WindowVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_RenderTargetBackgroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_WidgetRenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::NewProp_PostProcessMaterialInstance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteCameraUtilities,
		nullptr,
		&NewStructOps,
		"RemoteCameraUserWidget_PostProcess",
		sizeof(FRemoteCameraUserWidget_PostProcess),
		alignof(FRemoteCameraUserWidget_PostProcess),
		Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RemoteCameraUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemoteCameraUserWidget_PostProcess"), sizeof(FRemoteCameraUserWidget_PostProcess), Get_Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess_Hash() { return 1428555631U; }
class UScriptStruct* FRemoteCameraUserWidget_Viewport::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern REMOTECAMERAUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FRemoteCameraUserWidget_Viewport_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_Viewport, Z_Construct_UPackage__Script_RemoteCameraUtilities(), TEXT("RemoteCameraUserWidget_Viewport"), sizeof(FRemoteCameraUserWidget_Viewport), Get_Z_Construct_UScriptStruct_FRemoteCameraUserWidget_Viewport_Hash());
	}
	return Singleton;
}
template<> REMOTECAMERAUTILITIES_API UScriptStruct* StaticStruct<FRemoteCameraUserWidget_Viewport>()
{
	return FRemoteCameraUserWidget_Viewport::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemoteCameraUserWidget_Viewport(FRemoteCameraUserWidget_Viewport::StaticStruct, TEXT("/Script/RemoteCameraUtilities"), TEXT("RemoteCameraUserWidget_Viewport"), false, nullptr, nullptr);
static struct FScriptStruct_RemoteCameraUtilities_StaticRegisterNativesFRemoteCameraUserWidget_Viewport
{
	FScriptStruct_RemoteCameraUtilities_StaticRegisterNativesFRemoteCameraUserWidget_Viewport()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RemoteCameraUserWidget_Viewport")),new UScriptStruct::TCppStructOps<FRemoteCameraUserWidget_Viewport>);
	}
} ScriptStruct_RemoteCameraUtilities_StaticRegisterNativesFRemoteCameraUserWidget_Viewport;
	struct Z_Construct_UScriptStruct_FRemoteCameraUserWidget_Viewport_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteCameraUserWidget_Viewport_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteCameraUserWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteCameraUserWidget_Viewport_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteCameraUserWidget_Viewport>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteCameraUserWidget_Viewport_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteCameraUtilities,
		nullptr,
		&NewStructOps,
		"RemoteCameraUserWidget_Viewport",
		sizeof(FRemoteCameraUserWidget_Viewport),
		alignof(FRemoteCameraUserWidget_Viewport),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_Viewport_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteCameraUserWidget_Viewport_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteCameraUserWidget_Viewport()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemoteCameraUserWidget_Viewport_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RemoteCameraUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemoteCameraUserWidget_Viewport"), sizeof(FRemoteCameraUserWidget_Viewport), Get_Z_Construct_UScriptStruct_FRemoteCameraUserWidget_Viewport_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemoteCameraUserWidget_Viewport_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemoteCameraUserWidget_Viewport_Hash() { return 3611078793U; }
	void URemoteCameraUserWidget::StaticRegisterNativesURemoteCameraUserWidget()
	{
	}
	UClass* Z_Construct_UClass_URemoteCameraUserWidget_NoRegister()
	{
		return URemoteCameraUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_URemoteCameraUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewportDisplayType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewportDisplayType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessDisplayType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessDisplayType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EditorDisplayType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorDisplayType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EditorDisplayType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameDisplayType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameDisplayType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameDisplayType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PIEDisplayType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PIEDisplayType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PIEDisplayType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteCameraUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteCameraUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraUserWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RemoteCameraUserWidget.h" },
		{ "ModuleRelativePath", "Public/RemoteCameraUserWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_ViewportDisplayType_MetaData[] = {
		{ "Category", "Post Process" },
		{ "ModuleRelativePath", "Public/RemoteCameraUserWidget.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_ViewportDisplayType = { "ViewportDisplayType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteCameraUserWidget, ViewportDisplayType), Z_Construct_UScriptStruct_FRemoteCameraUserWidget_Viewport, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_ViewportDisplayType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_ViewportDisplayType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_PostProcessDisplayType_MetaData[] = {
		{ "Category", "Post Process" },
		{ "ModuleRelativePath", "Public/RemoteCameraUserWidget.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_PostProcessDisplayType = { "PostProcessDisplayType", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteCameraUserWidget, PostProcessDisplayType), Z_Construct_UScriptStruct_FRemoteCameraUserWidget_PostProcess, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_PostProcessDisplayType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_PostProcessDisplayType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "User Widget" },
		{ "ModuleRelativePath", "Public/RemoteCameraUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteCameraUserWidget, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RemoteCameraUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0040000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteCameraUserWidget, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_EditorDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_EditorDisplayType_MetaData[] = {
		{ "Category", "User Interface" },
		{ "ModuleRelativePath", "Public/RemoteCameraUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_EditorDisplayType = { "EditorDisplayType", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteCameraUserWidget, EditorDisplayType), Z_Construct_UEnum_RemoteCameraUtilities_ERCWidgetDisplayType, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_EditorDisplayType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_EditorDisplayType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_GameDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_GameDisplayType_MetaData[] = {
		{ "Category", "User Interface" },
		{ "ModuleRelativePath", "Public/RemoteCameraUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_GameDisplayType = { "GameDisplayType", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteCameraUserWidget, GameDisplayType), Z_Construct_UEnum_RemoteCameraUtilities_ERCWidgetDisplayType, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_GameDisplayType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_GameDisplayType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_PIEDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_PIEDisplayType_MetaData[] = {
		{ "Category", "User Interface" },
		{ "ModuleRelativePath", "Public/RemoteCameraUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_PIEDisplayType = { "PIEDisplayType", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteCameraUserWidget, PIEDisplayType), Z_Construct_UEnum_RemoteCameraUtilities_ERCWidgetDisplayType, METADATA_PARAMS(Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_PIEDisplayType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_PIEDisplayType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteCameraUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_ViewportDisplayType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_PostProcessDisplayType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_EditorDisplayType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_EditorDisplayType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_GameDisplayType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_GameDisplayType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_PIEDisplayType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteCameraUserWidget_Statics::NewProp_PIEDisplayType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteCameraUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteCameraUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URemoteCameraUserWidget_Statics::ClassParams = {
		&URemoteCameraUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URemoteCameraUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraUserWidget_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteCameraUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCameraUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteCameraUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URemoteCameraUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URemoteCameraUserWidget, 184594311);
	template<> REMOTECAMERAUTILITIES_API UClass* StaticClass<URemoteCameraUserWidget>()
	{
		return URemoteCameraUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URemoteCameraUserWidget(Z_Construct_UClass_URemoteCameraUserWidget, &URemoteCameraUserWidget::StaticClass, TEXT("/Script/RemoteCameraUtilities"), TEXT("URemoteCameraUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteCameraUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
