// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EXCOMMUNICADO_GlobalManager_generated_h
#error "GlobalManager.generated.h already included, missing '#pragma once' in GlobalManager.h"
#endif
#define EXCOMMUNICADO_GlobalManager_generated_h

#define FID_Excommunicado_Source_Excommunicado_GlobalManager_h_15_SPARSE_DATA
#define FID_Excommunicado_Source_Excommunicado_GlobalManager_h_15_RPC_WRAPPERS
#define FID_Excommunicado_Source_Excommunicado_GlobalManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Excommunicado_Source_Excommunicado_GlobalManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGlobalManager(); \
	friend struct Z_Construct_UClass_UGlobalManager_Statics; \
public: \
	DECLARE_CLASS(UGlobalManager, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Excommunicado"), NO_API) \
	DECLARE_SERIALIZER(UGlobalManager)


#define FID_Excommunicado_Source_Excommunicado_GlobalManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGlobalManager(); \
	friend struct Z_Construct_UClass_UGlobalManager_Statics; \
public: \
	DECLARE_CLASS(UGlobalManager, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Excommunicado"), NO_API) \
	DECLARE_SERIALIZER(UGlobalManager)


#define FID_Excommunicado_Source_Excommunicado_GlobalManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGlobalManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGlobalManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGlobalManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGlobalManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGlobalManager(UGlobalManager&&); \
	NO_API UGlobalManager(const UGlobalManager&); \
public:


#define FID_Excommunicado_Source_Excommunicado_GlobalManager_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGlobalManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGlobalManager(UGlobalManager&&); \
	NO_API UGlobalManager(const UGlobalManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGlobalManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGlobalManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGlobalManager)


#define FID_Excommunicado_Source_Excommunicado_GlobalManager_h_12_PROLOG
#define FID_Excommunicado_Source_Excommunicado_GlobalManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Excommunicado_Source_Excommunicado_GlobalManager_h_15_SPARSE_DATA \
	FID_Excommunicado_Source_Excommunicado_GlobalManager_h_15_RPC_WRAPPERS \
	FID_Excommunicado_Source_Excommunicado_GlobalManager_h_15_INCLASS \
	FID_Excommunicado_Source_Excommunicado_GlobalManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Excommunicado_Source_Excommunicado_GlobalManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Excommunicado_Source_Excommunicado_GlobalManager_h_15_SPARSE_DATA \
	FID_Excommunicado_Source_Excommunicado_GlobalManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Excommunicado_Source_Excommunicado_GlobalManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_Excommunicado_Source_Excommunicado_GlobalManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXCOMMUNICADO_API UClass* StaticClass<class UGlobalManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Excommunicado_Source_Excommunicado_GlobalManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
