// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Object/BackpackItemInstance.h"

#ifdef PUBG_BackpackItemInstance_generated_h
#error "BackpackItemInstance.generated.h already included, missing '#pragma once' in BackpackItemInstance.h"
#endif
#define PUBG_BackpackItemInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UBackpackItemInstance;
enum class EAttachmentSlot : uint8;
struct FGameplayTag;

// ********** Begin Class UBackpackItemInstance ****************************************************
#define FID_PUBG_Source_PUBG_Public_Object_BackpackItemInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetItemAttachment); \
	DECLARE_FUNCTION(execGetItemAttachment); \
	DECLARE_FUNCTION(execSetAttribute); \
	DECLARE_FUNCTION(execGetItemAttribute);


PUBG_API UClass* Z_Construct_UClass_UBackpackItemInstance_NoRegister();

#define FID_PUBG_Source_PUBG_Public_Object_BackpackItemInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBackpackItemInstance(); \
	friend struct Z_Construct_UClass_UBackpackItemInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PUBG_API UClass* Z_Construct_UClass_UBackpackItemInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UBackpackItemInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PUBG"), Z_Construct_UClass_UBackpackItemInstance_NoRegister) \
	DECLARE_SERIALIZER(UBackpackItemInstance) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Quantity=NETFIELD_REP_START, \
		Definition, \
		ItemAttributes, \
		ItemAttachments, \
		NETFIELD_REP_END=ItemAttachments	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(UBackpackItemInstance) \
public:


#define FID_PUBG_Source_PUBG_Public_Object_BackpackItemInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBackpackItemInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBackpackItemInstance(UBackpackItemInstance&&) = delete; \
	UBackpackItemInstance(const UBackpackItemInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBackpackItemInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBackpackItemInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBackpackItemInstance) \
	NO_API virtual ~UBackpackItemInstance();


#define FID_PUBG_Source_PUBG_Public_Object_BackpackItemInstance_h_13_PROLOG
#define FID_PUBG_Source_PUBG_Public_Object_BackpackItemInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PUBG_Source_PUBG_Public_Object_BackpackItemInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_Object_BackpackItemInstance_h_16_INCLASS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_Object_BackpackItemInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBackpackItemInstance;

// ********** End Class UBackpackItemInstance ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PUBG_Source_PUBG_Public_Object_BackpackItemInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
