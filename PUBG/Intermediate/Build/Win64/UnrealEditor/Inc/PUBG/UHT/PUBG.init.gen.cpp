// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePUBG_init() {}
	PUBG_API UFunction* Z_Construct_UDelegateFunction_PUBG_OnEnterPickupRange__DelegateSignature();
	PUBG_API UFunction* Z_Construct_UDelegateFunction_PUBG_OnHealCancelledDelegate__DelegateSignature();
	PUBG_API UFunction* Z_Construct_UDelegateFunction_PUBG_OnHealCompletedDelegate__DelegateSignature();
	PUBG_API UFunction* Z_Construct_UDelegateFunction_PUBG_OnHealStartedDelegate__DelegateSignature();
	PUBG_API UFunction* Z_Construct_UDelegateFunction_PUBG_OnInventoryChanged__DelegateSignature();
	PUBG_API UFunction* Z_Construct_UDelegateFunction_PUBG_OnLeavePickupRange__DelegateSignature();
	PUBG_API UFunction* Z_Construct_UDelegateFunction_PUBG_OnPushSoftWidgetDelegate__DelegateSignature();
	PUBG_API UFunction* Z_Construct_UDelegateFunction_PUBG_OnWeaponAttachmentsChanged__DelegateSignature();
	PUBG_API UFunction* Z_Construct_UDelegateFunction_PUBG_OnWeaponSlotChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PUBG;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PUBG()
	{
		if (!Z_Registration_Info_UPackage__Script_PUBG.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PUBG_OnEnterPickupRange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PUBG_OnHealCancelledDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PUBG_OnHealCompletedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PUBG_OnHealStartedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PUBG_OnInventoryChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PUBG_OnLeavePickupRange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PUBG_OnPushSoftWidgetDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PUBG_OnWeaponAttachmentsChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PUBG_OnWeaponSlotChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PUBG",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9ACB869F,
				0xEE5901A1,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PUBG.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PUBG.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PUBG(Z_Construct_UPackage__Script_PUBG, TEXT("/Script/PUBG"), Z_Registration_Info_UPackage__Script_PUBG, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9ACB869F, 0xEE5901A1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
