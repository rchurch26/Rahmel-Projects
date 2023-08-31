// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excommunicado/ExcommunicadoCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExcommunicadoCharacter() {}
// Cross Module References
	EXCOMMUNICADO_API UFunction* Z_Construct_UDelegateFunction_Excommunicado_OnUseItem__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Excommunicado();
	EXCOMMUNICADO_API UClass* Z_Construct_UClass_AExcommunicadoCharacter_NoRegister();
	EXCOMMUNICADO_API UClass* Z_Construct_UClass_AExcommunicadoCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Excommunicado_OnUseItem__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Excommunicado_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Declaration of the delegate that will be called when the Primary Action is triggered\n// It is declared as dynamic so it can be accessed also in Blueprints\n" },
		{ "ModuleRelativePath", "ExcommunicadoCharacter.h" },
		{ "ToolTip", "Declaration of the delegate that will be called when the Primary Action is triggered\nIt is declared as dynamic so it can be accessed also in Blueprints" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Excommunicado_OnUseItem__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Excommunicado, nullptr, "OnUseItem__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Excommunicado_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Excommunicado_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Excommunicado_OnUseItem__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Excommunicado_OnUseItem__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AExcommunicadoCharacter::execHandleOnMontageEnd)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_montage);
		P_GET_UBOOL(Z_Param_interrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnMontageEnd(Z_Param_montage,Z_Param_interrupted);
		P_NATIVE_END;
	}
	void AExcommunicadoCharacter::StaticRegisterNativesAExcommunicadoCharacter()
	{
		UClass* Class = AExcommunicadoCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleOnMontageEnd", &AExcommunicadoCharacter::execHandleOnMontageEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AExcommunicadoCharacter_HandleOnMontageEnd_Statics
	{
		struct ExcommunicadoCharacter_eventHandleOnMontageEnd_Parms
		{
			UAnimMontage* montage;
			bool interrupted;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_montage;
		static void NewProp_interrupted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_interrupted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AExcommunicadoCharacter_HandleOnMontageEnd_Statics::NewProp_montage = { "montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcommunicadoCharacter_eventHandleOnMontageEnd_Parms, montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AExcommunicadoCharacter_HandleOnMontageEnd_Statics::NewProp_interrupted_SetBit(void* Obj)
	{
		((ExcommunicadoCharacter_eventHandleOnMontageEnd_Parms*)Obj)->interrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AExcommunicadoCharacter_HandleOnMontageEnd_Statics::NewProp_interrupted = { "interrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExcommunicadoCharacter_eventHandleOnMontageEnd_Parms), &Z_Construct_UFunction_AExcommunicadoCharacter_HandleOnMontageEnd_Statics::NewProp_interrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExcommunicadoCharacter_HandleOnMontageEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExcommunicadoCharacter_HandleOnMontageEnd_Statics::NewProp_montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExcommunicadoCharacter_HandleOnMontageEnd_Statics::NewProp_interrupted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExcommunicadoCharacter_HandleOnMontageEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ExcommunicadoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExcommunicadoCharacter_HandleOnMontageEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExcommunicadoCharacter, nullptr, "HandleOnMontageEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_AExcommunicadoCharacter_HandleOnMontageEnd_Statics::ExcommunicadoCharacter_eventHandleOnMontageEnd_Parms), Z_Construct_UFunction_AExcommunicadoCharacter_HandleOnMontageEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExcommunicadoCharacter_HandleOnMontageEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExcommunicadoCharacter_HandleOnMontageEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExcommunicadoCharacter_HandleOnMontageEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExcommunicadoCharacter_HandleOnMontageEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExcommunicadoCharacter_HandleOnMontageEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AExcommunicadoCharacter);
	UClass* Z_Construct_UClass_AExcommunicadoCharacter_NoRegister()
	{
		return AExcommunicadoCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AExcommunicadoCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cPistol_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_cPistol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cPlayerHUD_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_cPlayerHUD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUseItem_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUseItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_reloadMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_reloadMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shootMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_shootMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_currentAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_totalAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_totalAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_canInteract_MetaData[];
#endif
		static void NewProp_canInteract_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_canInteract;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExcommunicadoCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Excommunicado,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AExcommunicadoCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AExcommunicadoCharacter_HandleOnMontageEnd, "HandleOnMontageEnd" }, // 2230227849
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcommunicadoCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ExcommunicadoCharacter.h" },
		{ "ModuleRelativePath", "ExcommunicadoCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExcommunicadoCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExcommunicadoCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExcommunicadoCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExcommunicadoCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_cPistol_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon" },
		{ "Comment", "//Weapon Reference\n" },
		{ "ModuleRelativePath", "ExcommunicadoCharacter.h" },
		{ "ToolTip", "Weapon Reference" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_cPistol = { "cPistol", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExcommunicadoCharacter, cPistol), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_cPistol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_cPistol_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_cPlayerHUD_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon" },
		{ "Comment", "//HUD Reference\n" },
		{ "ModuleRelativePath", "ExcommunicadoCharacter.h" },
		{ "ToolTip", "HUD Reference" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_cPlayerHUD = { "cPlayerHUD", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExcommunicadoCharacter, cPlayerHUD), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_cPlayerHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_cPlayerHUD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "ExcommunicadoCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExcommunicadoCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_OnUseItem_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Delegate to whom anyone can subscribe to receive this event */" },
		{ "ModuleRelativePath", "ExcommunicadoCharacter.h" },
		{ "ToolTip", "Delegate to whom anyone can subscribe to receive this event" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_OnUseItem = { "OnUseItem", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExcommunicadoCharacter, OnUseItem), Z_Construct_UDelegateFunction_Excommunicado_OnUseItem__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_OnUseItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_OnUseItem_MetaData)) }; // 2484586535
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_reloadMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "//Reload Montage\n" },
		{ "ModuleRelativePath", "ExcommunicadoCharacter.h" },
		{ "ToolTip", "Reload Montage" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_reloadMontage = { "reloadMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExcommunicadoCharacter, reloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_reloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_reloadMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_shootMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "//Shooting Montage\n" },
		{ "ModuleRelativePath", "ExcommunicadoCharacter.h" },
		{ "ToolTip", "Shooting Montage" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_shootMontage = { "shootMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExcommunicadoCharacter, shootMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_shootMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_shootMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_health_MetaData[] = {
		{ "Category", "ExcommunicadoCharacter" },
		{ "Comment", "//Fields\n" },
		{ "ModuleRelativePath", "ExcommunicadoCharacter.h" },
		{ "ToolTip", "Fields" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExcommunicadoCharacter, health), METADATA_PARAMS(Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_currentAmmo_MetaData[] = {
		{ "Category", "ExcommunicadoCharacter" },
		{ "ModuleRelativePath", "ExcommunicadoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_currentAmmo = { "currentAmmo", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExcommunicadoCharacter, currentAmmo), METADATA_PARAMS(Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_currentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_currentAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_totalAmmo_MetaData[] = {
		{ "Category", "ExcommunicadoCharacter" },
		{ "ModuleRelativePath", "ExcommunicadoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_totalAmmo = { "totalAmmo", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExcommunicadoCharacter, totalAmmo), METADATA_PARAMS(Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_totalAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_totalAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_canInteract_MetaData[] = {
		{ "Category", "ExcommunicadoCharacter" },
		{ "ModuleRelativePath", "ExcommunicadoCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_canInteract_SetBit(void* Obj)
	{
		((AExcommunicadoCharacter*)Obj)->canInteract = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_canInteract = { "canInteract", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AExcommunicadoCharacter), &Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_canInteract_SetBit, METADATA_PARAMS(Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_canInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_canInteract_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExcommunicadoCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_cPistol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_cPlayerHUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_OnUseItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_reloadMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_shootMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_currentAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_totalAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExcommunicadoCharacter_Statics::NewProp_canInteract,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExcommunicadoCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExcommunicadoCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AExcommunicadoCharacter_Statics::ClassParams = {
		&AExcommunicadoCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AExcommunicadoCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AExcommunicadoCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExcommunicadoCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExcommunicadoCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExcommunicadoCharacter()
	{
		if (!Z_Registration_Info_UClass_AExcommunicadoCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExcommunicadoCharacter.OuterSingleton, Z_Construct_UClass_AExcommunicadoCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AExcommunicadoCharacter.OuterSingleton;
	}
	template<> EXCOMMUNICADO_API UClass* StaticClass<AExcommunicadoCharacter>()
	{
		return AExcommunicadoCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExcommunicadoCharacter);
	struct Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AExcommunicadoCharacter, AExcommunicadoCharacter::StaticClass, TEXT("AExcommunicadoCharacter"), &Z_Registration_Info_UClass_AExcommunicadoCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExcommunicadoCharacter), 1171087247U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h_1245720195(TEXT("/Script/Excommunicado"),
		Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Excommunicado_Source_Excommunicado_ExcommunicadoCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
