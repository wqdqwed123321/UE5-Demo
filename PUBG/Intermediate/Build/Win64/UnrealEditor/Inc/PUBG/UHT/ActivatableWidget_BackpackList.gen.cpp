// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonActivatableWidget/ActivatableWidget_BackpackList.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActivatableWidget_BackpackList() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonListView_NoRegister();
PUBG_API UClass* Z_Construct_UClass_APickupItem_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_BackpackList();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_BackpackList_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackManagerComponent_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBaseCommonActivatableWidget();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EBackpackListMode();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActivatableWidget_BackpackList Function OnInventoryChangedCallback ******
struct Z_Construct_UFunction_UActivatableWidget_BackpackList_OnInventoryChangedCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_BackpackList.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidget_BackpackList_OnInventoryChangedCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActivatableWidget_BackpackList, nullptr, "OnInventoryChangedCallback", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_BackpackList_OnInventoryChangedCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActivatableWidget_BackpackList_OnInventoryChangedCallback_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UActivatableWidget_BackpackList_OnInventoryChangedCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActivatableWidget_BackpackList_OnInventoryChangedCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActivatableWidget_BackpackList::execOnInventoryChangedCallback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInventoryChangedCallback();
	P_NATIVE_END;
}
// ********** End Class UActivatableWidget_BackpackList Function OnInventoryChangedCallback ********

// ********** Begin Class UActivatableWidget_BackpackList Function OnPickupRangeChanged ************
struct Z_Construct_UFunction_UActivatableWidget_BackpackList_OnPickupRangeChanged_Statics
{
	struct ActivatableWidget_BackpackList_eventOnPickupRangeChanged_Parms
	{
		APickupItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_BackpackList.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActivatableWidget_BackpackList_OnPickupRangeChanged_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActivatableWidget_BackpackList_eventOnPickupRangeChanged_Parms, Item), Z_Construct_UClass_APickupItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivatableWidget_BackpackList_OnPickupRangeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivatableWidget_BackpackList_OnPickupRangeChanged_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_BackpackList_OnPickupRangeChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidget_BackpackList_OnPickupRangeChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActivatableWidget_BackpackList, nullptr, "OnPickupRangeChanged", Z_Construct_UFunction_UActivatableWidget_BackpackList_OnPickupRangeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_BackpackList_OnPickupRangeChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActivatableWidget_BackpackList_OnPickupRangeChanged_Statics::ActivatableWidget_BackpackList_eventOnPickupRangeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_BackpackList_OnPickupRangeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActivatableWidget_BackpackList_OnPickupRangeChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActivatableWidget_BackpackList_OnPickupRangeChanged_Statics::ActivatableWidget_BackpackList_eventOnPickupRangeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActivatableWidget_BackpackList_OnPickupRangeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActivatableWidget_BackpackList_OnPickupRangeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActivatableWidget_BackpackList::execOnPickupRangeChanged)
{
	P_GET_OBJECT(APickupItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPickupRangeChanged(Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UActivatableWidget_BackpackList Function OnPickupRangeChanged **************

// ********** Begin Class UActivatableWidget_BackpackList ******************************************
void UActivatableWidget_BackpackList::StaticRegisterNativesUActivatableWidget_BackpackList()
{
	UClass* Class = UActivatableWidget_BackpackList::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnInventoryChangedCallback", &UActivatableWidget_BackpackList::execOnInventoryChangedCallback },
		{ "OnPickupRangeChanged", &UActivatableWidget_BackpackList::execOnPickupRangeChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActivatableWidget_BackpackList;
UClass* UActivatableWidget_BackpackList::GetPrivateStaticClass()
{
	using TClass = UActivatableWidget_BackpackList;
	if (!Z_Registration_Info_UClass_UActivatableWidget_BackpackList.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActivatableWidget_BackpackList"),
			Z_Registration_Info_UClass_UActivatableWidget_BackpackList.InnerSingleton,
			StaticRegisterNativesUActivatableWidget_BackpackList,
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
	return Z_Registration_Info_UClass_UActivatableWidget_BackpackList.InnerSingleton;
}
UClass* Z_Construct_UClass_UActivatableWidget_BackpackList_NoRegister()
{
	return UActivatableWidget_BackpackList::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActivatableWidget_BackpackList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CommonActivatableWidget/ActivatableWidget_BackpackList.h" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_BackpackList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonListView_InventoryItems_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_BackpackList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Border_Border_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_BackpackList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackpackListMode_MetaData[] = {
		{ "Category", "ActivatableWidget_BackpackList" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_BackpackList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedManager_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_BackpackList.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonListView_InventoryItems;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Border_Border;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BackpackListMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BackpackListMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UActivatableWidget_BackpackList_OnInventoryChangedCallback, "OnInventoryChangedCallback" }, // 1647718809
		{ &Z_Construct_UFunction_UActivatableWidget_BackpackList_OnPickupRangeChanged, "OnPickupRangeChanged" }, // 2403897858
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivatableWidget_BackpackList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_BackpackList_Statics::NewProp_CommonListView_InventoryItems = { "CommonListView_InventoryItems", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_BackpackList, CommonListView_InventoryItems), Z_Construct_UClass_UCommonListView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonListView_InventoryItems_MetaData), NewProp_CommonListView_InventoryItems_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_BackpackList_Statics::NewProp_Border_Border = { "Border_Border", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_BackpackList, Border_Border), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Border_Border_MetaData), NewProp_Border_Border_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UActivatableWidget_BackpackList_Statics::NewProp_BackpackListMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UActivatableWidget_BackpackList_Statics::NewProp_BackpackListMode = { "BackpackListMode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_BackpackList, BackpackListMode), Z_Construct_UEnum_PUBG_EBackpackListMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackpackListMode_MetaData), NewProp_BackpackListMode_MetaData) }; // 508334500
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_BackpackList_Statics::NewProp_CachedManager = { "CachedManager", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_BackpackList, CachedManager), Z_Construct_UClass_UBackpackManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedManager_MetaData), NewProp_CachedManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActivatableWidget_BackpackList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_BackpackList_Statics::NewProp_CommonListView_InventoryItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_BackpackList_Statics::NewProp_Border_Border,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_BackpackList_Statics::NewProp_BackpackListMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_BackpackList_Statics::NewProp_BackpackListMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_BackpackList_Statics::NewProp_CachedManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_BackpackList_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActivatableWidget_BackpackList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_BackpackList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActivatableWidget_BackpackList_Statics::ClassParams = {
	&UActivatableWidget_BackpackList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UActivatableWidget_BackpackList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_BackpackList_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_BackpackList_Statics::Class_MetaDataParams), Z_Construct_UClass_UActivatableWidget_BackpackList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActivatableWidget_BackpackList()
{
	if (!Z_Registration_Info_UClass_UActivatableWidget_BackpackList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActivatableWidget_BackpackList.OuterSingleton, Z_Construct_UClass_UActivatableWidget_BackpackList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActivatableWidget_BackpackList.OuterSingleton;
}
UActivatableWidget_BackpackList::UActivatableWidget_BackpackList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActivatableWidget_BackpackList);
UActivatableWidget_BackpackList::~UActivatableWidget_BackpackList() {}
// ********** End Class UActivatableWidget_BackpackList ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_BackpackList_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActivatableWidget_BackpackList, UActivatableWidget_BackpackList::StaticClass, TEXT("UActivatableWidget_BackpackList"), &Z_Registration_Info_UClass_UActivatableWidget_BackpackList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActivatableWidget_BackpackList), 2578058527U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_BackpackList_h__Script_PUBG_2792272566(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_BackpackList_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_BackpackList_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
