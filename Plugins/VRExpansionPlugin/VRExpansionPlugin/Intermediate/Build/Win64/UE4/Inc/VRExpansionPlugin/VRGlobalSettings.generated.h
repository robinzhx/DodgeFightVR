// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPVRControllerProfile;
struct FTransform;
#ifdef VREXPANSIONPLUGIN_VRGlobalSettings_generated_h
#error "VRGlobalSettings.generated.h already included, missing '#pragma once' in VRGlobalSettings.h"
#endif
#define VREXPANSIONPLUGIN_VRGlobalSettings_generated_h

#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_40_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPVRControllerProfile(); \
	static class UScriptStruct* StaticStruct();


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_29_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FActionMappingDetails(); \
	VREXPANSIONPLUGIN_API static class UScriptStruct* StaticStruct();


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_17_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FAxisMappingDetails(); \
	VREXPANSIONPLUGIN_API static class UScriptStruct* StaticStruct();


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_80_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadControllerProfile) \
	{ \
		P_GET_STRUCT_REF(FBPVRControllerProfile,Z_Param_Out_ControllerProfile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRGlobalSettings::LoadControllerProfile(Z_Param_Out_ControllerProfile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadControllerProfileByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ControllerProfileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRGlobalSettings::LoadControllerProfileByName(Z_Param_ControllerProfileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerProfile) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ControllerProfileName); \
		P_GET_STRUCT_REF(FBPVRControllerProfile,Z_Param_Out_OutProfile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRGlobalSettings::GetControllerProfile(Z_Param_ControllerProfileName,Z_Param_Out_OutProfile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentProfile) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UVRGlobalSettings::GetCurrentProfile(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerProfiles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FBPVRControllerProfile>*)Z_Param__Result=UVRGlobalSettings::GetControllerProfiles(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdjustTransformByControllerProfile) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalControllerProfileName); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SocketTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UVRGlobalSettings::AdjustTransformByControllerProfile(Z_Param_OptionalControllerProfileName,Z_Param_Out_SocketTransform); \
		P_NATIVE_END; \
	}


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadControllerProfile) \
	{ \
		P_GET_STRUCT_REF(FBPVRControllerProfile,Z_Param_Out_ControllerProfile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRGlobalSettings::LoadControllerProfile(Z_Param_Out_ControllerProfile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadControllerProfileByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ControllerProfileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRGlobalSettings::LoadControllerProfileByName(Z_Param_ControllerProfileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerProfile) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ControllerProfileName); \
		P_GET_STRUCT_REF(FBPVRControllerProfile,Z_Param_Out_OutProfile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRGlobalSettings::GetControllerProfile(Z_Param_ControllerProfileName,Z_Param_Out_OutProfile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentProfile) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UVRGlobalSettings::GetCurrentProfile(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerProfiles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FBPVRControllerProfile>*)Z_Param__Result=UVRGlobalSettings::GetControllerProfiles(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdjustTransformByControllerProfile) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalControllerProfileName); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SocketTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UVRGlobalSettings::AdjustTransformByControllerProfile(Z_Param_OptionalControllerProfileName,Z_Param_Out_SocketTransform); \
		P_NATIVE_END; \
	}


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRGlobalSettings(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRGlobalSettings(); \
public: \
	DECLARE_CLASS(UVRGlobalSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGlobalSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUVRGlobalSettings(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRGlobalSettings(); \
public: \
	DECLARE_CLASS(UVRGlobalSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGlobalSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRGlobalSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGlobalSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGlobalSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGlobalSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGlobalSettings(UVRGlobalSettings&&); \
	NO_API UVRGlobalSettings(const UVRGlobalSettings&); \
public:


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_80_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGlobalSettings(UVRGlobalSettings&&); \
	NO_API UVRGlobalSettings(const UVRGlobalSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGlobalSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGlobalSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVRGlobalSettings)


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_80_PRIVATE_PROPERTY_OFFSET
#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_77_PROLOG
#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_80_PRIVATE_PROPERTY_OFFSET \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_80_RPC_WRAPPERS \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_80_INCLASS \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_80_PRIVATE_PROPERTY_OFFSET \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_80_INCLASS_NO_PURE_DECLS \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_80_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VRGlobalSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
