// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excommunicado/EnemySoldier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySoldier() {}
// Cross Module References
	EXCOMMUNICADO_API UClass* Z_Construct_UClass_AEnemySoldier_NoRegister();
	EXCOMMUNICADO_API UClass* Z_Construct_UClass_AEnemySoldier();
	EXCOMMUNICADO_API UClass* Z_Construct_UClass_AEnemy();
	UPackage* Z_Construct_UPackage__Script_Excommunicado();
// End Cross Module References
	void AEnemySoldier::StaticRegisterNativesAEnemySoldier()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemySoldier);
	UClass* Z_Construct_UClass_AEnemySoldier_NoRegister()
	{
		return AEnemySoldier::StaticClass();
	}
	struct Z_Construct_UClass_AEnemySoldier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemySoldier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_Excommunicado,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySoldier_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A child of the Enemy Class\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemySoldier.h" },
		{ "ModuleRelativePath", "EnemySoldier.h" },
		{ "ToolTip", "A child of the Enemy Class" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemySoldier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemySoldier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemySoldier_Statics::ClassParams = {
		&AEnemySoldier::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemySoldier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySoldier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemySoldier()
	{
		if (!Z_Registration_Info_UClass_AEnemySoldier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemySoldier.OuterSingleton, Z_Construct_UClass_AEnemySoldier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemySoldier.OuterSingleton;
	}
	template<> EXCOMMUNICADO_API UClass* StaticClass<AEnemySoldier>()
	{
		return AEnemySoldier::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemySoldier);
	struct Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_EnemySoldier_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_EnemySoldier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemySoldier, AEnemySoldier::StaticClass, TEXT("AEnemySoldier"), &Z_Registration_Info_UClass_AEnemySoldier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemySoldier), 2952918080U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_EnemySoldier_h_3534420372(TEXT("/Script/Excommunicado"),
		Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_EnemySoldier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_EnemySoldier_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
