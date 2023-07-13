// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excommunicado/EnemyController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyController() {}
// Cross Module References
	EXCOMMUNICADO_API UClass* Z_Construct_UClass_AEnemyController_NoRegister();
	EXCOMMUNICADO_API UClass* Z_Construct_UClass_AEnemyController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Excommunicado();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void AEnemyController::StaticRegisterNativesAEnemyController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyController);
	UClass* Z_Construct_UClass_AEnemyController_NoRegister()
	{
		return AEnemyController::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_behaviorTreeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_behaviorTreeComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_behaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_behaviorTree;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Excommunicado,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "EnemyController.h" },
		{ "ModuleRelativePath", "EnemyController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::NewProp_behaviorTreeComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "//Tree Componenents\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyController.h" },
		{ "ToolTip", "Tree Componenents" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_behaviorTreeComponent = { "behaviorTreeComponent", nullptr, (EPropertyFlags)0x001000000008080d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyController, behaviorTreeComponent), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::NewProp_behaviorTreeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::NewProp_behaviorTreeComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::NewProp_behaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_behaviorTree = { "behaviorTree", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyController, behaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::NewProp_behaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::NewProp_behaviorTree_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_behaviorTreeComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_behaviorTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyController_Statics::ClassParams = {
		&AEnemyController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyController()
	{
		if (!Z_Registration_Info_UClass_AEnemyController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyController.OuterSingleton, Z_Construct_UClass_AEnemyController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyController.OuterSingleton;
	}
	template<> EXCOMMUNICADO_API UClass* StaticClass<AEnemyController>()
	{
		return AEnemyController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyController);
	struct Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_EnemyController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_EnemyController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyController, AEnemyController::StaticClass, TEXT("AEnemyController"), &Z_Registration_Info_UClass_AEnemyController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyController), 1811751415U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_EnemyController_h_451638480(TEXT("/Script/Excommunicado"),
		Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_EnemyController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_EnemyController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
