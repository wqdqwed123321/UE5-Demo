// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PUBGType.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePUBGType() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemInstance_NoRegister();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EAmmoType();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EAsyncPushWidgetState();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EAttachmentSlot();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EBackpackDragSource();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EBackpackListMode();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_ECharacterDirection();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_ECharacterGait();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_ECharacterHeldSlot();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_ECharacterStance();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EEquipmentSlot();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EItemType();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EWeaponFireMode();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EWeaponType();
PUBG_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterDirectionAnimations();
PUBG_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterGaitSettings();
PUBG_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterTurnAngleAnimations();
PUBG_API UScriptStruct* Z_Construct_UScriptStruct_FItemAttachment();
PUBG_API UScriptStruct* Z_Construct_UScriptStruct_FItemAttribute();
PUBG_API UScriptStruct* Z_Construct_UScriptStruct_FRecoilSettings();
PUBG_API UScriptStruct* Z_Construct_UScriptStruct_FSpreadSettings();
PUBG_API UScriptStruct* Z_Construct_UScriptStruct_FTPPCameraSettings();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECharacterDirection *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterDirection;
static UEnum* ECharacterDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PUBG_ECharacterDirection, (UObject*)Z_Construct_UPackage__Script_PUBG(), TEXT("ECharacterDirection"));
	}
	return Z_Registration_Info_UEnum_ECharacterDirection.OuterSingleton;
}
template<> PUBG_API UEnum* StaticEnum<ECharacterDirection>()
{
	return ECharacterDirection_StaticEnum();
}
struct Z_Construct_UEnum_PUBG_ECharacterDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Backward.DisplayName", "\xe5\x90\x91\xe5\x90\x8e" },
		{ "Backward.Name", "ECharacterDirection::Backward" },
		{ "BlueprintType", "true" },
		{ "Forward.DisplayName", "\xe5\x90\x91\xe5\x89\x8d" },
		{ "Forward.Name", "ECharacterDirection::Forward" },
		{ "Left.DisplayName", "\xe5\x90\x91\xe5\xb7\xa6" },
		{ "Left.Name", "ECharacterDirection::Left" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
		{ "Right.DisplayName", "\xe5\x90\x91\xe5\x8f\xb3" },
		{ "Right.Name", "ECharacterDirection::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterDirection::Forward", (int64)ECharacterDirection::Forward },
		{ "ECharacterDirection::Backward", (int64)ECharacterDirection::Backward },
		{ "ECharacterDirection::Left", (int64)ECharacterDirection::Left },
		{ "ECharacterDirection::Right", (int64)ECharacterDirection::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PUBG_ECharacterDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PUBG,
	nullptr,
	"ECharacterDirection",
	"ECharacterDirection",
	Z_Construct_UEnum_PUBG_ECharacterDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_ECharacterDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_ECharacterDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PUBG_ECharacterDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PUBG_ECharacterDirection()
{
	if (!Z_Registration_Info_UEnum_ECharacterDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterDirection.InnerSingleton, Z_Construct_UEnum_PUBG_ECharacterDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterDirection.InnerSingleton;
}
// ********** End Enum ECharacterDirection *********************************************************

// ********** Begin Enum ECharacterStance **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterStance;
static UEnum* ECharacterStance_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterStance.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterStance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PUBG_ECharacterStance, (UObject*)Z_Construct_UPackage__Script_PUBG(), TEXT("ECharacterStance"));
	}
	return Z_Registration_Info_UEnum_ECharacterStance.OuterSingleton;
}
template<> PUBG_API UEnum* StaticEnum<ECharacterStance>()
{
	return ECharacterStance_StaticEnum();
}
struct Z_Construct_UEnum_PUBG_ECharacterStance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Crouch.DisplayName", "\xe4\xb8\x8b\xe8\xb9\xb2" },
		{ "Crouch.Name", "ECharacterStance::Crouch" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
		{ "Stand.DisplayName", "\xe7\xab\x99\xe7\xab\x8b" },
		{ "Stand.Name", "ECharacterStance::Stand" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterStance::Stand", (int64)ECharacterStance::Stand },
		{ "ECharacterStance::Crouch", (int64)ECharacterStance::Crouch },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PUBG_ECharacterStance_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PUBG,
	nullptr,
	"ECharacterStance",
	"ECharacterStance",
	Z_Construct_UEnum_PUBG_ECharacterStance_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_ECharacterStance_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_ECharacterStance_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PUBG_ECharacterStance_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PUBG_ECharacterStance()
{
	if (!Z_Registration_Info_UEnum_ECharacterStance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterStance.InnerSingleton, Z_Construct_UEnum_PUBG_ECharacterStance_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterStance.InnerSingleton;
}
// ********** End Enum ECharacterStance ************************************************************

// ********** Begin Enum ECharacterGait ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterGait;
static UEnum* ECharacterGait_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterGait.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterGait.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PUBG_ECharacterGait, (UObject*)Z_Construct_UPackage__Script_PUBG(), TEXT("ECharacterGait"));
	}
	return Z_Registration_Info_UEnum_ECharacterGait.OuterSingleton;
}
template<> PUBG_API UEnum* StaticEnum<ECharacterGait>()
{
	return ECharacterGait_StaticEnum();
}
struct Z_Construct_UEnum_PUBG_ECharacterGait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Jog.DisplayName", "\xe6\x85\xa2\xe8\xb7\x91" },
		{ "Jog.Name", "ECharacterGait::Jog" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
		{ "Sprint.DisplayName", "\xe5\x86\xb2\xe5\x88\xba" },
		{ "Sprint.Name", "ECharacterGait::Sprint" },
		{ "Walk.DisplayName", "\xe9\x9d\x99\xe6\xad\xa5" },
		{ "Walk.Name", "ECharacterGait::Walk" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterGait::Walk", (int64)ECharacterGait::Walk },
		{ "ECharacterGait::Jog", (int64)ECharacterGait::Jog },
		{ "ECharacterGait::Sprint", (int64)ECharacterGait::Sprint },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PUBG_ECharacterGait_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PUBG,
	nullptr,
	"ECharacterGait",
	"ECharacterGait",
	Z_Construct_UEnum_PUBG_ECharacterGait_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_ECharacterGait_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_ECharacterGait_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PUBG_ECharacterGait_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PUBG_ECharacterGait()
{
	if (!Z_Registration_Info_UEnum_ECharacterGait.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterGait.InnerSingleton, Z_Construct_UEnum_PUBG_ECharacterGait_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterGait.InnerSingleton;
}
// ********** End Enum ECharacterGait **************************************************************

// ********** Begin Enum ECharacterHeldSlot ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterHeldSlot;
static UEnum* ECharacterHeldSlot_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterHeldSlot.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterHeldSlot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PUBG_ECharacterHeldSlot, (UObject*)Z_Construct_UPackage__Script_PUBG(), TEXT("ECharacterHeldSlot"));
	}
	return Z_Registration_Info_UEnum_ECharacterHeldSlot.OuterSingleton;
}
template<> PUBG_API UEnum* StaticEnum<ECharacterHeldSlot>()
{
	return ECharacterHeldSlot_StaticEnum();
}
struct Z_Construct_UEnum_PUBG_ECharacterHeldSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Melee.DisplayName", "\xe8\xbf\x91\xe6\x88\x98\xe6\xad\xa6\xe5\x99\xa8" },
		{ "Melee.Name", "ECharacterHeldSlot::Melee" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
		{ "Primary1.DisplayName", "\xe4\xb8\xbb\xe6\xad\xa6\xe5\x99\xa8""1" },
		{ "Primary1.Name", "ECharacterHeldSlot::Primary1" },
		{ "Primary2.DisplayName", "\xe4\xb8\xbb\xe6\xad\xa6\xe5\x99\xa8""2" },
		{ "Primary2.Name", "ECharacterHeldSlot::Primary2" },
		{ "Secondary.DisplayName", "\xe5\x89\xaf\xe6\xad\xa6\xe5\x99\xa8" },
		{ "Secondary.Name", "ECharacterHeldSlot::Secondary" },
		{ "Throwable.DisplayName", "\xe6\x8a\x95\xe6\x8e\xb7\xe7\x89\xa9" },
		{ "Throwable.Name", "ECharacterHeldSlot::Throwable" },
		{ "Unarmed.DisplayName", "\xe7\xa9\xba\xe6\x89\x8b" },
		{ "Unarmed.Name", "ECharacterHeldSlot::Unarmed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterHeldSlot::Unarmed", (int64)ECharacterHeldSlot::Unarmed },
		{ "ECharacterHeldSlot::Primary1", (int64)ECharacterHeldSlot::Primary1 },
		{ "ECharacterHeldSlot::Primary2", (int64)ECharacterHeldSlot::Primary2 },
		{ "ECharacterHeldSlot::Secondary", (int64)ECharacterHeldSlot::Secondary },
		{ "ECharacterHeldSlot::Melee", (int64)ECharacterHeldSlot::Melee },
		{ "ECharacterHeldSlot::Throwable", (int64)ECharacterHeldSlot::Throwable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PUBG_ECharacterHeldSlot_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PUBG,
	nullptr,
	"ECharacterHeldSlot",
	"ECharacterHeldSlot",
	Z_Construct_UEnum_PUBG_ECharacterHeldSlot_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_ECharacterHeldSlot_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_ECharacterHeldSlot_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PUBG_ECharacterHeldSlot_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PUBG_ECharacterHeldSlot()
{
	if (!Z_Registration_Info_UEnum_ECharacterHeldSlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterHeldSlot.InnerSingleton, Z_Construct_UEnum_PUBG_ECharacterHeldSlot_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterHeldSlot.InnerSingleton;
}
// ********** End Enum ECharacterHeldSlot **********************************************************

// ********** Begin Enum EAsyncPushWidgetState *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAsyncPushWidgetState;
static UEnum* EAsyncPushWidgetState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAsyncPushWidgetState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAsyncPushWidgetState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PUBG_EAsyncPushWidgetState, (UObject*)Z_Construct_UPackage__Script_PUBG(), TEXT("EAsyncPushWidgetState"));
	}
	return Z_Registration_Info_UEnum_EAsyncPushWidgetState.OuterSingleton;
}
template<> PUBG_API UEnum* StaticEnum<EAsyncPushWidgetState>()
{
	return EAsyncPushWidgetState_StaticEnum();
}
struct Z_Construct_UEnum_PUBG_EAsyncPushWidgetState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AfterPush.DisplayName", "\xe6\x8e\xa8\xe5\x85\xa5\xe5\x90\x8e" },
		{ "AfterPush.Name", "EAsyncPushWidgetState::AfterPush" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
		{ "OnCreatedBeforePush.DisplayName", "\xe5\x88\x9b\xe5\xbb\xba\xe5\x90\x8e\xef\xbc\x8c\xe6\x8e\xa8\xe5\x85\xa5\xe5\x89\x8d" },
		{ "OnCreatedBeforePush.Name", "EAsyncPushWidgetState::OnCreatedBeforePush" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAsyncPushWidgetState::OnCreatedBeforePush", (int64)EAsyncPushWidgetState::OnCreatedBeforePush },
		{ "EAsyncPushWidgetState::AfterPush", (int64)EAsyncPushWidgetState::AfterPush },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PUBG_EAsyncPushWidgetState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PUBG,
	nullptr,
	"EAsyncPushWidgetState",
	"EAsyncPushWidgetState",
	Z_Construct_UEnum_PUBG_EAsyncPushWidgetState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_EAsyncPushWidgetState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_EAsyncPushWidgetState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PUBG_EAsyncPushWidgetState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PUBG_EAsyncPushWidgetState()
{
	if (!Z_Registration_Info_UEnum_EAsyncPushWidgetState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAsyncPushWidgetState.InnerSingleton, Z_Construct_UEnum_PUBG_EAsyncPushWidgetState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAsyncPushWidgetState.InnerSingleton;
}
// ********** End Enum EAsyncPushWidgetState *******************************************************

// ********** Begin Enum EBackpackDragSource *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBackpackDragSource;
static UEnum* EBackpackDragSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBackpackDragSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBackpackDragSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PUBG_EBackpackDragSource, (UObject*)Z_Construct_UPackage__Script_PUBG(), TEXT("EBackpackDragSource"));
	}
	return Z_Registration_Info_UEnum_EBackpackDragSource.OuterSingleton;
}
template<> PUBG_API UEnum* StaticEnum<EBackpackDragSource>()
{
	return EBackpackDragSource_StaticEnum();
}
struct Z_Construct_UEnum_PUBG_EBackpackDragSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Backpack.DisplayName", "\xe7\x8e\xa9\xe5\xae\xb6\xe8\x83\x8c\xe5\x8c\x85" },
		{ "Backpack.Name", "EBackpackDragSource::Backpack" },
		{ "BlueprintType", "true" },
		{ "Equipment.DisplayName", "\xe8\xa3\x85\xe5\xa4\x87/\xe6\xad\xa6\xe5\x99\xa8\xe6\xa7\xbd" },
		{ "Equipment.Name", "EBackpackDragSource::Equipment" },
		{ "Ground.DisplayName", "\xe5\x9c\xb0\xe9\x9d\xa2/\xe9\x99\x84\xe8\xbf\x91" },
		{ "Ground.Name", "EBackpackDragSource::Ground" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBackpackDragSource::Ground", (int64)EBackpackDragSource::Ground },
		{ "EBackpackDragSource::Backpack", (int64)EBackpackDragSource::Backpack },
		{ "EBackpackDragSource::Equipment", (int64)EBackpackDragSource::Equipment },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PUBG_EBackpackDragSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PUBG,
	nullptr,
	"EBackpackDragSource",
	"EBackpackDragSource",
	Z_Construct_UEnum_PUBG_EBackpackDragSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_EBackpackDragSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_EBackpackDragSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PUBG_EBackpackDragSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PUBG_EBackpackDragSource()
{
	if (!Z_Registration_Info_UEnum_EBackpackDragSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBackpackDragSource.InnerSingleton, Z_Construct_UEnum_PUBG_EBackpackDragSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBackpackDragSource.InnerSingleton;
}
// ********** End Enum EBackpackDragSource *********************************************************

// ********** Begin Enum EItemType *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
static UEnum* EItemType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PUBG_EItemType, (UObject*)Z_Construct_UPackage__Script_PUBG(), TEXT("EItemType"));
	}
	return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
}
template<> PUBG_API UEnum* StaticEnum<EItemType>()
{
	return EItemType_StaticEnum();
}
struct Z_Construct_UEnum_PUBG_EItemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ammo.DisplayName", "\xe5\xbc\xb9\xe8\x8d\xaf" },
		{ "Ammo.Name", "EItemType::Ammo" },
		{ "Attachment.DisplayName", "\xe9\x85\x8d\xe4\xbb\xb6" },
		{ "Attachment.Name", "EItemType::Attachment" },
		{ "BlueprintType", "true" },
		{ "Energy.DisplayName", "\xe8\x83\xbd\xe9\x87\x8f\xe9\xa5\xae\xe6\x96\x99" },
		{ "Energy.Name", "EItemType::Energy" },
		{ "Equipment.DisplayName", "\xe8\xa3\x85\xe5\xa4\x87" },
		{ "Equipment.Name", "EItemType::Equipment" },
		{ "Healing.DisplayName", "\xe6\xb2\xbb\xe7\x96\x97\xe5\x93\x81" },
		{ "Healing.Name", "EItemType::Healing" },
		{ "MeleeWeapon.DisplayName", "\xe8\xbf\x91\xe6\x88\x98\xe6\xad\xa6\xe5\x99\xa8" },
		{ "MeleeWeapon.Name", "EItemType::MeleeWeapon" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
		{ "None.DisplayName", "\xe6\x97\xa0" },
		{ "None.Name", "EItemType::None" },
		{ "Throwable.DisplayName", "\xe6\x8a\x95\xe6\x8e\xb7\xe7\x89\xa9" },
		{ "Throwable.Name", "EItemType::Throwable" },
		{ "Weapon.DisplayName", "\xe6\x9e\xaa\xe6\xa2\xb0" },
		{ "Weapon.Name", "EItemType::Weapon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemType::None", (int64)EItemType::None },
		{ "EItemType::Weapon", (int64)EItemType::Weapon },
		{ "EItemType::MeleeWeapon", (int64)EItemType::MeleeWeapon },
		{ "EItemType::Ammo", (int64)EItemType::Ammo },
		{ "EItemType::Healing", (int64)EItemType::Healing },
		{ "EItemType::Energy", (int64)EItemType::Energy },
		{ "EItemType::Attachment", (int64)EItemType::Attachment },
		{ "EItemType::Equipment", (int64)EItemType::Equipment },
		{ "EItemType::Throwable", (int64)EItemType::Throwable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PUBG_EItemType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PUBG,
	nullptr,
	"EItemType",
	"EItemType",
	Z_Construct_UEnum_PUBG_EItemType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_EItemType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_EItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PUBG_EItemType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PUBG_EItemType()
{
	if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_PUBG_EItemType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
}
// ********** End Enum EItemType *******************************************************************

// ********** Begin Enum EEquipmentSlot ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEquipmentSlot;
static UEnum* EEquipmentSlot_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEquipmentSlot.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEquipmentSlot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PUBG_EEquipmentSlot, (UObject*)Z_Construct_UPackage__Script_PUBG(), TEXT("EEquipmentSlot"));
	}
	return Z_Registration_Info_UEnum_EEquipmentSlot.OuterSingleton;
}
template<> PUBG_API UEnum* StaticEnum<EEquipmentSlot>()
{
	return EEquipmentSlot_StaticEnum();
}
struct Z_Construct_UEnum_PUBG_EEquipmentSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Backpack.DisplayName", "\xe8\x83\x8c\xe5\x8c\x85" },
		{ "Backpack.Name", "EEquipmentSlot::Backpack" },
		{ "BlueprintType", "true" },
		{ "Glasses.DisplayName", "\xe7\x9c\xbc\xe9\x95\x9c" },
		{ "Glasses.Name", "EEquipmentSlot::Glasses" },
		{ "Hands.DisplayName", "\xe6\x89\x8b\xe9\x83\xa8" },
		{ "Hands.Name", "EEquipmentSlot::Hands" },
		{ "Head.DisplayName", "\xe5\xa4\xb4\xe9\x83\xa8" },
		{ "Head.Name", "EEquipmentSlot::Head" },
		{ "Helmet.DisplayName", "\xe5\xa4\xb4\xe7\x9b\x94" },
		{ "Helmet.Name", "EEquipmentSlot::Helmet" },
		{ "Jacket.DisplayName", "\xe5\xa4\x96\xe5\xa5\x97" },
		{ "Jacket.Name", "EEquipmentSlot::Jacket" },
		{ "Legs.DisplayName", "\xe8\x85\xbf\xe9\x83\xa8" },
		{ "Legs.Name", "EEquipmentSlot::Legs" },
		{ "Mask.DisplayName", "\xe9\x9d\xa2\xe7\xbd\xa9" },
		{ "Mask.Name", "EEquipmentSlot::Mask" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
		{ "None.DisplayName", "\xe6\x97\xa0" },
		{ "None.Name", "EEquipmentSlot::None" },
		{ "Shoes.DisplayName", "\xe9\x9e\x8b\xe5\xad\x90" },
		{ "Shoes.Name", "EEquipmentSlot::Shoes" },
		{ "Top.DisplayName", "\xe4\xb8\x8a\xe8\xa1\xa3" },
		{ "Top.Name", "EEquipmentSlot::Top" },
		{ "Vest.DisplayName", "\xe9\x98\xb2\xe5\xbc\xb9\xe8\xa1\xa3" },
		{ "Vest.Name", "EEquipmentSlot::Vest" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEquipmentSlot::None", (int64)EEquipmentSlot::None },
		{ "EEquipmentSlot::Helmet", (int64)EEquipmentSlot::Helmet },
		{ "EEquipmentSlot::Vest", (int64)EEquipmentSlot::Vest },
		{ "EEquipmentSlot::Backpack", (int64)EEquipmentSlot::Backpack },
		{ "EEquipmentSlot::Head", (int64)EEquipmentSlot::Head },
		{ "EEquipmentSlot::Top", (int64)EEquipmentSlot::Top },
		{ "EEquipmentSlot::Jacket", (int64)EEquipmentSlot::Jacket },
		{ "EEquipmentSlot::Legs", (int64)EEquipmentSlot::Legs },
		{ "EEquipmentSlot::Shoes", (int64)EEquipmentSlot::Shoes },
		{ "EEquipmentSlot::Hands", (int64)EEquipmentSlot::Hands },
		{ "EEquipmentSlot::Glasses", (int64)EEquipmentSlot::Glasses },
		{ "EEquipmentSlot::Mask", (int64)EEquipmentSlot::Mask },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PUBG_EEquipmentSlot_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PUBG,
	nullptr,
	"EEquipmentSlot",
	"EEquipmentSlot",
	Z_Construct_UEnum_PUBG_EEquipmentSlot_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_EEquipmentSlot_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_EEquipmentSlot_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PUBG_EEquipmentSlot_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PUBG_EEquipmentSlot()
{
	if (!Z_Registration_Info_UEnum_EEquipmentSlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEquipmentSlot.InnerSingleton, Z_Construct_UEnum_PUBG_EEquipmentSlot_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEquipmentSlot.InnerSingleton;
}
// ********** End Enum EEquipmentSlot **************************************************************

// ********** Begin Enum EWeaponType ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponType;
static UEnum* EWeaponType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PUBG_EWeaponType, (UObject*)Z_Construct_UPackage__Script_PUBG(), TEXT("EWeaponType"));
	}
	return Z_Registration_Info_UEnum_EWeaponType.OuterSingleton;
}
template<> PUBG_API UEnum* StaticEnum<EWeaponType>()
{
	return EWeaponType_StaticEnum();
}
struct Z_Construct_UEnum_PUBG_EWeaponType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MarksmanRifle.DisplayName", "\xe5\xb0\x84\xe6\x89\x8b\xe6\xad\xa5\xe6\x9e\xaa" },
		{ "MarksmanRifle.Name", "EWeaponType::MarksmanRifle" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
		{ "Pistol.DisplayName", "\xe6\x89\x8b\xe6\x9e\xaa" },
		{ "Pistol.Name", "EWeaponType::Pistol" },
		{ "Rifle.DisplayName", "\xe7\xaa\x81\xe5\x87\xbb\xe6\xad\xa5\xe6\x9e\xaa" },
		{ "Rifle.Name", "EWeaponType::Rifle" },
		{ "Shotgun.DisplayName", "\xe9\x9c\xb0\xe5\xbc\xb9\xe6\x9e\xaa" },
		{ "Shotgun.Name", "EWeaponType::Shotgun" },
		{ "Smg.DisplayName", "\xe5\x86\xb2\xe9\x94\x8b\xe6\x9e\xaa" },
		{ "Smg.Name", "EWeaponType::Smg" },
		{ "Sniper.DisplayName", "\xe7\x8b\x99\xe5\x87\xbb\xe6\x9e\xaa" },
		{ "Sniper.Name", "EWeaponType::Sniper" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeaponType::Rifle", (int64)EWeaponType::Rifle },
		{ "EWeaponType::MarksmanRifle", (int64)EWeaponType::MarksmanRifle },
		{ "EWeaponType::Sniper", (int64)EWeaponType::Sniper },
		{ "EWeaponType::Smg", (int64)EWeaponType::Smg },
		{ "EWeaponType::Shotgun", (int64)EWeaponType::Shotgun },
		{ "EWeaponType::Pistol", (int64)EWeaponType::Pistol },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PUBG_EWeaponType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PUBG,
	nullptr,
	"EWeaponType",
	"EWeaponType",
	Z_Construct_UEnum_PUBG_EWeaponType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_EWeaponType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_EWeaponType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PUBG_EWeaponType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PUBG_EWeaponType()
{
	if (!Z_Registration_Info_UEnum_EWeaponType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponType.InnerSingleton, Z_Construct_UEnum_PUBG_EWeaponType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponType.InnerSingleton;
}
// ********** End Enum EWeaponType *****************************************************************

// ********** Begin Enum EBackpackListMode *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBackpackListMode;
static UEnum* EBackpackListMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBackpackListMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBackpackListMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PUBG_EBackpackListMode, (UObject*)Z_Construct_UPackage__Script_PUBG(), TEXT("EBackpackListMode"));
	}
	return Z_Registration_Info_UEnum_EBackpackListMode.OuterSingleton;
}
template<> PUBG_API UEnum* StaticEnum<EBackpackListMode>()
{
	return EBackpackListMode_StaticEnum();
}
struct Z_Construct_UEnum_PUBG_EBackpackListMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Inventory.DisplayName", "\xe8\x83\x8c\xe5\x8c\x85\xe5\x88\x97\xe8\xa1\xa8" },
		{ "Inventory.Name", "EBackpackListMode::Inventory" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
		{ "Nearby.DisplayName", "\xe9\x99\x84\xe8\xbf\x91\xe7\x89\xa9\xe5\x93\x81\xe5\x88\x97\xe8\xa1\xa8" },
		{ "Nearby.Name", "EBackpackListMode::Nearby" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBackpackListMode::Inventory", (int64)EBackpackListMode::Inventory },
		{ "EBackpackListMode::Nearby", (int64)EBackpackListMode::Nearby },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PUBG_EBackpackListMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PUBG,
	nullptr,
	"EBackpackListMode",
	"EBackpackListMode",
	Z_Construct_UEnum_PUBG_EBackpackListMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_EBackpackListMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_EBackpackListMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PUBG_EBackpackListMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PUBG_EBackpackListMode()
{
	if (!Z_Registration_Info_UEnum_EBackpackListMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBackpackListMode.InnerSingleton, Z_Construct_UEnum_PUBG_EBackpackListMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBackpackListMode.InnerSingleton;
}
// ********** End Enum EBackpackListMode ***********************************************************

// ********** Begin Enum EAmmoType *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAmmoType;
static UEnum* EAmmoType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAmmoType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAmmoType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PUBG_EAmmoType, (UObject*)Z_Construct_UPackage__Script_PUBG(), TEXT("EAmmoType"));
	}
	return Z_Registration_Info_UEnum_EAmmoType.OuterSingleton;
}
template<> PUBG_API UEnum* StaticEnum<EAmmoType>()
{
	return EAmmoType_StaticEnum();
}
struct Z_Construct_UEnum_PUBG_EAmmoType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ammo_12G.DisplayName", "12\xe5\x8f\xb7\xe5\x8f\xa3\xe5\xbe\x84" },
		{ "Ammo_12G.Name", "EAmmoType::Ammo_12G" },
		{ "Ammo_556.DisplayName", "5.56\xe6\xaf\xab\xe7\xb1\xb3" },
		{ "Ammo_556.Name", "EAmmoType::Ammo_556" },
		{ "Ammo_5mm.DisplayName", "5\xe6\xaf\xab\xe7\xb1\xb3" },
		{ "Ammo_5mm.Name", "EAmmoType::Ammo_5mm" },
		{ "Ammo_762.DisplayName", "7.62\xe6\xaf\xab\xe7\xb1\xb3" },
		{ "Ammo_762.Name", "EAmmoType::Ammo_762" },
		{ "Ammo_9mm.DisplayName", "9\xe6\xaf\xab\xe7\xb1\xb3" },
		{ "Ammo_9mm.Name", "EAmmoType::Ammo_9mm" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAmmoType::Ammo_556", (int64)EAmmoType::Ammo_556 },
		{ "EAmmoType::Ammo_762", (int64)EAmmoType::Ammo_762 },
		{ "EAmmoType::Ammo_5mm", (int64)EAmmoType::Ammo_5mm },
		{ "EAmmoType::Ammo_9mm", (int64)EAmmoType::Ammo_9mm },
		{ "EAmmoType::Ammo_12G", (int64)EAmmoType::Ammo_12G },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PUBG_EAmmoType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PUBG,
	nullptr,
	"EAmmoType",
	"EAmmoType",
	Z_Construct_UEnum_PUBG_EAmmoType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_EAmmoType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_EAmmoType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PUBG_EAmmoType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PUBG_EAmmoType()
{
	if (!Z_Registration_Info_UEnum_EAmmoType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAmmoType.InnerSingleton, Z_Construct_UEnum_PUBG_EAmmoType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAmmoType.InnerSingleton;
}
// ********** End Enum EAmmoType *******************************************************************

// ********** Begin Enum EWeaponFireMode ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponFireMode;
static UEnum* EWeaponFireMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponFireMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponFireMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PUBG_EWeaponFireMode, (UObject*)Z_Construct_UPackage__Script_PUBG(), TEXT("EWeaponFireMode"));
	}
	return Z_Registration_Info_UEnum_EWeaponFireMode.OuterSingleton;
}
template<> PUBG_API UEnum* StaticEnum<EWeaponFireMode>()
{
	return EWeaponFireMode_StaticEnum();
}
struct Z_Construct_UEnum_PUBG_EWeaponFireMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Burst.DisplayName", "\xe4\xb8\x89\xe8\xbf\x9e\xe5\x8f\x91" },
		{ "Burst.Name", "EWeaponFireMode::Burst" },
		{ "FullAuto.DisplayName", "\xe5\x85\xa8\xe8\x87\xaa\xe5\x8a\xa8" },
		{ "FullAuto.Name", "EWeaponFireMode::FullAuto" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
		{ "SemiAuto.DisplayName", "\xe5\x8d\x95\xe5\x8f\x91" },
		{ "SemiAuto.Name", "EWeaponFireMode::SemiAuto" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeaponFireMode::SemiAuto", (int64)EWeaponFireMode::SemiAuto },
		{ "EWeaponFireMode::FullAuto", (int64)EWeaponFireMode::FullAuto },
		{ "EWeaponFireMode::Burst", (int64)EWeaponFireMode::Burst },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PUBG_EWeaponFireMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PUBG,
	nullptr,
	"EWeaponFireMode",
	"EWeaponFireMode",
	Z_Construct_UEnum_PUBG_EWeaponFireMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_EWeaponFireMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_EWeaponFireMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PUBG_EWeaponFireMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PUBG_EWeaponFireMode()
{
	if (!Z_Registration_Info_UEnum_EWeaponFireMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponFireMode.InnerSingleton, Z_Construct_UEnum_PUBG_EWeaponFireMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponFireMode.InnerSingleton;
}
// ********** End Enum EWeaponFireMode *************************************************************

// ********** Begin Enum EAttachmentSlot ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttachmentSlot;
static UEnum* EAttachmentSlot_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAttachmentSlot.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAttachmentSlot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PUBG_EAttachmentSlot, (UObject*)Z_Construct_UPackage__Script_PUBG(), TEXT("EAttachmentSlot"));
	}
	return Z_Registration_Info_UEnum_EAttachmentSlot.OuterSingleton;
}
template<> PUBG_API UEnum* StaticEnum<EAttachmentSlot>()
{
	return EAttachmentSlot_StaticEnum();
}
struct Z_Construct_UEnum_PUBG_EAttachmentSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CantedSight.DisplayName", "\xe4\xbe\xa7\xe9\x9d\xa2\xe7\x9e\x84\xe5\x85\xb7" },
		{ "CantedSight.Name", "EAttachmentSlot::CantedSight" },
		{ "Grip.DisplayName", "\xe6\x8f\xa1\xe6\x8a\x8a" },
		{ "Grip.Name", "EAttachmentSlot::Grip" },
		{ "Magazine.DisplayName", "\xe5\xbc\xb9\xe5\x8c\xa3" },
		{ "Magazine.Name", "EAttachmentSlot::Magazine" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
		{ "Muzzle.DisplayName", "\xe6\x9e\xaa\xe5\x8f\xa3" },
		{ "Muzzle.Name", "EAttachmentSlot::Muzzle" },
		{ "Scope.DisplayName", "\xe4\xb8\xbb\xe7\x9e\x84\xe5\x85\xb7" },
		{ "Scope.Name", "EAttachmentSlot::Scope" },
		{ "Stock.DisplayName", "\xe6\x9e\xaa\xe6\x89\x98" },
		{ "Stock.Name", "EAttachmentSlot::Stock" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAttachmentSlot::Scope", (int64)EAttachmentSlot::Scope },
		{ "EAttachmentSlot::CantedSight", (int64)EAttachmentSlot::CantedSight },
		{ "EAttachmentSlot::Muzzle", (int64)EAttachmentSlot::Muzzle },
		{ "EAttachmentSlot::Grip", (int64)EAttachmentSlot::Grip },
		{ "EAttachmentSlot::Magazine", (int64)EAttachmentSlot::Magazine },
		{ "EAttachmentSlot::Stock", (int64)EAttachmentSlot::Stock },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PUBG_EAttachmentSlot_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PUBG,
	nullptr,
	"EAttachmentSlot",
	"EAttachmentSlot",
	Z_Construct_UEnum_PUBG_EAttachmentSlot_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_EAttachmentSlot_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PUBG_EAttachmentSlot_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PUBG_EAttachmentSlot_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PUBG_EAttachmentSlot()
{
	if (!Z_Registration_Info_UEnum_EAttachmentSlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttachmentSlot.InnerSingleton, Z_Construct_UEnum_PUBG_EAttachmentSlot_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAttachmentSlot.InnerSingleton;
}
// ********** End Enum EAttachmentSlot *************************************************************

// ********** Begin ScriptStruct FItemAttribute ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FItemAttribute;
class UScriptStruct* FItemAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FItemAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FItemAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemAttribute, (UObject*)Z_Construct_UPackage__Script_PUBG(), TEXT("ItemAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_FItemAttribute.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FItemAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "ItemAttribute" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "ItemAttribute" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAttribute, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 133831994
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAttribute, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAttribute_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
	nullptr,
	&NewStructOps,
	"ItemAttribute",
	Z_Construct_UScriptStruct_FItemAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAttribute_Statics::PropPointers),
	sizeof(FItemAttribute),
	alignof(FItemAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_FItemAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FItemAttribute.InnerSingleton, Z_Construct_UScriptStruct_FItemAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FItemAttribute.InnerSingleton;
}
// ********** End ScriptStruct FItemAttribute ******************************************************

// ********** Begin ScriptStruct FItemAttachment ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FItemAttachment;
class UScriptStruct* FItemAttachment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FItemAttachment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FItemAttachment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemAttachment, (UObject*)Z_Construct_UPackage__Script_PUBG(), TEXT("ItemAttachment"));
	}
	return Z_Registration_Info_UScriptStruct_FItemAttachment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FItemAttachment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "Category", "ItemAttachment" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemInstance_MetaData[] = {
		{ "Category", "ItemAttachment" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemAttachment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemAttachment_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemAttachment_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAttachment, Slot), Z_Construct_UEnum_PUBG_EAttachmentSlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) }; // 1859959187
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemAttachment_Statics::NewProp_ItemInstance = { "ItemInstance", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAttachment, ItemInstance), Z_Construct_UClass_UBackpackItemInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemInstance_MetaData), NewProp_ItemInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemAttachment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAttachment_Statics::NewProp_Slot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAttachment_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAttachment_Statics::NewProp_ItemInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAttachment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemAttachment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
	nullptr,
	&NewStructOps,
	"ItemAttachment",
	Z_Construct_UScriptStruct_FItemAttachment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAttachment_Statics::PropPointers),
	sizeof(FItemAttachment),
	alignof(FItemAttachment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAttachment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemAttachment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemAttachment()
{
	if (!Z_Registration_Info_UScriptStruct_FItemAttachment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FItemAttachment.InnerSingleton, Z_Construct_UScriptStruct_FItemAttachment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FItemAttachment.InnerSingleton;
}
// ********** End ScriptStruct FItemAttachment *****************************************************

// ********** Begin ScriptStruct FRecoilSettings ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRecoilSettings;
class UScriptStruct* FRecoilSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRecoilSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRecoilSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecoilSettings, (UObject*)Z_Construct_UPackage__Script_PUBG(), TEXT("RecoilSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FRecoilSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRecoilSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalRecoil_MetaData[] = {
		{ "Category", "RecoilSettings" },
		{ "DisplayName", "\xe5\x9e\x82\xe7\x9b\xb4\xe5\x90\x8e\xe5\x9d\x90\xe5\x8a\x9b" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalRecoil_MetaData[] = {
		{ "Category", "RecoilSettings" },
		{ "DisplayName", "\xe6\xb0\xb4\xe5\xb9\xb3\xe5\x90\x8e\xe5\x9d\x90\xe5\x8a\x9b\xe9\x9a\x8f\xe6\x9c\xba" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilRecoverySpeed_MetaData[] = {
		{ "Category", "RecoilSettings" },
		{ "DisplayName", "\xe5\x90\x8e\xe5\x9d\x90\xe5\x8a\x9b\xe6\x81\xa2\xe5\xa4\x8d\xe9\x80\x9f\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilRecoveryDelay_MetaData[] = {
		{ "Category", "RecoilSettings" },
		{ "DisplayName", "\xe5\x90\x8e\xe5\x9d\x90\xe5\x8a\x9b\xe6\x81\xa2\xe5\xa4\x8d\xe5\xbb\xb6\xe8\xbf\x9f(\xe7\xa7\x92)" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchMultiplier_MetaData[] = {
		{ "Category", "RecoilSettings" },
		{ "DisplayName", "\xe8\xb9\xb2\xe4\xb8\x8b\xe5\x90\x8e\xe5\x9d\x90\xe5\x8a\x9b\xe5\x80\x8d\xe7\x8e\x87" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ADSRecoilMultiplier_MetaData[] = {
		{ "Category", "RecoilSettings" },
		{ "DisplayName", "\xe5\xbc\x80\xe9\x95\x9c\xe5\x90\x8e\xe5\x9d\x90\xe5\x8a\x9b\xe5\x80\x8d\xe7\x8e\x87" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalRecoil;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalRecoil;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoilRecoverySpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoilRecoveryDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ADSRecoilMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecoilSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecoilSettings_Statics::NewProp_VerticalRecoil = { "VerticalRecoil", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecoilSettings, VerticalRecoil), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalRecoil_MetaData), NewProp_VerticalRecoil_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecoilSettings_Statics::NewProp_HorizontalRecoil = { "HorizontalRecoil", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecoilSettings, HorizontalRecoil), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalRecoil_MetaData), NewProp_HorizontalRecoil_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecoilSettings_Statics::NewProp_RecoilRecoverySpeed = { "RecoilRecoverySpeed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecoilSettings, RecoilRecoverySpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilRecoverySpeed_MetaData), NewProp_RecoilRecoverySpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecoilSettings_Statics::NewProp_RecoilRecoveryDelay = { "RecoilRecoveryDelay", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecoilSettings, RecoilRecoveryDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilRecoveryDelay_MetaData), NewProp_RecoilRecoveryDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecoilSettings_Statics::NewProp_CrouchMultiplier = { "CrouchMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecoilSettings, CrouchMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchMultiplier_MetaData), NewProp_CrouchMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecoilSettings_Statics::NewProp_ADSRecoilMultiplier = { "ADSRecoilMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecoilSettings, ADSRecoilMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ADSRecoilMultiplier_MetaData), NewProp_ADSRecoilMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecoilSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecoilSettings_Statics::NewProp_VerticalRecoil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecoilSettings_Statics::NewProp_HorizontalRecoil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecoilSettings_Statics::NewProp_RecoilRecoverySpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecoilSettings_Statics::NewProp_RecoilRecoveryDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecoilSettings_Statics::NewProp_CrouchMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecoilSettings_Statics::NewProp_ADSRecoilMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecoilSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecoilSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
	nullptr,
	&NewStructOps,
	"RecoilSettings",
	Z_Construct_UScriptStruct_FRecoilSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecoilSettings_Statics::PropPointers),
	sizeof(FRecoilSettings),
	alignof(FRecoilSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecoilSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRecoilSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRecoilSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FRecoilSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRecoilSettings.InnerSingleton, Z_Construct_UScriptStruct_FRecoilSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRecoilSettings.InnerSingleton;
}
// ********** End ScriptStruct FRecoilSettings *****************************************************

// ********** Begin ScriptStruct FSpreadSettings ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSpreadSettings;
class UScriptStruct* FSpreadSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSpreadSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSpreadSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpreadSettings, (UObject*)Z_Construct_UPackage__Script_PUBG(), TEXT("SpreadSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FSpreadSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSpreadSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseSpreadAngle_MetaData[] = {
		{ "Category", "SpreadSettings" },
		{ "DisplayName", "\xe5\x9f\xba\xe7\xa1\x80\xe6\x95\xa3\xe5\xb0\x84\xe8\xa7\x92\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveMultiplier_MetaData[] = {
		{ "Category", "SpreadSettings" },
		{ "DisplayName", "\xe7\xa7\xbb\xe5\x8a\xa8\xe6\x95\xa3\xe5\xb0\x84\xe5\x80\x8d\xe6\x95\xb0" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkMultiplier_MetaData[] = {
		{ "Category", "SpreadSettings" },
		{ "DisplayName", "\xe9\x9d\x99\xe6\xad\xa5\xe6\x95\xa3\xe5\xb0\x84\xe5\x80\x8d\xe6\x95\xb0" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintMultiplier_MetaData[] = {
		{ "Category", "SpreadSettings" },
		{ "DisplayName", "\xe5\x86\xb2\xe5\x88\xba\xe6\x95\xa3\xe5\xb0\x84\xe5\x80\x8d\xe6\x95\xb0" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchMultiplier_MetaData[] = {
		{ "Category", "SpreadSettings" },
		{ "DisplayName", "\xe8\xb9\xb2\xe4\xb8\x8b\xe6\x95\xa3\xe5\xb0\x84\xe5\x80\x8d\xe6\x95\xb0" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirMultiplier_MetaData[] = {
		{ "Category", "SpreadSettings" },
		{ "DisplayName", "\xe7\xa9\xba\xe4\xb8\xad\xe6\x95\xa3\xe5\xb0\x84\xe5\x80\x8d\xe6\x95\xb0" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadPerShot_MetaData[] = {
		{ "Category", "SpreadSettings" },
		{ "DisplayName", "\xe8\xbf\x9e\xe5\xb0\x84\xe7\xb4\xaf\xe7\xa7\xaf\xe8\xa7\x92\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpreadAngle_MetaData[] = {
		{ "Category", "SpreadSettings" },
		{ "DisplayName", "\xe6\x9c\x80\xe5\xa4\xa7\xe6\x95\xa3\xe5\xb8\x83\xe8\xa7\x92\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadRecoveryDelay_MetaData[] = {
		{ "Category", "SpreadSettings" },
		{ "DisplayName", "\xe6\x95\xa3\xe5\xb8\x83\xe6\x81\xa2\xe5\xa4\x8d\xe5\xbb\xb6\xe8\xbf\x9f(\xe7\xa7\x92)" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadRecoverySpeed_MetaData[] = {
		{ "Category", "SpreadSettings" },
		{ "DisplayName", "\xe6\x95\xa3\xe5\xb8\x83\xe6\x81\xa2\xe5\xa4\x8d\xe9\x80\x9f\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ADSSpreadMultiplier_MetaData[] = {
		{ "Category", "SpreadSettings" },
		{ "DisplayName", "\xe5\xbc\x80\xe9\x95\x9c\xe6\x95\xa3\xe5\xb8\x83\xe5\x80\x8d\xe7\x8e\x87" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSpreadAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadPerShot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpreadAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadRecoveryDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadRecoverySpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ADSSpreadMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpreadSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpreadSettings_Statics::NewProp_BaseSpreadAngle = { "BaseSpreadAngle", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpreadSettings, BaseSpreadAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseSpreadAngle_MetaData), NewProp_BaseSpreadAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpreadSettings_Statics::NewProp_MoveMultiplier = { "MoveMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpreadSettings, MoveMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveMultiplier_MetaData), NewProp_MoveMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpreadSettings_Statics::NewProp_WalkMultiplier = { "WalkMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpreadSettings, WalkMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkMultiplier_MetaData), NewProp_WalkMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpreadSettings_Statics::NewProp_SprintMultiplier = { "SprintMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpreadSettings, SprintMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintMultiplier_MetaData), NewProp_SprintMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpreadSettings_Statics::NewProp_CrouchMultiplier = { "CrouchMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpreadSettings, CrouchMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchMultiplier_MetaData), NewProp_CrouchMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpreadSettings_Statics::NewProp_AirMultiplier = { "AirMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpreadSettings, AirMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirMultiplier_MetaData), NewProp_AirMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpreadSettings_Statics::NewProp_SpreadPerShot = { "SpreadPerShot", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpreadSettings, SpreadPerShot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadPerShot_MetaData), NewProp_SpreadPerShot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpreadSettings_Statics::NewProp_MaxSpreadAngle = { "MaxSpreadAngle", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpreadSettings, MaxSpreadAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpreadAngle_MetaData), NewProp_MaxSpreadAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpreadSettings_Statics::NewProp_SpreadRecoveryDelay = { "SpreadRecoveryDelay", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpreadSettings, SpreadRecoveryDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadRecoveryDelay_MetaData), NewProp_SpreadRecoveryDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpreadSettings_Statics::NewProp_SpreadRecoverySpeed = { "SpreadRecoverySpeed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpreadSettings, SpreadRecoverySpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadRecoverySpeed_MetaData), NewProp_SpreadRecoverySpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpreadSettings_Statics::NewProp_ADSSpreadMultiplier = { "ADSSpreadMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpreadSettings, ADSSpreadMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ADSSpreadMultiplier_MetaData), NewProp_ADSSpreadMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpreadSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpreadSettings_Statics::NewProp_BaseSpreadAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpreadSettings_Statics::NewProp_MoveMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpreadSettings_Statics::NewProp_WalkMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpreadSettings_Statics::NewProp_SprintMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpreadSettings_Statics::NewProp_CrouchMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpreadSettings_Statics::NewProp_AirMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpreadSettings_Statics::NewProp_SpreadPerShot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpreadSettings_Statics::NewProp_MaxSpreadAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpreadSettings_Statics::NewProp_SpreadRecoveryDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpreadSettings_Statics::NewProp_SpreadRecoverySpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpreadSettings_Statics::NewProp_ADSSpreadMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpreadSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpreadSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
	nullptr,
	&NewStructOps,
	"SpreadSettings",
	Z_Construct_UScriptStruct_FSpreadSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpreadSettings_Statics::PropPointers),
	sizeof(FSpreadSettings),
	alignof(FSpreadSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpreadSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpreadSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpreadSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FSpreadSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSpreadSettings.InnerSingleton, Z_Construct_UScriptStruct_FSpreadSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSpreadSettings.InnerSingleton;
}
// ********** End ScriptStruct FSpreadSettings *****************************************************

// ********** Begin ScriptStruct FCharacterDirectionAnimations *************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCharacterDirectionAnimations;
class UScriptStruct* FCharacterDirectionAnimations::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCharacterDirectionAnimations.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCharacterDirectionAnimations.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterDirectionAnimations, (UObject*)Z_Construct_UPackage__Script_PUBG(), TEXT("CharacterDirectionAnimations"));
	}
	return Z_Registration_Info_UScriptStruct_FCharacterDirectionAnimations.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCharacterDirectionAnimations_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardAnimInstance_MetaData[] = {
		{ "Category", "CharacterDirectionAnimations" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackwardAnimInstance_MetaData[] = {
		{ "Category", "CharacterDirectionAnimations" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftAnimInstance_MetaData[] = {
		{ "Category", "CharacterDirectionAnimations" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightAnimInstance_MetaData[] = {
		{ "Category", "CharacterDirectionAnimations" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForwardAnimInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackwardAnimInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftAnimInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightAnimInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterDirectionAnimations>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterDirectionAnimations_Statics::NewProp_ForwardAnimInstance = { "ForwardAnimInstance", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDirectionAnimations, ForwardAnimInstance), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardAnimInstance_MetaData), NewProp_ForwardAnimInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterDirectionAnimations_Statics::NewProp_BackwardAnimInstance = { "BackwardAnimInstance", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDirectionAnimations, BackwardAnimInstance), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackwardAnimInstance_MetaData), NewProp_BackwardAnimInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterDirectionAnimations_Statics::NewProp_LeftAnimInstance = { "LeftAnimInstance", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDirectionAnimations, LeftAnimInstance), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftAnimInstance_MetaData), NewProp_LeftAnimInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterDirectionAnimations_Statics::NewProp_RightAnimInstance = { "RightAnimInstance", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDirectionAnimations, RightAnimInstance), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightAnimInstance_MetaData), NewProp_RightAnimInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterDirectionAnimations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDirectionAnimations_Statics::NewProp_ForwardAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDirectionAnimations_Statics::NewProp_BackwardAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDirectionAnimations_Statics::NewProp_LeftAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDirectionAnimations_Statics::NewProp_RightAnimInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDirectionAnimations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterDirectionAnimations_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
	nullptr,
	&NewStructOps,
	"CharacterDirectionAnimations",
	Z_Construct_UScriptStruct_FCharacterDirectionAnimations_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDirectionAnimations_Statics::PropPointers),
	sizeof(FCharacterDirectionAnimations),
	alignof(FCharacterDirectionAnimations),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDirectionAnimations_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterDirectionAnimations_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterDirectionAnimations()
{
	if (!Z_Registration_Info_UScriptStruct_FCharacterDirectionAnimations.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCharacterDirectionAnimations.InnerSingleton, Z_Construct_UScriptStruct_FCharacterDirectionAnimations_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCharacterDirectionAnimations.InnerSingleton;
}
// ********** End ScriptStruct FCharacterDirectionAnimations ***************************************

// ********** Begin ScriptStruct FCharacterTurnAngleAnimations *************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCharacterTurnAngleAnimations;
class UScriptStruct* FCharacterTurnAngleAnimations::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCharacterTurnAngleAnimations.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCharacterTurnAngleAnimations.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterTurnAngleAnimations, (UObject*)Z_Construct_UPackage__Script_PUBG(), TEXT("CharacterTurnAngleAnimations"));
	}
	return Z_Registration_Info_UScriptStruct_FCharacterTurnAngleAnimations.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCharacterTurnAngleAnimations_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnRight90_MetaData[] = {
		{ "Category", "CharacterTurnAngleAnimations" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnLeft90_MetaData[] = {
		{ "Category", "CharacterTurnAngleAnimations" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnRight180_MetaData[] = {
		{ "Category", "CharacterTurnAngleAnimations" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnLeft180_MetaData[] = {
		{ "Category", "CharacterTurnAngleAnimations" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnRight90;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnLeft90;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnRight180;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnLeft180;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterTurnAngleAnimations>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterTurnAngleAnimations_Statics::NewProp_TurnRight90 = { "TurnRight90", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterTurnAngleAnimations, TurnRight90), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnRight90_MetaData), NewProp_TurnRight90_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterTurnAngleAnimations_Statics::NewProp_TurnLeft90 = { "TurnLeft90", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterTurnAngleAnimations, TurnLeft90), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnLeft90_MetaData), NewProp_TurnLeft90_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterTurnAngleAnimations_Statics::NewProp_TurnRight180 = { "TurnRight180", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterTurnAngleAnimations, TurnRight180), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnRight180_MetaData), NewProp_TurnRight180_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterTurnAngleAnimations_Statics::NewProp_TurnLeft180 = { "TurnLeft180", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterTurnAngleAnimations, TurnLeft180), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnLeft180_MetaData), NewProp_TurnLeft180_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterTurnAngleAnimations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterTurnAngleAnimations_Statics::NewProp_TurnRight90,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterTurnAngleAnimations_Statics::NewProp_TurnLeft90,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterTurnAngleAnimations_Statics::NewProp_TurnRight180,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterTurnAngleAnimations_Statics::NewProp_TurnLeft180,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterTurnAngleAnimations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterTurnAngleAnimations_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
	nullptr,
	&NewStructOps,
	"CharacterTurnAngleAnimations",
	Z_Construct_UScriptStruct_FCharacterTurnAngleAnimations_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterTurnAngleAnimations_Statics::PropPointers),
	sizeof(FCharacterTurnAngleAnimations),
	alignof(FCharacterTurnAngleAnimations),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterTurnAngleAnimations_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterTurnAngleAnimations_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterTurnAngleAnimations()
{
	if (!Z_Registration_Info_UScriptStruct_FCharacterTurnAngleAnimations.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCharacterTurnAngleAnimations.InnerSingleton, Z_Construct_UScriptStruct_FCharacterTurnAngleAnimations_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCharacterTurnAngleAnimations.InnerSingleton;
}
// ********** End ScriptStruct FCharacterTurnAngleAnimations ***************************************

// ********** Begin ScriptStruct FCharacterGaitSettings ********************************************
static_assert(std::is_polymorphic<FCharacterGaitSettings>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCharacterGaitSettings cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCharacterGaitSettings;
class UScriptStruct* FCharacterGaitSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCharacterGaitSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCharacterGaitSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterGaitSettings, (UObject*)Z_Construct_UPackage__Script_PUBG(), TEXT("CharacterGaitSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FCharacterGaitSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCharacterGaitSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeed_MetaData[] = {
		{ "Category", "CharacterGaitSettings" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterGaitSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterGaitSettings_Statics::NewProp_MaxWalkSpeed = { "MaxWalkSpeed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterGaitSettings, MaxWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWalkSpeed_MetaData), NewProp_MaxWalkSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterGaitSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterGaitSettings_Statics::NewProp_MaxWalkSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterGaitSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterGaitSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"CharacterGaitSettings",
	Z_Construct_UScriptStruct_FCharacterGaitSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterGaitSettings_Statics::PropPointers),
	sizeof(FCharacterGaitSettings),
	alignof(FCharacterGaitSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterGaitSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterGaitSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterGaitSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FCharacterGaitSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCharacterGaitSettings.InnerSingleton, Z_Construct_UScriptStruct_FCharacterGaitSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCharacterGaitSettings.InnerSingleton;
}
// ********** End ScriptStruct FCharacterGaitSettings **********************************************

// ********** Begin ScriptStruct FTPPCameraSettings ************************************************
static_assert(std::is_polymorphic<FTPPCameraSettings>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTPPCameraSettings cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTPPCameraSettings;
class UScriptStruct* FTPPCameraSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTPPCameraSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTPPCameraSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTPPCameraSettings, (UObject*)Z_Construct_UPackage__Script_PUBG(), TEXT("TPPCameraSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FTPPCameraSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTPPCameraSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetArmLength_MetaData[] = {
		{ "Category", "TPPCameraSettings" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketOffset_MetaData[] = {
		{ "Category", "TPPCameraSettings" },
		{ "ModuleRelativePath", "Public/PUBGType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetArmLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTPPCameraSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTPPCameraSettings_Statics::NewProp_TargetArmLength = { "TargetArmLength", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTPPCameraSettings, TargetArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetArmLength_MetaData), NewProp_TargetArmLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTPPCameraSettings_Statics::NewProp_SocketOffset = { "SocketOffset", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTPPCameraSettings, SocketOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketOffset_MetaData), NewProp_SocketOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTPPCameraSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTPPCameraSettings_Statics::NewProp_TargetArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTPPCameraSettings_Statics::NewProp_SocketOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTPPCameraSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTPPCameraSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"TPPCameraSettings",
	Z_Construct_UScriptStruct_FTPPCameraSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTPPCameraSettings_Statics::PropPointers),
	sizeof(FTPPCameraSettings),
	alignof(FTPPCameraSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTPPCameraSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTPPCameraSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTPPCameraSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FTPPCameraSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTPPCameraSettings.InnerSingleton, Z_Construct_UScriptStruct_FTPPCameraSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTPPCameraSettings.InnerSingleton;
}
// ********** End ScriptStruct FTPPCameraSettings **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PUBGType_h__Script_PUBG_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECharacterDirection_StaticEnum, TEXT("ECharacterDirection"), &Z_Registration_Info_UEnum_ECharacterDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1925861661U) },
		{ ECharacterStance_StaticEnum, TEXT("ECharacterStance"), &Z_Registration_Info_UEnum_ECharacterStance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 570544318U) },
		{ ECharacterGait_StaticEnum, TEXT("ECharacterGait"), &Z_Registration_Info_UEnum_ECharacterGait, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 515073860U) },
		{ ECharacterHeldSlot_StaticEnum, TEXT("ECharacterHeldSlot"), &Z_Registration_Info_UEnum_ECharacterHeldSlot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3266210547U) },
		{ EAsyncPushWidgetState_StaticEnum, TEXT("EAsyncPushWidgetState"), &Z_Registration_Info_UEnum_EAsyncPushWidgetState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1000021643U) },
		{ EBackpackDragSource_StaticEnum, TEXT("EBackpackDragSource"), &Z_Registration_Info_UEnum_EBackpackDragSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1117589536U) },
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3672737843U) },
		{ EEquipmentSlot_StaticEnum, TEXT("EEquipmentSlot"), &Z_Registration_Info_UEnum_EEquipmentSlot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 218928670U) },
		{ EWeaponType_StaticEnum, TEXT("EWeaponType"), &Z_Registration_Info_UEnum_EWeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 751618633U) },
		{ EBackpackListMode_StaticEnum, TEXT("EBackpackListMode"), &Z_Registration_Info_UEnum_EBackpackListMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 508334500U) },
		{ EAmmoType_StaticEnum, TEXT("EAmmoType"), &Z_Registration_Info_UEnum_EAmmoType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3055396827U) },
		{ EWeaponFireMode_StaticEnum, TEXT("EWeaponFireMode"), &Z_Registration_Info_UEnum_EWeaponFireMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3535711797U) },
		{ EAttachmentSlot_StaticEnum, TEXT("EAttachmentSlot"), &Z_Registration_Info_UEnum_EAttachmentSlot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1859959187U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemAttribute::StaticStruct, Z_Construct_UScriptStruct_FItemAttribute_Statics::NewStructOps, TEXT("ItemAttribute"), &Z_Registration_Info_UScriptStruct_FItemAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemAttribute), 3623147177U) },
		{ FItemAttachment::StaticStruct, Z_Construct_UScriptStruct_FItemAttachment_Statics::NewStructOps, TEXT("ItemAttachment"), &Z_Registration_Info_UScriptStruct_FItemAttachment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemAttachment), 3164557440U) },
		{ FRecoilSettings::StaticStruct, Z_Construct_UScriptStruct_FRecoilSettings_Statics::NewStructOps, TEXT("RecoilSettings"), &Z_Registration_Info_UScriptStruct_FRecoilSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecoilSettings), 3607530075U) },
		{ FSpreadSettings::StaticStruct, Z_Construct_UScriptStruct_FSpreadSettings_Statics::NewStructOps, TEXT("SpreadSettings"), &Z_Registration_Info_UScriptStruct_FSpreadSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpreadSettings), 4294589840U) },
		{ FCharacterDirectionAnimations::StaticStruct, Z_Construct_UScriptStruct_FCharacterDirectionAnimations_Statics::NewStructOps, TEXT("CharacterDirectionAnimations"), &Z_Registration_Info_UScriptStruct_FCharacterDirectionAnimations, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterDirectionAnimations), 2475928603U) },
		{ FCharacterTurnAngleAnimations::StaticStruct, Z_Construct_UScriptStruct_FCharacterTurnAngleAnimations_Statics::NewStructOps, TEXT("CharacterTurnAngleAnimations"), &Z_Registration_Info_UScriptStruct_FCharacterTurnAngleAnimations, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterTurnAngleAnimations), 3528204426U) },
		{ FCharacterGaitSettings::StaticStruct, Z_Construct_UScriptStruct_FCharacterGaitSettings_Statics::NewStructOps, TEXT("CharacterGaitSettings"), &Z_Registration_Info_UScriptStruct_FCharacterGaitSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterGaitSettings), 3482465836U) },
		{ FTPPCameraSettings::StaticStruct, Z_Construct_UScriptStruct_FTPPCameraSettings_Statics::NewStructOps, TEXT("TPPCameraSettings"), &Z_Registration_Info_UScriptStruct_FTPPCameraSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTPPCameraSettings), 185474248U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PUBGType_h__Script_PUBG_316313253(TEXT("/Script/PUBG"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PUBGType_h__Script_PUBG_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PUBGType_h__Script_PUBG_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PUBGType_h__Script_PUBG_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_PUBGType_h__Script_PUBG_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
