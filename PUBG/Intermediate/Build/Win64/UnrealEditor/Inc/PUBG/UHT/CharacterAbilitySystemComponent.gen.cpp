// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystemComponent/CharacterAbilitySystemComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterAbilitySystemComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UCharacterAbilitySystemComponent();
PUBG_API UClass* Z_Construct_UClass_UCharacterAbilitySystemComponent_NoRegister();
PUBG_API UFunction* Z_Construct_UDelegateFunction_PUBG_OnHealCancelledDelegate__DelegateSignature();
PUBG_API UFunction* Z_Construct_UDelegateFunction_PUBG_OnHealCompletedDelegate__DelegateSignature();
PUBG_API UFunction* Z_Construct_UDelegateFunction_PUBG_OnHealStartedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnHealStartedDelegate ************************************************
struct Z_Construct_UDelegateFunction_PUBG_OnHealStartedDelegate__DelegateSignature_Statics
{
	struct _Script_PUBG_eventOnHealStartedDelegate_Parms
	{
		float UseTime;
		float HealAmount;
		float MaxHealthPercentage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemComponent/CharacterAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UseTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealthPercentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_PUBG_OnHealStartedDelegate__DelegateSignature_Statics::NewProp_UseTime = { "UseTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PUBG_eventOnHealStartedDelegate_Parms, UseTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_PUBG_OnHealStartedDelegate__DelegateSignature_Statics::NewProp_HealAmount = { "HealAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PUBG_eventOnHealStartedDelegate_Parms, HealAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_PUBG_OnHealStartedDelegate__DelegateSignature_Statics::NewProp_MaxHealthPercentage = { "MaxHealthPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PUBG_eventOnHealStartedDelegate_Parms, MaxHealthPercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PUBG_OnHealStartedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PUBG_OnHealStartedDelegate__DelegateSignature_Statics::NewProp_UseTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PUBG_OnHealStartedDelegate__DelegateSignature_Statics::NewProp_HealAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PUBG_OnHealStartedDelegate__DelegateSignature_Statics::NewProp_MaxHealthPercentage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PUBG_OnHealStartedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PUBG_OnHealStartedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PUBG, nullptr, "OnHealStartedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_PUBG_OnHealStartedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PUBG_OnHealStartedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PUBG_OnHealStartedDelegate__DelegateSignature_Statics::_Script_PUBG_eventOnHealStartedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PUBG_OnHealStartedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PUBG_OnHealStartedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_PUBG_OnHealStartedDelegate__DelegateSignature_Statics::_Script_PUBG_eventOnHealStartedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PUBG_OnHealStartedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PUBG_OnHealStartedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealStartedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHealStartedDelegate, float UseTime, float HealAmount, float MaxHealthPercentage)
{
	struct _Script_PUBG_eventOnHealStartedDelegate_Parms
	{
		float UseTime;
		float HealAmount;
		float MaxHealthPercentage;
	};
	_Script_PUBG_eventOnHealStartedDelegate_Parms Parms;
	Parms.UseTime=UseTime;
	Parms.HealAmount=HealAmount;
	Parms.MaxHealthPercentage=MaxHealthPercentage;
	OnHealStartedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHealStartedDelegate **************************************************

// ********** Begin Delegate FOnHealCompletedDelegate **********************************************
struct Z_Construct_UDelegateFunction_PUBG_OnHealCompletedDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemComponent/CharacterAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PUBG_OnHealCompletedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PUBG, nullptr, "OnHealCompletedDelegate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PUBG_OnHealCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PUBG_OnHealCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_PUBG_OnHealCompletedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PUBG_OnHealCompletedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHealCompletedDelegate)
{
	OnHealCompletedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnHealCompletedDelegate ************************************************

// ********** Begin Delegate FOnHealCancelledDelegate **********************************************
struct Z_Construct_UDelegateFunction_PUBG_OnHealCancelledDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemComponent/CharacterAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PUBG_OnHealCancelledDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PUBG, nullptr, "OnHealCancelledDelegate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PUBG_OnHealCancelledDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PUBG_OnHealCancelledDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_PUBG_OnHealCancelledDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PUBG_OnHealCancelledDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealCancelledDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHealCancelledDelegate)
{
	OnHealCancelledDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnHealCancelledDelegate ************************************************

// ********** Begin Class UCharacterAbilitySystemComponent Function Client_OnHealFinished **********
struct CharacterAbilitySystemComponent_eventClient_OnHealFinished_Parms
{
	bool bSuccess;
};
static FName NAME_UCharacterAbilitySystemComponent_Client_OnHealFinished = FName(TEXT("Client_OnHealFinished"));
void UCharacterAbilitySystemComponent::Client_OnHealFinished(bool bSuccess)
{
	CharacterAbilitySystemComponent_eventClient_OnHealFinished_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UCharacterAbilitySystemComponent_Client_OnHealFinished);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemComponent/CharacterAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealFinished_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((CharacterAbilitySystemComponent_eventClient_OnHealFinished_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealFinished_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterAbilitySystemComponent_eventClient_OnHealFinished_Parms), &Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealFinished_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealFinished_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterAbilitySystemComponent, nullptr, "Client_OnHealFinished", Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealFinished_Statics::PropPointers), sizeof(CharacterAbilitySystemComponent_eventClient_OnHealFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealFinished_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CharacterAbilitySystemComponent_eventClient_OnHealFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterAbilitySystemComponent::execClient_OnHealFinished)
{
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_OnHealFinished_Implementation(Z_Param_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UCharacterAbilitySystemComponent Function Client_OnHealFinished ************

// ********** Begin Class UCharacterAbilitySystemComponent Function Client_OnHealStarted ***********
struct CharacterAbilitySystemComponent_eventClient_OnHealStarted_Parms
{
	float InUseTime;
	float InHealAmount;
	float InMaxHealthPercentage;
};
static FName NAME_UCharacterAbilitySystemComponent_Client_OnHealStarted = FName(TEXT("Client_OnHealStarted"));
void UCharacterAbilitySystemComponent::Client_OnHealStarted(float InUseTime, float InHealAmount, float InMaxHealthPercentage)
{
	CharacterAbilitySystemComponent_eventClient_OnHealStarted_Parms Parms;
	Parms.InUseTime=InUseTime;
	Parms.InHealAmount=InHealAmount;
	Parms.InMaxHealthPercentage=InMaxHealthPercentage;
	UFunction* Func = FindFunctionChecked(NAME_UCharacterAbilitySystemComponent_Client_OnHealStarted);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealStarted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemComponent/CharacterAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InUseTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InHealAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMaxHealthPercentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealStarted_Statics::NewProp_InUseTime = { "InUseTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterAbilitySystemComponent_eventClient_OnHealStarted_Parms, InUseTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealStarted_Statics::NewProp_InHealAmount = { "InHealAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterAbilitySystemComponent_eventClient_OnHealStarted_Parms, InHealAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealStarted_Statics::NewProp_InMaxHealthPercentage = { "InMaxHealthPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterAbilitySystemComponent_eventClient_OnHealStarted_Parms, InMaxHealthPercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealStarted_Statics::NewProp_InUseTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealStarted_Statics::NewProp_InHealAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealStarted_Statics::NewProp_InMaxHealthPercentage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealStarted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterAbilitySystemComponent, nullptr, "Client_OnHealStarted", Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealStarted_Statics::PropPointers), sizeof(CharacterAbilitySystemComponent_eventClient_OnHealStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealStarted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CharacterAbilitySystemComponent_eventClient_OnHealStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterAbilitySystemComponent::execClient_OnHealStarted)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InUseTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InHealAmount);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMaxHealthPercentage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_OnHealStarted_Implementation(Z_Param_InUseTime,Z_Param_InHealAmount,Z_Param_InMaxHealthPercentage);
	P_NATIVE_END;
}
// ********** End Class UCharacterAbilitySystemComponent Function Client_OnHealStarted *************

// ********** Begin Class UCharacterAbilitySystemComponent *****************************************
void UCharacterAbilitySystemComponent::StaticRegisterNativesUCharacterAbilitySystemComponent()
{
	UClass* Class = UCharacterAbilitySystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Client_OnHealFinished", &UCharacterAbilitySystemComponent::execClient_OnHealFinished },
		{ "Client_OnHealStarted", &UCharacterAbilitySystemComponent::execClient_OnHealStarted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterAbilitySystemComponent;
UClass* UCharacterAbilitySystemComponent::GetPrivateStaticClass()
{
	using TClass = UCharacterAbilitySystemComponent;
	if (!Z_Registration_Info_UClass_UCharacterAbilitySystemComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharacterAbilitySystemComponent"),
			Z_Registration_Info_UClass_UCharacterAbilitySystemComponent.InnerSingleton,
			StaticRegisterNativesUCharacterAbilitySystemComponent,
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
	return Z_Registration_Info_UClass_UCharacterAbilitySystemComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterAbilitySystemComponent_NoRegister()
{
	return UCharacterAbilitySystemComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystemComponent/CharacterAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystemComponent/CharacterAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealStartedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemComponent/CharacterAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealCompletedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemComponent/CharacterAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealCancelledDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemComponent/CharacterAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[] = {
		{ "Category", "CharacterAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/AbilitySystemComponent/CharacterAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[] = {
		{ "Category", "CharacterAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/AbilitySystemComponent/CharacterAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealStartedDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealCompletedDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealCancelledDelegate;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Abilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Effects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Effects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealFinished, "Client_OnHealFinished" }, // 212514437
		{ &Z_Construct_UFunction_UCharacterAbilitySystemComponent_Client_OnHealStarted, "Client_OnHealStarted" }, // 4004368758
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::NewProp_OnHealStartedDelegate = { "OnHealStartedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitySystemComponent, OnHealStartedDelegate), Z_Construct_UDelegateFunction_PUBG_OnHealStartedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealStartedDelegate_MetaData), NewProp_OnHealStartedDelegate_MetaData) }; // 4008511013
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::NewProp_OnHealCompletedDelegate = { "OnHealCompletedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitySystemComponent, OnHealCompletedDelegate), Z_Construct_UDelegateFunction_PUBG_OnHealCompletedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealCompletedDelegate_MetaData), NewProp_OnHealCompletedDelegate_MetaData) }; // 1099186154
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::NewProp_OnHealCancelledDelegate = { "OnHealCancelledDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitySystemComponent, OnHealCancelledDelegate), Z_Construct_UDelegateFunction_PUBG_OnHealCancelledDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealCancelledDelegate_MetaData), NewProp_OnHealCancelledDelegate_MetaData) }; // 2208521851
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitySystemComponent, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Abilities_MetaData), NewProp_Abilities_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::NewProp_Effects_Inner = { "Effects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAbilitySystemComponent, Effects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effects_MetaData), NewProp_Effects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::NewProp_OnHealStartedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::NewProp_OnHealCompletedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::NewProp_OnHealCancelledDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::NewProp_Abilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::NewProp_Abilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::NewProp_Effects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::NewProp_Effects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::ClassParams = {
	&UCharacterAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UCharacterAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterAbilitySystemComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAbilitySystemComponent);
UCharacterAbilitySystemComponent::~UCharacterAbilitySystemComponent() {}
// ********** End Class UCharacterAbilitySystemComponent *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AbilitySystemComponent_CharacterAbilitySystemComponent_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAbilitySystemComponent, UCharacterAbilitySystemComponent::StaticClass, TEXT("UCharacterAbilitySystemComponent"), &Z_Registration_Info_UClass_UCharacterAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAbilitySystemComponent), 925246790U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AbilitySystemComponent_CharacterAbilitySystemComponent_h__Script_PUBG_3269310853(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AbilitySystemComponent_CharacterAbilitySystemComponent_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AbilitySystemComponent_CharacterAbilitySystemComponent_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
