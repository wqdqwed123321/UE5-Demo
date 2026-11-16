// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUserWidget/GameCommonUserWidget.h"

#ifdef PUBG_GameCommonUserWidget_generated_h
#error "GameCommonUserWidget.generated.h already included, missing '#pragma once' in GameCommonUserWidget.h"
#endif
#define PUBG_GameCommonUserWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCommonActivatableWidgetContainerBase;
struct FGameplayTag;

// ********** Begin Class UGameCommonUserWidget ****************************************************
#define FID_PUBG_Source_PUBG_Public_CommonUserWidget_GameCommonUserWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRegisterWidgetStack);


PUBG_API UClass* Z_Construct_UClass_UGameCommonUserWidget_NoRegister();

#define FID_PUBG_Source_PUBG_Public_CommonUserWidget_GameCommonUserWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameCommonUserWidget(); \
	friend struct Z_Construct_UClass_UGameCommonUserWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PUBG_API UClass* Z_Construct_UClass_UGameCommonUserWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameCommonUserWidget, UCommonUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PUBG"), Z_Construct_UClass_UGameCommonUserWidget_NoRegister) \
	DECLARE_SERIALIZER(UGameCommonUserWidget)


#define FID_PUBG_Source_PUBG_Public_CommonUserWidget_GameCommonUserWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameCommonUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameCommonUserWidget(UGameCommonUserWidget&&) = delete; \
	UGameCommonUserWidget(const UGameCommonUserWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameCommonUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameCommonUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameCommonUserWidget) \
	NO_API virtual ~UGameCommonUserWidget();


#define FID_PUBG_Source_PUBG_Public_CommonUserWidget_GameCommonUserWidget_h_14_PROLOG
#define FID_PUBG_Source_PUBG_Public_CommonUserWidget_GameCommonUserWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PUBG_Source_PUBG_Public_CommonUserWidget_GameCommonUserWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_CommonUserWidget_GameCommonUserWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_CommonUserWidget_GameCommonUserWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameCommonUserWidget;

// ********** End Class UGameCommonUserWidget ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PUBG_Source_PUBG_Public_CommonUserWidget_GameCommonUserWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
