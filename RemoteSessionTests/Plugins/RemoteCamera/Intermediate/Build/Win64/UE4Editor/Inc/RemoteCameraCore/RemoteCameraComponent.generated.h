// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URemoteCameraComponent;
struct FLiveLinkCameraBlueprintData;
class URemoteCameraOutputBase;
class UCineCameraComponent;
class UObject; class UObject;
#ifdef REMOTECAMERACORE_RemoteCameraComponent_generated_h
#error "RemoteCameraComponent.generated.h already included, missing '#pragma once' in RemoteCameraComponent.h"
#endif
#define REMOTECAMERACORE_RemoteCameraComponent_generated_h

#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraComponent_h_22_DELEGATE \
struct _Script_RemoteCameraCore_eventOnComponentReplaced_Parms \
{ \
	URemoteCameraComponent* NewComponent; \
}; \
static inline void FOnComponentReplaced_DelegateWrapper(const FMulticastScriptDelegate& OnComponentReplaced, URemoteCameraComponent* NewComponent) \
{ \
	_Script_RemoteCameraCore_eventOnComponentReplaced_Parms Parms; \
	Parms.NewComponent=NewComponent; \
	OnComponentReplaced.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraComponent_h_37_SPARSE_DATA
#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraComponent_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLiveLinkDataForCurrentFrame); \
	DECLARE_FUNCTION(execGetOutputProvidersByClass); \
	DECLARE_FUNCTION(execGetOutputProviderByIndex); \
	DECLARE_FUNCTION(execGetAllOutputProviders); \
	DECLARE_FUNCTION(execGetNumberOfOutputProviders); \
	DECLARE_FUNCTION(execRemoveOutputProviderByIndex); \
	DECLARE_FUNCTION(execRemoveOutputProvider); \
	DECLARE_FUNCTION(execRemoveAllOutputProviders); \
	DECLARE_FUNCTION(execSetOutputProviderIndex); \
	DECLARE_FUNCTION(execInsertOutputProvider); \
	DECLARE_FUNCTION(execAddOutputProvider); \
	DECLARE_FUNCTION(execGetTargetCamera); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execHandleObjectReplaced);


#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLiveLinkDataForCurrentFrame); \
	DECLARE_FUNCTION(execGetOutputProvidersByClass); \
	DECLARE_FUNCTION(execGetOutputProviderByIndex); \
	DECLARE_FUNCTION(execGetAllOutputProviders); \
	DECLARE_FUNCTION(execGetNumberOfOutputProviders); \
	DECLARE_FUNCTION(execRemoveOutputProviderByIndex); \
	DECLARE_FUNCTION(execRemoveOutputProvider); \
	DECLARE_FUNCTION(execRemoveAllOutputProviders); \
	DECLARE_FUNCTION(execSetOutputProviderIndex); \
	DECLARE_FUNCTION(execInsertOutputProvider); \
	DECLARE_FUNCTION(execAddOutputProvider); \
	DECLARE_FUNCTION(execGetTargetCamera); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execHandleObjectReplaced);


#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraComponent_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoteCameraComponent(); \
	friend struct Z_Construct_UClass_URemoteCameraComponent_Statics; \
public: \
	DECLARE_CLASS(URemoteCameraComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RemoteCameraCore"), NO_API) \
	DECLARE_SERIALIZER(URemoteCameraComponent)


#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraComponent_h_37_INCLASS \
private: \
	static void StaticRegisterNativesURemoteCameraComponent(); \
	friend struct Z_Construct_UClass_URemoteCameraComponent_Statics; \
public: \
	DECLARE_CLASS(URemoteCameraComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RemoteCameraCore"), NO_API) \
	DECLARE_SERIALIZER(URemoteCameraComponent)


#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraComponent_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URemoteCameraComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemoteCameraComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteCameraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteCameraComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URemoteCameraComponent(URemoteCameraComponent&&); \
	NO_API URemoteCameraComponent(const URemoteCameraComponent&); \
public:


#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraComponent_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URemoteCameraComponent(URemoteCameraComponent&&); \
	NO_API URemoteCameraComponent(const URemoteCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteCameraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteCameraComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URemoteCameraComponent)


#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraComponent_h_37_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bEnabled() { return STRUCT_OFFSET(URemoteCameraComponent, bEnabled); } \
	FORCEINLINE static uint32 __PPO__TargetCamera() { return STRUCT_OFFSET(URemoteCameraComponent, TargetCamera); } \
	FORCEINLINE static uint32 __PPO__bIsLockedToViewport() { return STRUCT_OFFSET(URemoteCameraComponent, bIsLockedToViewport); }


#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraComponent_h_34_PROLOG
#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraComponent_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraComponent_h_37_PRIVATE_PROPERTY_OFFSET \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraComponent_h_37_SPARSE_DATA \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraComponent_h_37_RPC_WRAPPERS \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraComponent_h_37_INCLASS \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraComponent_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraComponent_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraComponent_h_37_PRIVATE_PROPERTY_OFFSET \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraComponent_h_37_SPARSE_DATA \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraComponent_h_37_INCLASS_NO_PURE_DECLS \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraComponent_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REMOTECAMERACORE_API UClass* StaticClass<class URemoteCameraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraComponent_h


#define FOREACH_ENUM_ERCTARGETVIEWPORTID(op) \
	op(ERCTargetViewportID::CurrentlySelected) \
	op(ERCTargetViewportID::Viewport1) \
	op(ERCTargetViewportID::Viewport2) \
	op(ERCTargetViewportID::Viewport3) \
	op(ERCTargetViewportID::Viewport4) 

enum class ERCTargetViewportID : uint8;
template<> REMOTECAMERACORE_API UEnum* StaticEnum<ERCTargetViewportID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
