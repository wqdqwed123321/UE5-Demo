// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actor/PickupItem.h"
#include "PUBGType.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePickupItem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PUBG_API UClass* Z_Construct_UClass_APickupItem();
PUBG_API UClass* Z_Construct_UClass_APickupItem_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemDefinition_NoRegister();
PUBG_API UScriptStruct* Z_Construct_UScriptStruct_FItemAttachment();
PUBG_API UScriptStruct* Z_Construct_UScriptStruct_FItemAttribute();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APickupItem Function OnRep_ItemDefinition ********************************
struct Z_Construct_UFunction_APickupItem_OnRep_ItemDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/PickupItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupItem_OnRep_ItemDefinition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APickupItem, nullptr, "OnRep_ItemDefinition", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupItem_OnRep_ItemDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupItem_OnRep_ItemDefinition_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APickupItem_OnRep_ItemDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupItem_OnRep_ItemDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APickupItem::execOnRep_ItemDefinition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ItemDefinition();
	P_NATIVE_END;
}
// ********** End Class APickupItem Function OnRep_ItemDefinition **********************************

// ********** Begin Class APickupItem **************************************************************
void APickupItem::StaticRegisterNativesAPickupItem()
{
	UClass* Class = APickupItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_ItemDefinition", &APickupItem::execOnRep_ItemDefinition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_APickupItem;
UClass* APickupItem::GetPrivateStaticClass()
{
	using TClass = APickupItem;
	if (!Z_Registration_Info_UClass_APickupItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PickupItem"),
			Z_Registration_Info_UClass_APickupItem.InnerSingleton,
			StaticRegisterNativesAPickupItem,
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
	return Z_Registration_Info_UClass_APickupItem.InnerSingleton;
}
UClass* Z_Construct_UClass_APickupItem_NoRegister()
{
	return APickupItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APickupItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/PickupItem.h" },
		{ "ModuleRelativePath", "Public/Actor/PickupItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "PickupItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/PickupItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefinition_MetaData[] = {
		{ "Category", "PickupItem" },
		{ "ModuleRelativePath", "Public/Actor/PickupItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "PickupItem" },
		{ "ModuleRelativePath", "Public/Actor/PickupItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedAttachments_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/PickupItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/PickupItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDefinition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedAttachments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedAttachments;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APickupItem_OnRep_ItemDefinition, "OnRep_ItemDefinition" }, // 38096642
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x01440000000b0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupItem, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_ItemDefinition = { "ItemDefinition", "OnRep_ItemDefinition", (EPropertyFlags)0x0014000100000021, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupItem, ItemDefinition), Z_Construct_UClass_UClass, Z_Construct_UClass_UBackpackItemDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDefinition_MetaData), NewProp_ItemDefinition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupItem, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_SavedAttachments_Inner = { "SavedAttachments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemAttachment, METADATA_PARAMS(0, nullptr) }; // 3164557440
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_SavedAttachments = { "SavedAttachments", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupItem, SavedAttachments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedAttachments_MetaData), NewProp_SavedAttachments_MetaData) }; // 3164557440
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_SavedAttributes_Inner = { "SavedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemAttribute, METADATA_PARAMS(0, nullptr) }; // 3623147177
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_SavedAttributes = { "SavedAttributes", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupItem, SavedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedAttributes_MetaData), NewProp_SavedAttributes_MetaData) }; // 3623147177
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_ItemDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_SavedAttachments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_SavedAttachments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_SavedAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_SavedAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APickupItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APickupItem_Statics::ClassParams = {
	&APickupItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APickupItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::Class_MetaDataParams), Z_Construct_UClass_APickupItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APickupItem()
{
	if (!Z_Registration_Info_UClass_APickupItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickupItem.OuterSingleton, Z_Construct_UClass_APickupItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APickupItem.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void APickupItem::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_ItemDefinition(TEXT("ItemDefinition"));
	static FName Name_Quantity(TEXT("Quantity"));
	static FName Name_SavedAttachments(TEXT("SavedAttachments"));
	static FName Name_SavedAttributes(TEXT("SavedAttributes"));
	const bool bIsValid = true
		&& Name_ItemDefinition == ClassReps[(int32)ENetFields_Private::ItemDefinition].Property->GetFName()
		&& Name_Quantity == ClassReps[(int32)ENetFields_Private::Quantity].Property->GetFName()
		&& Name_SavedAttachments == ClassReps[(int32)ENetFields_Private::SavedAttachments].Property->GetFName()
		&& Name_SavedAttributes == ClassReps[(int32)ENetFields_Private::SavedAttributes].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APickupItem"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(APickupItem);
APickupItem::~APickupItem() {}
// ********** End Class APickupItem ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Actor_PickupItem_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APickupItem, APickupItem::StaticClass, TEXT("APickupItem"), &Z_Registration_Info_UClass_APickupItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickupItem), 3252900407U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Actor_PickupItem_h__Script_PUBG_2007400251(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Actor_PickupItem_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Actor_PickupItem_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
