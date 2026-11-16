// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimInstance/CharacterAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
PUBG_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UCharacterAnimInstance();
PUBG_API UClass* Z_Construct_UClass_UCharacterAnimInstance_NoRegister();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_ECharacterDirection();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCharacterAnimInstance ***************************************************
void UCharacterAnimInstance::StaticRegisterNativesUCharacterAnimInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterAnimInstance;
UClass* UCharacterAnimInstance::GetPrivateStaticClass()
{
	using TClass = UCharacterAnimInstance;
	if (!Z_Registration_Info_UClass_UCharacterAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharacterAnimInstance"),
			Z_Registration_Info_UClass_UCharacterAnimInstance.InnerSingleton,
			StaticRegisterNativesUCharacterAnimInstance,
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
	return Z_Registration_Info_UClass_UCharacterAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterAnimInstance_NoRegister()
{
	return UCharacterAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstance/CharacterAnimInstance.h" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasAccelerating_MetaData[] = {
		{ "Category", "CharacterAnimInstance" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[] = {
		{ "Category", "CharacterAnimInstance" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFallingSpeed_MetaData[] = {
		{ "Category", "CharacterAnimInstance" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterVelocity_MetaData[] = {
		{ "Category", "CharacterAnimInstance" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDirection_MetaData[] = {
		{ "Category", "CharacterAnimInstance" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnYawCurveDeltaValue_MetaData[] = {
		{ "Category", "CharacterAnimInstance" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandIKAlpha_MetaData[] = {
		{ "Category", "CharacterAnimInstance" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimInstance.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHasAccelerating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAccelerating;
	static void NewProp_bIsInAir_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFallingSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterVelocity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnYawCurveDeltaValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HandIKAlpha;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bHasAccelerating_SetBit(void* Obj)
{
	((UCharacterAnimInstance*)Obj)->bHasAccelerating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bHasAccelerating = { "bHasAccelerating", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacterAnimInstance), &Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bHasAccelerating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasAccelerating_MetaData), NewProp_bHasAccelerating_MetaData) };
void Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
{
	((UCharacterAnimInstance*)Obj)->bIsInAir = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacterAnimInstance), &Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInAir_MetaData), NewProp_bIsInAir_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_MaxFallingSpeed = { "MaxFallingSpeed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimInstance, MaxFallingSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFallingSpeed_MetaData), NewProp_MaxFallingSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_CharacterVelocity = { "CharacterVelocity", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimInstance, CharacterVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterVelocity_MetaData), NewProp_CharacterVelocity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_CharacterDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_CharacterDirection = { "CharacterDirection", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimInstance, CharacterDirection), Z_Construct_UEnum_PUBG_ECharacterDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterDirection_MetaData), NewProp_CharacterDirection_MetaData) }; // 1925861661
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_TurnYawCurveDeltaValue = { "TurnYawCurveDeltaValue", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimInstance, TurnYawCurveDeltaValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnYawCurveDeltaValue_MetaData), NewProp_TurnYawCurveDeltaValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_HandIKAlpha = { "HandIKAlpha", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimInstance, HandIKAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandIKAlpha_MetaData), NewProp_HandIKAlpha_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimInstance, PlayerCharacter), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bHasAccelerating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bIsInAir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_MaxFallingSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_CharacterVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_CharacterDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_CharacterDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_TurnYawCurveDeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_HandIKAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_PlayerCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAnimInstance_Statics::ClassParams = {
	&UCharacterAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterAnimInstance()
{
	if (!Z_Registration_Info_UClass_UCharacterAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterAnimInstance.OuterSingleton, Z_Construct_UClass_UCharacterAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterAnimInstance.OuterSingleton;
}
UCharacterAnimInstance::UCharacterAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAnimInstance);
UCharacterAnimInstance::~UCharacterAnimInstance() {}
// ********** End Class UCharacterAnimInstance *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AnimInstance_CharacterAnimInstance_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAnimInstance, UCharacterAnimInstance::StaticClass, TEXT("UCharacterAnimInstance"), &Z_Registration_Info_UClass_UCharacterAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAnimInstance), 2001567749U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AnimInstance_CharacterAnimInstance_h__Script_PUBG_1737361754(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AnimInstance_CharacterAnimInstance_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AnimInstance_CharacterAnimInstance_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
