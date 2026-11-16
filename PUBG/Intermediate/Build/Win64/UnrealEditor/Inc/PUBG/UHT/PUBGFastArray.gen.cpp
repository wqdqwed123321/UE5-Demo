// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PUBGFastArray.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePUBGFastArray() {}

// ********** Begin Cross Module References ********************************************************
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemInstance_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackManagerComponent_NoRegister();
PUBG_API UScriptStruct* Z_Construct_UScriptStruct_FBackpackArrayData();
PUBG_API UScriptStruct* Z_Construct_UScriptStruct_FBackpackSlotData();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FBackpackSlotData *************************************************
static_assert(std::is_polymorphic<FBackpackSlotData>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FBackpackSlotData cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBackpackSlotData;
class UScriptStruct* FBackpackSlotData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBackpackSlotData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBackpackSlotData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBackpackSlotData, (UObject*)Z_Construct_UPackage__Script_PUBG(), TEXT("BackpackSlotData"));
	}
	return Z_Registration_Info_UScriptStruct_FBackpackSlotData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FBackpackSlotData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PUBGFastArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/PUBGFastArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBackpackSlotData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBackpackSlotData_Statics::NewProp_ItemInstance = { "ItemInstance", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBackpackSlotData, ItemInstance), Z_Construct_UClass_UBackpackItemInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemInstance_MetaData), NewProp_ItemInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBackpackSlotData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackpackSlotData_Statics::NewProp_ItemInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBackpackSlotData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBackpackSlotData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
	Z_Construct_UScriptStruct_FFastArraySerializerItem,
	&NewStructOps,
	"BackpackSlotData",
	Z_Construct_UScriptStruct_FBackpackSlotData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBackpackSlotData_Statics::PropPointers),
	sizeof(FBackpackSlotData),
	alignof(FBackpackSlotData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBackpackSlotData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBackpackSlotData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBackpackSlotData()
{
	if (!Z_Registration_Info_UScriptStruct_FBackpackSlotData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBackpackSlotData.InnerSingleton, Z_Construct_UScriptStruct_FBackpackSlotData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FBackpackSlotData.InnerSingleton;
}
// ********** End ScriptStruct FBackpackSlotData ***************************************************

// ********** Begin ScriptStruct FBackpackArrayData ************************************************
static_assert(std::is_polymorphic<FBackpackArrayData>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FBackpackArrayData cannot be polymorphic unless super FFastArraySerializer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBackpackArrayData;
class UScriptStruct* FBackpackArrayData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBackpackArrayData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBackpackArrayData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBackpackArrayData, (UObject*)Z_Construct_UPackage__Script_PUBG(), TEXT("BackpackArrayData"));
	}
	return Z_Registration_Info_UScriptStruct_FBackpackArrayData.OuterSingleton;
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
UE_NET_IMPLEMENT_FASTARRAY(FBackpackArrayData);
#else
UE_NET_IMPLEMENT_FASTARRAY_STUB(FBackpackArrayData);
#endif
struct Z_Construct_UScriptStruct_FBackpackArrayData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PUBGFastArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "ModuleRelativePath", "Public/PUBGFastArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PUBGFastArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBackpackArrayData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBackpackArrayData_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBackpackSlotData, METADATA_PARAMS(0, nullptr) }; // 1701183584
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBackpackArrayData_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBackpackArrayData, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 1701183584
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBackpackArrayData_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0114000080080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBackpackArrayData, OwnerComponent), Z_Construct_UClass_UBackpackManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerComponent_MetaData), NewProp_OwnerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBackpackArrayData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackpackArrayData_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackpackArrayData_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackpackArrayData_Statics::NewProp_OwnerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBackpackArrayData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBackpackArrayData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
	Z_Construct_UScriptStruct_FFastArraySerializer,
	&NewStructOps,
	"BackpackArrayData",
	Z_Construct_UScriptStruct_FBackpackArrayData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBackpackArrayData_Statics::PropPointers),
	sizeof(FBackpackArrayData),
	alignof(FBackpackArrayData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBackpackArrayData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBackpackArrayData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBackpackArrayData()
{
	if (!Z_Registration_Info_UScriptStruct_FBackpackArrayData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBackpackArrayData.InnerSingleton, Z_Construct_UScriptStruct_FBackpackArrayData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FBackpackArrayData.InnerSingleton;
}
// ********** End ScriptStruct FBackpackArrayData **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PUBGFastArray_h__Script_PUBG_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBackpackSlotData::StaticStruct, Z_Construct_UScriptStruct_FBackpackSlotData_Statics::NewStructOps, TEXT("BackpackSlotData"), &Z_Registration_Info_UScriptStruct_FBackpackSlotData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBackpackSlotData), 1701183584U) },
		{ FBackpackArrayData::StaticStruct, Z_Construct_UScriptStruct_FBackpackArrayData_Statics::NewStructOps, TEXT("BackpackArrayData"), &Z_Registration_Info_UScriptStruct_FBackpackArrayData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBackpackArrayData), 677165392U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PUBGFastArray_h__Script_PUBG_93093089(TEXT("/Script/PUBG"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PUBGFastArray_h__Script_PUBG_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PUBGFastArray_h__Script_PUBG_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
