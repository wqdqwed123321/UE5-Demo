// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AttributeSet/CharacterAttributeSet.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
PUBG_API UClass* Z_Construct_UClass_UCharacterAttributeSet();
PUBG_API UClass* Z_Construct_UClass_UCharacterAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCharacterAttributeSet Function OnRep_BackpackCapacity *******************
struct Z_Construct_UFunction_UCharacterAttributeSet_OnRep_BackpackCapacity_Statics
{
	struct CharacterAttributeSet_eventOnRep_BackpackCapacity_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSet/CharacterAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterAttributeSet_OnRep_BackpackCapacity_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterAttributeSet_eventOnRep_BackpackCapacity_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterAttributeSet_OnRep_BackpackCapacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAttributeSet_OnRep_BackpackCapacity_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeSet_OnRep_BackpackCapacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAttributeSet_OnRep_BackpackCapacity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterAttributeSet, nullptr, "OnRep_BackpackCapacity", Z_Construct_UFunction_UCharacterAttributeSet_OnRep_BackpackCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeSet_OnRep_BackpackCapacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterAttributeSet_OnRep_BackpackCapacity_Statics::CharacterAttributeSet_eventOnRep_BackpackCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeSet_OnRep_BackpackCapacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterAttributeSet_OnRep_BackpackCapacity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterAttributeSet_OnRep_BackpackCapacity_Statics::CharacterAttributeSet_eventOnRep_BackpackCapacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterAttributeSet_OnRep_BackpackCapacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterAttributeSet_OnRep_BackpackCapacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterAttributeSet::execOnRep_BackpackCapacity)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BackpackCapacity(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UCharacterAttributeSet Function OnRep_BackpackCapacity *********************

// ********** Begin Class UCharacterAttributeSet Function OnRep_Health *****************************
struct Z_Construct_UFunction_UCharacterAttributeSet_OnRep_Health_Statics
{
	struct CharacterAttributeSet_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSet/CharacterAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterAttributeSet_OnRep_Health_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterAttributeSet_eventOnRep_Health_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterAttributeSet_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAttributeSet_OnRep_Health_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAttributeSet_OnRep_Health_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterAttributeSet, nullptr, "OnRep_Health", Z_Construct_UFunction_UCharacterAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterAttributeSet_OnRep_Health_Statics::CharacterAttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterAttributeSet_OnRep_Health_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterAttributeSet_OnRep_Health_Statics::CharacterAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterAttributeSet_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterAttributeSet_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterAttributeSet::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UCharacterAttributeSet Function OnRep_Health *******************************

// ********** Begin Class UCharacterAttributeSet Function OnRep_MaxBackpackCapacity ****************
struct Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxBackpackCapacity_Statics
{
	struct CharacterAttributeSet_eventOnRep_MaxBackpackCapacity_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSet/CharacterAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxBackpackCapacity_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterAttributeSet_eventOnRep_MaxBackpackCapacity_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxBackpackCapacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxBackpackCapacity_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxBackpackCapacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxBackpackCapacity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterAttributeSet, nullptr, "OnRep_MaxBackpackCapacity", Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxBackpackCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxBackpackCapacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxBackpackCapacity_Statics::CharacterAttributeSet_eventOnRep_MaxBackpackCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxBackpackCapacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxBackpackCapacity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxBackpackCapacity_Statics::CharacterAttributeSet_eventOnRep_MaxBackpackCapacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxBackpackCapacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxBackpackCapacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterAttributeSet::execOnRep_MaxBackpackCapacity)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxBackpackCapacity(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UCharacterAttributeSet Function OnRep_MaxBackpackCapacity ******************

// ********** Begin Class UCharacterAttributeSet Function OnRep_MaxHealth **************************
struct Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxHealth_Statics
{
	struct CharacterAttributeSet_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSet/CharacterAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterAttributeSet_eventOnRep_MaxHealth_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterAttributeSet, nullptr, "OnRep_MaxHealth", Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxHealth_Statics::CharacterAttributeSet_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxHealth_Statics::CharacterAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterAttributeSet::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class UCharacterAttributeSet Function OnRep_MaxHealth ****************************

// ********** Begin Class UCharacterAttributeSet ***************************************************
void UCharacterAttributeSet::StaticRegisterNativesUCharacterAttributeSet()
{
	UClass* Class = UCharacterAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_BackpackCapacity", &UCharacterAttributeSet::execOnRep_BackpackCapacity },
		{ "OnRep_Health", &UCharacterAttributeSet::execOnRep_Health },
		{ "OnRep_MaxBackpackCapacity", &UCharacterAttributeSet::execOnRep_MaxBackpackCapacity },
		{ "OnRep_MaxHealth", &UCharacterAttributeSet::execOnRep_MaxHealth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterAttributeSet;
UClass* UCharacterAttributeSet::GetPrivateStaticClass()
{
	using TClass = UCharacterAttributeSet;
	if (!Z_Registration_Info_UClass_UCharacterAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharacterAttributeSet"),
			Z_Registration_Info_UClass_UCharacterAttributeSet.InnerSingleton,
			StaticRegisterNativesUCharacterAttributeSet,
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
	return Z_Registration_Info_UClass_UCharacterAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterAttributeSet_NoRegister()
{
	return UCharacterAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AttributeSet/CharacterAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AttributeSet/CharacterAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttributeSet/CharacterAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttributeSet/CharacterAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackpackCapacity_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttributeSet/CharacterAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBackpackCapacity_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttributeSet/CharacterAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackpackCapacity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxBackpackCapacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterAttributeSet_OnRep_BackpackCapacity, "OnRep_BackpackCapacity" }, // 4037059035
		{ &Z_Construct_UFunction_UCharacterAttributeSet_OnRep_Health, "OnRep_Health" }, // 4220760359
		{ &Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxBackpackCapacity, "OnRep_MaxBackpackCapacity" }, // 3390057569
		{ &Z_Construct_UFunction_UCharacterAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 2731157335
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_BackpackCapacity = { "BackpackCapacity", "OnRep_BackpackCapacity", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSet, BackpackCapacity), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackpackCapacity_MetaData), NewProp_BackpackCapacity_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_MaxBackpackCapacity = { "MaxBackpackCapacity", "OnRep_MaxBackpackCapacity", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSet, MaxBackpackCapacity), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBackpackCapacity_MetaData), NewProp_MaxBackpackCapacity_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_BackpackCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSet_Statics::NewProp_MaxBackpackCapacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAttributeSet_Statics::ClassParams = {
	&UCharacterAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCharacterAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterAttributeSet()
{
	if (!Z_Registration_Info_UClass_UCharacterAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterAttributeSet.OuterSingleton, Z_Construct_UClass_UCharacterAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterAttributeSet.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UCharacterAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Health(TEXT("Health"));
	static FName Name_MaxHealth(TEXT("MaxHealth"));
	static FName Name_BackpackCapacity(TEXT("BackpackCapacity"));
	static FName Name_MaxBackpackCapacity(TEXT("MaxBackpackCapacity"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_BackpackCapacity == ClassReps[(int32)ENetFields_Private::BackpackCapacity].Property->GetFName()
		&& Name_MaxBackpackCapacity == ClassReps[(int32)ENetFields_Private::MaxBackpackCapacity].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCharacterAttributeSet"));
}
#endif
UCharacterAttributeSet::UCharacterAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAttributeSet);
UCharacterAttributeSet::~UCharacterAttributeSet() {}
// ********** End Class UCharacterAttributeSet *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AttributeSet_CharacterAttributeSet_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAttributeSet, UCharacterAttributeSet::StaticClass, TEXT("UCharacterAttributeSet"), &Z_Registration_Info_UClass_UCharacterAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAttributeSet), 1305112717U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AttributeSet_CharacterAttributeSet_h__Script_PUBG_447039226(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AttributeSet_CharacterAttributeSet_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AttributeSet_CharacterAttributeSet_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
