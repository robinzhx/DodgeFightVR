// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
#ifdef VREXPANSIONPLUGIN_VRWheeledVehicle_generated_h
#error "VRWheeledVehicle.generated.h already included, missing '#pragma once' in VRWheeledVehicle.h"
#endif
#define VREXPANSIONPLUGIN_VRWheeledVehicle_generated_h

#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execForceSecondaryPossession) \
	{ \
		P_GET_OBJECT(AController,Z_Param_NewController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ForceSecondaryPossession(Z_Param_NewController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBindToInput) \
	{ \
		P_GET_OBJECT(AController,Z_Param_CController); \
		P_GET_UBOOL(Z_Param_bBindToInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetBindToInput(Z_Param_CController,Z_Param_bBindToInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Controller) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_Controller(); \
		P_NATIVE_END; \
	}


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execForceSecondaryPossession) \
	{ \
		P_GET_OBJECT(AController,Z_Param_NewController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ForceSecondaryPossession(Z_Param_NewController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBindToInput) \
	{ \
		P_GET_OBJECT(AController,Z_Param_CController); \
		P_GET_UBOOL(Z_Param_bBindToInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetBindToInput(Z_Param_CController,Z_Param_bBindToInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Controller) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_Controller(); \
		P_NATIVE_END; \
	}


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRWheeledVehicle(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_AVRWheeledVehicle(); \
public: \
	DECLARE_CLASS(AVRWheeledVehicle, AWheeledVehicle, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRWheeledVehicle) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAVRWheeledVehicle(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_AVRWheeledVehicle(); \
public: \
	DECLARE_CLASS(AVRWheeledVehicle, AWheeledVehicle, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRWheeledVehicle) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRWheeledVehicle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRWheeledVehicle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRWheeledVehicle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRWheeledVehicle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRWheeledVehicle(AVRWheeledVehicle&&); \
	NO_API AVRWheeledVehicle(const AVRWheeledVehicle&); \
public:


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRWheeledVehicle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRWheeledVehicle(AVRWheeledVehicle&&); \
	NO_API AVRWheeledVehicle(const AVRWheeledVehicle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRWheeledVehicle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRWheeledVehicle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRWheeledVehicle)


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_22_PRIVATE_PROPERTY_OFFSET
#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_19_PROLOG
#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_22_PRIVATE_PROPERTY_OFFSET \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_22_RPC_WRAPPERS \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_22_INCLASS \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_22_PRIVATE_PROPERTY_OFFSET \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_22_INCLASS_NO_PURE_DECLS \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
