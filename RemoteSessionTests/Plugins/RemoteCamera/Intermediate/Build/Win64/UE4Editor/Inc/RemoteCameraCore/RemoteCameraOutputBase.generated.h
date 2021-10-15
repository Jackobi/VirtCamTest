// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
class UCineCameraComponent;
#ifdef REMOTECAMERACORE_RemoteCameraOutputBase_generated_h
#error "RemoteCameraOutputBase.generated.h already included, missing '#pragma once' in RemoteCameraOutputBase.h"
#endif
#define REMOTECAMERACORE_RemoteCameraOutputBase_generated_h

#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraOutputBase_h_27_SPARSE_DATA
#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraOutputBase_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetUMGClass); \
	DECLARE_FUNCTION(execSetTargetCamera); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execSetActive);


#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraOutputBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetUMGClass); \
	DECLARE_FUNCTION(execSetTargetCamera); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execSetActive);


#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraOutputBase_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoteCameraOutputBase(); \
	friend struct Z_Construct_UClass_URemoteCameraOutputBase_Statics; \
public: \
	DECLARE_CLASS(URemoteCameraOutputBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/RemoteCameraCore"), NO_API) \
	DECLARE_SERIALIZER(URemoteCameraOutputBase)


#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraOutputBase_h_27_INCLASS \
private: \
	static void StaticRegisterNativesURemoteCameraOutputBase(); \
	friend struct Z_Construct_UClass_URemoteCameraOutputBase_Statics; \
public: \
	DECLARE_CLASS(URemoteCameraOutputBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/RemoteCameraCore"), NO_API) \
	DECLARE_SERIALIZER(URemoteCameraOutputBase)


#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraOutputBase_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URemoteCameraOutputBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemoteCameraOutputBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteCameraOutputBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteCameraOutputBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URemoteCameraOutputBase(URemoteCameraOutputBase&&); \
	NO_API URemoteCameraOutputBase(const URemoteCameraOutputBase&); \
public:


#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraOutputBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URemoteCameraOutputBase(URemoteCameraOutputBase&&); \
	NO_API URemoteCameraOutputBase(const URemoteCameraOutputBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteCameraOutputBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteCameraOutputBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URemoteCameraOutputBase)


#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraOutputBase_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsActive() { return STRUCT_OFFSET(URemoteCameraOutputBase, bIsActive); } \
	FORCEINLINE static uint32 __PPO__bInitialized() { return STRUCT_OFFSET(URemoteCameraOutputBase, bInitialized); } \
	FORCEINLINE static uint32 __PPO__UMGWidget() { return STRUCT_OFFSET(URemoteCameraOutputBase, UMGWidget); }


#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraOutputBase_h_24_PROLOG
#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraOutputBase_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraOutputBase_h_27_PRIVATE_PROPERTY_OFFSET \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraOutputBase_h_27_SPARSE_DATA \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraOutputBase_h_27_RPC_WRAPPERS \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraOutputBase_h_27_INCLASS \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraOutputBase_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraOutputBase_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraOutputBase_h_27_PRIVATE_PROPERTY_OFFSET \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraOutputBase_h_27_SPARSE_DATA \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraOutputBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraOutputBase_h_27_INCLASS_NO_PURE_DECLS \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraOutputBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REMOTECAMERACORE_API UClass* StaticClass<class URemoteCameraOutputBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraOutputBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
