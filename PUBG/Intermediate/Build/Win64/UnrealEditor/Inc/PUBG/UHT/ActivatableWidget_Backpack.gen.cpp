// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonActivatableWidget/ActivatableWidget_Backpack.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActivatableWidget_Backpack() {}

// ********** Begin Cross Module References ********************************************************
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_Backpack();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_Backpack_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_BackpackList_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_Equipment_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBaseCommonActivatableWidget();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActivatableWidget_Backpack **********************************************
void UActivatableWidget_Backpack::StaticRegisterNativesUActivatableWidget_Backpack()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActivatableWidget_Backpack;
UClass* UActivatableWidget_Backpack::GetPrivateStaticClass()
{
	using TClass = UActivatableWidget_Backpack;
	if (!Z_Registration_Info_UClass_UActivatableWidget_Backpack.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActivatableWidget_Backpack"),
			Z_Registration_Info_UClass_UActivatableWidget_Backpack.InnerSingleton,
			StaticRegisterNativesUActivatableWidget_Backpack,
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
	return Z_Registration_Info_UClass_UActivatableWidget_Backpack.InnerSingleton;
}
UClass* Z_Construct_UClass_UActivatableWidget_Backpack_NoRegister()
{
	return UActivatableWidget_Backpack::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActivatableWidget_Backpack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CommonActivatableWidget/ActivatableWidget_Backpack.h" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Backpack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NearbyList_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Backpack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryList_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Backpack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_Backpack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NearbyList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentPanel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivatableWidget_Backpack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_Backpack_Statics::NewProp_NearbyList = { "NearbyList", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Backpack, NearbyList), Z_Construct_UClass_UActivatableWidget_BackpackList_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NearbyList_MetaData), NewProp_NearbyList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_Backpack_Statics::NewProp_InventoryList = { "InventoryList", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Backpack, InventoryList), Z_Construct_UClass_UActivatableWidget_BackpackList_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryList_MetaData), NewProp_InventoryList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_Backpack_Statics::NewProp_EquipmentPanel = { "EquipmentPanel", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_Backpack, EquipmentPanel), Z_Construct_UClass_UActivatableWidget_Equipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentPanel_MetaData), NewProp_EquipmentPanel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActivatableWidget_Backpack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Backpack_Statics::NewProp_NearbyList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Backpack_Statics::NewProp_InventoryList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Backpack_Statics::NewProp_EquipmentPanel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Backpack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActivatableWidget_Backpack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Backpack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActivatableWidget_Backpack_Statics::ClassParams = {
	&UActivatableWidget_Backpack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UActivatableWidget_Backpack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Backpack_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Backpack_Statics::Class_MetaDataParams), Z_Construct_UClass_UActivatableWidget_Backpack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActivatableWidget_Backpack()
{
	if (!Z_Registration_Info_UClass_UActivatableWidget_Backpack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActivatableWidget_Backpack.OuterSingleton, Z_Construct_UClass_UActivatableWidget_Backpack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActivatableWidget_Backpack.OuterSingleton;
}
UActivatableWidget_Backpack::UActivatableWidget_Backpack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActivatableWidget_Backpack);
UActivatableWidget_Backpack::~UActivatableWidget_Backpack() {}
// ********** End Class UActivatableWidget_Backpack ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_Backpack_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActivatableWidget_Backpack, UActivatableWidget_Backpack::StaticClass, TEXT("UActivatableWidget_Backpack"), &Z_Registration_Info_UClass_UActivatableWidget_Backpack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActivatableWidget_Backpack), 2655816855U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_Backpack_h__Script_PUBG_185213238(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_Backpack_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_Backpack_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
