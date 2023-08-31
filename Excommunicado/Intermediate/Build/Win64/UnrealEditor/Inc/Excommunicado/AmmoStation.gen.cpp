// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excommunicado/AmmoStation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmoStation() {}
// Cross Module References
	EXCOMMUNICADO_API UClass* Z_Construct_UClass_AAmmoStation_NoRegister();
	EXCOMMUNICADO_API UClass* Z_Construct_UClass_AAmmoStation();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Excommunicado();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAmmoStation::execOnCapsuleEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCapsuleEndOverlap(Z_Param_overlappedComponent,Z_Param_otherActor,Z_Param_otherComponent,Z_Param_otherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAmmoStation::execOnCapsuleBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_fromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCapsuleBeginOverlap(Z_Param_overlappedComponent,Z_Param_otherActor,Z_Param_otherComponent,Z_Param_otherBodyIndex,Z_Param_fromSweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	void AAmmoStation::StaticRegisterNativesAAmmoStation()
	{
		UClass* Class = AAmmoStation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCapsuleBeginOverlap", &AAmmoStation::execOnCapsuleBeginOverlap },
			{ "OnCapsuleEndOverlap", &AAmmoStation::execOnCapsuleEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics
	{
		struct AmmoStation_eventOnCapsuleBeginOverlap_Parms
		{
			UPrimitiveComponent* overlappedComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComponent;
			int32 otherBodyIndex;
			bool fromSweep;
			FHitResult sweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_otherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
		static void NewProp_fromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_fromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_sweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_overlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_overlappedComponent = { "overlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmmoStation_eventOnCapsuleBeginOverlap_Parms, overlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_overlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_overlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmmoStation_eventOnCapsuleBeginOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_otherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_otherComponent = { "otherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmmoStation_eventOnCapsuleBeginOverlap_Parms, otherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_otherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_otherComponent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmmoStation_eventOnCapsuleBeginOverlap_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_fromSweep_SetBit(void* Obj)
	{
		((AmmoStation_eventOnCapsuleBeginOverlap_Parms*)Obj)->fromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_fromSweep = { "fromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AmmoStation_eventOnCapsuleBeginOverlap_Parms), &Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_fromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmmoStation_eventOnCapsuleBeginOverlap_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_sweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_sweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_overlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_otherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_otherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_otherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_fromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::NewProp_sweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//BeginOverlap Event Handler\n" },
		{ "ModuleRelativePath", "AmmoStation.h" },
		{ "ToolTip", "BeginOverlap Event Handler" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmmoStation, nullptr, "OnCapsuleBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::AmmoStation_eventOnCapsuleBeginOverlap_Parms), Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics
	{
		struct AmmoStation_eventOnCapsuleEndOverlap_Parms
		{
			UPrimitiveComponent* overlappedComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComponent;
			int32 otherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_otherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_overlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_overlappedComponent = { "overlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmmoStation_eventOnCapsuleEndOverlap_Parms, overlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_overlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_overlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmmoStation_eventOnCapsuleEndOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_otherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_otherComponent = { "otherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmmoStation_eventOnCapsuleEndOverlap_Parms, otherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_otherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_otherComponent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmmoStation_eventOnCapsuleEndOverlap_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_overlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_otherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_otherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::NewProp_otherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//EndOverlap Event Handler\n" },
		{ "ModuleRelativePath", "AmmoStation.h" },
		{ "ToolTip", "EndOverlap Event Handler" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmmoStation, nullptr, "OnCapsuleEndOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::AmmoStation_eventOnCapsuleEndOverlap_Parms), Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAmmoStation);
	UClass* Z_Construct_UClass_AAmmoStation_NoRegister()
	{
		return AAmmoStation::StaticClass();
	}
	struct Z_Construct_UClass_AAmmoStation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_capsuleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_capsuleComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAmmoStation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Excommunicado,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAmmoStation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAmmoStation_OnCapsuleBeginOverlap, "OnCapsuleBeginOverlap" }, // 425153312
		{ &Z_Construct_UFunction_AAmmoStation_OnCapsuleEndOverlap, "OnCapsuleEndOverlap" }, // 926703755
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoStation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AmmoStation.h" },
		{ "ModuleRelativePath", "AmmoStation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoStation_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "//Ammo Station Mesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AmmoStation.h" },
		{ "ToolTip", "Ammo Station Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmmoStation_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoStation, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAmmoStation_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoStation_Statics::NewProp_mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoStation_Statics::NewProp_capsuleComponent_MetaData[] = {
		{ "Category", "Trigger Capsule" },
		{ "Comment", "//Trigger Capsule Collider\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AmmoStation.h" },
		{ "ToolTip", "Trigger Capsule Collider" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmmoStation_Statics::NewProp_capsuleComponent = { "capsuleComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoStation, capsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAmmoStation_Statics::NewProp_capsuleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoStation_Statics::NewProp_capsuleComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAmmoStation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoStation_Statics::NewProp_mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoStation_Statics::NewProp_capsuleComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAmmoStation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAmmoStation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAmmoStation_Statics::ClassParams = {
		&AAmmoStation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAmmoStation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoStation_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAmmoStation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoStation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAmmoStation()
	{
		if (!Z_Registration_Info_UClass_AAmmoStation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAmmoStation.OuterSingleton, Z_Construct_UClass_AAmmoStation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAmmoStation.OuterSingleton;
	}
	template<> EXCOMMUNICADO_API UClass* StaticClass<AAmmoStation>()
	{
		return AAmmoStation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAmmoStation);
	struct Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_AmmoStation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_AmmoStation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAmmoStation, AAmmoStation::StaticClass, TEXT("AAmmoStation"), &Z_Registration_Info_UClass_AAmmoStation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAmmoStation), 2471260759U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_AmmoStation_h_3508765633(TEXT("/Script/Excommunicado"),
		Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_AmmoStation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_AmmoStation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
