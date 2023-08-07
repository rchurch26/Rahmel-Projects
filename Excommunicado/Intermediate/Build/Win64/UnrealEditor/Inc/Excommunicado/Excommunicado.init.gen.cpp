// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExcommunicado_init() {}
	EXCOMMUNICADO_API UFunction* Z_Construct_UDelegateFunction_Excommunicado_OnPickUp__DelegateSignature();
	EXCOMMUNICADO_API UFunction* Z_Construct_UDelegateFunction_Excommunicado_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Excommunicado;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Excommunicado()
	{
		if (!Z_Registration_Info_UPackage__Script_Excommunicado.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Excommunicado_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Excommunicado_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Excommunicado",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE1583DF4,
				0x3E885AD4,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Excommunicado.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Excommunicado.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Excommunicado(Z_Construct_UPackage__Script_Excommunicado, TEXT("/Script/Excommunicado"), Z_Registration_Info_UPackage__Script_Excommunicado, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE1583DF4, 0x3E885AD4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
