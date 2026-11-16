// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorComponent/BackpackManagerComponent.h"
#include "GameplayTagContainer.h"
#include "PUBGFastArray.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBackpackManagerComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PUBG_API UClass* Z_Construct_UClass_APickupItem_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemInstance_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackManagerComponent();
PUBG_API UClass* Z_Construct_UClass_UBackpackManagerComponent_NoRegister();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EAttachmentSlot();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EEquipmentSlot();
PUBG_API UFunction* Z_Construct_UDelegateFunction_PUBG_OnEnterPickupRange__DelegateSignature();
PUBG_API UFunction* Z_Construct_UDelegateFunction_PUBG_OnInventoryChanged__DelegateSignature();
PUBG_API UFunction* Z_Construct_UDelegateFunction_PUBG_OnLeavePickupRange__DelegateSignature();
PUBG_API UFunction* Z_Construct_UDelegateFunction_PUBG_OnWeaponAttachmentsChanged__DelegateSignature();
PUBG_API UScriptStruct* Z_Construct_UScriptStruct_FBackpackArrayData();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnEnterPickupRange ***************************************************
struct Z_Construct_UDelegateFunction_PUBG_OnEnterPickupRange__DelegateSignature_Statics
{
	struct _Script_PUBG_eventOnEnterPickupRange_Parms
	{
		APickupItem* PickupItemActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupItemActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PUBG_OnEnterPickupRange__DelegateSignature_Statics::NewProp_PickupItemActor = { "PickupItemActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PUBG_eventOnEnterPickupRange_Parms, PickupItemActor), Z_Construct_UClass_APickupItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PUBG_OnEnterPickupRange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PUBG_OnEnterPickupRange__DelegateSignature_Statics::NewProp_PickupItemActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PUBG_OnEnterPickupRange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PUBG_OnEnterPickupRange__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PUBG, nullptr, "OnEnterPickupRange__DelegateSignature", Z_Construct_UDelegateFunction_PUBG_OnEnterPickupRange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PUBG_OnEnterPickupRange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PUBG_OnEnterPickupRange__DelegateSignature_Statics::_Script_PUBG_eventOnEnterPickupRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PUBG_OnEnterPickupRange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PUBG_OnEnterPickupRange__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_PUBG_OnEnterPickupRange__DelegateSignature_Statics::_Script_PUBG_eventOnEnterPickupRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PUBG_OnEnterPickupRange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PUBG_OnEnterPickupRange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEnterPickupRange_DelegateWrapper(const FMulticastScriptDelegate& OnEnterPickupRange, APickupItem* PickupItemActor)
{
	struct _Script_PUBG_eventOnEnterPickupRange_Parms
	{
		APickupItem* PickupItemActor;
	};
	_Script_PUBG_eventOnEnterPickupRange_Parms Parms;
	Parms.PickupItemActor=PickupItemActor;
	OnEnterPickupRange.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnEnterPickupRange *****************************************************

// ********** Begin Delegate FOnLeavePickupRange ***************************************************
struct Z_Construct_UDelegateFunction_PUBG_OnLeavePickupRange__DelegateSignature_Statics
{
	struct _Script_PUBG_eventOnLeavePickupRange_Parms
	{
		APickupItem* PickupItemActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupItemActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PUBG_OnLeavePickupRange__DelegateSignature_Statics::NewProp_PickupItemActor = { "PickupItemActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PUBG_eventOnLeavePickupRange_Parms, PickupItemActor), Z_Construct_UClass_APickupItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PUBG_OnLeavePickupRange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PUBG_OnLeavePickupRange__DelegateSignature_Statics::NewProp_PickupItemActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PUBG_OnLeavePickupRange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PUBG_OnLeavePickupRange__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PUBG, nullptr, "OnLeavePickupRange__DelegateSignature", Z_Construct_UDelegateFunction_PUBG_OnLeavePickupRange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PUBG_OnLeavePickupRange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PUBG_OnLeavePickupRange__DelegateSignature_Statics::_Script_PUBG_eventOnLeavePickupRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PUBG_OnLeavePickupRange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PUBG_OnLeavePickupRange__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_PUBG_OnLeavePickupRange__DelegateSignature_Statics::_Script_PUBG_eventOnLeavePickupRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PUBG_OnLeavePickupRange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PUBG_OnLeavePickupRange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLeavePickupRange_DelegateWrapper(const FMulticastScriptDelegate& OnLeavePickupRange, APickupItem* PickupItemActor)
{
	struct _Script_PUBG_eventOnLeavePickupRange_Parms
	{
		APickupItem* PickupItemActor;
	};
	_Script_PUBG_eventOnLeavePickupRange_Parms Parms;
	Parms.PickupItemActor=PickupItemActor;
	OnLeavePickupRange.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLeavePickupRange *****************************************************

// ********** Begin Delegate FOnInventoryChanged ***************************************************
struct Z_Construct_UDelegateFunction_PUBG_OnInventoryChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PUBG_OnInventoryChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PUBG, nullptr, "OnInventoryChanged__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PUBG_OnInventoryChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PUBG_OnInventoryChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_PUBG_OnInventoryChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PUBG_OnInventoryChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInventoryChanged_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryChanged)
{
	OnInventoryChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnInventoryChanged *****************************************************

// ********** Begin Delegate FOnWeaponAttachmentsChanged *******************************************
struct Z_Construct_UDelegateFunction_PUBG_OnWeaponAttachmentsChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PUBG_OnWeaponAttachmentsChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PUBG, nullptr, "OnWeaponAttachmentsChanged__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PUBG_OnWeaponAttachmentsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PUBG_OnWeaponAttachmentsChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_PUBG_OnWeaponAttachmentsChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PUBG_OnWeaponAttachmentsChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWeaponAttachmentsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponAttachmentsChanged)
{
	OnWeaponAttachmentsChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnWeaponAttachmentsChanged *********************************************

// ********** Begin Class UBackpackManagerComponent Function Server_DropAttachment *****************
struct BackpackManagerComponent_eventServer_DropAttachment_Parms
{
	UBackpackItemInstance* WeaponInstance;
	EAttachmentSlot TargetSlot;
};
static FName NAME_UBackpackManagerComponent_Server_DropAttachment = FName(TEXT("Server_DropAttachment"));
void UBackpackManagerComponent::Server_DropAttachment(UBackpackItemInstance* WeaponInstance, EAttachmentSlot TargetSlot)
{
	BackpackManagerComponent_eventServer_DropAttachment_Parms Parms;
	Parms.WeaponInstance=WeaponInstance;
	Parms.TargetSlot=TargetSlot;
	UFunction* Func = FindFunctionChecked(NAME_UBackpackManagerComponent_Server_DropAttachment);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBackpackManagerComponent_Server_DropAttachment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponInstance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetSlot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_DropAttachment_Statics::NewProp_WeaponInstance = { "WeaponInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackManagerComponent_eventServer_DropAttachment_Parms, WeaponInstance), Z_Construct_UClass_UBackpackItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_DropAttachment_Statics::NewProp_TargetSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_DropAttachment_Statics::NewProp_TargetSlot = { "TargetSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackManagerComponent_eventServer_DropAttachment_Parms, TargetSlot), Z_Construct_UEnum_PUBG_EAttachmentSlot, METADATA_PARAMS(0, nullptr) }; // 1859959187
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackpackManagerComponent_Server_DropAttachment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_DropAttachment_Statics::NewProp_WeaponInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_DropAttachment_Statics::NewProp_TargetSlot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_DropAttachment_Statics::NewProp_TargetSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_DropAttachment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackpackManagerComponent_Server_DropAttachment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackpackManagerComponent, nullptr, "Server_DropAttachment", Z_Construct_UFunction_UBackpackManagerComponent_Server_DropAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_DropAttachment_Statics::PropPointers), sizeof(BackpackManagerComponent_eventServer_DropAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_DropAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackpackManagerComponent_Server_DropAttachment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BackpackManagerComponent_eventServer_DropAttachment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackpackManagerComponent_Server_DropAttachment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackpackManagerComponent_Server_DropAttachment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackpackManagerComponent::execServer_DropAttachment)
{
	P_GET_OBJECT(UBackpackItemInstance,Z_Param_WeaponInstance);
	P_GET_ENUM(EAttachmentSlot,Z_Param_TargetSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_DropAttachment_Implementation(Z_Param_WeaponInstance,EAttachmentSlot(Z_Param_TargetSlot));
	P_NATIVE_END;
}
// ********** End Class UBackpackManagerComponent Function Server_DropAttachment *******************

// ********** Begin Class UBackpackManagerComponent Function Server_DropEquipmentSlot **************
struct BackpackManagerComponent_eventServer_DropEquipmentSlot_Parms
{
	EEquipmentSlot TargetSlot;
};
static FName NAME_UBackpackManagerComponent_Server_DropEquipmentSlot = FName(TEXT("Server_DropEquipmentSlot"));
void UBackpackManagerComponent::Server_DropEquipmentSlot(EEquipmentSlot TargetSlot)
{
	BackpackManagerComponent_eventServer_DropEquipmentSlot_Parms Parms;
	Parms.TargetSlot=TargetSlot;
	UFunction* Func = FindFunctionChecked(NAME_UBackpackManagerComponent_Server_DropEquipmentSlot);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBackpackManagerComponent_Server_DropEquipmentSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetSlot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_DropEquipmentSlot_Statics::NewProp_TargetSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_DropEquipmentSlot_Statics::NewProp_TargetSlot = { "TargetSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackManagerComponent_eventServer_DropEquipmentSlot_Parms, TargetSlot), Z_Construct_UEnum_PUBG_EEquipmentSlot, METADATA_PARAMS(0, nullptr) }; // 218928670
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackpackManagerComponent_Server_DropEquipmentSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_DropEquipmentSlot_Statics::NewProp_TargetSlot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_DropEquipmentSlot_Statics::NewProp_TargetSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_DropEquipmentSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackpackManagerComponent_Server_DropEquipmentSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackpackManagerComponent, nullptr, "Server_DropEquipmentSlot", Z_Construct_UFunction_UBackpackManagerComponent_Server_DropEquipmentSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_DropEquipmentSlot_Statics::PropPointers), sizeof(BackpackManagerComponent_eventServer_DropEquipmentSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_DropEquipmentSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackpackManagerComponent_Server_DropEquipmentSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BackpackManagerComponent_eventServer_DropEquipmentSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackpackManagerComponent_Server_DropEquipmentSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackpackManagerComponent_Server_DropEquipmentSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackpackManagerComponent::execServer_DropEquipmentSlot)
{
	P_GET_ENUM(EEquipmentSlot,Z_Param_TargetSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_DropEquipmentSlot_Implementation(EEquipmentSlot(Z_Param_TargetSlot));
	P_NATIVE_END;
}
// ********** End Class UBackpackManagerComponent Function Server_DropEquipmentSlot ****************

// ********** Begin Class UBackpackManagerComponent Function Server_DropItem ***********************
struct BackpackManagerComponent_eventServer_DropItem_Parms
{
	UBackpackItemInstance* ItemInstance;
};
static FName NAME_UBackpackManagerComponent_Server_DropItem = FName(TEXT("Server_DropItem"));
void UBackpackManagerComponent::Server_DropItem(UBackpackItemInstance* ItemInstance)
{
	BackpackManagerComponent_eventServer_DropItem_Parms Parms;
	Parms.ItemInstance=ItemInstance;
	UFunction* Func = FindFunctionChecked(NAME_UBackpackManagerComponent_Server_DropItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBackpackManagerComponent_Server_DropItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_DropItem_Statics::NewProp_ItemInstance = { "ItemInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackManagerComponent_eventServer_DropItem_Parms, ItemInstance), Z_Construct_UClass_UBackpackItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackpackManagerComponent_Server_DropItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_DropItem_Statics::NewProp_ItemInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_DropItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackpackManagerComponent_Server_DropItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackpackManagerComponent, nullptr, "Server_DropItem", Z_Construct_UFunction_UBackpackManagerComponent_Server_DropItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_DropItem_Statics::PropPointers), sizeof(BackpackManagerComponent_eventServer_DropItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_DropItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackpackManagerComponent_Server_DropItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BackpackManagerComponent_eventServer_DropItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackpackManagerComponent_Server_DropItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackpackManagerComponent_Server_DropItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackpackManagerComponent::execServer_DropItem)
{
	P_GET_OBJECT(UBackpackItemInstance,Z_Param_ItemInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_DropItem_Implementation(Z_Param_ItemInstance);
	P_NATIVE_END;
}
// ********** End Class UBackpackManagerComponent Function Server_DropItem *************************

// ********** Begin Class UBackpackManagerComponent Function Server_DropWeaponSlot *****************
struct BackpackManagerComponent_eventServer_DropWeaponSlot_Parms
{
	int32 SlotIndex;
};
static FName NAME_UBackpackManagerComponent_Server_DropWeaponSlot = FName(TEXT("Server_DropWeaponSlot"));
void UBackpackManagerComponent::Server_DropWeaponSlot(int32 SlotIndex)
{
	BackpackManagerComponent_eventServer_DropWeaponSlot_Parms Parms;
	Parms.SlotIndex=SlotIndex;
	UFunction* Func = FindFunctionChecked(NAME_UBackpackManagerComponent_Server_DropWeaponSlot);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBackpackManagerComponent_Server_DropWeaponSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_DropWeaponSlot_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackManagerComponent_eventServer_DropWeaponSlot_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackpackManagerComponent_Server_DropWeaponSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_DropWeaponSlot_Statics::NewProp_SlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_DropWeaponSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackpackManagerComponent_Server_DropWeaponSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackpackManagerComponent, nullptr, "Server_DropWeaponSlot", Z_Construct_UFunction_UBackpackManagerComponent_Server_DropWeaponSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_DropWeaponSlot_Statics::PropPointers), sizeof(BackpackManagerComponent_eventServer_DropWeaponSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_DropWeaponSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackpackManagerComponent_Server_DropWeaponSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BackpackManagerComponent_eventServer_DropWeaponSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackpackManagerComponent_Server_DropWeaponSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackpackManagerComponent_Server_DropWeaponSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackpackManagerComponent::execServer_DropWeaponSlot)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_DropWeaponSlot_Implementation(Z_Param_SlotIndex);
	P_NATIVE_END;
}
// ********** End Class UBackpackManagerComponent Function Server_DropWeaponSlot *******************

// ********** Begin Class UBackpackManagerComponent Function Server_EquipAttachmentToWeapon ********
struct BackpackManagerComponent_eventServer_EquipAttachmentToWeapon_Parms
{
	UBackpackItemInstance* BagAttachment;
	UBackpackItemInstance* WeaponInstance;
	EAttachmentSlot TargetSlot;
};
static FName NAME_UBackpackManagerComponent_Server_EquipAttachmentToWeapon = FName(TEXT("Server_EquipAttachmentToWeapon"));
void UBackpackManagerComponent::Server_EquipAttachmentToWeapon(UBackpackItemInstance* BagAttachment, UBackpackItemInstance* WeaponInstance, EAttachmentSlot TargetSlot)
{
	BackpackManagerComponent_eventServer_EquipAttachmentToWeapon_Parms Parms;
	Parms.BagAttachment=BagAttachment;
	Parms.WeaponInstance=WeaponInstance;
	Parms.TargetSlot=TargetSlot;
	UFunction* Func = FindFunctionChecked(NAME_UBackpackManagerComponent_Server_EquipAttachmentToWeapon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipAttachmentToWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BagAttachment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponInstance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetSlot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipAttachmentToWeapon_Statics::NewProp_BagAttachment = { "BagAttachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackManagerComponent_eventServer_EquipAttachmentToWeapon_Parms, BagAttachment), Z_Construct_UClass_UBackpackItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipAttachmentToWeapon_Statics::NewProp_WeaponInstance = { "WeaponInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackManagerComponent_eventServer_EquipAttachmentToWeapon_Parms, WeaponInstance), Z_Construct_UClass_UBackpackItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipAttachmentToWeapon_Statics::NewProp_TargetSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipAttachmentToWeapon_Statics::NewProp_TargetSlot = { "TargetSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackManagerComponent_eventServer_EquipAttachmentToWeapon_Parms, TargetSlot), Z_Construct_UEnum_PUBG_EAttachmentSlot, METADATA_PARAMS(0, nullptr) }; // 1859959187
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipAttachmentToWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipAttachmentToWeapon_Statics::NewProp_BagAttachment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipAttachmentToWeapon_Statics::NewProp_WeaponInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipAttachmentToWeapon_Statics::NewProp_TargetSlot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipAttachmentToWeapon_Statics::NewProp_TargetSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipAttachmentToWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipAttachmentToWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackpackManagerComponent, nullptr, "Server_EquipAttachmentToWeapon", Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipAttachmentToWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipAttachmentToWeapon_Statics::PropPointers), sizeof(BackpackManagerComponent_eventServer_EquipAttachmentToWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipAttachmentToWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipAttachmentToWeapon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BackpackManagerComponent_eventServer_EquipAttachmentToWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipAttachmentToWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipAttachmentToWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackpackManagerComponent::execServer_EquipAttachmentToWeapon)
{
	P_GET_OBJECT(UBackpackItemInstance,Z_Param_BagAttachment);
	P_GET_OBJECT(UBackpackItemInstance,Z_Param_WeaponInstance);
	P_GET_ENUM(EAttachmentSlot,Z_Param_TargetSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_EquipAttachmentToWeapon_Implementation(Z_Param_BagAttachment,Z_Param_WeaponInstance,EAttachmentSlot(Z_Param_TargetSlot));
	P_NATIVE_END;
}
// ********** End Class UBackpackManagerComponent Function Server_EquipAttachmentToWeapon **********

// ********** Begin Class UBackpackManagerComponent Function Server_EquipBackpackItemToWeaponSlot **
struct BackpackManagerComponent_eventServer_EquipBackpackItemToWeaponSlot_Parms
{
	UBackpackItemInstance* ItemInstance;
	int32 TargetSlotIndex;
};
static FName NAME_UBackpackManagerComponent_Server_EquipBackpackItemToWeaponSlot = FName(TEXT("Server_EquipBackpackItemToWeaponSlot"));
void UBackpackManagerComponent::Server_EquipBackpackItemToWeaponSlot(UBackpackItemInstance* ItemInstance, int32 TargetSlotIndex)
{
	BackpackManagerComponent_eventServer_EquipBackpackItemToWeaponSlot_Parms Parms;
	Parms.ItemInstance=ItemInstance;
	Parms.TargetSlotIndex=TargetSlotIndex;
	UFunction* Func = FindFunctionChecked(NAME_UBackpackManagerComponent_Server_EquipBackpackItemToWeaponSlot);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipBackpackItemToWeaponSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInstance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetSlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipBackpackItemToWeaponSlot_Statics::NewProp_ItemInstance = { "ItemInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackManagerComponent_eventServer_EquipBackpackItemToWeaponSlot_Parms, ItemInstance), Z_Construct_UClass_UBackpackItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipBackpackItemToWeaponSlot_Statics::NewProp_TargetSlotIndex = { "TargetSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackManagerComponent_eventServer_EquipBackpackItemToWeaponSlot_Parms, TargetSlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipBackpackItemToWeaponSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipBackpackItemToWeaponSlot_Statics::NewProp_ItemInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipBackpackItemToWeaponSlot_Statics::NewProp_TargetSlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipBackpackItemToWeaponSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipBackpackItemToWeaponSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackpackManagerComponent, nullptr, "Server_EquipBackpackItemToWeaponSlot", Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipBackpackItemToWeaponSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipBackpackItemToWeaponSlot_Statics::PropPointers), sizeof(BackpackManagerComponent_eventServer_EquipBackpackItemToWeaponSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipBackpackItemToWeaponSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipBackpackItemToWeaponSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BackpackManagerComponent_eventServer_EquipBackpackItemToWeaponSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipBackpackItemToWeaponSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipBackpackItemToWeaponSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackpackManagerComponent::execServer_EquipBackpackItemToWeaponSlot)
{
	P_GET_OBJECT(UBackpackItemInstance,Z_Param_ItemInstance);
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetSlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_EquipBackpackItemToWeaponSlot_Implementation(Z_Param_ItemInstance,Z_Param_TargetSlotIndex);
	P_NATIVE_END;
}
// ********** End Class UBackpackManagerComponent Function Server_EquipBackpackItemToWeaponSlot ****

// ********** Begin Class UBackpackManagerComponent Function Server_EquipGroundAttachmentToWeapon **
struct BackpackManagerComponent_eventServer_EquipGroundAttachmentToWeapon_Parms
{
	APickupItem* GroundAttachment;
	UBackpackItemInstance* WeaponInstance;
	EAttachmentSlot TargetSlot;
};
static FName NAME_UBackpackManagerComponent_Server_EquipGroundAttachmentToWeapon = FName(TEXT("Server_EquipGroundAttachmentToWeapon"));
void UBackpackManagerComponent::Server_EquipGroundAttachmentToWeapon(APickupItem* GroundAttachment, UBackpackItemInstance* WeaponInstance, EAttachmentSlot TargetSlot)
{
	BackpackManagerComponent_eventServer_EquipGroundAttachmentToWeapon_Parms Parms;
	Parms.GroundAttachment=GroundAttachment;
	Parms.WeaponInstance=WeaponInstance;
	Parms.TargetSlot=TargetSlot;
	UFunction* Func = FindFunctionChecked(NAME_UBackpackManagerComponent_Server_EquipGroundAttachmentToWeapon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundAttachmentToWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroundAttachment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponInstance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetSlot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundAttachmentToWeapon_Statics::NewProp_GroundAttachment = { "GroundAttachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackManagerComponent_eventServer_EquipGroundAttachmentToWeapon_Parms, GroundAttachment), Z_Construct_UClass_APickupItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundAttachmentToWeapon_Statics::NewProp_WeaponInstance = { "WeaponInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackManagerComponent_eventServer_EquipGroundAttachmentToWeapon_Parms, WeaponInstance), Z_Construct_UClass_UBackpackItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundAttachmentToWeapon_Statics::NewProp_TargetSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundAttachmentToWeapon_Statics::NewProp_TargetSlot = { "TargetSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackManagerComponent_eventServer_EquipGroundAttachmentToWeapon_Parms, TargetSlot), Z_Construct_UEnum_PUBG_EAttachmentSlot, METADATA_PARAMS(0, nullptr) }; // 1859959187
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundAttachmentToWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundAttachmentToWeapon_Statics::NewProp_GroundAttachment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundAttachmentToWeapon_Statics::NewProp_WeaponInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundAttachmentToWeapon_Statics::NewProp_TargetSlot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundAttachmentToWeapon_Statics::NewProp_TargetSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundAttachmentToWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundAttachmentToWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackpackManagerComponent, nullptr, "Server_EquipGroundAttachmentToWeapon", Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundAttachmentToWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundAttachmentToWeapon_Statics::PropPointers), sizeof(BackpackManagerComponent_eventServer_EquipGroundAttachmentToWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundAttachmentToWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundAttachmentToWeapon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BackpackManagerComponent_eventServer_EquipGroundAttachmentToWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundAttachmentToWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundAttachmentToWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackpackManagerComponent::execServer_EquipGroundAttachmentToWeapon)
{
	P_GET_OBJECT(APickupItem,Z_Param_GroundAttachment);
	P_GET_OBJECT(UBackpackItemInstance,Z_Param_WeaponInstance);
	P_GET_ENUM(EAttachmentSlot,Z_Param_TargetSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_EquipGroundAttachmentToWeapon_Implementation(Z_Param_GroundAttachment,Z_Param_WeaponInstance,EAttachmentSlot(Z_Param_TargetSlot));
	P_NATIVE_END;
}
// ********** End Class UBackpackManagerComponent Function Server_EquipGroundAttachmentToWeapon ****

// ********** Begin Class UBackpackManagerComponent Function Server_EquipGroundEquipmentToSlot *****
struct BackpackManagerComponent_eventServer_EquipGroundEquipmentToSlot_Parms
{
	APickupItem* GroundItem;
	EEquipmentSlot TargetSlot;
};
static FName NAME_UBackpackManagerComponent_Server_EquipGroundEquipmentToSlot = FName(TEXT("Server_EquipGroundEquipmentToSlot"));
void UBackpackManagerComponent::Server_EquipGroundEquipmentToSlot(APickupItem* GroundItem, EEquipmentSlot TargetSlot)
{
	BackpackManagerComponent_eventServer_EquipGroundEquipmentToSlot_Parms Parms;
	Parms.GroundItem=GroundItem;
	Parms.TargetSlot=TargetSlot;
	UFunction* Func = FindFunctionChecked(NAME_UBackpackManagerComponent_Server_EquipGroundEquipmentToSlot);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundEquipmentToSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroundItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetSlot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundEquipmentToSlot_Statics::NewProp_GroundItem = { "GroundItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackManagerComponent_eventServer_EquipGroundEquipmentToSlot_Parms, GroundItem), Z_Construct_UClass_APickupItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundEquipmentToSlot_Statics::NewProp_TargetSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundEquipmentToSlot_Statics::NewProp_TargetSlot = { "TargetSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackManagerComponent_eventServer_EquipGroundEquipmentToSlot_Parms, TargetSlot), Z_Construct_UEnum_PUBG_EEquipmentSlot, METADATA_PARAMS(0, nullptr) }; // 218928670
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundEquipmentToSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundEquipmentToSlot_Statics::NewProp_GroundItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundEquipmentToSlot_Statics::NewProp_TargetSlot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundEquipmentToSlot_Statics::NewProp_TargetSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundEquipmentToSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundEquipmentToSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackpackManagerComponent, nullptr, "Server_EquipGroundEquipmentToSlot", Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundEquipmentToSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundEquipmentToSlot_Statics::PropPointers), sizeof(BackpackManagerComponent_eventServer_EquipGroundEquipmentToSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundEquipmentToSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundEquipmentToSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BackpackManagerComponent_eventServer_EquipGroundEquipmentToSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundEquipmentToSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundEquipmentToSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackpackManagerComponent::execServer_EquipGroundEquipmentToSlot)
{
	P_GET_OBJECT(APickupItem,Z_Param_GroundItem);
	P_GET_ENUM(EEquipmentSlot,Z_Param_TargetSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_EquipGroundEquipmentToSlot_Implementation(Z_Param_GroundItem,EEquipmentSlot(Z_Param_TargetSlot));
	P_NATIVE_END;
}
// ********** End Class UBackpackManagerComponent Function Server_EquipGroundEquipmentToSlot *******

// ********** Begin Class UBackpackManagerComponent Function Server_EquipGroundWeaponToSlot ********
struct BackpackManagerComponent_eventServer_EquipGroundWeaponToSlot_Parms
{
	APickupItem* GroundItem;
	int32 TargetSlotIndex;
};
static FName NAME_UBackpackManagerComponent_Server_EquipGroundWeaponToSlot = FName(TEXT("Server_EquipGroundWeaponToSlot"));
void UBackpackManagerComponent::Server_EquipGroundWeaponToSlot(APickupItem* GroundItem, int32 TargetSlotIndex)
{
	BackpackManagerComponent_eventServer_EquipGroundWeaponToSlot_Parms Parms;
	Parms.GroundItem=GroundItem;
	Parms.TargetSlotIndex=TargetSlotIndex;
	UFunction* Func = FindFunctionChecked(NAME_UBackpackManagerComponent_Server_EquipGroundWeaponToSlot);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundWeaponToSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroundItem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetSlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundWeaponToSlot_Statics::NewProp_GroundItem = { "GroundItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackManagerComponent_eventServer_EquipGroundWeaponToSlot_Parms, GroundItem), Z_Construct_UClass_APickupItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundWeaponToSlot_Statics::NewProp_TargetSlotIndex = { "TargetSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackManagerComponent_eventServer_EquipGroundWeaponToSlot_Parms, TargetSlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundWeaponToSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundWeaponToSlot_Statics::NewProp_GroundItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundWeaponToSlot_Statics::NewProp_TargetSlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundWeaponToSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundWeaponToSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackpackManagerComponent, nullptr, "Server_EquipGroundWeaponToSlot", Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundWeaponToSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundWeaponToSlot_Statics::PropPointers), sizeof(BackpackManagerComponent_eventServer_EquipGroundWeaponToSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundWeaponToSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundWeaponToSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BackpackManagerComponent_eventServer_EquipGroundWeaponToSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundWeaponToSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundWeaponToSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackpackManagerComponent::execServer_EquipGroundWeaponToSlot)
{
	P_GET_OBJECT(APickupItem,Z_Param_GroundItem);
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetSlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_EquipGroundWeaponToSlot_Implementation(Z_Param_GroundItem,Z_Param_TargetSlotIndex);
	P_NATIVE_END;
}
// ********** End Class UBackpackManagerComponent Function Server_EquipGroundWeaponToSlot **********

// ********** Begin Class UBackpackManagerComponent Function Server_PickupItem *********************
struct BackpackManagerComponent_eventServer_PickupItem_Parms
{
	APickupItem* ItemToPickup;
};
static FName NAME_UBackpackManagerComponent_Server_PickupItem = FName(TEXT("Server_PickupItem"));
void UBackpackManagerComponent::Server_PickupItem(APickupItem* ItemToPickup)
{
	BackpackManagerComponent_eventServer_PickupItem_Parms Parms;
	Parms.ItemToPickup=ItemToPickup;
	UFunction* Func = FindFunctionChecked(NAME_UBackpackManagerComponent_Server_PickupItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBackpackManagerComponent_Server_PickupItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToPickup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_PickupItem_Statics::NewProp_ItemToPickup = { "ItemToPickup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackManagerComponent_eventServer_PickupItem_Parms, ItemToPickup), Z_Construct_UClass_APickupItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackpackManagerComponent_Server_PickupItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_PickupItem_Statics::NewProp_ItemToPickup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_PickupItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackpackManagerComponent_Server_PickupItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackpackManagerComponent, nullptr, "Server_PickupItem", Z_Construct_UFunction_UBackpackManagerComponent_Server_PickupItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_PickupItem_Statics::PropPointers), sizeof(BackpackManagerComponent_eventServer_PickupItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_PickupItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackpackManagerComponent_Server_PickupItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BackpackManagerComponent_eventServer_PickupItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackpackManagerComponent_Server_PickupItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackpackManagerComponent_Server_PickupItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackpackManagerComponent::execServer_PickupItem)
{
	P_GET_OBJECT(APickupItem,Z_Param_ItemToPickup);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_PickupItem_Implementation(Z_Param_ItemToPickup);
	P_NATIVE_END;
}
// ********** End Class UBackpackManagerComponent Function Server_PickupItem ***********************

// ********** Begin Class UBackpackManagerComponent Function Server_SwapWeaponSlots ****************
struct BackpackManagerComponent_eventServer_SwapWeaponSlots_Parms
{
	int32 IndexA;
	int32 IndexB;
};
static FName NAME_UBackpackManagerComponent_Server_SwapWeaponSlots = FName(TEXT("Server_SwapWeaponSlots"));
void UBackpackManagerComponent::Server_SwapWeaponSlots(int32 IndexA, int32 IndexB)
{
	BackpackManagerComponent_eventServer_SwapWeaponSlots_Parms Parms;
	Parms.IndexA=IndexA;
	Parms.IndexB=IndexB;
	UFunction* Func = FindFunctionChecked(NAME_UBackpackManagerComponent_Server_SwapWeaponSlots);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBackpackManagerComponent_Server_SwapWeaponSlots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_SwapWeaponSlots_Statics::NewProp_IndexA = { "IndexA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackManagerComponent_eventServer_SwapWeaponSlots_Parms, IndexA), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_SwapWeaponSlots_Statics::NewProp_IndexB = { "IndexB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackManagerComponent_eventServer_SwapWeaponSlots_Parms, IndexB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackpackManagerComponent_Server_SwapWeaponSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_SwapWeaponSlots_Statics::NewProp_IndexA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_SwapWeaponSlots_Statics::NewProp_IndexB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_SwapWeaponSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackpackManagerComponent_Server_SwapWeaponSlots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackpackManagerComponent, nullptr, "Server_SwapWeaponSlots", Z_Construct_UFunction_UBackpackManagerComponent_Server_SwapWeaponSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_SwapWeaponSlots_Statics::PropPointers), sizeof(BackpackManagerComponent_eventServer_SwapWeaponSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_SwapWeaponSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackpackManagerComponent_Server_SwapWeaponSlots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BackpackManagerComponent_eventServer_SwapWeaponSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackpackManagerComponent_Server_SwapWeaponSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackpackManagerComponent_Server_SwapWeaponSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackpackManagerComponent::execServer_SwapWeaponSlots)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexA);
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexB);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SwapWeaponSlots_Implementation(Z_Param_IndexA,Z_Param_IndexB);
	P_NATIVE_END;
}
// ********** End Class UBackpackManagerComponent Function Server_SwapWeaponSlots ******************

// ********** Begin Class UBackpackManagerComponent Function Server_UnequipAttachmentToBackpack ****
struct BackpackManagerComponent_eventServer_UnequipAttachmentToBackpack_Parms
{
	UBackpackItemInstance* WeaponInstance;
	EAttachmentSlot TargetSlot;
};
static FName NAME_UBackpackManagerComponent_Server_UnequipAttachmentToBackpack = FName(TEXT("Server_UnequipAttachmentToBackpack"));
void UBackpackManagerComponent::Server_UnequipAttachmentToBackpack(UBackpackItemInstance* WeaponInstance, EAttachmentSlot TargetSlot)
{
	BackpackManagerComponent_eventServer_UnequipAttachmentToBackpack_Parms Parms;
	Parms.WeaponInstance=WeaponInstance;
	Parms.TargetSlot=TargetSlot;
	UFunction* Func = FindFunctionChecked(NAME_UBackpackManagerComponent_Server_UnequipAttachmentToBackpack);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipAttachmentToBackpack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponInstance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetSlot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipAttachmentToBackpack_Statics::NewProp_WeaponInstance = { "WeaponInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackManagerComponent_eventServer_UnequipAttachmentToBackpack_Parms, WeaponInstance), Z_Construct_UClass_UBackpackItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipAttachmentToBackpack_Statics::NewProp_TargetSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipAttachmentToBackpack_Statics::NewProp_TargetSlot = { "TargetSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackManagerComponent_eventServer_UnequipAttachmentToBackpack_Parms, TargetSlot), Z_Construct_UEnum_PUBG_EAttachmentSlot, METADATA_PARAMS(0, nullptr) }; // 1859959187
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipAttachmentToBackpack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipAttachmentToBackpack_Statics::NewProp_WeaponInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipAttachmentToBackpack_Statics::NewProp_TargetSlot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipAttachmentToBackpack_Statics::NewProp_TargetSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipAttachmentToBackpack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipAttachmentToBackpack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackpackManagerComponent, nullptr, "Server_UnequipAttachmentToBackpack", Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipAttachmentToBackpack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipAttachmentToBackpack_Statics::PropPointers), sizeof(BackpackManagerComponent_eventServer_UnequipAttachmentToBackpack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipAttachmentToBackpack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipAttachmentToBackpack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BackpackManagerComponent_eventServer_UnequipAttachmentToBackpack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipAttachmentToBackpack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipAttachmentToBackpack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackpackManagerComponent::execServer_UnequipAttachmentToBackpack)
{
	P_GET_OBJECT(UBackpackItemInstance,Z_Param_WeaponInstance);
	P_GET_ENUM(EAttachmentSlot,Z_Param_TargetSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_UnequipAttachmentToBackpack_Implementation(Z_Param_WeaponInstance,EAttachmentSlot(Z_Param_TargetSlot));
	P_NATIVE_END;
}
// ********** End Class UBackpackManagerComponent Function Server_UnequipAttachmentToBackpack ******

// ********** Begin Class UBackpackManagerComponent Function Server_UnequipWeaponSlotToBackpack ****
struct BackpackManagerComponent_eventServer_UnequipWeaponSlotToBackpack_Parms
{
	int32 SlotIndex;
};
static FName NAME_UBackpackManagerComponent_Server_UnequipWeaponSlotToBackpack = FName(TEXT("Server_UnequipWeaponSlotToBackpack"));
void UBackpackManagerComponent::Server_UnequipWeaponSlotToBackpack(int32 SlotIndex)
{
	BackpackManagerComponent_eventServer_UnequipWeaponSlotToBackpack_Parms Parms;
	Parms.SlotIndex=SlotIndex;
	UFunction* Func = FindFunctionChecked(NAME_UBackpackManagerComponent_Server_UnequipWeaponSlotToBackpack);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipWeaponSlotToBackpack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipWeaponSlotToBackpack_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackpackManagerComponent_eventServer_UnequipWeaponSlotToBackpack_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipWeaponSlotToBackpack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipWeaponSlotToBackpack_Statics::NewProp_SlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipWeaponSlotToBackpack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipWeaponSlotToBackpack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackpackManagerComponent, nullptr, "Server_UnequipWeaponSlotToBackpack", Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipWeaponSlotToBackpack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipWeaponSlotToBackpack_Statics::PropPointers), sizeof(BackpackManagerComponent_eventServer_UnequipWeaponSlotToBackpack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipWeaponSlotToBackpack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipWeaponSlotToBackpack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BackpackManagerComponent_eventServer_UnequipWeaponSlotToBackpack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipWeaponSlotToBackpack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipWeaponSlotToBackpack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackpackManagerComponent::execServer_UnequipWeaponSlotToBackpack)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_UnequipWeaponSlotToBackpack_Implementation(Z_Param_SlotIndex);
	P_NATIVE_END;
}
// ********** End Class UBackpackManagerComponent Function Server_UnequipWeaponSlotToBackpack ******

// ********** Begin Class UBackpackManagerComponent ************************************************
void UBackpackManagerComponent::StaticRegisterNativesUBackpackManagerComponent()
{
	UClass* Class = UBackpackManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Server_DropAttachment", &UBackpackManagerComponent::execServer_DropAttachment },
		{ "Server_DropEquipmentSlot", &UBackpackManagerComponent::execServer_DropEquipmentSlot },
		{ "Server_DropItem", &UBackpackManagerComponent::execServer_DropItem },
		{ "Server_DropWeaponSlot", &UBackpackManagerComponent::execServer_DropWeaponSlot },
		{ "Server_EquipAttachmentToWeapon", &UBackpackManagerComponent::execServer_EquipAttachmentToWeapon },
		{ "Server_EquipBackpackItemToWeaponSlot", &UBackpackManagerComponent::execServer_EquipBackpackItemToWeaponSlot },
		{ "Server_EquipGroundAttachmentToWeapon", &UBackpackManagerComponent::execServer_EquipGroundAttachmentToWeapon },
		{ "Server_EquipGroundEquipmentToSlot", &UBackpackManagerComponent::execServer_EquipGroundEquipmentToSlot },
		{ "Server_EquipGroundWeaponToSlot", &UBackpackManagerComponent::execServer_EquipGroundWeaponToSlot },
		{ "Server_PickupItem", &UBackpackManagerComponent::execServer_PickupItem },
		{ "Server_SwapWeaponSlots", &UBackpackManagerComponent::execServer_SwapWeaponSlots },
		{ "Server_UnequipAttachmentToBackpack", &UBackpackManagerComponent::execServer_UnequipAttachmentToBackpack },
		{ "Server_UnequipWeaponSlotToBackpack", &UBackpackManagerComponent::execServer_UnequipWeaponSlotToBackpack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBackpackManagerComponent;
UClass* UBackpackManagerComponent::GetPrivateStaticClass()
{
	using TClass = UBackpackManagerComponent;
	if (!Z_Registration_Info_UClass_UBackpackManagerComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BackpackManagerComponent"),
			Z_Registration_Info_UClass_UBackpackManagerComponent.InnerSingleton,
			StaticRegisterNativesUBackpackManagerComponent,
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
	return Z_Registration_Info_UClass_UBackpackManagerComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UBackpackManagerComponent_NoRegister()
{
	return UBackpackManagerComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBackpackManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorComponent/BackpackManagerComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GE_BackpackCapacity_SetByCaller_MetaData[] = {
		{ "Category", "BackpackManagerComponent" },
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapacitySetByCallerTag_MetaData[] = {
		{ "Category", "BackpackManagerComponent" },
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GE_MaxBackpackCapacity_SetByCaller_MetaData[] = {
		{ "Category", "BackpackManagerComponent" },
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCapacitySetByCallerTag_MetaData[] = {
		{ "Category", "BackpackManagerComponent" },
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEnterPickupRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeavePickupRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWeaponAttachmentsChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NearbyPickupItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackpackItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSlots_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentSlots_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropItemClass_MetaData[] = {
		{ "Category", "BackpackManagerComponent" },
		{ "ModuleRelativePath", "Public/ActorComponent/BackpackManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GE_BackpackCapacity_SetByCaller;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapacitySetByCallerTag;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GE_MaxBackpackCapacity_SetByCaller;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxCapacitySetByCallerTag;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnterPickupRange;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeavePickupRange;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeaponAttachmentsChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NearbyPickupItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NearbyPickupItems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackpackItems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponSlots;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentSlots;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DropItemClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBackpackManagerComponent_Server_DropAttachment, "Server_DropAttachment" }, // 3356569303
		{ &Z_Construct_UFunction_UBackpackManagerComponent_Server_DropEquipmentSlot, "Server_DropEquipmentSlot" }, // 3785368969
		{ &Z_Construct_UFunction_UBackpackManagerComponent_Server_DropItem, "Server_DropItem" }, // 150176241
		{ &Z_Construct_UFunction_UBackpackManagerComponent_Server_DropWeaponSlot, "Server_DropWeaponSlot" }, // 1868340443
		{ &Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipAttachmentToWeapon, "Server_EquipAttachmentToWeapon" }, // 368772301
		{ &Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipBackpackItemToWeaponSlot, "Server_EquipBackpackItemToWeaponSlot" }, // 3798541774
		{ &Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundAttachmentToWeapon, "Server_EquipGroundAttachmentToWeapon" }, // 405255762
		{ &Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundEquipmentToSlot, "Server_EquipGroundEquipmentToSlot" }, // 1975019609
		{ &Z_Construct_UFunction_UBackpackManagerComponent_Server_EquipGroundWeaponToSlot, "Server_EquipGroundWeaponToSlot" }, // 3886539988
		{ &Z_Construct_UFunction_UBackpackManagerComponent_Server_PickupItem, "Server_PickupItem" }, // 3898706400
		{ &Z_Construct_UFunction_UBackpackManagerComponent_Server_SwapWeaponSlots, "Server_SwapWeaponSlots" }, // 2833786329
		{ &Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipAttachmentToBackpack, "Server_UnequipAttachmentToBackpack" }, // 3114824278
		{ &Z_Construct_UFunction_UBackpackManagerComponent_Server_UnequipWeaponSlotToBackpack, "Server_UnequipWeaponSlotToBackpack" }, // 4135776871
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackpackManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_GE_BackpackCapacity_SetByCaller = { "GE_BackpackCapacity_SetByCaller", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackManagerComponent, GE_BackpackCapacity_SetByCaller), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GE_BackpackCapacity_SetByCaller_MetaData), NewProp_GE_BackpackCapacity_SetByCaller_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_CapacitySetByCallerTag = { "CapacitySetByCallerTag", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackManagerComponent, CapacitySetByCallerTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapacitySetByCallerTag_MetaData), NewProp_CapacitySetByCallerTag_MetaData) }; // 133831994
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_GE_MaxBackpackCapacity_SetByCaller = { "GE_MaxBackpackCapacity_SetByCaller", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackManagerComponent, GE_MaxBackpackCapacity_SetByCaller), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GE_MaxBackpackCapacity_SetByCaller_MetaData), NewProp_GE_MaxBackpackCapacity_SetByCaller_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_MaxCapacitySetByCallerTag = { "MaxCapacitySetByCallerTag", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackManagerComponent, MaxCapacitySetByCallerTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCapacitySetByCallerTag_MetaData), NewProp_MaxCapacitySetByCallerTag_MetaData) }; // 133831994
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_OnEnterPickupRange = { "OnEnterPickupRange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackManagerComponent, OnEnterPickupRange), Z_Construct_UDelegateFunction_PUBG_OnEnterPickupRange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEnterPickupRange_MetaData), NewProp_OnEnterPickupRange_MetaData) }; // 1511137708
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_OnLeavePickupRange = { "OnLeavePickupRange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackManagerComponent, OnLeavePickupRange), Z_Construct_UDelegateFunction_PUBG_OnLeavePickupRange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeavePickupRange_MetaData), NewProp_OnLeavePickupRange_MetaData) }; // 248279771
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_OnInventoryChanged = { "OnInventoryChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackManagerComponent, OnInventoryChanged), Z_Construct_UDelegateFunction_PUBG_OnInventoryChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryChanged_MetaData), NewProp_OnInventoryChanged_MetaData) }; // 144402933
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_OnWeaponAttachmentsChanged = { "OnWeaponAttachmentsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackManagerComponent, OnWeaponAttachmentsChanged), Z_Construct_UDelegateFunction_PUBG_OnWeaponAttachmentsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWeaponAttachmentsChanged_MetaData), NewProp_OnWeaponAttachmentsChanged_MetaData) }; // 2079979033
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_NearbyPickupItems_Inner = { "NearbyPickupItems", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APickupItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_NearbyPickupItems = { "NearbyPickupItems", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackManagerComponent, NearbyPickupItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NearbyPickupItems_MetaData), NewProp_NearbyPickupItems_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_BackpackItems = { "BackpackItems", nullptr, (EPropertyFlags)0x0010008000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackManagerComponent, BackpackItems), Z_Construct_UScriptStruct_FBackpackArrayData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackpackItems_MetaData), NewProp_BackpackItems_MetaData) }; // 677165392
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_WeaponSlots = { "WeaponSlots", nullptr, (EPropertyFlags)0x0010008000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackManagerComponent, WeaponSlots), Z_Construct_UScriptStruct_FBackpackArrayData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponSlots_MetaData), NewProp_WeaponSlots_MetaData) }; // 677165392
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_EquipmentSlots = { "EquipmentSlots", nullptr, (EPropertyFlags)0x0010008000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackManagerComponent, EquipmentSlots), Z_Construct_UScriptStruct_FBackpackArrayData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentSlots_MetaData), NewProp_EquipmentSlots_MetaData) }; // 677165392
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_DropItemClass = { "DropItemClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackManagerComponent, DropItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APickupItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropItemClass_MetaData), NewProp_DropItemClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackpackManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_GE_BackpackCapacity_SetByCaller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_CapacitySetByCallerTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_GE_MaxBackpackCapacity_SetByCaller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_MaxCapacitySetByCallerTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_OnEnterPickupRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_OnLeavePickupRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_OnInventoryChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_OnWeaponAttachmentsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_NearbyPickupItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_NearbyPickupItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_BackpackItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_WeaponSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_EquipmentSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackManagerComponent_Statics::NewProp_DropItemClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBackpackManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackpackManagerComponent_Statics::ClassParams = {
	&UBackpackManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBackpackManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBackpackManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBackpackManagerComponent()
{
	if (!Z_Registration_Info_UClass_UBackpackManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackpackManagerComponent.OuterSingleton, Z_Construct_UClass_UBackpackManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBackpackManagerComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UBackpackManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_BackpackItems(TEXT("BackpackItems"));
	static FName Name_WeaponSlots(TEXT("WeaponSlots"));
	static FName Name_EquipmentSlots(TEXT("EquipmentSlots"));
	const bool bIsValid = true
		&& Name_BackpackItems == ClassReps[(int32)ENetFields_Private::BackpackItems].Property->GetFName()
		&& Name_WeaponSlots == ClassReps[(int32)ENetFields_Private::WeaponSlots].Property->GetFName()
		&& Name_EquipmentSlots == ClassReps[(int32)ENetFields_Private::EquipmentSlots].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBackpackManagerComponent"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(UBackpackManagerComponent);
UBackpackManagerComponent::~UBackpackManagerComponent() {}
// ********** End Class UBackpackManagerComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_ActorComponent_BackpackManagerComponent_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBackpackManagerComponent, UBackpackManagerComponent::StaticClass, TEXT("UBackpackManagerComponent"), &Z_Registration_Info_UClass_UBackpackManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackpackManagerComponent), 2137342181U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_ActorComponent_BackpackManagerComponent_h__Script_PUBG_2489275389(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_ActorComponent_BackpackManagerComponent_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_ActorComponent_BackpackManagerComponent_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
