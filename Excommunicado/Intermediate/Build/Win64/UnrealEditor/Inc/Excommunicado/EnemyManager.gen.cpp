// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excommunicado/EnemyManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyManager() {}
// Cross Module References
	EXCOMMUNICADO_API UClass* Z_Construct_UClass_AEnemyManager_NoRegister();
	EXCOMMUNICADO_API UClass* Z_Construct_UClass_AEnemyManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Excommunicado();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AEnemyManager::StaticRegisterNativesAEnemyManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyManager);
	UClass* Z_Construct_UClass_AEnemyManager_NoRegister()
	{
		return AEnemyManager::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_spawnLocation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnLocation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_spawnLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_firstWaveCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_firstWaveCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentWave_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_currentWave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Excommunicado,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyManager.h" },
		{ "ModuleRelativePath", "EnemyManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_spawnLocation_Inner = { "spawnLocation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::NewProp_spawnLocation_MetaData[] = {
		{ "Category", "Management" },
		{ "Comment", "//Fields\n" },
		{ "ModuleRelativePath", "EnemyManager.h" },
		{ "ToolTip", "Fields" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_spawnLocation = { "spawnLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyManager, spawnLocation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemyManager_Statics::NewProp_spawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::NewProp_spawnLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::NewProp_firstWaveCount_MetaData[] = {
		{ "Category", "Management" },
		{ "ModuleRelativePath", "EnemyManager.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_firstWaveCount = { "firstWaveCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyManager, firstWaveCount), METADATA_PARAMS(Z_Construct_UClass_AEnemyManager_Statics::NewProp_firstWaveCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::NewProp_firstWaveCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::NewProp_currentWave_MetaData[] = {
		{ "Category", "Management" },
		{ "ModuleRelativePath", "EnemyManager.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_currentWave = { "currentWave", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyManager, currentWave), METADATA_PARAMS(Z_Construct_UClass_AEnemyManager_Statics::NewProp_currentWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::NewProp_currentWave_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_spawnLocation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_spawnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_firstWaveCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_currentWave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyManager_Statics::ClassParams = {
		&AEnemyManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyManager()
	{
		if (!Z_Registration_Info_UClass_AEnemyManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyManager.OuterSingleton, Z_Construct_UClass_AEnemyManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyManager.OuterSingleton;
	}
	template<> EXCOMMUNICADO_API UClass* StaticClass<AEnemyManager>()
	{
		return AEnemyManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyManager);
	struct Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_EnemyManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_EnemyManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyManager, AEnemyManager::StaticClass, TEXT("AEnemyManager"), &Z_Registration_Info_UClass_AEnemyManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyManager), 2657492530U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_EnemyManager_h_6574400(TEXT("/Script/Excommunicado"),
		Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_EnemyManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_EnemyManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
