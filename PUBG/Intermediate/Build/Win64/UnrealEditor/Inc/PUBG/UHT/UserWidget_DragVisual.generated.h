// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserWidget/UserWidget_DragVisual.h"

#ifdef PUBG_UserWidget_DragVisual_generated_h
#error "UserWidget_DragVisual.generated.h already included, missing '#pragma once' in UserWidget_DragVisual.h"
#endif
#define PUBG_UserWidget_DragVisual_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUserWidget_DragVisual ***************************************************
PUBG_API UClass* Z_Construct_UClass_UUserWidget_DragVisual_NoRegister();

#define FID_PUBG_Source_PUBG_Public_UserWidget_UserWidget_DragVisual_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserWidget_DragVisual(); \
	friend struct Z_Construct_UClass_UUserWidget_DragVisual_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PUBG_API UClass* Z_Construct_UClass_UUserWidget_DragVisual_NoRegister(); \
public: \
	DECLARE_CLASS2(UUserWidget_DragVisual, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PUBG"), Z_Construct_UClass_UUserWidget_DragVisual_NoRegister) \
	DECLARE_SERIALIZER(UUserWidget_DragVisual)


#define FID_PUBG_Source_PUBG_Public_UserWidget_UserWidget_DragVisual_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserWidget_DragVisual(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUserWidget_DragVisual(UUserWidget_DragVisual&&) = delete; \
	UUserWidget_DragVisual(const UUserWidget_DragVisual&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserWidget_DragVisual); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserWidget_DragVisual); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserWidget_DragVisual) \
	NO_API virtual ~UUserWidget_DragVisual();


#define FID_PUBG_Source_PUBG_Public_UserWidget_UserWidget_DragVisual_h_15_PROLOG
#define FID_PUBG_Source_PUBG_Public_UserWidget_UserWidget_DragVisual_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PUBG_Source_PUBG_Public_UserWidget_UserWidget_DragVisual_h_18_INCLASS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_UserWidget_UserWidget_DragVisual_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUserWidget_DragVisual;

// ********** End Class UUserWidget_DragVisual *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PUBG_Source_PUBG_Public_UserWidget_UserWidget_DragVisual_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
