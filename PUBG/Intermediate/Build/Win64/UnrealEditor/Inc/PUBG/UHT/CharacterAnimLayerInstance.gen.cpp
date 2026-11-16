// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimInstance/CharacterAnimLayerInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterAnimLayerInstance() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
PUBG_API UClass* Z_Construct_UClass_UCharacterAnimInstance_NoRegister();
PUBG_API UClass* Z_Construct_UClass_UCharacterAnimLayerInstance();
PUBG_API UClass* Z_Construct_UClass_UCharacterAnimLayerInstance_NoRegister();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_ECharacterDirection();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_ECharacterGait();
PUBG_API UEnum* Z_Construct_UEnum_PUBG_ECharacterStance();
UPackage* Z_Construct_UPackage__Script_PUBG();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCharacterAnimLayerInstance **********************************************
void UCharacterAnimLayerInstance::StaticRegisterNativesUCharacterAnimLayerInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterAnimLayerInstance;
UClass* UCharacterAnimLayerInstance::GetPrivateStaticClass()
{
	using TClass = UCharacterAnimLayerInstance;
	if (!Z_Registration_Info_UClass_UCharacterAnimLayerInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharacterAnimLayerInstance"),
			Z_Registration_Info_UClass_UCharacterAnimLayerInstance.InnerSingleton,
			StaticRegisterNativesUCharacterAnimLayerInstance,
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
	return Z_Registration_Info_UClass_UCharacterAnimLayerInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterAnimLayerInstance_NoRegister()
{
	return UCharacterAnimLayerInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterAnimLayerInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstance/CharacterAnimLayerInstance.h" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimLayerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterGait_MetaData[] = {
		{ "Category", "CharacterAnimLayerInstance" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimLayerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterStance_MetaData[] = {
		{ "Category", "CharacterAnimLayerInstance" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimLayerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDirection_MetaData[] = {
		{ "Category", "CharacterAnimLayerInstance" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimLayerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterVelocity_MetaData[] = {
		{ "Category", "CharacterAnimLayerInstance" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimLayerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDirectionAngle_MetaData[] = {
		{ "Category", "CharacterAnimLayerInstance" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimLayerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterLeanAngle_MetaData[] = {
		{ "Category", "CharacterAnimLayerInstance" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimLayerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAO_Yaw_MetaData[] = {
		{ "Category", "CharacterAnimLayerInstance" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimLayerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAO_Pitch_MetaData[] = {
		{ "Category", "CharacterAnimLayerInstance" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimLayerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCharacterStanceChanged_MetaData[] = {
		{ "Category", "CharacterAnimLayerInstance" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimLayerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLeanDirection_MetaData[] = {
		{ "Category", "CharacterAnimLayerInstance" },
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimLayerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAnimInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimInstance/CharacterAnimLayerInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterGait_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterGait;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterStance_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterStance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CharacterDirectionAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CharacterLeanAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CharacterAO_Yaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CharacterAO_Pitch;
	static void NewProp_bIsCharacterStanceChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCharacterStanceChanged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentLeanDirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterAnimInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAnimLayerInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CharacterGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CharacterGait = { "CharacterGait", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimLayerInstance, CharacterGait), Z_Construct_UEnum_PUBG_ECharacterGait, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterGait_MetaData), NewProp_CharacterGait_MetaData) }; // 515073860
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CharacterStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CharacterStance = { "CharacterStance", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimLayerInstance, CharacterStance), Z_Construct_UEnum_PUBG_ECharacterStance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterStance_MetaData), NewProp_CharacterStance_MetaData) }; // 570544318
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CharacterDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CharacterDirection = { "CharacterDirection", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimLayerInstance, CharacterDirection), Z_Construct_UEnum_PUBG_ECharacterDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterDirection_MetaData), NewProp_CharacterDirection_MetaData) }; // 1925861661
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CharacterVelocity = { "CharacterVelocity", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimLayerInstance, CharacterVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterVelocity_MetaData), NewProp_CharacterVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CharacterDirectionAngle = { "CharacterDirectionAngle", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimLayerInstance, CharacterDirectionAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterDirectionAngle_MetaData), NewProp_CharacterDirectionAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CharacterLeanAngle = { "CharacterLeanAngle", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimLayerInstance, CharacterLeanAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterLeanAngle_MetaData), NewProp_CharacterLeanAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CharacterAO_Yaw = { "CharacterAO_Yaw", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimLayerInstance, CharacterAO_Yaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterAO_Yaw_MetaData), NewProp_CharacterAO_Yaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CharacterAO_Pitch = { "CharacterAO_Pitch", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimLayerInstance, CharacterAO_Pitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterAO_Pitch_MetaData), NewProp_CharacterAO_Pitch_MetaData) };
void Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_bIsCharacterStanceChanged_SetBit(void* Obj)
{
	((UCharacterAnimLayerInstance*)Obj)->bIsCharacterStanceChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_bIsCharacterStanceChanged = { "bIsCharacterStanceChanged", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacterAnimLayerInstance), &Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_bIsCharacterStanceChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCharacterStanceChanged_MetaData), NewProp_bIsCharacterStanceChanged_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CurrentLeanDirection = { "CurrentLeanDirection", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimLayerInstance, CurrentLeanDirection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLeanDirection_MetaData), NewProp_CurrentLeanDirection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CharacterAnimInstance = { "CharacterAnimInstance", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimLayerInstance, CharacterAnimInstance), Z_Construct_UClass_UCharacterAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterAnimInstance_MetaData), NewProp_CharacterAnimInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CharacterGait_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CharacterGait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CharacterStance_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CharacterStance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CharacterDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CharacterDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CharacterVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CharacterDirectionAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CharacterLeanAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CharacterAO_Yaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CharacterAO_Pitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_bIsCharacterStanceChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CurrentLeanDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::NewProp_CharacterAnimInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_PUBG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::ClassParams = {
	&UCharacterAnimLayerInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterAnimLayerInstance()
{
	if (!Z_Registration_Info_UClass_UCharacterAnimLayerInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterAnimLayerInstance.OuterSingleton, Z_Construct_UClass_UCharacterAnimLayerInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterAnimLayerInstance.OuterSingleton;
}
UCharacterAnimLayerInstance::UCharacterAnimLayerInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAnimLayerInstance);
UCharacterAnimLayerInstance::~UCharacterAnimLayerInstance() {}
// ********** End Class UCharacterAnimLayerInstance ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AnimInstance_CharacterAnimLayerInstance_h__Script_PUBG_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAnimLayerInstance, UCharacterAnimLayerInstance::StaticClass, TEXT("UCharacterAnimLayerInstance"), &Z_Registration_Info_UClass_UCharacterAnimLayerInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAnimLayerInstance), 3597490868U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AnimInstance_CharacterAnimLayerInstance_h__Script_PUBG_725699901(TEXT("/Script/PUBG"),
	Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AnimInstance_CharacterAnimLayerInstance_h__Script_PUBG_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PUBG_Source_PUBG_Public_AnimInstance_CharacterAnimLayerInstance_h__Script_PUBG_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
