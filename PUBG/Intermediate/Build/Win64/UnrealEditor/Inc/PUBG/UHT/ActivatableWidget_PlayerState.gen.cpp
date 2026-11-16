// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonActivatableWidget/ActivatableWidget_PlayerState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActivatableWidget_PlayerState() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_PlayerState();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_PlayerState_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackManagerComponent_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBaseCommonActivatableWidget();
PUBG_API UClass* Z_Construct_UClass_UCharacterAbilitySystemComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActivatableWidget_PlayerState Function HandleHealCancelled **************
struct Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealCancelled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealCancelled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActivatableWidget_PlayerState, nullptr, "HandleHealCancelled", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealCancelled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealCancelled_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealCancelled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealCancelled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActivatableWidget_PlayerState::execHandleHealCancelled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleHealCancelled();
	P_NATIVE_END;
}
// ********** End Class UActivatableWidget_PlayerState Function HandleHealCancelled ****************

// ********** Begin Class UActivatableWidget_PlayerState Function HandleHealCompleted **************
struct Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActivatableWidget_PlayerState, nullptr, "HandleHealCompleted", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealCompleted_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActivatableWidget_PlayerState::execHandleHealCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleHealCompleted();
	P_NATIVE_END;
}
// ********** End Class UActivatableWidget_PlayerState Function HandleHealCompleted ****************

