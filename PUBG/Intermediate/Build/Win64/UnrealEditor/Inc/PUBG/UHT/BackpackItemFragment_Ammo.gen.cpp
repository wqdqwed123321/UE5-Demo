// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Object/BackpackItemFragment_Ammo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBackpackItemFragment_Ammo() {}

// ********** Begin Cross Module References ********************************************************
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment_Ammo();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment_Ammo_NoRegister();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EAmmoType();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBackpackItemFragment_Ammo ***********************************************
void UBackpackItemFragment_Ammo::StaticRegisterNativesUBackpackItemFragment_Ammo()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBackpackItemFragment_Ammo;
UClass* UBackpackItemFragment_Ammo::GetPrivateStaticClass()
{
	using TClass = UBackpackItemFragment_Ammo;
	if (!Z_Registration_Info_UClass_UBackpackItemFragment_Ammo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BackpackItemFragment_Ammo"),
			Z_Registration_Info_UClass_UBackpackItemFragment_Ammo.InnerSingleton,
			StaticRegisterNativesUBackpackItemFragment_Ammo,
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
	return Z_Registration_Info_UClass_UBackpackItemFragment_Ammo.InnerSingleton;
}
UClass* Z_Construct_UClass_UBackpackItemFragment_Ammo_NoRegister()
{
	return UBackpackItemFragment_Ammo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBackpackItemFragment_Ammo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Object/BackpackItemFragment_Ammo.h" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Ammo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoType_MetaData[] = {
		{ "Category", "BackpackItemFragment_Ammo" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Ammo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AmmoType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AmmoType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackpackItemFragment_Ammo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBackpackItemFragment_Ammo_Statics::NewProp_AmmoType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBackpackItemFragment_Ammo_Statics::NewProp_AmmoType = { "AmmoType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Ammo, AmmoType), Z_Construct_UEnum_PUBG_EAmmoType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoType_MetaData), NewProp_AmmoType_MetaData) }; // 3055396827
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackpackItemFragment_Ammo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Ammo_Statics::NewProp_AmmoType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Ammo_Statics::NewProp_AmmoType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Ammo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBackpackItemFragment_Ammo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBackpackItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Ammo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackpackItemFragment_Ammo_Statics::ClassParams = {
	&UBackpackItemFragment_Ammo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBackpackItemFragment_Ammo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Ammo_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Ammo_Statics::Class_MetaDataParams), Z_Construct_UClass_UBackpackItemFragment_Ammo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBackpackItemFragment_Ammo()
{
	if (!Z_Registration_Info_UClass_UBackpackItemFragment_Ammo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackpackItemFragment_Ammo.OuterSingleton, Z_Construct_UClass_UBackpackItemFragment_Ammo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBackpackItemFragment_Ammo.OuterSingleton;
}
UBackpackItemFragment_Ammo::UBackpackItemFragment_Ammo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBackpackItemFragment_Ammo);
UBackpackItemFragment_Ammo::~UBackpackItemFragment_Ammo() {}
// ********** End Class UBackpackItemFragment_Ammo *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Ammo_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBackpackItemFragment_Ammo, UBackpackItemFragment_Ammo::StaticClass, TEXT("UBackpackItemFragment_Ammo"), &Z_Registration_Info_UClass_UBackpackItemFragment_Ammo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackpackItemFragment_Ammo), 2955744862U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Ammo_h__Script_PUBG_835188545(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Ammo_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Ammo_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
