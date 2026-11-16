// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Object/BackpackItemFragment_Heal.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBackpackItemFragment_Heal() {}

// ********** Begin Cross Module References ********************************************************
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment_Heal();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment_Heal_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBackpackItemFragment_Heal ***********************************************
void UBackpackItemFragment_Heal::StaticRegisterNativesUBackpackItemFragment_Heal()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBackpackItemFragment_Heal;
UClass* UBackpackItemFragment_Heal::GetPrivateStaticClass()
{
	using TClass = UBackpackItemFragment_Heal;
	if (!Z_Registration_Info_UClass_UBackpackItemFragment_Heal.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BackpackItemFragment_Heal"),
			Z_Registration_Info_UClass_UBackpackItemFragment_Heal.InnerSingleton,
			StaticRegisterNativesUBackpackItemFragment_Heal,
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
	return Z_Registration_Info_UClass_UBackpackItemFragment_Heal.InnerSingleton;
}
UClass* Z_Construct_UClass_UBackpackItemFragment_Heal_NoRegister()
{
	return UBackpackItemFragment_Heal::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBackpackItemFragment_Heal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Object/BackpackItemFragment_Heal.h" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Heal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealAmount_MetaData[] = {
		{ "Category", "BackpackItemFragment_Heal" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Heal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseTime_MetaData[] = {
		{ "Category", "BackpackItemFragment_Heal" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Heal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealthLimit_MetaData[] = {
		{ "Category", "BackpackItemFragment_Heal" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Heal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UseTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealthLimit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackpackItemFragment_Heal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBackpackItemFragment_Heal_Statics::NewProp_HealAmount = { "HealAmount", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Heal, HealAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealAmount_MetaData), NewProp_HealAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBackpackItemFragment_Heal_Statics::NewProp_UseTime = { "UseTime", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Heal, UseTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseTime_MetaData), NewProp_UseTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBackpackItemFragment_Heal_Statics::NewProp_MaxHealthLimit = { "MaxHealthLimit", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Heal, MaxHealthLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealthLimit_MetaData), NewProp_MaxHealthLimit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackpackItemFragment_Heal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Heal_Statics::NewProp_HealAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Heal_Statics::NewProp_UseTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Heal_Statics::NewProp_MaxHealthLimit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Heal_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBackpackItemFragment_Heal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBackpackItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Heal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackpackItemFragment_Heal_Statics::ClassParams = {
	&UBackpackItemFragment_Heal::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBackpackItemFragment_Heal_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Heal_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Heal_Statics::Class_MetaDataParams), Z_Construct_UClass_UBackpackItemFragment_Heal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBackpackItemFragment_Heal()
{
	if (!Z_Registration_Info_UClass_UBackpackItemFragment_Heal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackpackItemFragment_Heal.OuterSingleton, Z_Construct_UClass_UBackpackItemFragment_Heal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBackpackItemFragment_Heal.OuterSingleton;
}
UBackpackItemFragment_Heal::UBackpackItemFragment_Heal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBackpackItemFragment_Heal);
UBackpackItemFragment_Heal::~UBackpackItemFragment_Heal() {}
// ********** End Class UBackpackItemFragment_Heal *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Heal_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBackpackItemFragment_Heal, UBackpackItemFragment_Heal::StaticClass, TEXT("UBackpackItemFragment_Heal"), &Z_Registration_Info_UClass_UBackpackItemFragment_Heal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackpackItemFragment_Heal), 1773465744U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Heal_h__Script_PUBG_1440609193(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Heal_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Heal_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
