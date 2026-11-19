// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/PlayerCharacter.h"
#include "Engine/HitResult.h"
#include "Engine/NetSerialization.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
PUBG_API UClass* Z_Construct_UClass_APlayerCharacter();
PUBG_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemInstance_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBaseCommonActivatableWidget_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UCharacterAnimInstance_NoRegister();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_ECharacterGait();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_ECharacterHeldSlot();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_ECharacterStance();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EEquipmentSlot();
PUBG_API UFunction* Z_Construct_UDelegateFunction_PUBG_OnWeaponSlotChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnWeaponSlotChanged **************************************************
struct Z_Construct_UDelegateFunction_PUBG_OnWeaponSlotChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PUBG_OnWeaponSlotChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PUBG, nullptr, "OnWeaponSlotChanged__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PUBG_OnWeaponSlotChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PUBG_OnWeaponSlotChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_PUBG_OnWeaponSlotChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PUBG_OnWeaponSlotChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWeaponSlotChanged_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponSlotChanged)
{
	OnWeaponSlotChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnWeaponSlotChanged ****************************************************

// ********** Begin Class APlayerCharacter Function AnimNotify_AttachWeaponToBack ******************
struct Z_Construct_UFunction_APlayerCharacter_AnimNotify_AttachWeaponToBack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_AnimNotify_AttachWeaponToBack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "AnimNotify_AttachWeaponToBack", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_AnimNotify_AttachWeaponToBack_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_AnimNotify_AttachWeaponToBack_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayerCharacter_AnimNotify_AttachWeaponToBack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_AnimNotify_AttachWeaponToBack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execAnimNotify_AttachWeaponToBack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnimNotify_AttachWeaponToBack();
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function AnimNotify_AttachWeaponToBack ********************

// ********** Begin Class APlayerCharacter Function AnimNotify_AttachWeaponToHand ******************
struct Z_Construct_UFunction_APlayerCharacter_AnimNotify_AttachWeaponToHand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_AnimNotify_AttachWeaponToHand_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "AnimNotify_AttachWeaponToHand", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_AnimNotify_AttachWeaponToHand_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_AnimNotify_AttachWeaponToHand_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayerCharacter_AnimNotify_AttachWeaponToHand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_AnimNotify_AttachWeaponToHand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execAnimNotify_AttachWeaponToHand)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnimNotify_AttachWeaponToHand();
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function AnimNotify_AttachWeaponToHand ********************

// ********** Begin Class APlayerCharacter Function Client_InitASC *********************************
struct Z_Construct_UFunction_APlayerCharacter_Client_InitASC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Client_InitASC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Client_InitASC", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Client_InitASC_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Client_InitASC_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayerCharacter_Client_InitASC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Client_InitASC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execClient_InitASC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_InitASC();
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function Client_InitASC ***********************************

// ********** Begin Class APlayerCharacter Function GetCrosshairSpreadDegrees **********************
struct Z_Construct_UFunction_APlayerCharacter_GetCrosshairSpreadDegrees_Statics
{
	struct PlayerCharacter_eventGetCrosshairSpreadDegrees_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_GetCrosshairSpreadDegrees_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventGetCrosshairSpreadDegrees_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_GetCrosshairSpreadDegrees_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_GetCrosshairSpreadDegrees_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetCrosshairSpreadDegrees_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_GetCrosshairSpreadDegrees_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "GetCrosshairSpreadDegrees", Z_Construct_UFunction_APlayerCharacter_GetCrosshairSpreadDegrees_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetCrosshairSpreadDegrees_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_GetCrosshairSpreadDegrees_Statics::PlayerCharacter_eventGetCrosshairSpreadDegrees_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetCrosshairSpreadDegrees_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_GetCrosshairSpreadDegrees_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_GetCrosshairSpreadDegrees_Statics::PlayerCharacter_eventGetCrosshairSpreadDegrees_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_GetCrosshairSpreadDegrees()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_GetCrosshairSpreadDegrees_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execGetCrosshairSpreadDegrees)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCrosshairSpreadDegrees();
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function GetCrosshairSpreadDegrees ************************

