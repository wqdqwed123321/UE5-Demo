// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Object/BackpackItemFragment_Weapon.h"
#include "PUBGType.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBackpackItemFragment_Weapon() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
PUBG_API UClass* Z_Construct_UClass_ABulletProjectile_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemDefinition_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment_Weapon();
PUBG_API UClass* Z_Construct_UClass_UBackpackItemFragment_Weapon_NoRegister();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EAmmoType();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EAttachmentSlot();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EWeaponFireMode();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_EWeaponType();
PUBG_API UScriptStruct* Z_Construct_UScriptStruct_FRecoilSettings();
PUBG_API UScriptStruct* Z_Construct_UScriptStruct_FSpreadSettings();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBackpackItemFragment_Weapon *********************************************
void UBackpackItemFragment_Weapon::StaticRegisterNativesUBackpackItemFragment_Weapon()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBackpackItemFragment_Weapon;
UClass* UBackpackItemFragment_Weapon::GetPrivateStaticClass()
{
	using TClass = UBackpackItemFragment_Weapon;
	if (!Z_Registration_Info_UClass_UBackpackItemFragment_Weapon.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BackpackItemFragment_Weapon"),
			Z_Registration_Info_UClass_UBackpackItemFragment_Weapon.InnerSingleton,
			StaticRegisterNativesUBackpackItemFragment_Weapon,
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
	return Z_Registration_Info_UClass_UBackpackItemFragment_Weapon.InnerSingleton;
}
UClass* Z_Construct_UClass_UBackpackItemFragment_Weapon_NoRegister()
{
	return UBackpackItemFragment_Weapon::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Object/BackpackItemFragment_Weapon.h" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe5\x9f\xba\xe7\xa1\x80\xe4\xbc\xa4\xe5\xae\xb3" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadshotMultiplier_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe7\x88\x86\xe5\xa4\xb4\xe5\x80\x8d\xe7\x8e\x87" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChestMultiplier_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe8\x83\xb8\xe9\x83\xa8\xe5\x80\x8d\xe7\x8e\x87" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FalloffStartDistance_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe8\xa1\xb0\xe5\x87\x8f\xe8\xb5\xb7\xe7\x82\xb9\xe8\xb7\x9d\xe7\xa6\xbb(\xe5\x8e\x98\xe7\xb1\xb3)" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FalloffEndDistance_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe8\xa1\xb0\xe5\x87\x8f\xe7\xbb\x88\xe7\x82\xb9\xe8\xb7\x9d\xe7\xa6\xbb(\xe5\x8e\x98\xe7\xb1\xb3)" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDamageMultiplier_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe6\x9c\x80\xe4\xbd\x8e\xe4\xbc\xa4\xe5\xae\xb3\xe8\xa1\xb0\xe5\x87\x8f\xe7\xb3\xbb\xe6\x95\xb0" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe6\x9c\x80\xe5\xa4\xa7\xe5\xb0\x84\xe7\xba\xbf\xe8\xb7\x9d\xe7\xa6\xbb(\xe5\x8e\x98\xe7\xb1\xb3)" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleVelocity_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe5\xad\x90\xe5\xbc\xb9\xe5\x88\x9d\xe9\x80\x9f(m/s)" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundsPerMinute_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe5\xb0\x84\xe9\x80\x9f(\xe5\x8f\x91/\xe5\x88\x86\xe9\x92\x9f)" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagazineSize_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe5\xbc\xb9\xe5\x8c\xa3\xe5\xae\xb9\xe9\x87\x8f" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadMontage_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe6\x8d\xa2\xe5\xbc\xb9\xe5\x8a\xa8\xe7\x94\xbb(\xe6\x9c\x89\xe5\xbc\xb9)" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadEmptyMontage_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe6\x8d\xa2\xe5\xbc\xb9\xe5\x8a\xa8\xe7\x94\xbb(\xe7\xa9\xba\xe4\xbb\x93)" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAmmoType_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe4\xbd\xbf\xe7\x94\xa8\xe5\xbc\xb9\xe8\x8d\xaf\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe6\xad\xa6\xe5\x99\xa8\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilSettings_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe5\x90\x8e\xe5\x9d\x90\xe5\x8a\x9b\xe9\x85\x8d\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadSettings_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe6\x95\xa3\xe5\xb8\x83\xe9\x85\x8d\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportedFireModes_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe6\x94\xaf\xe6\x8c\x81\xe7\x9a\x84\xe5\xbc\x80\xe7\x81\xab\xe6\xa8\xa1\xe5\xbc\x8f" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportedAttachmentSlots_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe6\x94\xaf\xe6\x8c\x81\xe7\x9a\x84\xe9\x85\x8d\xe4\xbb\xb6\xe6\x8f\x92\xe6\xa7\xbd" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletClass_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe5\xad\x90\xe5\xbc\xb9\xe8\x93\x9d\xe5\x9b\xbe\xe7\xb1\xbb" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleSocketName_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe6\x9e\xaa\xe5\x8f\xa3\xe6\x8f\x92\xe6\xa7\xbd\xe5\x90\x8d" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallisticGravityScale_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe5\xbc\xb9\xe9\x81\x93\xe9\x87\x8d\xe5\x8a\x9b\xe5\x80\x8d\xe7\x8e\x87" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe5\xbc\x80\xe7\x81\xab\xe9\x9f\xb3\xe6\x95\x88" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmptySound_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe7\xa9\xba\xe6\x9e\xaa\xe9\x9f\xb3\xe6\x95\x88" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchFireModeMontage_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe5\x88\x87\xe6\x8d\xa2\xe5\xb0\x84\xe5\x87\xbb\xe6\xa8\xa1\xe5\xbc\x8f\xe5\x8a\xa8\xe7\x94\xbb" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponFireMontage_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe6\xad\xa6\xe5\x99\xa8\xe5\xbc\x80\xe7\x81\xab\xe5\x8a\xa8\xe7\x94\xbb" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterFireMontage_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe8\xa7\x92\xe8\x89\xb2\xe5\xbc\x80\xe7\x81\xab\xe5\x8a\xa8\xe7\x94\xbb" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlashFX_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe6\x9e\xaa\xe5\x8f\xa3\xe7\xb2\x92\xe5\xad\x90\xe7\x89\xb9\xe6\x95\x88" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttachments_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe9\xbb\x98\xe8\xae\xa4\xe9\x85\x8d\xe4\xbb\xb6" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAnimInstanceClass_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe6\xad\xa6\xe5\x99\xa8\xe5\x8a\xa8\xe7\x94\xbb\xe8\x93\x9d\xe5\x9b\xbe\xe7\xb1\xbb" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShellEjectFX_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe5\xbc\xb9\xe5\xa3\xb3\xe6\x8a\x9b\xe5\x87\xba\xe7\x89\xb9\xe6\x95\x88" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShellEjectSocketName_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe6\x8a\x9b\xe5\xa3\xb3\xe6\x8f\x92\xe6\xa7\xbd\xe5\x90\x8d" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShellEjectMesh_MetaData[] = {
		{ "Category", "BackpackItemFragment_Weapon" },
		{ "DisplayName", "\xe5\xbc\xb9\xe5\xa3\xb3\xe7\xbd\x91\xe6\xa0\xbc" },
		{ "ModuleRelativePath", "Public/Object/BackpackItemFragment_Weapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadshotMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChestMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FalloffStartDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FalloffEndDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDamageMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MuzzleVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoundsPerMinute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MagazineSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadEmptyMontage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponAmmoType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponAmmoType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecoilSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpreadSettings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SupportedFireModes_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SupportedFireModes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedFireModes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SupportedAttachmentSlots_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SupportedAttachmentSlots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedAttachmentSlots;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BulletClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MuzzleSocketName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BallisticGravityScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptySound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchFireModeMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponFireMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterFireMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlashFX;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultAttachments_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultAttachments_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultAttachments_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DefaultAttachments;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponAnimInstanceClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShellEjectFX;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ShellEjectSocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShellEjectMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackpackItemFragment_Weapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDamage_MetaData), NewProp_BaseDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_HeadshotMultiplier = { "HeadshotMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, HeadshotMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadshotMultiplier_MetaData), NewProp_HeadshotMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_ChestMultiplier = { "ChestMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, ChestMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChestMultiplier_MetaData), NewProp_ChestMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_FalloffStartDistance = { "FalloffStartDistance", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, FalloffStartDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FalloffStartDistance_MetaData), NewProp_FalloffStartDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_FalloffEndDistance = { "FalloffEndDistance", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, FalloffEndDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FalloffEndDistance_MetaData), NewProp_FalloffEndDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_MinDamageMultiplier = { "MinDamageMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, MinDamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDamageMultiplier_MetaData), NewProp_MinDamageMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_MuzzleVelocity = { "MuzzleVelocity", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, MuzzleVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleVelocity_MetaData), NewProp_MuzzleVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_RoundsPerMinute = { "RoundsPerMinute", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, RoundsPerMinute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundsPerMinute_MetaData), NewProp_RoundsPerMinute_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_MagazineSize = { "MagazineSize", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, MagazineSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagazineSize_MetaData), NewProp_MagazineSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_ReloadMontage = { "ReloadMontage", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, ReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadMontage_MetaData), NewProp_ReloadMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_ReloadEmptyMontage = { "ReloadEmptyMontage", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, ReloadEmptyMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadEmptyMontage_MetaData), NewProp_ReloadEmptyMontage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_WeaponAmmoType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_WeaponAmmoType = { "WeaponAmmoType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, WeaponAmmoType), Z_Construct_UEnum_PUBG_EAmmoType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAmmoType_MetaData), NewProp_WeaponAmmoType_MetaData) }; // 3055396827
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, WeaponType), Z_Construct_UEnum_PUBG_EWeaponType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponType_MetaData), NewProp_WeaponType_MetaData) }; // 751618633
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_RecoilSettings = { "RecoilSettings", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, RecoilSettings), Z_Construct_UScriptStruct_FRecoilSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilSettings_MetaData), NewProp_RecoilSettings_MetaData) }; // 1496086511
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_SpreadSettings = { "SpreadSettings", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, SpreadSettings), Z_Construct_UScriptStruct_FSpreadSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadSettings_MetaData), NewProp_SpreadSettings_MetaData) }; // 4294589840
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_SupportedFireModes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_SupportedFireModes_Inner = { "SupportedFireModes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PUBG_EWeaponFireMode, METADATA_PARAMS(0, nullptr) }; // 3535711797
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_SupportedFireModes = { "SupportedFireModes", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, SupportedFireModes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportedFireModes_MetaData), NewProp_SupportedFireModes_MetaData) }; // 3535711797
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_SupportedAttachmentSlots_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_SupportedAttachmentSlots_Inner = { "SupportedAttachmentSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PUBG_EAttachmentSlot, METADATA_PARAMS(0, nullptr) }; // 1859959187
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_SupportedAttachmentSlots = { "SupportedAttachmentSlots", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, SupportedAttachmentSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportedAttachmentSlots_MetaData), NewProp_SupportedAttachmentSlots_MetaData) }; // 1859959187
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, BulletClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABulletProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletClass_MetaData), NewProp_BulletClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_MuzzleSocketName = { "MuzzleSocketName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, MuzzleSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleSocketName_MetaData), NewProp_MuzzleSocketName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_BallisticGravityScale = { "BallisticGravityScale", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, BallisticGravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallisticGravityScale_MetaData), NewProp_BallisticGravityScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireSound_MetaData), NewProp_FireSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_EmptySound = { "EmptySound", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, EmptySound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmptySound_MetaData), NewProp_EmptySound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_SwitchFireModeMontage = { "SwitchFireModeMontage", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, SwitchFireModeMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchFireModeMontage_MetaData), NewProp_SwitchFireModeMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_WeaponFireMontage = { "WeaponFireMontage", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, WeaponFireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponFireMontage_MetaData), NewProp_WeaponFireMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_CharacterFireMontage = { "CharacterFireMontage", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, CharacterFireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterFireMontage_MetaData), NewProp_CharacterFireMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_MuzzleFlashFX = { "MuzzleFlashFX", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, MuzzleFlashFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleFlashFX_MetaData), NewProp_MuzzleFlashFX_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_DefaultAttachments_ValueProp = { "DefaultAttachments", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UBackpackItemDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_DefaultAttachments_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_DefaultAttachments_Key_KeyProp = { "DefaultAttachments_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PUBG_EAttachmentSlot, METADATA_PARAMS(0, nullptr) }; // 1859959187
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_DefaultAttachments = { "DefaultAttachments", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, DefaultAttachments), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAttachments_MetaData), NewProp_DefaultAttachments_MetaData) }; // 1859959187
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_WeaponAnimInstanceClass = { "WeaponAnimInstanceClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, WeaponAnimInstanceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAnimInstanceClass_MetaData), NewProp_WeaponAnimInstanceClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_ShellEjectFX = { "ShellEjectFX", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, ShellEjectFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShellEjectFX_MetaData), NewProp_ShellEjectFX_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_ShellEjectSocketName = { "ShellEjectSocketName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, ShellEjectSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShellEjectSocketName_MetaData), NewProp_ShellEjectSocketName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_ShellEjectMesh = { "ShellEjectMesh", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackpackItemFragment_Weapon, ShellEjectMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShellEjectMesh_MetaData), NewProp_ShellEjectMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_HeadshotMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_ChestMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_FalloffStartDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_FalloffEndDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_MinDamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_MuzzleVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_RoundsPerMinute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_MagazineSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_ReloadMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_ReloadEmptyMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_WeaponAmmoType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_WeaponAmmoType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_WeaponType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_WeaponType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_RecoilSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_SpreadSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_SupportedFireModes_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_SupportedFireModes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_SupportedFireModes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_SupportedAttachmentSlots_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_SupportedAttachmentSlots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_SupportedAttachmentSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_BulletClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_MuzzleSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_BallisticGravityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_FireSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_EmptySound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_SwitchFireModeMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_WeaponFireMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_CharacterFireMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_MuzzleFlashFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_DefaultAttachments_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_DefaultAttachments_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_DefaultAttachments_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_DefaultAttachments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_WeaponAnimInstanceClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_ShellEjectFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_ShellEjectSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::NewProp_ShellEjectMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBackpackItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::ClassParams = {
	&UBackpackItemFragment_Weapon::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::Class_MetaDataParams), Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBackpackItemFragment_Weapon()
{
	if (!Z_Registration_Info_UClass_UBackpackItemFragment_Weapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackpackItemFragment_Weapon.OuterSingleton, Z_Construct_UClass_UBackpackItemFragment_Weapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBackpackItemFragment_Weapon.OuterSingleton;
}
UBackpackItemFragment_Weapon::UBackpackItemFragment_Weapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBackpackItemFragment_Weapon);
UBackpackItemFragment_Weapon::~UBackpackItemFragment_Weapon() {}
// ********** End Class UBackpackItemFragment_Weapon ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Weapon_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBackpackItemFragment_Weapon, UBackpackItemFragment_Weapon::StaticClass, TEXT("UBackpackItemFragment_Weapon"), &Z_Registration_Info_UClass_UBackpackItemFragment_Weapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackpackItemFragment_Weapon), 3339749797U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Weapon_h__Script_PUBG_451893337(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Weapon_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_Object_BackpackItemFragment_Weapon_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
