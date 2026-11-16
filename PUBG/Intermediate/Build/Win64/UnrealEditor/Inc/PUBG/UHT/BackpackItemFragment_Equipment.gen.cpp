// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Object/BackpackItemFragment_Equipment.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBackpackItemFragment_Equipment() {}

// ********** Begin Cross Module References ********************************************************
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment_Equipment();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment_Equipment_NoRegister();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EEquipmentSlot();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBackpackItemFragment_Equipment ******************************************
void UBackpackItemFragment_Equipment::StaticRegisterNativesUBackpackItemFragment_Equipment()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBackpackItemFragment_Equipment;
UClass* UBackpackItemFragment_Equipment::GetPrivateStaticClass()
{
	using TClass = UBackpackItemFragment_Equipment;
	if (!Z_Registration_Info_UClass_UBackpackItemFragment_Equipment.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BackpackItemFragment_Equipment"),
			Z_Registration_Info_UClass_UBackpackItemFragment_Equipment.InnerSingleton,
			StaticRegisterNativesUBackpackItemFragment_Equipment,
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
	return Z_Registration_Info_UClass_UBackpackItemFragment_Equipment.InnerSingleton;
}
UClass* Z_Construct_UClass_UBackpackItemFragment_Equipment_NoRegister()
{
	return UBackpackItemFragment_Equipment::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBackpackItemFragment_Equipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Object/BackpackItemFragment_Equipment.h" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Equipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipSlotType_MetaData[] = {
		{ "Category", "BackpackItemFragment_Equipment" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Equipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EquipSlotType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EquipSlotType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackpackItemFragment_Equipment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBackpackItemFragment_Equipment_Statics::NewProp_EquipSlotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBackpackItemFragment_Equipment_Statics::NewProp_EquipSlotType = { "EquipSlotType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Equipment, EquipSlotType), Z_Construct_UEnum_PUBG_EEquipmentSlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipSlotType_MetaData), NewProp_EquipSlotType_MetaData) }; // 218928670
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackpackItemFragment_Equipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Equipment_Statics::NewProp_EquipSlotType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Equipment_Statics::NewProp_EquipSlotType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Equipment_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBackpackItemFragment_Equipment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBackpackItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Equipment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackpackItemFragment_Equipment_Statics::ClassParams = {
	&UBackpackItemFragment_Equipment::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBackpackItemFragment_Equipment_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Equipment_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Equipment_Statics::Class_MetaDataParams), Z_Construct_UClass_UBackpackItemFragment_Equipment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBackpackItemFragment_Equipment()
{
	if (!Z_Registration_Info_UClass_UBackpackItemFragment_Equipment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackpackItemFragment_Equipment.OuterSingleton, Z_Construct_UClass_UBackpackItemFragment_Equipment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBackpackItemFragment_Equipment.OuterSingleton;
}
UBackpackItemFragment_Equipment::UBackpackItemFragment_Equipment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBackpackItemFragment_Equipment);
UBackpackItemFragment_Equipment::~UBackpackItemFragment_Equipment() {}
// ********** End Class UBackpackItemFragment_Equipment ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Equipment_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBackpackItemFragment_Equipment, UBackpackItemFragment_Equipment::StaticClass, TEXT("UBackpackItemFragment_Equipment"), &Z_Registration_Info_UClass_UBackpackItemFragment_Equipment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackpackItemFragment_Equipment), 3659473455U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Equipment_h__Script_PUBG_3785264964(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Equipment_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Equipment_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
