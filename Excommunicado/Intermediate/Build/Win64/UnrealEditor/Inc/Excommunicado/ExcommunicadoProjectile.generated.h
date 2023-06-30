// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef EXCOMMUNICADO_ExcommunicadoProjectile_generated_h
#error "ExcommunicadoProjectile.generated.h already included, missing '#pragma once' in ExcommunicadoProjectile.h"
#endif
#define EXCOMMUNICADO_ExcommunicadoProjectile_generated_h

#define FID_Excommunicado_Source_Excommunicado_ExcommunicadoProjectile_h_15_SPARSE_DATA
#define FID_Excommunicado_Source_Excommunicado_ExcommunicadoProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Excommunicado_Source_Excommunicado_ExcommunicadoProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Excommunicado_Source_Excommunicado_ExcommunicadoProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExcommunicadoProjectile(); \
	friend struct Z_Construct_UClass_AExcommunicadoProjectile_Statics; \
public: \
	DECLARE_CLASS(AExcommunicadoProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Excommunicado"), NO_API) \
	DECLARE_SERIALIZER(AExcommunicadoProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Excommunicado_Source_Excommunicado_ExcommunicadoProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAExcommunicadoProjectile(); \
	friend struct Z_Construct_UClass_AExcommunicadoProjectile_Statics; \
public: \
	DECLARE_CLASS(AExcommunicadoProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Excommunicado"), NO_API) \
	DECLARE_SERIALIZER(AExcommunicadoProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Excommunicado_Source_Excommunicado_ExcommunicadoProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExcommunicadoProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExcommunicadoProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExcommunicadoProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExcommunicadoProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExcommunicadoProjectile(AExcommunicadoProjectile&&); \
	NO_API AExcommunicadoProjectile(const AExcommunicadoProjectile&); \
public:


#define FID_Excommunicado_Source_Excommunicado_ExcommunicadoProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExcommunicadoProjectile(AExcommunicadoProjectile&&); \
	NO_API AExcommunicadoProjectile(const AExcommunicadoProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExcommunicadoProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExcommunicadoProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExcommunicadoProjectile)


#define FID_Excommunicado_Source_Excommunicado_ExcommunicadoProjectile_h_12_PROLOG
#define FID_Excommunicado_Source_Excommunicado_ExcommunicadoProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Excommunicado_Source_Excommunicado_ExcommunicadoProjectile_h_15_SPARSE_DATA \
	FID_Excommunicado_Source_Excommunicado_ExcommunicadoProjectile_h_15_RPC_WRAPPERS \
	FID_Excommunicado_Source_Excommunicado_ExcommunicadoProjectile_h_15_INCLASS \
	FID_Excommunicado_Source_Excommunicado_ExcommunicadoProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Excommunicado_Source_Excommunicado_ExcommunicadoProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Excommunicado_Source_Excommunicado_ExcommunicadoProjectile_h_15_SPARSE_DATA \
	FID_Excommunicado_Source_Excommunicado_ExcommunicadoProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Excommunicado_Source_Excommunicado_ExcommunicadoProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Excommunicado_Source_Excommunicado_ExcommunicadoProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXCOMMUNICADO_API UClass* StaticClass<class AExcommunicadoProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Excommunicado_Source_Excommunicado_ExcommunicadoProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
