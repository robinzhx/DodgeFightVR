// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGesturesDatabase;
class USplineComponent;
struct FVRGesture;
class UStaticMesh;
class UMaterial;
class UObject;
struct FTransform;
struct FColor;
#ifdef VREXPANSIONPLUGIN_VRGestureComponent_generated_h
#error "VRGestureComponent.generated.h already included, missing '#pragma once' in VRGestureComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRGestureComponent_generated_h

#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_266_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FVRGestureSplineDraw(); \
	static class UScriptStruct* StaticStruct();


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_77_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FVRGesture(); \
	static class UScriptStruct* StaticStruct();


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_40_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FVRGestureSettings(); \
	static class UScriptStruct* StaticStruct();


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_344_DELEGATE \
struct _Script_VRExpansionPlugin_eventVRGestureDetectedSignature_Parms \
{ \
	uint8 GestureType; \
	FString DetectedGestureName; \
	int32 DetectedGestureIndex; \
	UGesturesDatabase* GestureDataBase; \
}; \
static inline void FVRGestureDetectedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRGestureDetectedSignature, uint8 GestureType, const FString& DetectedGestureName, int32 DetectedGestureIndex, UGesturesDatabase* GestureDataBase) \
{ \
	_Script_VRExpansionPlugin_eventVRGestureDetectedSignature_Parms Parms; \
	Parms.GestureType=GestureType; \
	Parms.DetectedGestureName=DetectedGestureName; \
	Parms.DetectedGestureIndex=DetectedGestureIndex; \
	Parms.GestureDataBase=GestureDataBase; \
	VRGestureDetectedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_138_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execImportSplineAsGesture) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_HostSplineComponent); \
		P_GET_PROPERTY(UStrProperty,Z_Param_GestureName); \
		P_GET_UBOOL(Z_Param_bKeepSplineCurves); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SegmentLen); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ImportSplineAsGesture(Z_Param_HostSplineComponent,Z_Param_GestureName,Z_Param_bKeepSplineCurves,Z_Param_SegmentLen); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFillSplineWithGesture) \
	{ \
		P_GET_STRUCT_REF(FVRGesture,Z_Param_Out_Gesture); \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComponent); \
		P_GET_UBOOL(Z_Param_bCenterPointsOnSpline); \
		P_GET_UBOOL(Z_Param_bScaleToBounds); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OptionalBounds); \
		P_GET_UBOOL(Z_Param_bUseCurvedPoints); \
		P_GET_UBOOL(Z_Param_bFillInSplineMeshComponents); \
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh); \
		P_GET_OBJECT(UMaterial,Z_Param_MeshMat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FillSplineWithGesture(Z_Param_Out_Gesture,Z_Param_SplineComponent,Z_Param_bCenterPointsOnSpline,Z_Param_bScaleToBounds,Z_Param_OptionalBounds,Z_Param_bUseCurvedPoints,Z_Param_bFillInSplineMeshComponents,Z_Param_Mesh,Z_Param_MeshMat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRecalculateGestures) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RecalculateGestures(); \
		P_NATIVE_END; \
	}


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_138_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execImportSplineAsGesture) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_HostSplineComponent); \
		P_GET_PROPERTY(UStrProperty,Z_Param_GestureName); \
		P_GET_UBOOL(Z_Param_bKeepSplineCurves); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SegmentLen); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ImportSplineAsGesture(Z_Param_HostSplineComponent,Z_Param_GestureName,Z_Param_bKeepSplineCurves,Z_Param_SegmentLen); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFillSplineWithGesture) \
	{ \
		P_GET_STRUCT_REF(FVRGesture,Z_Param_Out_Gesture); \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineComponent); \
		P_GET_UBOOL(Z_Param_bCenterPointsOnSpline); \
		P_GET_UBOOL(Z_Param_bScaleToBounds); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OptionalBounds); \
		P_GET_UBOOL(Z_Param_bUseCurvedPoints); \
		P_GET_UBOOL(Z_Param_bFillInSplineMeshComponents); \
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh); \
		P_GET_OBJECT(UMaterial,Z_Param_MeshMat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FillSplineWithGesture(Z_Param_Out_Gesture,Z_Param_SplineComponent,Z_Param_bCenterPointsOnSpline,Z_Param_bScaleToBounds,Z_Param_OptionalBounds,Z_Param_bUseCurvedPoints,Z_Param_bFillInSplineMeshComponents,Z_Param_Mesh,Z_Param_MeshMat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRecalculateGestures) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RecalculateGestures(); \
		P_NATIVE_END; \
	}


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_138_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGesturesDatabase(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UGesturesDatabase(); \
public: \
	DECLARE_CLASS(UGesturesDatabase, UDataAsset, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGesturesDatabase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_138_INCLASS \
private: \
	static void StaticRegisterNativesUGesturesDatabase(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UGesturesDatabase(); \
public: \
	DECLARE_CLASS(UGesturesDatabase, UDataAsset, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGesturesDatabase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_138_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGesturesDatabase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGesturesDatabase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGesturesDatabase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGesturesDatabase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGesturesDatabase(UGesturesDatabase&&); \
	NO_API UGesturesDatabase(const UGesturesDatabase&); \
public:


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_138_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGesturesDatabase(UGesturesDatabase&&); \
	NO_API UGesturesDatabase(const UGesturesDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGesturesDatabase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGesturesDatabase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGesturesDatabase)


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_138_PRIVATE_PROPERTY_OFFSET
#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_135_PROLOG
#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_138_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_138_PRIVATE_PROPERTY_OFFSET \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_138_RPC_WRAPPERS \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_138_INCLASS \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_138_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_138_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_138_PRIVATE_PROPERTY_OFFSET \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_138_RPC_WRAPPERS_NO_PURE_DECLS \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_138_INCLASS_NO_PURE_DECLS \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_138_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_356_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveRecording) \
	{ \
		P_GET_STRUCT_REF(FVRGesture,Z_Param_Out_Recording); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RecordingName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SaveRecording(Z_Param_Out_Recording,Z_Param_RecordingName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearRecording) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearRecording(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndRecording) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVRGesture*)Z_Param__Result=this->EndRecording(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginRecording) \
	{ \
		P_GET_UBOOL(Z_Param_bRunDetection); \
		P_GET_UBOOL(Z_Param_bFlattenGesture); \
		P_GET_UBOOL(Z_Param_bDrawGesture); \
		P_GET_UBOOL(Z_Param_bDrawAsSpline); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SamplingHTZ); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SampleBufferSize); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ClampingTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BeginRecording(Z_Param_bRunDetection,Z_Param_bFlattenGesture,Z_Param_bDrawGesture,Z_Param_bDrawAsSpline,Z_Param_SamplingHTZ,Z_Param_SampleBufferSize,Z_Param_ClampingTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugGesture) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_StartTransform); \
		P_GET_STRUCT(FVRGesture,Z_Param_GestureToDraw); \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_Color); \
		P_GET_UBOOL(Z_Param_bPersistentLines); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DepthPriority); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LifeTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DrawDebugGesture(Z_Param_WorldContextObject,Z_Param_Out_StartTransform,Z_Param_GestureToDraw,Z_Param_Out_Color,Z_Param_bPersistentLines,Z_Param_DepthPriority,Z_Param_LifeTime,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRecalculateGestureSize) \
	{ \
		P_GET_STRUCT_REF(FVRGesture,Z_Param_Out_InputGesture); \
		P_GET_OBJECT(UGesturesDatabase,Z_Param_GestureDB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RecalculateGestureSize(Z_Param_Out_InputGesture,Z_Param_GestureDB); \
		P_NATIVE_END; \
	}


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_356_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveRecording) \
	{ \
		P_GET_STRUCT_REF(FVRGesture,Z_Param_Out_Recording); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RecordingName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SaveRecording(Z_Param_Out_Recording,Z_Param_RecordingName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearRecording) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearRecording(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndRecording) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVRGesture*)Z_Param__Result=this->EndRecording(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginRecording) \
	{ \
		P_GET_UBOOL(Z_Param_bRunDetection); \
		P_GET_UBOOL(Z_Param_bFlattenGesture); \
		P_GET_UBOOL(Z_Param_bDrawGesture); \
		P_GET_UBOOL(Z_Param_bDrawAsSpline); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SamplingHTZ); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SampleBufferSize); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ClampingTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BeginRecording(Z_Param_bRunDetection,Z_Param_bFlattenGesture,Z_Param_bDrawGesture,Z_Param_bDrawAsSpline,Z_Param_SamplingHTZ,Z_Param_SampleBufferSize,Z_Param_ClampingTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugGesture) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_StartTransform); \
		P_GET_STRUCT(FVRGesture,Z_Param_GestureToDraw); \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_Color); \
		P_GET_UBOOL(Z_Param_bPersistentLines); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DepthPriority); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LifeTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DrawDebugGesture(Z_Param_WorldContextObject,Z_Param_Out_StartTransform,Z_Param_GestureToDraw,Z_Param_Out_Color,Z_Param_bPersistentLines,Z_Param_DepthPriority,Z_Param_LifeTime,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRecalculateGestureSize) \
	{ \
		P_GET_STRUCT_REF(FVRGesture,Z_Param_Out_InputGesture); \
		P_GET_OBJECT(UGesturesDatabase,Z_Param_GestureDB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RecalculateGestureSize(Z_Param_Out_InputGesture,Z_Param_GestureDB); \
		P_NATIVE_END; \
	}


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_356_EVENT_PARMS \
	struct VRGestureComponent_eventOnGestureDetected_Parms \
	{ \
		uint8 GestureType; \
		FString DetectedGestureName; \
		int32 DetectedGestureIndex; \
		UGesturesDatabase* GestureDatabase; \
	};


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_356_CALLBACK_WRAPPERS
#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_356_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRGestureComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRGestureComponent(); \
public: \
	DECLARE_CLASS(UVRGestureComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGestureComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_356_INCLASS \
private: \
	static void StaticRegisterNativesUVRGestureComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRGestureComponent(); \
public: \
	DECLARE_CLASS(UVRGestureComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGestureComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_356_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRGestureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGestureComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGestureComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGestureComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGestureComponent(UVRGestureComponent&&); \
	NO_API UVRGestureComponent(const UVRGestureComponent&); \
public:


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_356_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRGestureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGestureComponent(UVRGestureComponent&&); \
	NO_API UVRGestureComponent(const UVRGestureComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGestureComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGestureComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGestureComponent)


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_356_PRIVATE_PROPERTY_OFFSET
#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_353_PROLOG \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_356_EVENT_PARMS


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_356_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_356_PRIVATE_PROPERTY_OFFSET \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_356_RPC_WRAPPERS \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_356_CALLBACK_WRAPPERS \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_356_INCLASS \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_356_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_356_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_356_PRIVATE_PROPERTY_OFFSET \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_356_RPC_WRAPPERS_NO_PURE_DECLS \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_356_CALLBACK_WRAPPERS \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_356_INCLASS_NO_PURE_DECLS \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_356_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VRGestureComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h


#define FOREACH_ENUM_EVRGESTUREMIRRORMODE(op) \
	op(EVRGestureMirrorMode::GES_NoMirror) \
	op(EVRGestureMirrorMode::GES_MirrorLeft) \
	op(EVRGestureMirrorMode::GES_MirrorRight) 
#define FOREACH_ENUM_EVRGESTURESTATE(op) \
	op(EVRGestureState::GES_None) \
	op(EVRGestureState::GES_Recording) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
