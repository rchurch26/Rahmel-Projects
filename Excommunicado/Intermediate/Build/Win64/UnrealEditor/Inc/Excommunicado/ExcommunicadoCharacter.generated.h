// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef EXCOMMUNICADO_ExcommunicadoCharacter_generated_h
#error "ExcommunicadoCharacter.generated.h already included, missing '#pragma once' in ExcommunicadoCharacter.h"
#endif
#define EXCOMMUNICADO_ExcommunicadoCharacter_generated_h

#define FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h_19_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h_24_SPARSE_DATA
#define FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleOnMontageEnd);


#define FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleOnMontageEnd);


#define FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExcommunicadoCharacter(); \
	friend struct Z_Construct_UClass_AExcommunicadoCharacter_Statics; \
public: \
	DECLARE_CLASS(AExcommunicadoCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Excommunicado"), NO_API) \
	DECLARE_SERIALIZER(AExcommunicadoCharacter)


#define FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAExcommunicadoCharacter(); \
	friend struct Z_Construct_UClass_AExcommunicadoCharacter_Statics; \
public: \
	DECLARE_CLASS(AExcommunicadoCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Excommunicado"), NO_API) \
	DECLARE_SERIALIZER(AExcommunicadoCharacter)


#define FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExcommunicadoCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExcommunicadoCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExcommunicadoCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExcommunicadoCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExcommunicadoCharacter(AExcommunicadoCharacter&&); \
	NO_API AExcommunicadoCharacter(const AExcommunicadoCharacter&); \
public:


#define FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExcommunicadoCharacter(AExcommunicadoCharacter&&); \
	NO_API AExcommunicadoCharacter(const AExcommunicadoCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExcommunicadoCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExcommunicadoCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExcommunicadoCharacter)


#define FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h_21_PROLOG
#define FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h_24_SPARSE_DATA \
	FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h_24_RPC_WRAPPERS \
	FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h_24_INCLASS \
	FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h_24_SPARSE_DATA \
	FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXCOMMUNICADO_API UClass* StaticClass<class AExcommunicadoCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
