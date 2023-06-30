// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excommunicado/ExcommunicadoGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExcommunicadoGameMode() {}
// Cross Module References
	EXCOMMUNICADO_API UClass* Z_Construct_UClass_AExcommunicadoGameMode_NoRegister();
	EXCOMMUNICADO_API UClass* Z_Construct_UClass_AExcommunicadoGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Excommunicado();
// End Cross Module References
	void AExcommunicadoGameMode::StaticRegisterNativesAExcommunicadoGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AExcommunicadoGameMode);
	UClass* Z_Construct_UClass_AExcommunicadoGameMode_NoRegister()
	{
		return AExcommunicadoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AExcommunicadoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExcommunicadoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Excommunicado,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcommunicadoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ExcommunicadoGameMode.h" },
		{ "ModuleRelativePath", "ExcommunicadoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExcommunicadoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExcommunicadoGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AExcommunicadoGameMode_Statics::ClassParams = {
		&AExcommunicadoGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AExcommunicadoGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExcommunicadoGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExcommunicadoGameMode()
	{
		if (!Z_Registration_Info_UClass_AExcommunicadoGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExcommunicadoGameMode.OuterSingleton, Z_Construct_UClass_AExcommunicadoGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AExcommunicadoGameMode.OuterSingleton;
	}
	template<> EXCOMMUNICADO_API UClass* StaticClass<AExcommunicadoGameMode>()
	{
		return AExcommunicadoGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExcommunicadoGameMode);
	struct Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_ExcommunicadoGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_ExcommunicadoGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AExcommunicadoGameMode, AExcommunicadoGameMode::StaticClass, TEXT("AExcommunicadoGameMode"), &Z_Registration_Info_UClass_AExcommunicadoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExcommunicadoGameMode), 2318560970U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_ExcommunicadoGameMode_h_1989022699(TEXT("/Script/Excommunicado"),
		Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_ExcommunicadoGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_ExcommunicadoGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
