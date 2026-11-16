// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonActivatableWidget/ActivatableWidget_CharacterEquipment.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActivatableWidget_CharacterEquipment() {}

// ********** Begin Cross Module References ********************************************************
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_CharacterEquipment();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_CharacterEquipment_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UActivatableWidget_EquipmentSlot_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackManagerComponent_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBaseCommonActivatableWidget();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActivatableWidget_CharacterEquipment Function OnInventoryChangedHandler *
struct Z_Construct_UFunction_UActivatableWidget_CharacterEquipment_OnInventoryChangedHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_CharacterEquipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidget_CharacterEquipment_OnInventoryChangedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActivatableWidget_CharacterEquipment, nullptr, "OnInventoryChangedHandler", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_CharacterEquipment_OnInventoryChangedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActivatableWidget_CharacterEquipment_OnInventoryChangedHandler_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UActivatableWidget_CharacterEquipment_OnInventoryChangedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActivatableWidget_CharacterEquipment_OnInventoryChangedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActivatableWidget_CharacterEquipment::execOnInventoryChangedHandler)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInventoryChangedHandler();
	P_NATIVE_END;
}
// ********** End Class UActivatableWidget_CharacterEquipment Function OnInventoryChangedHandler ***

// ********** Begin Class UActivatableWidget_CharacterEquipment ************************************
void UActivatableWidget_CharacterEquipment::StaticRegisterNativesUActivatableWidget_CharacterEquipment()
{
	UClass* Class = UActivatableWidget_CharacterEquipment::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnInventoryChangedHandler", &UActivatableWidget_CharacterEquipment::execOnInventoryChangedHandler },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActivatableWidget_CharacterEquipment;
UClass* UActivatableWidget_CharacterEquipment::GetPrivateStaticClass()
{
	using TClass = UActivatableWidget_CharacterEquipment;
	if (!Z_Registration_Info_UClass_UActivatableWidget_CharacterEquipment.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActivatableWidget_CharacterEquipment"),
			Z_Registration_Info_UClass_UActivatableWidget_CharacterEquipment.InnerSingleton,
			StaticRegisterNativesUActivatableWidget_CharacterEquipment,
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
	return Z_Registration_Info_UClass_UActivatableWidget_CharacterEquipment.InnerSingleton;
}
UClass* Z_Construct_UClass_UActivatableWidget_CharacterEquipment_NoRegister()
{
	return UActivatableWidget_CharacterEquipment::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CommonActivatableWidget/ActivatableWidget_CharacterEquipment.h" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_CharacterEquipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_CharacterEquipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_BodyEquipmentItem_Helmet_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_CharacterEquipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_BodyEquipmentItem_Back_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_CharacterEquipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_BodyEquipmentItem_Armor_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_CharacterEquipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_BodyEquipmentItem_Head_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_CharacterEquipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_BodyEquipmentItem_Glasses_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_CharacterEquipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_BodyEquipmentItem_Mask_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_CharacterEquipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_BodyEquipmentItem_Shirt_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_CharacterEquipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_BodyEquipmentItem_Jacket_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_CharacterEquipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_BodyEquipmentItem_Glove_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_CharacterEquipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_BodyEquipmentItem_Legs_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_CharacterEquipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_BodyEquipmentItem_Shoes_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_CharacterEquipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Border_HelmetShield_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_CharacterEquipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_HelmetShield_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_CharacterEquipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Border_ArmorShield_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_CharacterEquipment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_ArmorShield_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget/ActivatableWidget_CharacterEquipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WB_BodyEquipmentItem_Helmet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WB_BodyEquipmentItem_Back;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WB_BodyEquipmentItem_Armor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WB_BodyEquipmentItem_Head;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WB_BodyEquipmentItem_Glasses;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WB_BodyEquipmentItem_Mask;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WB_BodyEquipmentItem_Shirt;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WB_BodyEquipmentItem_Jacket;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WB_BodyEquipmentItem_Glove;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WB_BodyEquipmentItem_Legs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WB_BodyEquipmentItem_Shoes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Border_HelmetShield;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_HelmetShield;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Border_ArmorShield;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_ArmorShield;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UActivatableWidget_CharacterEquipment_OnInventoryChangedHandler, "OnInventoryChangedHandler" }, // 2946125784
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivatableWidget_CharacterEquipment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_CachedComp = { "CachedComp", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_CharacterEquipment, CachedComp), Z_Construct_UClass_UBackpackManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedComp_MetaData), NewProp_CachedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_WB_BodyEquipmentItem_Helmet = { "WB_BodyEquipmentItem_Helmet", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_CharacterEquipment, WB_BodyEquipmentItem_Helmet), Z_Construct_UClass_UActivatableWidget_EquipmentSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_BodyEquipmentItem_Helmet_MetaData), NewProp_WB_BodyEquipmentItem_Helmet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_WB_BodyEquipmentItem_Back = { "WB_BodyEquipmentItem_Back", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_CharacterEquipment, WB_BodyEquipmentItem_Back), Z_Construct_UClass_UActivatableWidget_EquipmentSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_BodyEquipmentItem_Back_MetaData), NewProp_WB_BodyEquipmentItem_Back_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_WB_BodyEquipmentItem_Armor = { "WB_BodyEquipmentItem_Armor", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_CharacterEquipment, WB_BodyEquipmentItem_Armor), Z_Construct_UClass_UActivatableWidget_EquipmentSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_BodyEquipmentItem_Armor_MetaData), NewProp_WB_BodyEquipmentItem_Armor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_WB_BodyEquipmentItem_Head = { "WB_BodyEquipmentItem_Head", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_CharacterEquipment, WB_BodyEquipmentItem_Head), Z_Construct_UClass_UActivatableWidget_EquipmentSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_BodyEquipmentItem_Head_MetaData), NewProp_WB_BodyEquipmentItem_Head_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_WB_BodyEquipmentItem_Glasses = { "WB_BodyEquipmentItem_Glasses", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_CharacterEquipment, WB_BodyEquipmentItem_Glasses), Z_Construct_UClass_UActivatableWidget_EquipmentSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_BodyEquipmentItem_Glasses_MetaData), NewProp_WB_BodyEquipmentItem_Glasses_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_WB_BodyEquipmentItem_Mask = { "WB_BodyEquipmentItem_Mask", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_CharacterEquipment, WB_BodyEquipmentItem_Mask), Z_Construct_UClass_UActivatableWidget_EquipmentSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_BodyEquipmentItem_Mask_MetaData), NewProp_WB_BodyEquipmentItem_Mask_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_WB_BodyEquipmentItem_Shirt = { "WB_BodyEquipmentItem_Shirt", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_CharacterEquipment, WB_BodyEquipmentItem_Shirt), Z_Construct_UClass_UActivatableWidget_EquipmentSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_BodyEquipmentItem_Shirt_MetaData), NewProp_WB_BodyEquipmentItem_Shirt_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_WB_BodyEquipmentItem_Jacket = { "WB_BodyEquipmentItem_Jacket", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_CharacterEquipment, WB_BodyEquipmentItem_Jacket), Z_Construct_UClass_UActivatableWidget_EquipmentSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_BodyEquipmentItem_Jacket_MetaData), NewProp_WB_BodyEquipmentItem_Jacket_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_WB_BodyEquipmentItem_Glove = { "WB_BodyEquipmentItem_Glove", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_CharacterEquipment, WB_BodyEquipmentItem_Glove), Z_Construct_UClass_UActivatableWidget_EquipmentSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_BodyEquipmentItem_Glove_MetaData), NewProp_WB_BodyEquipmentItem_Glove_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_WB_BodyEquipmentItem_Legs = { "WB_BodyEquipmentItem_Legs", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_CharacterEquipment, WB_BodyEquipmentItem_Legs), Z_Construct_UClass_UActivatableWidget_EquipmentSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_BodyEquipmentItem_Legs_MetaData), NewProp_WB_BodyEquipmentItem_Legs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_WB_BodyEquipmentItem_Shoes = { "WB_BodyEquipmentItem_Shoes", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_CharacterEquipment, WB_BodyEquipmentItem_Shoes), Z_Construct_UClass_UActivatableWidget_EquipmentSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_BodyEquipmentItem_Shoes_MetaData), NewProp_WB_BodyEquipmentItem_Shoes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_Border_HelmetShield = { "Border_HelmetShield", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_CharacterEquipment, Border_HelmetShield), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Border_HelmetShield_MetaData), NewProp_Border_HelmetShield_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_TextBlock_HelmetShield = { "TextBlock_HelmetShield", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_CharacterEquipment, TextBlock_HelmetShield), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_HelmetShield_MetaData), NewProp_TextBlock_HelmetShield_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_Border_ArmorShield = { "Border_ArmorShield", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_CharacterEquipment, Border_ArmorShield), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Border_ArmorShield_MetaData), NewProp_Border_ArmorShield_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_TextBlock_ArmorShield = { "TextBlock_ArmorShield", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivatableWidget_CharacterEquipment, TextBlock_ArmorShield), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_ArmorShield_MetaData), NewProp_TextBlock_ArmorShield_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_CachedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_WB_BodyEquipmentItem_Helmet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_WB_BodyEquipmentItem_Back,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_WB_BodyEquipmentItem_Armor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_WB_BodyEquipmentItem_Head,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_WB_BodyEquipmentItem_Glasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_WB_BodyEquipmentItem_Mask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_WB_BodyEquipmentItem_Shirt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_WB_BodyEquipmentItem_Jacket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_WB_BodyEquipmentItem_Glove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_WB_BodyEquipmentItem_Legs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_WB_BodyEquipmentItem_Shoes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_Border_HelmetShield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_TextBlock_HelmetShield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_Border_ArmorShield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::NewProp_TextBlock_ArmorShield,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::ClassParams = {
	&UActivatableWidget_CharacterEquipment::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::Class_MetaDataParams), Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActivatableWidget_CharacterEquipment()
{
	if (!Z_Registration_Info_UClass_UActivatableWidget_CharacterEquipment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActivatableWidget_CharacterEquipment.OuterSingleton, Z_Construct_UClass_UActivatableWidget_CharacterEquipment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActivatableWidget_CharacterEquipment.OuterSingleton;
}
UActivatableWidget_CharacterEquipment::UActivatableWidget_CharacterEquipment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActivatableWidget_CharacterEquipment);
UActivatableWidget_CharacterEquipment::~UActivatableWidget_CharacterEquipment() {}
// ********** End Class UActivatableWidget_CharacterEquipment **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_CharacterEquipment_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActivatableWidget_CharacterEquipment, UActivatableWidget_CharacterEquipment::StaticClass, TEXT("UActivatableWidget_CharacterEquipment"), &Z_Registration_Info_UClass_UActivatableWidget_CharacterEquipment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActivatableWidget_CharacterEquipment), 1207392654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_CharacterEquipment_h__Script_PUBG_3351176464(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_CharacterEquipment_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_CommonActivatableWidget_ActivatableWidget_CharacterEquipment_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
