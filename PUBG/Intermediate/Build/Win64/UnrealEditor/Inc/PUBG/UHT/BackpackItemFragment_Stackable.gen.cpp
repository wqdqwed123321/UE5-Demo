// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Object/BackpackItemFragment_Stackable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBackpackItemFragment_Stackable() {}

// ********** Begin Cross Module References ********************************************************
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment_Stackable();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment_Stackable_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBackpackItemFragment_Stackable ******************************************
void UBackpackItemFragment_Stackable::StaticRegisterNativesUBackpackItemFragment_Stackable()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBackpackItemFragment_Stackable;
UClass* UBackpackItemFragment_Stackable::GetPrivateStaticClass()
{
	using TClass = UBackpackItemFragment_Stackable;
	if (!Z_Registration_Info_UClass_UBackpackItemFragment_Stackable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BackpackItemFragment_Stackable"),
			Z_Registration_Info_UClass_UBackpackItemFragment_Stackable.InnerSingleton,
			StaticRegisterNativesUBackpackItemFragment_Stackable,
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
	return Z_Registration_Info_UClass_UBackpackItemFragment_Stackable.InnerSingleton;
}
UClass* Z_Construct_UClass_UBackpackItemFragment_Stackable_NoRegister()
{
	return UBackpackItemFragment_Stackable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBackpackItemFragment_Stackable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Object/BackpackItemFragment_Stackable.h" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Stackable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackSize_MetaData[] = {
		{ "Category", "BackpackItemFragment_Stackable" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Stackable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStackSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackpackItemFragment_Stackable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBackpackItemFragment_Stackable_Statics::NewProp_MaxStackSize = { "MaxStackSize", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Stackable, MaxStackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStackSize_MetaData), NewProp_MaxStackSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackpackItemFragment_Stackable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Stackable_Statics::NewProp_MaxStackSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Stackable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBackpackItemFragment_Stackable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBackpackItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Stackable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackpackItemFragment_Stackable_Statics::ClassParams = {
	&UBackpackItemFragment_Stackable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBackpackItemFragment_Stackable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Stackable_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Stackable_Statics::Class_MetaDataParams), Z_Construct_UClass_UBackpackItemFragment_Stackable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBackpackItemFragment_Stackable()
{
	if (!Z_Registration_Info_UClass_UBackpackItemFragment_Stackable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackpackItemFragment_Stackable.OuterSingleton, Z_Construct_UClass_UBackpackItemFragment_Stackable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBackpackItemFragment_Stackable.OuterSingleton;
}
UBackpackItemFragment_Stackable::UBackpackItemFragment_Stackable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBackpackItemFragment_Stackable);
UBackpackItemFragment_Stackable::~UBackpackItemFragment_Stackable() {}
// ********** End Class UBackpackItemFragment_Stackable ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Stackable_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBackpackItemFragment_Stackable, UBackpackItemFragment_Stackable::StaticClass, TEXT("UBackpackItemFragment_Stackable"), &Z_Registration_Info_UClass_UBackpackItemFragment_Stackable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackpackItemFragment_Stackable), 637345101U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Stackable_h__Script_PUBG_906746077(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Stackable_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Stackable_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