// ********** Begin Class APlayerCharacter Function Multicast_FireEffect ***************************
struct PlayerCharacter_eventMulticast_FireEffect_Parms
{
	FVector_NetQuantize MuzzleLocation;
};
static FName NAME_APlayerCharacter_Multicast_FireEffect = FName(TEXT("Multicast_FireEffect"));
void APlayerCharacter::Multicast_FireEffect(FVector_NetQuantize const& MuzzleLocation)
{
	PlayerCharacter_eventMulticast_FireEffect_Parms Parms;
	Parms.MuzzleLocation=MuzzleLocation;
	UFunction* Func = FindFunctionChecked(NAME_APlayerCharacter_Multicast_FireEffect);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APlayerCharacter_Multicast_FireEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MuzzleLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_Multicast_FireEffect_Statics::NewProp_MuzzleLocation = { "MuzzleLocation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventMulticast_FireEffect_Parms, MuzzleLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleLocation_MetaData), NewProp_MuzzleLocation_MetaData) }; // 1339770568
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_Multicast_FireEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Multicast_FireEffect_Statics::NewProp_MuzzleLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Multicast_FireEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Multicast_FireEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Multicast_FireEffect", Z_Construct_UFunction_APlayerCharacter_Multicast_FireEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Multicast_FireEffect_Statics::PropPointers), sizeof(PlayerCharacter_eventMulticast_FireEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Multicast_FireEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Multicast_FireEffect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerCharacter_eventMulticast_FireEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_Multicast_FireEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Multicast_FireEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execMulticast_FireEffect)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_MuzzleLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_FireEffect_Implementation(Z_Param_MuzzleLocation);
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function Multicast_FireEffect *****************************

// ********** Begin Class APlayerCharacter Function Multicast_PlayImpactFX *************************
struct PlayerCharacter_eventMulticast_PlayImpactFX_Parms
{
	FVector ImpactPoint;
	FVector ImpactNormal;
	UNiagaraSystem* ImpactFX;
};
static FName NAME_APlayerCharacter_Multicast_PlayImpactFX = FName(TEXT("Multicast_PlayImpactFX"));
void APlayerCharacter::Multicast_PlayImpactFX(FVector ImpactPoint, FVector ImpactNormal, UNiagaraSystem* ImpactFX)
{
	PlayerCharacter_eventMulticast_PlayImpactFX_Parms Parms;
	Parms.ImpactPoint=ImpactPoint;
	Parms.ImpactNormal=ImpactNormal;
	Parms.ImpactFX=ImpactFX;
	UFunction* Func = FindFunctionChecked(NAME_APlayerCharacter_Multicast_PlayImpactFX);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APlayerCharacter_Multicast_PlayImpactFX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactNormal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactFX;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_Multicast_PlayImpactFX_Statics::NewProp_ImpactPoint = { "ImpactPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventMulticast_PlayImpactFX_Parms, ImpactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_Multicast_PlayImpactFX_Statics::NewProp_ImpactNormal = { "ImpactNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventMulticast_PlayImpactFX_Parms, ImpactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_Multicast_PlayImpactFX_Statics::NewProp_ImpactFX = { "ImpactFX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventMulticast_PlayImpactFX_Parms, ImpactFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_Multicast_PlayImpactFX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Multicast_PlayImpactFX_Statics::NewProp_ImpactPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Multicast_PlayImpactFX_Statics::NewProp_ImpactNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Multicast_PlayImpactFX_Statics::NewProp_ImpactFX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Multicast_PlayImpactFX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Multicast_PlayImpactFX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Multicast_PlayImpactFX", Z_Construct_UFunction_APlayerCharacter_Multicast_PlayImpactFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Multicast_PlayImpactFX_Statics::PropPointers), sizeof(PlayerCharacter_eventMulticast_PlayImpactFX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Multicast_PlayImpactFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Multicast_PlayImpactFX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerCharacter_eventMulticast_PlayImpactFX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_Multicast_PlayImpactFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Multicast_PlayImpactFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execMulticast_PlayImpactFX)
{
	P_GET_STRUCT(FVector,Z_Param_ImpactPoint);
	P_GET_STRUCT(FVector,Z_Param_ImpactNormal);
	P_GET_OBJECT(UNiagaraSystem,Z_Param_ImpactFX);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_PlayImpactFX_Implementation(Z_Param_ImpactPoint,Z_Param_ImpactNormal,Z_Param_ImpactFX);
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function Multicast_PlayImpactFX ***************************

// ********** Begin Class APlayerCharacter Function Multicast_PlayReloadMontage ********************
struct PlayerCharacter_eventMulticast_PlayReloadMontage_Parms
{
	UAnimMontage* MontageToPlay;
};
static FName NAME_APlayerCharacter_Multicast_PlayReloadMontage = FName(TEXT("Multicast_PlayReloadMontage"));
void APlayerCharacter::Multicast_PlayReloadMontage(UAnimMontage* MontageToPlay)
{
	PlayerCharacter_eventMulticast_PlayReloadMontage_Parms Parms;
	Parms.MontageToPlay=MontageToPlay;
	UFunction* Func = FindFunctionChecked(NAME_APlayerCharacter_Multicast_PlayReloadMontage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APlayerCharacter_Multicast_PlayReloadMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_Multicast_PlayReloadMontage_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventMulticast_PlayReloadMontage_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_Multicast_PlayReloadMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Multicast_PlayReloadMontage_Statics::NewProp_MontageToPlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Multicast_PlayReloadMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Multicast_PlayReloadMontage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Multicast_PlayReloadMontage", Z_Construct_UFunction_APlayerCharacter_Multicast_PlayReloadMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Multicast_PlayReloadMontage_Statics::PropPointers), sizeof(PlayerCharacter_eventMulticast_PlayReloadMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Multicast_PlayReloadMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Multicast_PlayReloadMontage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerCharacter_eventMulticast_PlayReloadMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_Multicast_PlayReloadMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Multicast_PlayReloadMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execMulticast_PlayReloadMontage)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_PlayReloadMontage_Implementation(Z_Param_MontageToPlay);
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function Multicast_PlayReloadMontage **********************

// ********** Begin Class APlayerCharacter Function Multicast_PlaySwitchFireModeMontage ************
struct PlayerCharacter_eventMulticast_PlaySwitchFireModeMontage_Parms
{
	UAnimMontage* MontageToPlay;
};
static FName NAME_APlayerCharacter_Multicast_PlaySwitchFireModeMontage = FName(TEXT("Multicast_PlaySwitchFireModeMontage"));
void APlayerCharacter::Multicast_PlaySwitchFireModeMontage(UAnimMontage* MontageToPlay)
{
	PlayerCharacter_eventMulticast_PlaySwitchFireModeMontage_Parms Parms;
	Parms.MontageToPlay=MontageToPlay;
	UFunction* Func = FindFunctionChecked(NAME_APlayerCharacter_Multicast_PlaySwitchFireModeMontage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchFireModeMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchFireModeMontage_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventMulticast_PlaySwitchFireModeMontage_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchFireModeMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchFireModeMontage_Statics::NewProp_MontageToPlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchFireModeMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchFireModeMontage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Multicast_PlaySwitchFireModeMontage", Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchFireModeMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchFireModeMontage_Statics::PropPointers), sizeof(PlayerCharacter_eventMulticast_PlaySwitchFireModeMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchFireModeMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchFireModeMontage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerCharacter_eventMulticast_PlaySwitchFireModeMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchFireModeMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchFireModeMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execMulticast_PlaySwitchFireModeMontage)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_PlaySwitchFireModeMontage_Implementation(Z_Param_MontageToPlay);
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function Multicast_PlaySwitchFireModeMontage **************

// ********** Begin Class APlayerCharacter Function Multicast_PlaySwitchWeaponMontage **************
struct PlayerCharacter_eventMulticast_PlaySwitchWeaponMontage_Parms
{
	UAnimMontage* MontageToPlay;
	float PlayRate;
};
static FName NAME_APlayerCharacter_Multicast_PlaySwitchWeaponMontage = FName(TEXT("Multicast_PlaySwitchWeaponMontage"));
void APlayerCharacter::Multicast_PlaySwitchWeaponMontage(UAnimMontage* MontageToPlay, float PlayRate)
{
	PlayerCharacter_eventMulticast_PlaySwitchWeaponMontage_Parms Parms;
	Parms.MontageToPlay=MontageToPlay;
	Parms.PlayRate=PlayRate;
	UFunction* Func = FindFunctionChecked(NAME_APlayerCharacter_Multicast_PlaySwitchWeaponMontage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchWeaponMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchWeaponMontage_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventMulticast_PlaySwitchWeaponMontage_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchWeaponMontage_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventMulticast_PlaySwitchWeaponMontage_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchWeaponMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchWeaponMontage_Statics::NewProp_MontageToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchWeaponMontage_Statics::NewProp_PlayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchWeaponMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchWeaponMontage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Multicast_PlaySwitchWeaponMontage", Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchWeaponMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchWeaponMontage_Statics::PropPointers), sizeof(PlayerCharacter_eventMulticast_PlaySwitchWeaponMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchWeaponMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchWeaponMontage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerCharacter_eventMulticast_PlaySwitchWeaponMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchWeaponMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchWeaponMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execMulticast_PlaySwitchWeaponMontage)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_PlaySwitchWeaponMontage_Implementation(Z_Param_MontageToPlay,Z_Param_PlayRate);
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function Multicast_PlaySwitchWeaponMontage ****************

// ********** Begin Class APlayerCharacter Function OnInventoryChangedHandler **********************
struct Z_Construct_UFunction_APlayerCharacter_OnInventoryChangedHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_OnInventoryChangedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "OnInventoryChangedHandler", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnInventoryChangedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_OnInventoryChangedHandler_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayerCharacter_OnInventoryChangedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_OnInventoryChangedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execOnInventoryChangedHandler)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInventoryChangedHandler();
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function OnInventoryChangedHandler ************************

// ********** Begin Class APlayerCharacter Function OnReloadMontageEnded ***************************
struct Z_Construct_UFunction_APlayerCharacter_OnReloadMontageEnded_Statics
{
	struct PlayerCharacter_eventOnReloadMontageEnded_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_OnReloadMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnReloadMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerCharacter_OnReloadMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((PlayerCharacter_eventOnReloadMontageEnded_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCharacter_OnReloadMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerCharacter_eventOnReloadMontageEnded_Parms), &Z_Construct_UFunction_APlayerCharacter_OnReloadMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_OnReloadMontageEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnReloadMontageEnded_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnReloadMontageEnded_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnReloadMontageEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_OnReloadMontageEnded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "OnReloadMontageEnded", Z_Construct_UFunction_APlayerCharacter_OnReloadMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnReloadMontageEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_OnReloadMontageEnded_Statics::PlayerCharacter_eventOnReloadMontageEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnReloadMontageEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_OnReloadMontageEnded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_OnReloadMontageEnded_Statics::PlayerCharacter_eventOnReloadMontageEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_OnReloadMontageEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_OnReloadMontageEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execOnReloadMontageEnded)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReloadMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function OnReloadMontageEnded *****************************

// ********** Begin Class APlayerCharacter Function OnRep_CharacterGait ****************************
struct Z_Construct_UFunction_APlayerCharacter_OnRep_CharacterGait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_OnRep_CharacterGait_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "OnRep_CharacterGait", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnRep_CharacterGait_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_OnRep_CharacterGait_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayerCharacter_OnRep_CharacterGait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_OnRep_CharacterGait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execOnRep_CharacterGait)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CharacterGait();
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function OnRep_CharacterGait ******************************

// ********** Begin Class APlayerCharacter Function OnRep_CharacterHeldSlot ************************
struct Z_Construct_UFunction_APlayerCharacter_OnRep_CharacterHeldSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_OnRep_CharacterHeldSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "OnRep_CharacterHeldSlot", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnRep_CharacterHeldSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_OnRep_CharacterHeldSlot_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayerCharacter_OnRep_CharacterHeldSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_OnRep_CharacterHeldSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execOnRep_CharacterHeldSlot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CharacterHeldSlot();
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function OnRep_CharacterHeldSlot **************************

// ********** Begin Class APlayerCharacter Function OnRep_CharacterStance **************************
struct Z_Construct_UFunction_APlayerCharacter_OnRep_CharacterStance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_OnRep_CharacterStance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "OnRep_CharacterStance", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnRep_CharacterStance_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_OnRep_CharacterStance_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayerCharacter_OnRep_CharacterStance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_OnRep_CharacterStance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execOnRep_CharacterStance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CharacterStance();
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function OnRep_CharacterStance ****************************

// ********** Begin Class APlayerCharacter Function OnSphereBeginOverlap ***************************
struct Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics
{
	struct PlayerCharacter_eventOnSphereBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnSphereBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnSphereBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnSphereBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnSphereBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((PlayerCharacter_eventOnSphereBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerCharacter_eventOnSphereBeginOverlap_Parms), &Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnSphereBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "OnSphereBeginOverlap", Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics::PlayerCharacter_eventOnSphereBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics::PlayerCharacter_eventOnSphereBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execOnSphereBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSphereBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function OnSphereBeginOverlap *****************************

// ********** Begin Class APlayerCharacter Function OnSphereEndOverlap *****************************
struct Z_Construct_UFunction_APlayerCharacter_OnSphereEndOverlap_Statics
{
	struct PlayerCharacter_eventOnSphereEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_OnSphereEndOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnSphereEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_OnSphereEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnSphereEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_OnSphereEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnSphereEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerCharacter_OnSphereEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnSphereEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_OnSphereEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnSphereEndOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnSphereEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnSphereEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnSphereEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnSphereEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_OnSphereEndOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "OnSphereEndOverlap", Z_Construct_UFunction_APlayerCharacter_OnSphereEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnSphereEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_OnSphereEndOverlap_Statics::PlayerCharacter_eventOnSphereEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnSphereEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_OnSphereEndOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_OnSphereEndOverlap_Statics::PlayerCharacter_eventOnSphereEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_OnSphereEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_OnSphereEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execOnSphereEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSphereEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function OnSphereEndOverlap *******************************

// ********** Begin Class APlayerCharacter Function OnSwitchFireModeMontageEnded *******************
struct Z_Construct_UFunction_APlayerCharacter_OnSwitchFireModeMontageEnded_Statics
{
	struct PlayerCharacter_eventOnSwitchFireModeMontageEnded_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_OnSwitchFireModeMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnSwitchFireModeMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerCharacter_OnSwitchFireModeMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((PlayerCharacter_eventOnSwitchFireModeMontageEnded_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCharacter_OnSwitchFireModeMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerCharacter_eventOnSwitchFireModeMontageEnded_Parms), &Z_Construct_UFunction_APlayerCharacter_OnSwitchFireModeMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_OnSwitchFireModeMontageEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnSwitchFireModeMontageEnded_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnSwitchFireModeMontageEnded_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnSwitchFireModeMontageEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_OnSwitchFireModeMontageEnded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "OnSwitchFireModeMontageEnded", Z_Construct_UFunction_APlayerCharacter_OnSwitchFireModeMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnSwitchFireModeMontageEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_OnSwitchFireModeMontageEnded_Statics::PlayerCharacter_eventOnSwitchFireModeMontageEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnSwitchFireModeMontageEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_OnSwitchFireModeMontageEnded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_OnSwitchFireModeMontageEnded_Statics::PlayerCharacter_eventOnSwitchFireModeMontageEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_OnSwitchFireModeMontageEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_OnSwitchFireModeMontageEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execOnSwitchFireModeMontageEnded)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSwitchFireModeMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function OnSwitchFireModeMontageEnded *********************

// ********** Begin Class APlayerCharacter Function OnSwitchWeaponMontageBlendOut ******************
struct Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageBlendOut_Statics
{
	struct PlayerCharacter_eventOnSwitchWeaponMontageBlendOut_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageBlendOut_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnSwitchWeaponMontageBlendOut_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageBlendOut_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((PlayerCharacter_eventOnSwitchWeaponMontageBlendOut_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageBlendOut_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerCharacter_eventOnSwitchWeaponMontageBlendOut_Parms), &Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageBlendOut_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageBlendOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageBlendOut_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageBlendOut_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageBlendOut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageBlendOut_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "OnSwitchWeaponMontageBlendOut", Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageBlendOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageBlendOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageBlendOut_Statics::PlayerCharacter_eventOnSwitchWeaponMontageBlendOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageBlendOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageBlendOut_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageBlendOut_Statics::PlayerCharacter_eventOnSwitchWeaponMontageBlendOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageBlendOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageBlendOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execOnSwitchWeaponMontageBlendOut)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSwitchWeaponMontageBlendOut(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function OnSwitchWeaponMontageBlendOut ********************

// ********** Begin Class APlayerCharacter Function OnSwitchWeaponMontageEnded *********************
struct Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageEnded_Statics
{
	struct PlayerCharacter_eventOnSwitchWeaponMontageEnded_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnSwitchWeaponMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((PlayerCharacter_eventOnSwitchWeaponMontageEnded_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerCharacter_eventOnSwitchWeaponMontageEnded_Parms), &Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageEnded_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageEnded_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageEnded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "OnSwitchWeaponMontageEnded", Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageEnded_Statics::PlayerCharacter_eventOnSwitchWeaponMontageEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageEnded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageEnded_Statics::PlayerCharacter_eventOnSwitchWeaponMontageEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execOnSwitchWeaponMontageEnded)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSwitchWeaponMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function OnSwitchWeaponMontageEnded ***********************

// ********** Begin Class APlayerCharacter Function OnWeaponAttachmentsChangedHandler **************
struct Z_Construct_UFunction_APlayerCharacter_OnWeaponAttachmentsChangedHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_OnWeaponAttachmentsChangedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "OnWeaponAttachmentsChangedHandler", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnWeaponAttachmentsChangedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_OnWeaponAttachmentsChangedHandler_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayerCharacter_OnWeaponAttachmentsChangedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_OnWeaponAttachmentsChangedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execOnWeaponAttachmentsChangedHandler)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWeaponAttachmentsChangedHandler();
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function OnWeaponAttachmentsChangedHandler ****************

// ********** Begin Class APlayerCharacter Function Server_FinishReload ****************************
static FName NAME_APlayerCharacter_Server_FinishReload = FName(TEXT("Server_FinishReload"));
void APlayerCharacter::Server_FinishReload()
{
	UFunction* Func = FindFunctionChecked(NAME_APlayerCharacter_Server_FinishReload);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_APlayerCharacter_Server_FinishReload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Server_FinishReload_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Server_FinishReload", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_FinishReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Server_FinishReload_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayerCharacter_Server_FinishReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Server_FinishReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execServer_FinishReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_FinishReload_Implementation();
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function Server_FinishReload ******************************

// ********** Begin Class APlayerCharacter Function Server_Fire ************************************
struct PlayerCharacter_eventServer_Fire_Parms
{
	FVector_NetQuantize MuzzleLocation;
	FVector_NetQuantize AimPoint;
};
static FName NAME_APlayerCharacter_Server_Fire = FName(TEXT("Server_Fire"));
void APlayerCharacter::Server_Fire(FVector_NetQuantize const& MuzzleLocation, FVector_NetQuantize const& AimPoint)
{
	PlayerCharacter_eventServer_Fire_Parms Parms;
	Parms.MuzzleLocation=MuzzleLocation;
	Parms.AimPoint=AimPoint;
	UFunction* Func = FindFunctionChecked(NAME_APlayerCharacter_Server_Fire);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APlayerCharacter_Server_Fire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MuzzleLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_Server_Fire_Statics::NewProp_MuzzleLocation = { "MuzzleLocation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventServer_Fire_Parms, MuzzleLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleLocation_MetaData), NewProp_MuzzleLocation_MetaData) }; // 1339770568
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_Server_Fire_Statics::NewProp_AimPoint = { "AimPoint", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventServer_Fire_Parms, AimPoint), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimPoint_MetaData), NewProp_AimPoint_MetaData) }; // 1339770568
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_Server_Fire_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Server_Fire_Statics::NewProp_MuzzleLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Server_Fire_Statics::NewProp_AimPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_Fire_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Server_Fire_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Server_Fire", Z_Construct_UFunction_APlayerCharacter_Server_Fire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_Fire_Statics::PropPointers), sizeof(PlayerCharacter_eventServer_Fire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Server_Fire_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerCharacter_eventServer_Fire_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_Server_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Server_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execServer_Fire)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_MuzzleLocation);
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_AimPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_Fire_Implementation(Z_Param_MuzzleLocation,Z_Param_AimPoint);
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function Server_Fire **************************************

// ********** Begin Class APlayerCharacter Function Server_InitASC *********************************
struct Z_Construct_UFunction_APlayerCharacter_Server_InitASC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Server_InitASC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Server_InitASC", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_InitASC_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Server_InitASC_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayerCharacter_Server_InitASC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Server_InitASC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execServer_InitASC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_InitASC();
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function Server_InitASC ***********************************

// ********** Begin Class APlayerCharacter Function Server_PlaySwitchWeaponMontage *****************
struct PlayerCharacter_eventServer_PlaySwitchWeaponMontage_Parms
{
	UAnimMontage* MontageToPlay;
	float PlayRate;
};
static FName NAME_APlayerCharacter_Server_PlaySwitchWeaponMontage = FName(TEXT("Server_PlaySwitchWeaponMontage"));
void APlayerCharacter::Server_PlaySwitchWeaponMontage(UAnimMontage* MontageToPlay, float PlayRate)
{
	PlayerCharacter_eventServer_PlaySwitchWeaponMontage_Parms Parms;
	Parms.MontageToPlay=MontageToPlay;
	Parms.PlayRate=PlayRate;
	UFunction* Func = FindFunctionChecked(NAME_APlayerCharacter_Server_PlaySwitchWeaponMontage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APlayerCharacter_Server_PlaySwitchWeaponMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_Server_PlaySwitchWeaponMontage_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventServer_PlaySwitchWeaponMontage_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_Server_PlaySwitchWeaponMontage_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventServer_PlaySwitchWeaponMontage_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_Server_PlaySwitchWeaponMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Server_PlaySwitchWeaponMontage_Statics::NewProp_MontageToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Server_PlaySwitchWeaponMontage_Statics::NewProp_PlayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_PlaySwitchWeaponMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Server_PlaySwitchWeaponMontage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Server_PlaySwitchWeaponMontage", Z_Construct_UFunction_APlayerCharacter_Server_PlaySwitchWeaponMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_PlaySwitchWeaponMontage_Statics::PropPointers), sizeof(PlayerCharacter_eventServer_PlaySwitchWeaponMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_PlaySwitchWeaponMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Server_PlaySwitchWeaponMontage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerCharacter_eventServer_PlaySwitchWeaponMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_Server_PlaySwitchWeaponMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Server_PlaySwitchWeaponMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execServer_PlaySwitchWeaponMontage)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_PlaySwitchWeaponMontage_Implementation(Z_Param_MontageToPlay,Z_Param_PlayRate);
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function Server_PlaySwitchWeaponMontage *******************

// ********** Begin Class APlayerCharacter Function Server_SetActorYaw *****************************
struct PlayerCharacter_eventServer_SetActorYaw_Parms
{
	float NewYaw;
};
static FName NAME_APlayerCharacter_Server_SetActorYaw = FName(TEXT("Server_SetActorYaw"));
void APlayerCharacter::Server_SetActorYaw(float NewYaw)
{
	PlayerCharacter_eventServer_SetActorYaw_Parms Parms;
	Parms.NewYaw=NewYaw;
	UFunction* Func = FindFunctionChecked(NAME_APlayerCharacter_Server_SetActorYaw);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APlayerCharacter_Server_SetActorYaw_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewYaw;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_Server_SetActorYaw_Statics::NewProp_NewYaw = { "NewYaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventServer_SetActorYaw_Parms, NewYaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_Server_SetActorYaw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Server_SetActorYaw_Statics::NewProp_NewYaw,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_SetActorYaw_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Server_SetActorYaw_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Server_SetActorYaw", Z_Construct_UFunction_APlayerCharacter_Server_SetActorYaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_SetActorYaw_Statics::PropPointers), sizeof(PlayerCharacter_eventServer_SetActorYaw_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_SetActorYaw_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Server_SetActorYaw_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerCharacter_eventServer_SetActorYaw_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_Server_SetActorYaw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Server_SetActorYaw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execServer_SetActorYaw)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewYaw);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetActorYaw_Implementation(Z_Param_NewYaw);
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function Server_SetActorYaw *******************************

// ********** Begin Class APlayerCharacter Function Server_SetCharacterGait ************************
struct PlayerCharacter_eventServer_SetCharacterGait_Parms
{
	ECharacterGait NewCharacterGait;
};
static FName NAME_APlayerCharacter_Server_SetCharacterGait = FName(TEXT("Server_SetCharacterGait"));
void APlayerCharacter::Server_SetCharacterGait(ECharacterGait NewCharacterGait)
{
	PlayerCharacter_eventServer_SetCharacterGait_Parms Parms;
	Parms.NewCharacterGait=NewCharacterGait;
	UFunction* Func = FindFunctionChecked(NAME_APlayerCharacter_Server_SetCharacterGait);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterGait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewCharacterGait_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewCharacterGait;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterGait_Statics::NewProp_NewCharacterGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterGait_Statics::NewProp_NewCharacterGait = { "NewCharacterGait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventServer_SetCharacterGait_Parms, NewCharacterGait), Z_Construct_UEnum_PUBG_ECharacterGait, METADATA_PARAMS(0, nullptr) }; // 515073860
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterGait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterGait_Statics::NewProp_NewCharacterGait_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterGait_Statics::NewProp_NewCharacterGait,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterGait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterGait_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Server_SetCharacterGait", Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterGait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterGait_Statics::PropPointers), sizeof(PlayerCharacter_eventServer_SetCharacterGait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterGait_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterGait_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerCharacter_eventServer_SetCharacterGait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterGait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterGait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execServer_SetCharacterGait)
{
	P_GET_ENUM(ECharacterGait,Z_Param_NewCharacterGait);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetCharacterGait_Implementation(ECharacterGait(Z_Param_NewCharacterGait));
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function Server_SetCharacterGait **************************

// ********** Begin Class APlayerCharacter Function Server_SetCharacterHeldSlot ********************
struct PlayerCharacter_eventServer_SetCharacterHeldSlot_Parms
{
	ECharacterHeldSlot NewSlot;
};
static FName NAME_APlayerCharacter_Server_SetCharacterHeldSlot = FName(TEXT("Server_SetCharacterHeldSlot"));
void APlayerCharacter::Server_SetCharacterHeldSlot(ECharacterHeldSlot NewSlot)
{
	PlayerCharacter_eventServer_SetCharacterHeldSlot_Parms Parms;
	Parms.NewSlot=NewSlot;
	UFunction* Func = FindFunctionChecked(NAME_APlayerCharacter_Server_SetCharacterHeldSlot);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterHeldSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewSlot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterHeldSlot_Statics::NewProp_NewSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterHeldSlot_Statics::NewProp_NewSlot = { "NewSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventServer_SetCharacterHeldSlot_Parms, NewSlot), Z_Construct_UEnum_PUBG_ECharacterHeldSlot, METADATA_PARAMS(0, nullptr) }; // 3266210547
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterHeldSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterHeldSlot_Statics::NewProp_NewSlot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterHeldSlot_Statics::NewProp_NewSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterHeldSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterHeldSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Server_SetCharacterHeldSlot", Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterHeldSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterHeldSlot_Statics::PropPointers), sizeof(PlayerCharacter_eventServer_SetCharacterHeldSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterHeldSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterHeldSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerCharacter_eventServer_SetCharacterHeldSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterHeldSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterHeldSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execServer_SetCharacterHeldSlot)
{
	P_GET_ENUM(ECharacterHeldSlot,Z_Param_NewSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetCharacterHeldSlot_Implementation(ECharacterHeldSlot(Z_Param_NewSlot));
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function Server_SetCharacterHeldSlot **********************

// ********** Begin Class APlayerCharacter Function Server_SetCharacterStance **********************
struct PlayerCharacter_eventServer_SetCharacterStance_Parms
{
	ECharacterStance NewCharacterStance;
};
static FName NAME_APlayerCharacter_Server_SetCharacterStance = FName(TEXT("Server_SetCharacterStance"));
void APlayerCharacter::Server_SetCharacterStance(ECharacterStance NewCharacterStance)
{
	PlayerCharacter_eventServer_SetCharacterStance_Parms Parms;
	Parms.NewCharacterStance=NewCharacterStance;
	UFunction* Func = FindFunctionChecked(NAME_APlayerCharacter_Server_SetCharacterStance);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterStance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewCharacterStance_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewCharacterStance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterStance_Statics::NewProp_NewCharacterStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterStance_Statics::NewProp_NewCharacterStance = { "NewCharacterStance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventServer_SetCharacterStance_Parms, NewCharacterStance), Z_Construct_UEnum_PUBG_ECharacterStance, METADATA_PARAMS(0, nullptr) }; // 570544318
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterStance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterStance_Statics::NewProp_NewCharacterStance_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterStance_Statics::NewProp_NewCharacterStance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterStance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterStance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Server_SetCharacterStance", Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterStance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterStance_Statics::PropPointers), sizeof(PlayerCharacter_eventServer_SetCharacterStance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterStance_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterStance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerCharacter_eventServer_SetCharacterStance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterStance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterStance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execServer_SetCharacterStance)
{
	P_GET_ENUM(ECharacterStance,Z_Param_NewCharacterStance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetCharacterStance_Implementation(ECharacterStance(Z_Param_NewCharacterStance));
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function Server_SetCharacterStance ************************

// ********** Begin Class APlayerCharacter Function Server_SetControllerRotator ********************
struct PlayerCharacter_eventServer_SetControllerRotator_Parms
{
	float NewYaw;
	float NewPitch;
};
static FName NAME_APlayerCharacter_Server_SetControllerRotator = FName(TEXT("Server_SetControllerRotator"));
void APlayerCharacter::Server_SetControllerRotator(float NewYaw, float NewPitch)
{
	PlayerCharacter_eventServer_SetControllerRotator_Parms Parms;
	Parms.NewYaw=NewYaw;
	Parms.NewPitch=NewPitch;
	UFunction* Func = FindFunctionChecked(NAME_APlayerCharacter_Server_SetControllerRotator);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APlayerCharacter_Server_SetControllerRotator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_Server_SetControllerRotator_Statics::NewProp_NewYaw = { "NewYaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventServer_SetControllerRotator_Parms, NewYaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_Server_SetControllerRotator_Statics::NewProp_NewPitch = { "NewPitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventServer_SetControllerRotator_Parms, NewPitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_Server_SetControllerRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Server_SetControllerRotator_Statics::NewProp_NewYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Server_SetControllerRotator_Statics::NewProp_NewPitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_SetControllerRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Server_SetControllerRotator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Server_SetControllerRotator", Z_Construct_UFunction_APlayerCharacter_Server_SetControllerRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_SetControllerRotator_Statics::PropPointers), sizeof(PlayerCharacter_eventServer_SetControllerRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_SetControllerRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Server_SetControllerRotator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerCharacter_eventServer_SetControllerRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_Server_SetControllerRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Server_SetControllerRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execServer_SetControllerRotator)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewYaw);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewPitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetControllerRotator_Implementation(Z_Param_NewYaw,Z_Param_NewPitch);
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function Server_SetControllerRotator **********************

// ********** Begin Class APlayerCharacter Function Server_SetLeanDirection ************************
struct PlayerCharacter_eventServer_SetLeanDirection_Parms
{
	float NewLeanDirection;
};
static FName NAME_APlayerCharacter_Server_SetLeanDirection = FName(TEXT("Server_SetLeanDirection"));
void APlayerCharacter::Server_SetLeanDirection(float NewLeanDirection)
{
	PlayerCharacter_eventServer_SetLeanDirection_Parms Parms;
	Parms.NewLeanDirection=NewLeanDirection;
	UFunction* Func = FindFunctionChecked(NAME_APlayerCharacter_Server_SetLeanDirection);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APlayerCharacter_Server_SetLeanDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLeanDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_Server_SetLeanDirection_Statics::NewProp_NewLeanDirection = { "NewLeanDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventServer_SetLeanDirection_Parms, NewLeanDirection), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_Server_SetLeanDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Server_SetLeanDirection_Statics::NewProp_NewLeanDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_SetLeanDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Server_SetLeanDirection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Server_SetLeanDirection", Z_Construct_UFunction_APlayerCharacter_Server_SetLeanDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_SetLeanDirection_Statics::PropPointers), sizeof(PlayerCharacter_eventServer_SetLeanDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_SetLeanDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Server_SetLeanDirection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerCharacter_eventServer_SetLeanDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_Server_SetLeanDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Server_SetLeanDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execServer_SetLeanDirection)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewLeanDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetLeanDirection_Implementation(Z_Param_NewLeanDirection);
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function Server_SetLeanDirection **************************

// ********** Begin Class APlayerCharacter Function Server_StartReload *****************************
struct PlayerCharacter_eventServer_StartReload_Parms
{
	UAnimMontage* MontageToPlay;
};
static FName NAME_APlayerCharacter_Server_StartReload = FName(TEXT("Server_StartReload"));
void APlayerCharacter::Server_StartReload(UAnimMontage* MontageToPlay)
{
	PlayerCharacter_eventServer_StartReload_Parms Parms;
	Parms.MontageToPlay=MontageToPlay;
	UFunction* Func = FindFunctionChecked(NAME_APlayerCharacter_Server_StartReload);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APlayerCharacter_Server_StartReload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_Server_StartReload_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventServer_StartReload_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_Server_StartReload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Server_StartReload_Statics::NewProp_MontageToPlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_StartReload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Server_StartReload_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Server_StartReload", Z_Construct_UFunction_APlayerCharacter_Server_StartReload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_StartReload_Statics::PropPointers), sizeof(PlayerCharacter_eventServer_StartReload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_StartReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Server_StartReload_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlayerCharacter_eventServer_StartReload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_Server_StartReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Server_StartReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execServer_StartReload)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_StartReload_Implementation(Z_Param_MontageToPlay);
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function Server_StartReload *******************************

// ********** Begin Class APlayerCharacter Function Server_ToggleFireMode **************************
static FName NAME_APlayerCharacter_Server_ToggleFireMode = FName(TEXT("Server_ToggleFireMode"));
void APlayerCharacter::Server_ToggleFireMode()
{
	UFunction* Func = FindFunctionChecked(NAME_APlayerCharacter_Server_ToggleFireMode);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_APlayerCharacter_Server_ToggleFireMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Server_ToggleFireMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Server_ToggleFireMode", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Server_ToggleFireMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Server_ToggleFireMode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayerCharacter_Server_ToggleFireMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Server_ToggleFireMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execServer_ToggleFireMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_ToggleFireMode_Implementation();
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function Server_ToggleFireMode ****************************

// ********** Begin Class APlayerCharacter Function ShouldEnableWeaponIK ***************************
struct Z_Construct_UFunction_APlayerCharacter_ShouldEnableWeaponIK_Statics
{
	struct PlayerCharacter_eventShouldEnableWeaponIK_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayerCharacter_ShouldEnableWeaponIK_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerCharacter_eventShouldEnableWeaponIK_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCharacter_ShouldEnableWeaponIK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerCharacter_eventShouldEnableWeaponIK_Parms), &Z_Construct_UFunction_APlayerCharacter_ShouldEnableWeaponIK_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_ShouldEnableWeaponIK_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_ShouldEnableWeaponIK_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ShouldEnableWeaponIK_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_ShouldEnableWeaponIK_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "ShouldEnableWeaponIK", Z_Construct_UFunction_APlayerCharacter_ShouldEnableWeaponIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ShouldEnableWeaponIK_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_ShouldEnableWeaponIK_Statics::PlayerCharacter_eventShouldEnableWeaponIK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ShouldEnableWeaponIK_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_ShouldEnableWeaponIK_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_ShouldEnableWeaponIK_Statics::PlayerCharacter_eventShouldEnableWeaponIK_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_ShouldEnableWeaponIK()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_ShouldEnableWeaponIK_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execShouldEnableWeaponIK)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldEnableWeaponIK();
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function ShouldEnableWeaponIK *****************************

// ********** Begin Class APlayerCharacter Function ShouldShowCrosshairBars ************************
struct Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairBars_Statics
{
	struct PlayerCharacter_eventShouldShowCrosshairBars_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairBars_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerCharacter_eventShouldShowCrosshairBars_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairBars_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerCharacter_eventShouldShowCrosshairBars_Parms), &Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairBars_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairBars_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairBars_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairBars_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairBars_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "ShouldShowCrosshairBars", Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairBars_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairBars_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairBars_Statics::PlayerCharacter_eventShouldShowCrosshairBars_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairBars_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairBars_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairBars_Statics::PlayerCharacter_eventShouldShowCrosshairBars_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairBars()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairBars_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execShouldShowCrosshairBars)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldShowCrosshairBars();
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function ShouldShowCrosshairBars **************************

// ********** Begin Class APlayerCharacter Function ShouldShowCrosshairCenter **********************
struct Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairCenter_Statics
{
	struct PlayerCharacter_eventShouldShowCrosshairCenter_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairCenter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerCharacter_eventShouldShowCrosshairCenter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerCharacter_eventShouldShowCrosshairCenter_Parms), &Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairCenter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairCenter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairCenter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairCenter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairCenter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "ShouldShowCrosshairCenter", Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairCenter_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairCenter_Statics::PlayerCharacter_eventShouldShowCrosshairCenter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairCenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairCenter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairCenter_Statics::PlayerCharacter_eventShouldShowCrosshairCenter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairCenter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairCenter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execShouldShowCrosshairCenter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldShowCrosshairCenter();
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function ShouldShowCrosshairCenter ************************

// ********** Begin Class APlayerCharacter *********************************************************
void APlayerCharacter::StaticRegisterNativesAPlayerCharacter()
{
	UClass* Class = APlayerCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AnimNotify_AttachWeaponToBack", &APlayerCharacter::execAnimNotify_AttachWeaponToBack },
		{ "AnimNotify_AttachWeaponToHand", &APlayerCharacter::execAnimNotify_AttachWeaponToHand },
		{ "Client_InitASC", &APlayerCharacter::execClient_InitASC },
		{ "GetCrosshairSpreadDegrees", &APlayerCharacter::execGetCrosshairSpreadDegrees },
		{ "Multicast_FireEffect", &APlayerCharacter::execMulticast_FireEffect },
		{ "Multicast_PlayImpactFX", &APlayerCharacter::execMulticast_PlayImpactFX },
		{ "Multicast_PlayReloadMontage", &APlayerCharacter::execMulticast_PlayReloadMontage },
		{ "Multicast_PlaySwitchFireModeMontage", &APlayerCharacter::execMulticast_PlaySwitchFireModeMontage },
		{ "Multicast_PlaySwitchWeaponMontage", &APlayerCharacter::execMulticast_PlaySwitchWeaponMontage },
		{ "OnInventoryChangedHandler", &APlayerCharacter::execOnInventoryChangedHandler },
		{ "OnReloadMontageEnded", &APlayerCharacter::execOnReloadMontageEnded },
		{ "OnRep_CharacterGait", &APlayerCharacter::execOnRep_CharacterGait },
		{ "OnRep_CharacterHeldSlot", &APlayerCharacter::execOnRep_CharacterHeldSlot },
		{ "OnRep_CharacterStance", &APlayerCharacter::execOnRep_CharacterStance },
		{ "OnSphereBeginOverlap", &APlayerCharacter::execOnSphereBeginOverlap },
		{ "OnSphereEndOverlap", &APlayerCharacter::execOnSphereEndOverlap },
		{ "OnSwitchFireModeMontageEnded", &APlayerCharacter::execOnSwitchFireModeMontageEnded },
		{ "OnSwitchWeaponMontageBlendOut", &APlayerCharacter::execOnSwitchWeaponMontageBlendOut },
		{ "OnSwitchWeaponMontageEnded", &APlayerCharacter::execOnSwitchWeaponMontageEnded },
		{ "OnWeaponAttachmentsChangedHandler", &APlayerCharacter::execOnWeaponAttachmentsChangedHandler },
		{ "Server_FinishReload", &APlayerCharacter::execServer_FinishReload },
		{ "Server_Fire", &APlayerCharacter::execServer_Fire },
		{ "Server_InitASC", &APlayerCharacter::execServer_InitASC },
		{ "Server_PlaySwitchWeaponMontage", &APlayerCharacter::execServer_PlaySwitchWeaponMontage },
		{ "Server_SetActorYaw", &APlayerCharacter::execServer_SetActorYaw },
		{ "Server_SetCharacterGait", &APlayerCharacter::execServer_SetCharacterGait },
		{ "Server_SetCharacterHeldSlot", &APlayerCharacter::execServer_SetCharacterHeldSlot },
		{ "Server_SetCharacterStance", &APlayerCharacter::execServer_SetCharacterStance },
		{ "Server_SetControllerRotator", &APlayerCharacter::execServer_SetControllerRotator },
		{ "Server_SetLeanDirection", &APlayerCharacter::execServer_SetLeanDirection },
		{ "Server_StartReload", &APlayerCharacter::execServer_StartReload },
		{ "Server_ToggleFireMode", &APlayerCharacter::execServer_ToggleFireMode },
		{ "ShouldEnableWeaponIK", &APlayerCharacter::execShouldEnableWeaponIK },
		{ "ShouldShowCrosshairBars", &APlayerCharacter::execShouldShowCrosshairBars },
		{ "ShouldShowCrosshairCenter", &APlayerCharacter::execShouldShowCrosshairCenter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_APlayerCharacter;
UClass* APlayerCharacter::GetPrivateStaticClass()
{
	using TClass = APlayerCharacter;
	if (!Z_Registration_Info_UClass_APlayerCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerCharacter"),
			Z_Registration_Info_UClass_APlayerCharacter.InnerSingleton,
			StaticRegisterNativesAPlayerCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APlayerCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_APlayerCharacter_NoRegister()
{
	return APlayerCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/PlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWeaponSlotChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Crouch_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Jump_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Look_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Move_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Sprint_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_SwitchHeld_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_TogglePerspective_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_ToggleBackpack_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Walk_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Fire_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Aim_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Reload_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Holster_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_ToggleFireMode_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Lean_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DT_CharacterGaitSettings_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DT_TPPCameraSettings_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAnimLayerInstance_Unarmed_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAnimLayerInstance_Throwable_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAnimLayerInstance_Rifle_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAnimLayerInstance_Pistol_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAnimLayerInstance_Melee_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackpackWidgetClass_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Primary1Socket_Character_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Primary2Socket_Character_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraInterpSpeed_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GunFireAttenuation_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipPrimary1Montage_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipPrimary2Montage_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipSecondaryMontage_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipMeleeMontage_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipThrowableMontage_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeanOffsetDistance_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeanInterpSpeed_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCamera_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonCamera_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonSpringArm_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersonHead_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAnimInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterGait_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterStance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterHeldSlot_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerRotator_Yaw_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerRotator_Pitch_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLeanDirection_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHeldWeaponInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSwitchWeaponMontage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpWeaponMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeaponSlotChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Crouch;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Jump;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Look;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Move;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Sprint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_SwitchHeld;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_TogglePerspective;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_ToggleBackpack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Walk;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Fire;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Aim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Reload;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Holster;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_ToggleFireMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Lean;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DT_CharacterGaitSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DT_TPPCameraSettings;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterAnimLayerInstance_Unarmed;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterAnimLayerInstance_Throwable;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterAnimLayerInstance_Rifle;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterAnimLayerInstance_Pistol;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterAnimLayerInstance_Melee;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_BackpackWidgetClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Primary1Socket_Character;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Primary2Socket_Character;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraInterpSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GunFireAttenuation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipPrimary1Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipPrimary2Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSecondaryMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipMeleeMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipThrowableMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeanOffsetDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeanInterpSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonSpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PersonHead;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterAnimInstance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterGait_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterGait;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterStance_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterStance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterHeldSlot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterHeldSlot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ControllerRotator_Yaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ControllerRotator_Pitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentLeanDirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedMeshComponents_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EquippedMeshComponents_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EquippedMeshComponents_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EquippedMeshComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMeshComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeaponMeshComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentHeldWeaponInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSwitchWeaponMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterpWeaponMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCharacter_AnimNotify_AttachWeaponToBack, "AnimNotify_AttachWeaponToBack" }, // 3964298625
		{ &Z_Construct_UFunction_APlayerCharacter_AnimNotify_AttachWeaponToHand, "AnimNotify_AttachWeaponToHand" }, // 230767770
		{ &Z_Construct_UFunction_APlayerCharacter_Client_InitASC, "Client_InitASC" }, // 2279824267
		{ &Z_Construct_UFunction_APlayerCharacter_GetCrosshairSpreadDegrees, "GetCrosshairSpreadDegrees" }, // 3560309385
		{ &Z_Construct_UFunction_APlayerCharacter_Multicast_FireEffect, "Multicast_FireEffect" }, // 1581871556
		{ &Z_Construct_UFunction_APlayerCharacter_Multicast_PlayImpactFX, "Multicast_PlayImpactFX" }, // 2981146864
		{ &Z_Construct_UFunction_APlayerCharacter_Multicast_PlayReloadMontage, "Multicast_PlayReloadMontage" }, // 1644381473
		{ &Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchFireModeMontage, "Multicast_PlaySwitchFireModeMontage" }, // 1604759407
		{ &Z_Construct_UFunction_APlayerCharacter_Multicast_PlaySwitchWeaponMontage, "Multicast_PlaySwitchWeaponMontage" }, // 690421847
		{ &Z_Construct_UFunction_APlayerCharacter_OnInventoryChangedHandler, "OnInventoryChangedHandler" }, // 1919368726
		{ &Z_Construct_UFunction_APlayerCharacter_OnReloadMontageEnded, "OnReloadMontageEnded" }, // 3984535582
		{ &Z_Construct_UFunction_APlayerCharacter_OnRep_CharacterGait, "OnRep_CharacterGait" }, // 3077326098
		{ &Z_Construct_UFunction_APlayerCharacter_OnRep_CharacterHeldSlot, "OnRep_CharacterHeldSlot" }, // 3357335190
		{ &Z_Construct_UFunction_APlayerCharacter_OnRep_CharacterStance, "OnRep_CharacterStance" }, // 749777313
		{ &Z_Construct_UFunction_APlayerCharacter_OnSphereBeginOverlap, "OnSphereBeginOverlap" }, // 1041274535
		{ &Z_Construct_UFunction_APlayerCharacter_OnSphereEndOverlap, "OnSphereEndOverlap" }, // 297061257
		{ &Z_Construct_UFunction_APlayerCharacter_OnSwitchFireModeMontageEnded, "OnSwitchFireModeMontageEnded" }, // 3738078699
		{ &Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageBlendOut, "OnSwitchWeaponMontageBlendOut" }, // 2100359879
		{ &Z_Construct_UFunction_APlayerCharacter_OnSwitchWeaponMontageEnded, "OnSwitchWeaponMontageEnded" }, // 344588829
		{ &Z_Construct_UFunction_APlayerCharacter_OnWeaponAttachmentsChangedHandler, "OnWeaponAttachmentsChangedHandler" }, // 3523360442
		{ &Z_Construct_UFunction_APlayerCharacter_Server_FinishReload, "Server_FinishReload" }, // 2066950244
		{ &Z_Construct_UFunction_APlayerCharacter_Server_Fire, "Server_Fire" }, // 3582500429
		{ &Z_Construct_UFunction_APlayerCharacter_Server_InitASC, "Server_InitASC" }, // 2776463885
		{ &Z_Construct_UFunction_APlayerCharacter_Server_PlaySwitchWeaponMontage, "Server_PlaySwitchWeaponMontage" }, // 4284497249
		{ &Z_Construct_UFunction_APlayerCharacter_Server_SetActorYaw, "Server_SetActorYaw" }, // 698977668
		{ &Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterGait, "Server_SetCharacterGait" }, // 3670559633
		{ &Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterHeldSlot, "Server_SetCharacterHeldSlot" }, // 4256110442
		{ &Z_Construct_UFunction_APlayerCharacter_Server_SetCharacterStance, "Server_SetCharacterStance" }, // 1566470023
		{ &Z_Construct_UFunction_APlayerCharacter_Server_SetControllerRotator, "Server_SetControllerRotator" }, // 2978232640
		{ &Z_Construct_UFunction_APlayerCharacter_Server_SetLeanDirection, "Server_SetLeanDirection" }, // 879059938
		{ &Z_Construct_UFunction_APlayerCharacter_Server_StartReload, "Server_StartReload" }, // 2170668390
		{ &Z_Construct_UFunction_APlayerCharacter_Server_ToggleFireMode, "Server_ToggleFireMode" }, // 2193910498
		{ &Z_Construct_UFunction_APlayerCharacter_ShouldEnableWeaponIK, "ShouldEnableWeaponIK" }, // 372424583
		{ &Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairBars, "ShouldShowCrosshairBars" }, // 1930751379
		{ &Z_Construct_UFunction_APlayerCharacter_ShouldShowCrosshairCenter, "ShouldShowCrosshairCenter" }, // 4229211363
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_OnWeaponSlotChanged = { "OnWeaponSlotChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, OnWeaponSlotChanged), Z_Construct_UDelegateFunction_PUBG_OnWeaponSlotChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWeaponSlotChanged_MetaData), NewProp_OnWeaponSlotChanged_MetaData) }; // 2112986602
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_Crouch = { "IA_Crouch", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, IA_Crouch), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Crouch_MetaData), NewProp_IA_Crouch_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_Jump = { "IA_Jump", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, IA_Jump), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Jump_MetaData), NewProp_IA_Jump_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_Look = { "IA_Look", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, IA_Look), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Look_MetaData), NewProp_IA_Look_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_Move = { "IA_Move", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, IA_Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Move_MetaData), NewProp_IA_Move_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_Sprint = { "IA_Sprint", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, IA_Sprint), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Sprint_MetaData), NewProp_IA_Sprint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_SwitchHeld = { "IA_SwitchHeld", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, IA_SwitchHeld), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_SwitchHeld_MetaData), NewProp_IA_SwitchHeld_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_TogglePerspective = { "IA_TogglePerspective", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, IA_TogglePerspective), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_TogglePerspective_MetaData), NewProp_IA_TogglePerspective_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_ToggleBackpack = { "IA_ToggleBackpack", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, IA_ToggleBackpack), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_ToggleBackpack_MetaData), NewProp_IA_ToggleBackpack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_Walk = { "IA_Walk", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, IA_Walk), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Walk_MetaData), NewProp_IA_Walk_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_Fire = { "IA_Fire", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, IA_Fire), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Fire_MetaData), NewProp_IA_Fire_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_Aim = { "IA_Aim", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, IA_Aim), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Aim_MetaData), NewProp_IA_Aim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_Reload = { "IA_Reload", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, IA_Reload), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Reload_MetaData), NewProp_IA_Reload_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_Holster = { "IA_Holster", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, IA_Holster), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Holster_MetaData), NewProp_IA_Holster_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_ToggleFireMode = { "IA_ToggleFireMode", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, IA_ToggleFireMode), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_ToggleFireMode_MetaData), NewProp_IA_ToggleFireMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_Lean = { "IA_Lean", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, IA_Lean), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Lean_MetaData), NewProp_IA_Lean_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_DT_CharacterGaitSettings = { "DT_CharacterGaitSettings", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, DT_CharacterGaitSettings), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DT_CharacterGaitSettings_MetaData), NewProp_DT_CharacterGaitSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_DT_TPPCameraSettings = { "DT_TPPCameraSettings", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, DT_TPPCameraSettings), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DT_TPPCameraSettings_MetaData), NewProp_DT_TPPCameraSettings_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterAnimLayerInstance_Unarmed = { "CharacterAnimLayerInstance_Unarmed", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CharacterAnimLayerInstance_Unarmed), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterAnimLayerInstance_Unarmed_MetaData), NewProp_CharacterAnimLayerInstance_Unarmed_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterAnimLayerInstance_Throwable = { "CharacterAnimLayerInstance_Throwable", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CharacterAnimLayerInstance_Throwable), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterAnimLayerInstance_Throwable_MetaData), NewProp_CharacterAnimLayerInstance_Throwable_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterAnimLayerInstance_Rifle = { "CharacterAnimLayerInstance_Rifle", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CharacterAnimLayerInstance_Rifle), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterAnimLayerInstance_Rifle_MetaData), NewProp_CharacterAnimLayerInstance_Rifle_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterAnimLayerInstance_Pistol = { "CharacterAnimLayerInstance_Pistol", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CharacterAnimLayerInstance_Pistol), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterAnimLayerInstance_Pistol_MetaData), NewProp_CharacterAnimLayerInstance_Pistol_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterAnimLayerInstance_Melee = { "CharacterAnimLayerInstance_Melee", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CharacterAnimLayerInstance_Melee), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterAnimLayerInstance_Melee_MetaData), NewProp_CharacterAnimLayerInstance_Melee_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_BackpackWidgetClass = { "BackpackWidgetClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, BackpackWidgetClass), Z_Construct_UClass_UBaseCommonActivatableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackpackWidgetClass_MetaData), NewProp_BackpackWidgetClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_Primary1Socket_Character = { "Primary1Socket_Character", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, Primary1Socket_Character), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Primary1Socket_Character_MetaData), NewProp_Primary1Socket_Character_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_Primary2Socket_Character = { "Primary2Socket_Character", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, Primary2Socket_Character), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Primary2Socket_Character_MetaData), NewProp_Primary2Socket_Character_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CameraInterpSpeed = { "CameraInterpSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CameraInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraInterpSpeed_MetaData), NewProp_CameraInterpSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_GunFireAttenuation = { "GunFireAttenuation", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, GunFireAttenuation), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GunFireAttenuation_MetaData), NewProp_GunFireAttenuation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_EquipPrimary1Montage = { "EquipPrimary1Montage", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, EquipPrimary1Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipPrimary1Montage_MetaData), NewProp_EquipPrimary1Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_EquipPrimary2Montage = { "EquipPrimary2Montage", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, EquipPrimary2Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipPrimary2Montage_MetaData), NewProp_EquipPrimary2Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_EquipSecondaryMontage = { "EquipSecondaryMontage", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, EquipSecondaryMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipSecondaryMontage_MetaData), NewProp_EquipSecondaryMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_EquipMeleeMontage = { "EquipMeleeMontage", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, EquipMeleeMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipMeleeMontage_MetaData), NewProp_EquipMeleeMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_EquipThrowableMontage = { "EquipThrowableMontage", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, EquipThrowableMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipThrowableMontage_MetaData), NewProp_EquipThrowableMontage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_LeanOffsetDistance = { "LeanOffsetDistance", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, LeanOffsetDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeanOffsetDistance_MetaData), NewProp_LeanOffsetDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_LeanInterpSpeed = { "LeanInterpSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, LeanInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeanInterpSpeed_MetaData), NewProp_LeanInterpSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_FirstPersonCamera = { "FirstPersonCamera", nullptr, (EPropertyFlags)0x01440000000b0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, FirstPersonCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCamera_MetaData), NewProp_FirstPersonCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ThirdPersonCamera = { "ThirdPersonCamera", nullptr, (EPropertyFlags)0x01440000000b0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, ThirdPersonCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonCamera_MetaData), NewProp_ThirdPersonCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ThirdPersonSpringArm = { "ThirdPersonSpringArm", nullptr, (EPropertyFlags)0x01440000000b0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, ThirdPersonSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonSpringArm_MetaData), NewProp_ThirdPersonSpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_PersonHead = { "PersonHead", nullptr, (EPropertyFlags)0x01440000000b0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, PersonHead), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersonHead_MetaData), NewProp_PersonHead_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_Sphere = { "Sphere", nullptr, (EPropertyFlags)0x01440000000b0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, Sphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sphere_MetaData), NewProp_Sphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterAnimInstance = { "CharacterAnimInstance", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CharacterAnimInstance), Z_Construct_UClass_UCharacterAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterAnimInstance_MetaData), NewProp_CharacterAnimInstance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterGait = { "CharacterGait", "OnRep_CharacterGait", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CharacterGait), Z_Construct_UEnum_PUBG_ECharacterGait, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterGait_MetaData), NewProp_CharacterGait_MetaData) }; // 515073860
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterStance = { "CharacterStance", "OnRep_CharacterStance", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CharacterStance), Z_Construct_UEnum_PUBG_ECharacterStance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterStance_MetaData), NewProp_CharacterStance_MetaData) }; // 570544318
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterHeldSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterHeldSlot = { "CharacterHeldSlot", "OnRep_CharacterHeldSlot", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CharacterHeldSlot), Z_Construct_UEnum_PUBG_ECharacterHeldSlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterHeldSlot_MetaData), NewProp_CharacterHeldSlot_MetaData) }; // 3266210547
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ControllerRotator_Yaw = { "ControllerRotator_Yaw", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, ControllerRotator_Yaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerRotator_Yaw_MetaData), NewProp_ControllerRotator_Yaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ControllerRotator_Pitch = { "ControllerRotator_Pitch", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, ControllerRotator_Pitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerRotator_Pitch_MetaData), NewProp_ControllerRotator_Pitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurrentLeanDirection = { "CurrentLeanDirection", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CurrentLeanDirection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLeanDirection_MetaData), NewProp_CurrentLeanDirection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_EquippedMeshComponents_ValueProp = { "EquippedMeshComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_EquippedMeshComponents_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_EquippedMeshComponents_Key_KeyProp = { "EquippedMeshComponents_Key", nullptr, (EPropertyFlags)0x0100000000080008, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PUBG_EEquipmentSlot, METADATA_PARAMS(0, nullptr) }; // 218928670
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_EquippedMeshComponents = { "EquippedMeshComponents", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, EquippedMeshComponents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedMeshComponents_MetaData), NewProp_EquippedMeshComponents_MetaData) }; // 218928670
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WeaponMeshComponents_Inner = { "WeaponMeshComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WeaponMeshComponents = { "WeaponMeshComponents", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, WeaponMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMeshComponents_MetaData), NewProp_WeaponMeshComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurrentHeldWeaponInstance = { "CurrentHeldWeaponInstance", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CurrentHeldWeaponInstance), Z_Construct_UClass_UBackpackItemInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHeldWeaponInstance_MetaData), NewProp_CurrentHeldWeaponInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurrentSwitchWeaponMontage = { "CurrentSwitchWeaponMontage", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CurrentSwitchWeaponMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSwitchWeaponMontage_MetaData), NewProp_CurrentSwitchWeaponMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_InterpWeaponMesh = { "InterpWeaponMesh", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, InterpWeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpWeaponMesh_MetaData), NewProp_InterpWeaponMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_OnWeaponSlotChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_Crouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_Jump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_Look,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_Move,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_Sprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_SwitchHeld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_TogglePerspective,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_ToggleBackpack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_Walk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_Fire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_Aim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_Reload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_Holster,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_ToggleFireMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_IA_Lean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_DT_CharacterGaitSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_DT_TPPCameraSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterAnimLayerInstance_Unarmed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterAnimLayerInstance_Throwable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterAnimLayerInstance_Rifle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterAnimLayerInstance_Pistol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterAnimLayerInstance_Melee,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_BackpackWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_Primary1Socket_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_Primary2Socket_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CameraInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_GunFireAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_EquipPrimary1Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_EquipPrimary2Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_EquipSecondaryMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_EquipMeleeMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_EquipThrowableMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_LeanOffsetDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_LeanInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_FirstPersonCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ThirdPersonCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ThirdPersonSpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_PersonHead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_Sphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterGait_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterGait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterStance_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterStance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterHeldSlot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterHeldSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ControllerRotator_Yaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ControllerRotator_Pitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurrentLeanDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_EquippedMeshComponents_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_EquippedMeshComponents_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_EquippedMeshComponents_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_EquippedMeshComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WeaponMeshComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WeaponMeshComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurrentHeldWeaponInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurrentSwitchWeaponMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_InterpWeaponMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APlayerCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(APlayerCharacter, IAbilitySystemInterface), false },  // 1199015870
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacter_Statics::ClassParams = {
	&APlayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerCharacter()
{
	if (!Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton, Z_Construct_UClass_APlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void APlayerCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_CharacterGait(TEXT("CharacterGait"));
	static FName Name_CharacterStance(TEXT("CharacterStance"));
	static FName Name_CharacterHeldSlot(TEXT("CharacterHeldSlot"));
	static FName Name_ControllerRotator_Yaw(TEXT("ControllerRotator_Yaw"));
	static FName Name_ControllerRotator_Pitch(TEXT("ControllerRotator_Pitch"));
	static FName Name_CurrentLeanDirection(TEXT("CurrentLeanDirection"));
	const bool bIsValid = true
		&& Name_CharacterGait == ClassReps[(int32)ENetFields_Private::CharacterGait].Property->GetFName()
		&& Name_CharacterStance == ClassReps[(int32)ENetFields_Private::CharacterStance].Property->GetFName()
		&& Name_CharacterHeldSlot == ClassReps[(int32)ENetFields_Private::CharacterHeldSlot].Property->GetFName()
		&& Name_ControllerRotator_Yaw == ClassReps[(int32)ENetFields_Private::ControllerRotator_Yaw].Property->GetFName()
		&& Name_ControllerRotator_Pitch == ClassReps[(int32)ENetFields_Private::ControllerRotator_Pitch].Property->GetFName()
		&& Name_CurrentLeanDirection == ClassReps[(int32)ENetFields_Private::CurrentLeanDirection].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APlayerCharacter"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacter);
APlayerCharacter::~APlayerCharacter() {}
// ********** End Class APlayerCharacter ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Character_PlayerCharacter_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacter, APlayerCharacter::StaticClass, TEXT("APlayerCharacter"), &Z_Registration_Info_UClass_APlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacter), 558562827U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Character_PlayerCharacter_h__Script_PUBG_1934676243(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Character_PlayerCharacter_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Character_PlayerCharacter_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
