// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StatusInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStatusEffectType : uint8;
#ifdef TR_StatusInterface_generated_h
#error "StatusInterface.generated.h already included, missing '#pragma once' in StatusInterface.h"
#endif
#define TR_StatusInterface_generated_h

#define FID_ProjectGitHub_TR_TR_Source_TR_StatusInterface_h_21_CALLBACK_WRAPPERS
#define FID_ProjectGitHub_TR_TR_Source_TR_StatusInterface_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatusEffectReceiver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStatusEffectReceiver(UStatusEffectReceiver&&); \
	UStatusEffectReceiver(const UStatusEffectReceiver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatusEffectReceiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatusEffectReceiver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatusEffectReceiver) \
	NO_API virtual ~UStatusEffectReceiver();


#define FID_ProjectGitHub_TR_TR_Source_TR_StatusInterface_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStatusEffectReceiver(); \
	friend struct Z_Construct_UClass_UStatusEffectReceiver_Statics; \
public: \
	DECLARE_CLASS(UStatusEffectReceiver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TR"), NO_API) \
	DECLARE_SERIALIZER(UStatusEffectReceiver)


#define FID_ProjectGitHub_TR_TR_Source_TR_StatusInterface_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ProjectGitHub_TR_TR_Source_TR_StatusInterface_h_21_GENERATED_UINTERFACE_BODY() \
	FID_ProjectGitHub_TR_TR_Source_TR_StatusInterface_h_21_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectGitHub_TR_TR_Source_TR_StatusInterface_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStatusEffectReceiver() {} \
public: \
	typedef UStatusEffectReceiver UClassType; \
	typedef IStatusEffectReceiver ThisClass; \
	static void Execute_ApplyStatusEffect(UObject* O, EStatusEffectType EffectType); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ProjectGitHub_TR_TR_Source_TR_StatusInterface_h_18_PROLOG
#define FID_ProjectGitHub_TR_TR_Source_TR_StatusInterface_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectGitHub_TR_TR_Source_TR_StatusInterface_h_21_CALLBACK_WRAPPERS \
	FID_ProjectGitHub_TR_TR_Source_TR_StatusInterface_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TR_API UClass* StaticClass<class UStatusEffectReceiver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectGitHub_TR_TR_Source_TR_StatusInterface_h


#define FOREACH_ENUM_ESTATUSEFFECTTYPE(op) \
	op(EStatusEffectType::Stun) \
	op(EStatusEffectType::Slow) \
	op(EStatusEffectType::Down) \
	op(EStatusEffectType::Electric) 

enum class EStatusEffectType : uint8;
template<> struct TIsUEnumClass<EStatusEffectType> { enum { Value = true }; };
template<> TR_API UEnum* StaticEnum<EStatusEffectType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