// ********** Begin Class UActivatableWidget_PlayerState Function HandleHealStarted ****************
struct Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealStarted_Statics
{
	struct ActivatableWidget_PlayerState_eventHandleHealStarted_Parms
	{
		float TotalDuration;
		float HealAmount;
		float MaxHealthPercentage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealthPercentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealStarted_Statics::NewProp_TotalDuration = { "TotalDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActivatableWidget_PlayerState_eventHandleHealStarted_Parms, TotalDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealStarted_Statics::NewProp_HealAmount = { "HealAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActivatableWidget_PlayerState_eventHandleHealStarted_Parms, HealAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealStarted_Statics::NewProp_MaxHealthPercentage = { "MaxHealthPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActivatableWidget_PlayerState_eventHandleHealStarted_Parms, MaxHealthPercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealStarted_Statics::NewProp_TotalDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealStarted_Statics::NewProp_HealAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealStarted_Statics::NewProp_MaxHealthPercentage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealStarted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActivatableWidget_PlayerState, nullptr, "HandleHealStarted", Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealStarted_Statics::ActivatableWidget_PlayerState_eventHandleHealStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealStarted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealStarted_Statics::ActivatableWidget_PlayerState_eventHandleHealStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActivatableWidget_PlayerState::execHandleHealStarted)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_TotalDuration);
	P_GET_PROPERTY(FFloatProperty,Z_Param_HealAmount);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHealthPercentage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleHealStarted(Z_Param_TotalDuration,Z_Param_HealAmount,Z_Param_MaxHealthPercentage);
	P_NATIVE_END;
}
// ********** End Class UActivatableWidget_PlayerState Function HandleHealStarted ******************

// ********** Begin Class UActivatableWidget_PlayerState Function OnInventoryChanged ***************
struct Z_Construct_UFunction_UActivatableWidget_PlayerState_OnInventoryChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidget_PlayerState_OnInventoryChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActivatableWidget_PlayerState, nullptr, "OnInventoryChanged", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_PlayerState_OnInventoryChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActivatableWidget_PlayerState_OnInventoryChanged_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UActivatableWidget_PlayerState_OnInventoryChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActivatableWidget_PlayerState_OnInventoryChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActivatableWidget_PlayerState::execOnInventoryChanged)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInventoryChanged();
	P_NATIVE_END;
}
// ********** End Class UActivatableWidget_PlayerState Function OnInventoryChanged *****************

// ********** Begin Class UActivatableWidget_PlayerState *******************************************
void UActivatableWidget_PlayerState::StaticRegisterNativesUActivatableWidget_PlayerState()
{
	UClass* Class = UActivatableWidget_PlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleHealCancelled", &UActivatableWidget_PlayerState::execHandleHealCancelled },
		{ "HandleHealCompleted", &UActivatableWidget_PlayerState::execHandleHealCompleted },
		{ "HandleHealStarted", &UActivatableWidget_PlayerState::execHandleHealStarted },
		{ "OnInventoryChanged", &UActivatableWidget_PlayerState::execOnInventoryChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActivatableWidget_PlayerState;
UClass* UActivatableWidget_PlayerState::GetPrivateStaticClass()
{
	using TClass = UActivatableWidget_PlayerState;
	if (!Z_Registration_Info_UClass_UActivatableWidget_PlayerState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActivatableWidget_PlayerState"),
			Z_Registration_Info_UClass_UActivatableWidget_PlayerState.InnerSingleton,
			StaticRegisterNativesUActivatableWidget_PlayerState,
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
	return Z_Registration_Info_UClass_UActivatableWidget_PlayerState.InnerSingleton;
}
UClass* Z_Construct_UClass_UActivatableWidget_PlayerState_NoRegister()
{
	return UActivatableWidget_PlayerState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActivatableWidget_PlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_CurrentNumber_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_BackNumber_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_FireMode_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_Helmet_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_Armor_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_HP_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_Damage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_Heal_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeBox_GunInfo_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeBox_FireMode_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeBox_Number_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeBox_Throw_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeBox_Melee_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeBox_Pistol_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeBox_Secondary_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeBox_Primary_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeBox_Energy_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_Primary1_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_Primary2_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_Pistol_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_Melee_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_Throw_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_SemiAuto_MetaData[] = {
		{ "Category", "ActivatableWidget_PlayerState" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_FullAuto_MetaData[] = {
		{ "Category", "ActivatableWidget_PlayerState" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_Burst_MetaData[] = {
		{ "Category", "ActivatableWidget_PlayerState" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_Helmet_MetaData[] = {
		{ "Category", "ActivatableWidget_PlayerState" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_Armor_MetaData[] = {
		{ "Category", "ActivatableWidget_PlayerState" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageDelayDuration_MetaData[] = {
		{ "Category", "ActivatableWidget_PlayerState" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageDelayInterpSpeed_MetaData[] = {
		{ "Category", "ActivatableWidget_PlayerState" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedBackpackComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_PlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_CurrentNumber;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_BackNumber;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_FireMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_Helmet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_Armor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressBar_HP;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressBar_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressBar_Heal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeBox_GunInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeBox_FireMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeBox_Number;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeBox_Throw;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeBox_Melee;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeBox_Pistol;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeBox_Secondary;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeBox_Primary;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeBox_Energy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_Primary1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_Primary2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_Pistol;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_Melee;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_Throw;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon_SemiAuto;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon_FullAuto;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon_Burst;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Default_Helmet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Default_Armor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageDelayDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageDelayInterpSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedBackpackComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealCancelled, "HandleHealCancelled" }, // 3787197025
		{ &Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealCompleted, "HandleHealCompleted" }, // 1623461190
		{ &Z_Construct_UFunction_UActivatableWidget_PlayerState_HandleHealStarted, "HandleHealStarted" }, // 2240594473
		{ &Z_Construct_UFunction_UActivatableWidget_PlayerState_OnInventoryChanged, "OnInventoryChanged" }, // 999837120
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivatableWidget_PlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_TextBlock_CurrentNumber = { "TextBlock_CurrentNumber", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, TextBlock_CurrentNumber), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_CurrentNumber_MetaData), NewProp_TextBlock_CurrentNumber_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_TextBlock_BackNumber = { "TextBlock_BackNumber", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, TextBlock_BackNumber), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_BackNumber_MetaData), NewProp_TextBlock_BackNumber_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Image_FireMode = { "Image_FireMode", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, Image_FireMode), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_FireMode_MetaData), NewProp_Image_FireMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Image_Helmet = { "Image_Helmet", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, Image_Helmet), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_Helmet_MetaData), NewProp_Image_Helmet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Image_Armor = { "Image_Armor", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, Image_Armor), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_Armor_MetaData), NewProp_Image_Armor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_ProgressBar_HP = { "ProgressBar_HP", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, ProgressBar_HP), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBar_HP_MetaData), NewProp_ProgressBar_HP_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_ProgressBar_Damage = { "ProgressBar_Damage", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, ProgressBar_Damage), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBar_Damage_MetaData), NewProp_ProgressBar_Damage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_ProgressBar_Heal = { "ProgressBar_Heal", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, ProgressBar_Heal), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBar_Heal_MetaData), NewProp_ProgressBar_Heal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_SizeBox_GunInfo = { "SizeBox_GunInfo", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, SizeBox_GunInfo), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeBox_GunInfo_MetaData), NewProp_SizeBox_GunInfo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_SizeBox_FireMode = { "SizeBox_FireMode", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, SizeBox_FireMode), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeBox_FireMode_MetaData), NewProp_SizeBox_FireMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_SizeBox_Number = { "SizeBox_Number", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, SizeBox_Number), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeBox_Number_MetaData), NewProp_SizeBox_Number_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_SizeBox_Throw = { "SizeBox_Throw", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, SizeBox_Throw), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeBox_Throw_MetaData), NewProp_SizeBox_Throw_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_SizeBox_Melee = { "SizeBox_Melee", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, SizeBox_Melee), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeBox_Melee_MetaData), NewProp_SizeBox_Melee_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_SizeBox_Pistol = { "SizeBox_Pistol", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, SizeBox_Pistol), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeBox_Pistol_MetaData), NewProp_SizeBox_Pistol_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_SizeBox_Secondary = { "SizeBox_Secondary", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, SizeBox_Secondary), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeBox_Secondary_MetaData), NewProp_SizeBox_Secondary_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_SizeBox_Primary = { "SizeBox_Primary", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, SizeBox_Primary), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeBox_Primary_MetaData), NewProp_SizeBox_Primary_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_SizeBox_Energy = { "SizeBox_Energy", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, SizeBox_Energy), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeBox_Energy_MetaData), NewProp_SizeBox_Energy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Image_Primary1 = { "Image_Primary1", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, Image_Primary1), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_Primary1_MetaData), NewProp_Image_Primary1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Image_Primary2 = { "Image_Primary2", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, Image_Primary2), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_Primary2_MetaData), NewProp_Image_Primary2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Image_Pistol = { "Image_Pistol", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, Image_Pistol), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_Pistol_MetaData), NewProp_Image_Pistol_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Image_Melee = { "Image_Melee", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, Image_Melee), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_Melee_MetaData), NewProp_Image_Melee_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Image_Throw = { "Image_Throw", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, Image_Throw), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_Throw_MetaData), NewProp_Image_Throw_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Icon_SemiAuto = { "Icon_SemiAuto", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, Icon_SemiAuto), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_SemiAuto_MetaData), NewProp_Icon_SemiAuto_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Icon_FullAuto = { "Icon_FullAuto", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, Icon_FullAuto), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_FullAuto_MetaData), NewProp_Icon_FullAuto_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Icon_Burst = { "Icon_Burst", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, Icon_Burst), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_Burst_MetaData), NewProp_Icon_Burst_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Default_Helmet = { "Default_Helmet", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, Default_Helmet), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_Helmet_MetaData), NewProp_Default_Helmet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Default_Armor = { "Default_Armor", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, Default_Armor), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_Armor_MetaData), NewProp_Default_Armor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_DamageDelayDuration = { "DamageDelayDuration", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, DamageDelayDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageDelayDuration_MetaData), NewProp_DamageDelayDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_DamageDelayInterpSpeed = { "DamageDelayInterpSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, DamageDelayInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageDelayInterpSpeed_MetaData), NewProp_DamageDelayInterpSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_CachedBackpackComp = { "CachedBackpackComp", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, CachedBackpackComp), Z_Construct_UClass_UBackpackManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedBackpackComp_MetaData), NewProp_CachedBackpackComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_CachedASC = { "CachedASC", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_PlayerState, CachedASC), Z_Construct_UClass_UCharacterAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedASC_MetaData), NewProp_CachedASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_TextBlock_CurrentNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_TextBlock_BackNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Image_FireMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Image_Helmet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Image_Armor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_ProgressBar_HP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_ProgressBar_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_ProgressBar_Heal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_SizeBox_GunInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_SizeBox_FireMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_SizeBox_Number,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_SizeBox_Throw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_SizeBox_Melee,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_SizeBox_Pistol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_SizeBox_Secondary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_SizeBox_Primary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_SizeBox_Energy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Image_Primary1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Image_Primary2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Image_Pistol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Image_Melee,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Image_Throw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Icon_SemiAuto,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Icon_FullAuto,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Icon_Burst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Default_Helmet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_Default_Armor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_DamageDelayDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_DamageDelayInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_CachedBackpackComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::NewProp_CachedASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::ClassParams = {
	&UActivatableWidget_PlayerState::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActivatableWidget_PlayerState()
{
	if (!Z_Registration_Info_UClass_UActivatableWidget_PlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActivatableWidget_PlayerState.OuterSingleton, Z_Construct_UClass_UActivatableWidget_PlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActivatableWidget_PlayerState.OuterSingleton;
}
UActivatableWidget_PlayerState::UActivatableWidget_PlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActivatableWidget_PlayerState);
UActivatableWidget_PlayerState::~UActivatableWidget_PlayerState() {}
// ********** End Class UActivatableWidget_PlayerState *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_PlayerState_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActivatableWidget_PlayerState, UActivatableWidget_PlayerState::StaticClass, TEXT("UActivatableWidget_PlayerState"), &Z_Registration_Info_UClass_UActivatableWidget_PlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActivatableWidget_PlayerState), 1650111406U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_PlayerState_h__Script_PUBG_2017091175(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_PlayerState_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_PlayerState_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
