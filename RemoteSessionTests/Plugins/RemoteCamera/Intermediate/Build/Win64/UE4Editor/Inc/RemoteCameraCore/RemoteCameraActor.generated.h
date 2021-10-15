// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REMOTECAMERACORE_RemoteCameraActor_generated_h
#error "RemoteCameraActor.generated.h already included, missing '#pragma once' in RemoteCameraActor.h"
#endif
#define REMOTECAMERACORE_RemoteCameraActor_generated_h

#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraActor_h_16_SPARSE_DATA
#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraActor_h_16_RPC_WRAPPERS
#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARemoteCameraActor(); \
	friend struct Z_Construct_UClass_ARemoteCameraActor_Statics; \
public: \
	DECLARE_CLASS(ARemoteCameraActor, ACineCameraActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/RemoteCameraCore"), NO_API) \
	DECLARE_SERIALIZER(ARemoteCameraActor)


#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesARemoteCameraActor(); \
	friend struct Z_Construct_UClass_ARemoteCameraActor_Statics; \
public: \
	DECLARE_CLASS(ARemoteCameraActor, ACineCameraActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/RemoteCameraCore"), NO_API) \
	DECLARE_SERIALIZER(ARemoteCameraActor)


#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARemoteCameraActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARemoteCameraActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARemoteCameraActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARemoteCameraActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARemoteCameraActor(ARemoteCameraActor&&); \
	NO_API ARemoteCameraActor(const ARemoteCameraActor&); \
public:


#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraActor_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARemoteCameraActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARemoteCameraActor(ARemoteCameraActor&&); \
	NO_API ARemoteCameraActor(const ARemoteCameraActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARemoteCameraActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARemoteCameraActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARemoteCameraActor)


#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraActor_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RemoteCameraComponent() { return STRUCT_OFFSET(ARemoteCameraActor, RemoteCameraComponent); }


#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraActor_h_13_PROLOG
#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraActor_h_16_PRIVATE_PROPERTY_OFFSET \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraActor_h_16_SPARSE_DATA \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraActor_h_16_RPC_WRAPPERS \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraActor_h_16_INCLASS \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraActor_h_16_PRIVATE_PROPERTY_OFFSET \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraActor_h_16_SPARSE_DATA \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraActor_h_16_INCLASS_NO_PURE_DECLS \
	RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REMOTECAMERACORE_API UClass* StaticClass<class ARemoteCameraActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RemoteSessionTests_Plugins_RemoteCamera_Source_RemoteCameraCore_Public_RemoteCameraActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
