// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbility/CharacterClimbVaultGA.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterClimbVaultGA() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
PUBG_API UClass* Z_Construct_UClass_UCharacterClimbVaultGA();
PUBG_API UClass* Z_Construct_UClass_UCharacterClimbVaultGA_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCharacterClimbVaultGA Function OnMontageFinished ************************
struct Z_Construct_UFunction_UCharacterClimbVaultGA_OnMontageFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbility/CharacterClimbVaultGA.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterClimbVaultGA_OnMontageFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterClimbVaultGA, nullptr, "OnMontageFinished", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterClimbVaultGA_OnMontageFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterClimbVaultGA_OnMontageFinished_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCharacterClimbVaultGA_OnMontageFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterClimbVaultGA_OnMontageFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterClimbVaultGA::execOnMontageFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageFinished();
	P_NATIVE_END;
}
// ********** End Class UCharacterClimbVaultGA Function OnMontageFinished **************************

// ********** Begin Class UCharacterClimbVaultGA ***************************************************
void UCharacterClimbVaultGA::StaticRegisterNativesUCharacterClimbVaultGA()
{
	UClass* Class = UCharacterClimbVaultGA::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnMontageFinished", &UCharacterClimbVaultGA::execOnMontageFinished },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterClimbVaultGA;
UClass* UCharacterClimbVaultGA::GetPrivateStaticClass()
{
	using TClass = UCharacterClimbVaultGA;
	if (!Z_Registration_Info_UClass_UCharacterClimbVaultGA.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharacterClimbVaultGA"),
			Z_Registration_Info_UClass_UCharacterClimbVaultGA.InnerSingleton,
			StaticRegisterNativesUCharacterClimbVaultGA,
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
	return Z_Registration_Info_UClass_UCharacterClimbVaultGA.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterClimbVaultGA_NoRegister()
{
	return UCharacterClimbVaultGA::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterClimbVaultGA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbility/CharacterClimbVaultGA.h" },
		{ "ModuleRelativePath", "Public/GameplayAbility/CharacterClimbVaultGA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinHeight_MetaData[] = {
		{ "Category", "CharacterClimbVaultGA" },
		{ "ModuleRelativePath", "Public/GameplayAbility/CharacterClimbVaultGA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[] = {
		{ "Category", "CharacterClimbVaultGA" },
		{ "ModuleRelativePath", "Public/GameplayAbility/CharacterClimbVaultGA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbForwardDistance_MetaData[] = {
		{ "Category", "CharacterClimbVaultGA" },
		{ "ModuleRelativePath", "Public/GameplayAbility/CharacterClimbVaultGA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpTargetName_MetaData[] = {
		{ "Category", "CharacterClimbVaultGA" },
		{ "ModuleRelativePath", "Public/GameplayAbility/CharacterClimbVaultGA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VaultMontage60_MetaData[] = {
		{ "Category", "CharacterClimbVaultGA" },
		{ "ModuleRelativePath", "Public/GameplayAbility/CharacterClimbVaultGA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VaultMontage120_MetaData[] = {
		{ "Category", "CharacterClimbVaultGA" },
		{ "ModuleRelativePath", "Public/GameplayAbility/CharacterClimbVaultGA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VaultMontage200_MetaData[] = {
		{ "Category", "CharacterClimbVaultGA" },
		{ "ModuleRelativePath", "Public/GameplayAbility/CharacterClimbVaultGA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbMontage60_MetaData[] = {
		{ "Category", "CharacterClimbVaultGA" },
		{ "ModuleRelativePath", "Public/GameplayAbility/CharacterClimbVaultGA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbMontage120_MetaData[] = {
		{ "Category", "CharacterClimbVaultGA" },
		{ "ModuleRelativePath", "Public/GameplayAbility/CharacterClimbVaultGA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbMontage200_MetaData[] = {
		{ "Category", "CharacterClimbVaultGA" },
		{ "ModuleRelativePath", "Public/GameplayAbility/CharacterClimbVaultGA.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClimbForwardDistance;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WarpTargetName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VaultMontage60;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VaultMontage120;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VaultMontage200;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClimbMontage60;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClimbMontage120;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClimbMontage200;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterClimbVaultGA_OnMontageFinished, "OnMontageFinished" }, // 879501798
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterClimbVaultGA>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterClimbVaultGA_Statics::NewProp_MinHeight = { "MinHeight", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterClimbVaultGA, MinHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinHeight_MetaData), NewProp_MinHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterClimbVaultGA_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterClimbVaultGA, MaxHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHeight_MetaData), NewProp_MaxHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterClimbVaultGA_Statics::NewProp_ClimbForwardDistance = { "ClimbForwardDistance", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterClimbVaultGA, ClimbForwardDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbForwardDistance_MetaData), NewProp_ClimbForwardDistance_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterClimbVaultGA_Statics::NewProp_WarpTargetName = { "WarpTargetName", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterClimbVaultGA, WarpTargetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpTargetName_MetaData), NewProp_WarpTargetName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterClimbVaultGA_Statics::NewProp_VaultMontage60 = { "VaultMontage60", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterClimbVaultGA, VaultMontage60), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VaultMontage60_MetaData), NewProp_VaultMontage60_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterClimbVaultGA_Statics::NewProp_VaultMontage120 = { "VaultMontage120", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterClimbVaultGA, VaultMontage120), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VaultMontage120_MetaData), NewProp_VaultMontage120_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterClimbVaultGA_Statics::NewProp_VaultMontage200 = { "VaultMontage200", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterClimbVaultGA, VaultMontage200), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VaultMontage200_MetaData), NewProp_VaultMontage200_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterClimbVaultGA_Statics::NewProp_ClimbMontage60 = { "ClimbMontage60", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterClimbVaultGA, ClimbMontage60), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbMontage60_MetaData), NewProp_ClimbMontage60_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterClimbVaultGA_Statics::NewProp_ClimbMontage120 = { "ClimbMontage120", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterClimbVaultGA, ClimbMontage120), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbMontage120_MetaData), NewProp_ClimbMontage120_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterClimbVaultGA_Statics::NewProp_ClimbMontage200 = { "ClimbMontage200", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterClimbVaultGA, ClimbMontage200), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbMontage200_MetaData), NewProp_ClimbMontage200_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterClimbVaultGA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClimbVaultGA_Statics::NewProp_MinHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClimbVaultGA_Statics::NewProp_MaxHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClimbVaultGA_Statics::NewProp_ClimbForwardDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClimbVaultGA_Statics::NewProp_WarpTargetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClimbVaultGA_Statics::NewProp_VaultMontage60,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClimbVaultGA_Statics::NewProp_VaultMontage120,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClimbVaultGA_Statics::NewProp_VaultMontage200,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClimbVaultGA_Statics::NewProp_ClimbMontage60,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClimbVaultGA_Statics::NewProp_ClimbMontage120,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClimbVaultGA_Statics::NewProp_ClimbMontage200,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterClimbVaultGA_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterClimbVaultGA_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterClimbVaultGA_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterClimbVaultGA_Statics::ClassParams = {
	&UCharacterClimbVaultGA::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCharacterClimbVaultGA_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterClimbVaultGA_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterClimbVaultGA_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterClimbVaultGA_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterClimbVaultGA()
{
	if (!Z_Registration_Info_UClass_UCharacterClimbVaultGA.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterClimbVaultGA.OuterSingleton, Z_Construct_UClass_UCharacterClimbVaultGA_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterClimbVaultGA.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterClimbVaultGA);
UCharacterClimbVaultGA::~UCharacterClimbVaultGA() {}
// ********** End Class UCharacterClimbVaultGA *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_GameplayAbility_CharacterClimbVaultGA_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterClimbVaultGA, UCharacterClimbVaultGA::StaticClass, TEXT("UCharacterClimbVaultGA"), &Z_Registration_Info_UClass_UCharacterClimbVaultGA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterClimbVaultGA), 2725605029U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_GameplayAbility_CharacterClimbVaultGA_h__Script_PUBG_1294084038(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_GameplayAbility_CharacterClimbVaultGA_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_GameplayAbility_CharacterClimbVaultGA_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
