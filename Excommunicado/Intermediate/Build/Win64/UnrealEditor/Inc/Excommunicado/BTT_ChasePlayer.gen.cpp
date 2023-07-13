// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excommunicado/BTT_ChasePlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_ChasePlayer() {}
// Cross Module References
	EXCOMMUNICADO_API UClass* Z_Construct_UClass_UBTT_ChasePlayer_NoRegister();
	EXCOMMUNICADO_API UClass* Z_Construct_UClass_UBTT_ChasePlayer();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Excommunicado();
// End Cross Module References
	void UBTT_ChasePlayer::StaticRegisterNativesUBTT_ChasePlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_ChasePlayer);
	UClass* Z_Construct_UClass_UBTT_ChasePlayer_NoRegister()
	{
		return UBTT_ChasePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UBTT_ChasePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTT_ChasePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Excommunicado,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_ChasePlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTT_ChasePlayer.h" },
		{ "ModuleRelativePath", "BTT_ChasePlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTT_ChasePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_ChasePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_ChasePlayer_Statics::ClassParams = {
		&UBTT_ChasePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTT_ChasePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChasePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTT_ChasePlayer()
	{
		if (!Z_Registration_Info_UClass_UBTT_ChasePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_ChasePlayer.OuterSingleton, Z_Construct_UClass_UBTT_ChasePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTT_ChasePlayer.OuterSingleton;
	}
	template<> EXCOMMUNICADO_API UClass* StaticClass<UBTT_ChasePlayer>()
	{
		return UBTT_ChasePlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_ChasePlayer);
	struct Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_BTT_ChasePlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_BTT_ChasePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_ChasePlayer, UBTT_ChasePlayer::StaticClass, TEXT("UBTT_ChasePlayer"), &Z_Registration_Info_UClass_UBTT_ChasePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_ChasePlayer), 1228792847U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_BTT_ChasePlayer_h_2140113743(TEXT("/Script/Excommunicado"),
		Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_BTT_ChasePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_BTT_ChasePlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
