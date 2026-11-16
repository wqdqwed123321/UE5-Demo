// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Object/BackpackItemFragment_Durability.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBackpackItemFragment_Durability() {}

// ********** Begin Cross Module References ********************************************************
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment_Durability();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment_Durability_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBackpackItemFragment_Durability *****************************************
void UBackpackItemFragment_Durability::StaticRegisterNativesUBackpackItemFragment_Durability()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBackpackItemFragment_Durability;
UClass* UBackpackItemFragment_Durability::GetPrivateStaticClass()
{
	using TClass = UBackpackItemFragment_Durability;
	if (!Z_Registration_Info_UClass_UBackpackItemFragment_Durability.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BackpackItemFragment_Durability"),
			Z_Registration_Info_UClass_UBackpackItemFragment_Durability.InnerSingleton,
			StaticRegisterNativesUBackpackItemFragment_Durability,
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
	return Z_Registration_Info_UClass_UBackpackItemFragment_Durability.InnerSingleton;
}
UClass* Z_Construct_UClass_UBackpackItemFragment_Durability_NoRegister()
{
	return UBackpackItemFragment_Durability::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBackpackItemFragment_Durability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Object/BackpackItemFragment_Durability.h" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Durability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDurability_MetaData[] = {
		{ "Category", "BackpackItemFragment_Durability" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Durability.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDurability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackpackItemFragment_Durability>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBackpackItemFragment_Durability_Statics::NewProp_MaxDurability = { "MaxDurability", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Durability, MaxDurability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDurability_MetaData), NewProp_MaxDurability_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackpackItemFragment_Durability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Durability_Statics::NewProp_MaxDurability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Durability_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBackpackItemFragment_Durability_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBackpackItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Durability_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackpackItemFragment_Durability_Statics::ClassParams = {
	&UBackpackItemFragment_Durability::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBackpackItemFragment_Durability_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Durability_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Durability_Statics::Class_MetaDataParams), Z_Construct_UClass_UBackpackItemFragment_Durability_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBackpackItemFragment_Durability()
{
	if (!Z_Registration_Info_UClass_UBackpackItemFragment_Durability.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackpackItemFragment_Durability.OuterSingleton, Z_Construct_UClass_UBackpackItemFragment_Durability_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBackpackItemFragment_Durability.OuterSingleton;
}
UBackpackItemFragment_Durability::UBackpackItemFragment_Durability(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBackpackItemFragment_Durability);
UBackpackItemFragment_Durability::~UBackpackItemFragment_Durability() {}
// ********** End Class UBackpackItemFragment_Durability *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Durability_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBackpackItemFragment_Durability, UBackpackItemFragment_Durability::StaticClass, TEXT("UBackpackItemFragment_Durability"), &Z_Registration_Info_UClass_UBackpackItemFragment_Durability, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackpackItemFragment_Durability), 261587713U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Durability_h__Script_PUBG_493455209(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Durability_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Durability_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
