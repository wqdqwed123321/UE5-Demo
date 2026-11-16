// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonActivatableWidget/ActivatableWidget_Equipment.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActivatableWidget_Equipment() {}

// ********** Begin Cross Module References ********************************************************
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_CharacterEquipment_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_Equipment();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_Equipment_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_ThrowableDetail_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_WeaponDetail_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBaseCommonActivatableWidget();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActivatableWidget_Equipment *********************************************
void UActivatableWidget_Equipment::StaticRegisterNativesUActivatableWidget_Equipment()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActivatableWidget_Equipment;
UClass* UActivatableWidget_Equipment::GetPrivateStaticClass()
{
	using TClass = UActivatableWidget_Equipment;
	if (!Z_Registration_Info_UClass_UActivatableWidget_Equipment.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActivatableWidget_Equipment"),
			Z_Registration_Info_UClass_UActivatableWidget_Equipment.InnerSingleton,
			StaticRegisterNativesUActivatableWidget_Equipment,
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
	return Z_Registration_Info_UClass_UActivatableWidget_Equipment.InnerSingleton;
}
UClass* Z_Construct_UClass_UActivatableWidget_Equipment_NoRegister()
{
	return UActivatableWidget_Equipment::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActivatableWidget_Equipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CommonActivatableWidget/ActivatableWidget_Equipment.h" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Equipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_WeaponItem_Primary_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Equipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_WeaponItem_Secondary_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Equipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_PistolItem_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Equipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_SmallWeaponItem_Melee_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Equipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_SmallWeaponItem_Throw_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Equipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterEquipmentPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Equipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WB_WeaponItem_Primary;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WB_WeaponItem_Secondary;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WB_PistolItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WB_SmallWeaponItem_Melee;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WB_SmallWeaponItem_Throw;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterEquipmentPanel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivatableWidget_Equipment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_Equipment_Statics::NewProp_WB_WeaponItem_Primary = { "WB_WeaponItem_Primary", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Equipment, WB_WeaponItem_Primary), Z_Construct_UClass_UActivatableWidget_WeaponDetail_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_WeaponItem_Primary_MetaData), NewProp_WB_WeaponItem_Primary_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_Equipment_Statics::NewProp_WB_WeaponItem_Secondary = { "WB_WeaponItem_Secondary", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Equipment, WB_WeaponItem_Secondary), Z_Construct_UClass_UActivatableWidget_WeaponDetail_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_WeaponItem_Secondary_MetaData), NewProp_WB_WeaponItem_Secondary_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_Equipment_Statics::NewProp_WB_PistolItem = { "WB_PistolItem", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Equipment, WB_PistolItem), Z_Construct_UClass_UActivatableWidget_WeaponDetail_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_PistolItem_MetaData), NewProp_WB_PistolItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_Equipment_Statics::NewProp_WB_SmallWeaponItem_Melee = { "WB_SmallWeaponItem_Melee", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Equipment, WB_SmallWeaponItem_Melee), Z_Construct_UClass_UActivatableWidget_ThrowableDetail_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_SmallWeaponItem_Melee_MetaData), NewProp_WB_SmallWeaponItem_Melee_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_Equipment_Statics::NewProp_WB_SmallWeaponItem_Throw = { "WB_SmallWeaponItem_Throw", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Equipment, WB_SmallWeaponItem_Throw), Z_Construct_UClass_UActivatableWidget_ThrowableDetail_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_SmallWeaponItem_Throw_MetaData), NewProp_WB_SmallWeaponItem_Throw_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_Equipment_Statics::NewProp_CharacterEquipmentPanel = { "CharacterEquipmentPanel", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Equipment, CharacterEquipmentPanel), Z_Construct_UClass_UActivatableWidget_CharacterEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterEquipmentPanel_MetaData), NewProp_CharacterEquipmentPanel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActivatableWidget_Equipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Equipment_Statics::NewProp_WB_WeaponItem_Primary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Equipment_Statics::NewProp_WB_WeaponItem_Secondary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Equipment_Statics::NewProp_WB_PistolItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Equipment_Statics::NewProp_WB_SmallWeaponItem_Melee,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Equipment_Statics::NewProp_WB_SmallWeaponItem_Throw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Equipment_Statics::NewProp_CharacterEquipmentPanel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Equipment_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActivatableWidget_Equipment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Equipment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActivatableWidget_Equipment_Statics::ClassParams = {
	&UActivatableWidget_Equipment::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UActivatableWidget_Equipment_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Equipment_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Equipment_Statics::Class_MetaDataParams), Z_Construct_UClass_UActivatableWidget_Equipment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActivatableWidget_Equipment()
{
	if (!Z_Registration_Info_UClass_UActivatableWidget_Equipment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActivatableWidget_Equipment.OuterSingleton, Z_Construct_UClass_UActivatableWidget_Equipment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActivatableWidget_Equipment.OuterSingleton;
}
UActivatableWidget_Equipment::UActivatableWidget_Equipment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActivatableWidget_Equipment);
UActivatableWidget_Equipment::~UActivatableWidget_Equipment() {}
// ********** End Class UActivatableWidget_Equipment ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_Equipment_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActivatableWidget_Equipment, UActivatableWidget_Equipment::StaticClass, TEXT("UActivatableWidget_Equipment"), &Z_Registration_Info_UClass_UActivatableWidget_Equipment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActivatableWidget_Equipment), 1909693555U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_Equipment_h__Script_PUBG_718901067(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_Equipment_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_Equipment_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
