// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Test_Jangemul.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TR_Test_Jangemul_generated_h
#error "Test_Jangemul.generated.h already included, missing '#pragma once' in Test_Jangemul.h"
#endif
#define TR_Test_Jangemul_generated_h

#define FID_ProjectGitHub_TR_TR_Source_TR_Test_Jangemul_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnObstacleBeginOverlap);


#define FID_ProjectGitHub_TR_TR_Source_TR_Test_Jangemul_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATest_Jangemul(); \
	friend struct Z_Construct_UClass_ATest_Jangemul_Statics; \
public: \
	DECLARE_CLASS(ATest_Jangemul, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TR"), NO_API) \
	DECLARE_SERIALIZER(ATest_Jangemul)


#define FID_ProjectGitHub_TR_TR_Source_TR_Test_Jangemul_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATest_Jangemul(ATest_Jangemul&&); \
	ATest_Jangemul(const ATest_Jangemul&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATest_Jangemul); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATest_Jangemul); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATest_Jangemul) \
	NO_API virtual ~ATest_Jangemul();


#define FID_ProjectGitHub_TR_TR_Source_TR_Test_Jangemul_h_11_PROLOG
#define FID_ProjectGitHub_TR_TR_Source_TR_Test_Jangemul_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectGitHub_TR_TR_Source_TR_Test_Jangemul_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectGitHub_TR_TR_Source_TR_Test_Jangemul_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectGitHub_TR_TR_Source_TR_Test_Jangemul_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TR_API UClass* StaticClass<class ATest_Jangemul>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectGitHub_TR_TR_Source_TR_Test_Jangemul_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
