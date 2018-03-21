// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize10;
struct FVector_NetQuantize100;
struct FVRConditionalMoveRep;
struct FVRConditionalMoveRep2;
struct FVector;
class UNavigationQueryFilter;
#ifdef VREXPANSIONPLUGIN_VRCharacter_generated_h
#error "VRCharacter.generated.h already included, missing '#pragma once' in VRCharacter.h"
#endif
#define VREXPANSIONPLUGIN_VRCharacter_generated_h

#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_RPC_WRAPPERS \
	virtual bool ServerMoveVRDualHybridRootMotion_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , FVRConditionalMoveRep2 , uint8 ); \
	virtual void ServerMoveVRDualHybridRootMotion_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode); \
	virtual bool ServerMoveVRDualExLight_Validate(float , uint8 , uint32 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , float , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , FVRConditionalMoveRep2 , uint8 ); \
	virtual void ServerMoveVRDualExLight_Implementation(float TimeStamp0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode); \
	virtual bool ServerMoveVRDual_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , FVRConditionalMoveRep2 , uint8 ); \
	virtual void ServerMoveVRDual_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode); \
	virtual bool ServerMoveVRExLight_Validate(float , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , FVRConditionalMoveRep2 , uint8 ); \
	virtual void ServerMoveVRExLight_Implementation(float TimeStamp, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 CompressedMoveFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode); \
	virtual bool ServerMoveVR_Validate(float , FVector_NetQuantize10 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , FVRConditionalMoveRep2 , uint8 ); \
	virtual void ServerMoveVR_Implementation(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 CompressedMoveFlags, FVRConditionalMoveRep2 MoveReps, uint8 ClientMovementMode); \
	virtual void NotifyOfTeleport_Implementation(); \
 \
	DECLARE_FUNCTION(execServerMoveVRDualHybridRootMotion) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_OldConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_STRUCT(FVRConditionalMoveRep2,Z_Param_MoveReps); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRDualHybridRootMotion_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDualHybridRootMotion_Validate")); \
			return; \
		} \
		this->ServerMoveVRDualHybridRootMotion_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRDualExLight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_OldConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_STRUCT(FVRConditionalMoveRep2,Z_Param_MoveReps); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRDualExLight_Validate(Z_Param_TimeStamp0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDualExLight_Validate")); \
			return; \
		} \
		this->ServerMoveVRDualExLight_Implementation(Z_Param_TimeStamp0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRDual) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_OldConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_STRUCT(FVRConditionalMoveRep2,Z_Param_MoveReps); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRDual_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDual_Validate")); \
			return; \
		} \
		this->ServerMoveVRDual_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRExLight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_STRUCT(FVRConditionalMoveRep2,Z_Param_MoveReps); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRExLight_Validate(Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRExLight_Validate")); \
			return; \
		} \
		this->ServerMoveVRExLight_Implementation(Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_STRUCT(FVRConditionalMoveRep2,Z_Param_MoveReps); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVR_Validate(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVR_Validate")); \
			return; \
		} \
		this->ServerMoveVR_Implementation(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExtendedSimpleMoveToLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_GoalLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AcceptanceRadius); \
		P_GET_UBOOL(Z_Param_bStopOnOverlap); \
		P_GET_UBOOL(Z_Param_bUsePathfinding); \
		P_GET_UBOOL(Z_Param_bProjectDestinationToNavigation); \
		P_GET_UBOOL(Z_Param_bCanStrafe); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_UBOOL(Z_Param_bAllowPartialPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ExtendedSimpleMoveToLocation(Z_Param_Out_GoalLocation,Z_Param_AcceptanceRadius,Z_Param_bStopOnOverlap,Z_Param_bUsePathfinding,Z_Param_bProjectDestinationToNavigation,Z_Param_bCanStrafe,Z_Param_FilterClass,Z_Param_bAllowPartialPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyOfTeleport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->NotifyOfTeleport_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeleportLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_OriginalLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetTeleportLocation(Z_Param_OriginalLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCharacterHalfHeightVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCharacterHalfHeightVR(Z_Param_HalfHeight,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCharacterSizeVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewHalfHeight); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCharacterSizeVR(Z_Param_NewRadius,Z_Param_NewHalfHeight,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegenerateOffsetComponentToWorld) \
	{ \
		P_GET_UBOOL(Z_Param_bUpdateBounds); \
		P_GET_UBOOL(Z_Param_bCalculatePureYaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RegenerateOffsetComponentToWorld(Z_Param_bUpdateBounds,Z_Param_bCalculatePureYaw); \
		P_NATIVE_END; \
	}


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NotifyOfTeleport_Implementation(); \
 \
	DECLARE_FUNCTION(execServerMoveVRDualHybridRootMotion) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_OldConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_STRUCT(FVRConditionalMoveRep2,Z_Param_MoveReps); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRDualHybridRootMotion_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDualHybridRootMotion_Validate")); \
			return; \
		} \
		this->ServerMoveVRDualHybridRootMotion_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRDualExLight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_OldConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_STRUCT(FVRConditionalMoveRep2,Z_Param_MoveReps); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRDualExLight_Validate(Z_Param_TimeStamp0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDualExLight_Validate")); \
			return; \
		} \
		this->ServerMoveVRDualExLight_Implementation(Z_Param_TimeStamp0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRDual) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_OldConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_STRUCT(FVRConditionalMoveRep2,Z_Param_MoveReps); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRDual_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDual_Validate")); \
			return; \
		} \
		this->ServerMoveVRDual_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRExLight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_STRUCT(FVRConditionalMoveRep2,Z_Param_MoveReps); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRExLight_Validate(Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRExLight_Validate")); \
			return; \
		} \
		this->ServerMoveVRExLight_Implementation(Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_STRUCT(FVRConditionalMoveRep2,Z_Param_MoveReps); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVR_Validate(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVR_Validate")); \
			return; \
		} \
		this->ServerMoveVR_Implementation(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_MoveReps,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExtendedSimpleMoveToLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_GoalLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AcceptanceRadius); \
		P_GET_UBOOL(Z_Param_bStopOnOverlap); \
		P_GET_UBOOL(Z_Param_bUsePathfinding); \
		P_GET_UBOOL(Z_Param_bProjectDestinationToNavigation); \
		P_GET_UBOOL(Z_Param_bCanStrafe); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_UBOOL(Z_Param_bAllowPartialPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ExtendedSimpleMoveToLocation(Z_Param_Out_GoalLocation,Z_Param_AcceptanceRadius,Z_Param_bStopOnOverlap,Z_Param_bUsePathfinding,Z_Param_bProjectDestinationToNavigation,Z_Param_bCanStrafe,Z_Param_FilterClass,Z_Param_bAllowPartialPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyOfTeleport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->NotifyOfTeleport_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeleportLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_OriginalLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetTeleportLocation(Z_Param_OriginalLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCharacterHalfHeightVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCharacterHalfHeightVR(Z_Param_HalfHeight,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCharacterSizeVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewHalfHeight); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCharacterSizeVR(Z_Param_NewRadius,Z_Param_NewHalfHeight,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegenerateOffsetComponentToWorld) \
	{ \
		P_GET_UBOOL(Z_Param_bUpdateBounds); \
		P_GET_UBOOL(Z_Param_bCalculatePureYaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RegenerateOffsetComponentToWorld(Z_Param_bUpdateBounds,Z_Param_bCalculatePureYaw); \
		P_NATIVE_END; \
	}


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_EVENT_PARMS \
	struct VRCharacter_eventServerMoveVR_Parms \
	{ \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 CompressedMoveFlags; \
		FVRConditionalMoveRep2 MoveReps; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacter_eventServerMoveVRDual_Parms \
	{ \
		float TimeStamp0; \
		FVector_NetQuantize10 InAccel0; \
		uint8 PendingFlags; \
		uint32 View0; \
		FVector_NetQuantize100 OldCapsuleLoc; \
		FVRConditionalMoveRep OldConditionalReps; \
		FVector_NetQuantize100 OldLFDiff; \
		uint16 OldCapsuleYaw; \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 NewFlags; \
		FVRConditionalMoveRep2 MoveReps; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacter_eventServerMoveVRDualExLight_Parms \
	{ \
		float TimeStamp0; \
		uint8 PendingFlags; \
		uint32 View0; \
		FVector_NetQuantize100 OldCapsuleLoc; \
		FVRConditionalMoveRep OldConditionalReps; \
		FVector_NetQuantize100 OldLFDiff; \
		uint16 OldCapsuleYaw; \
		float TimeStamp; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 NewFlags; \
		FVRConditionalMoveRep2 MoveReps; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacter_eventServerMoveVRDualHybridRootMotion_Parms \
	{ \
		float TimeStamp0; \
		FVector_NetQuantize10 InAccel0; \
		uint8 PendingFlags; \
		uint32 View0; \
		FVector_NetQuantize100 OldCapsuleLoc; \
		FVRConditionalMoveRep OldConditionalReps; \
		FVector_NetQuantize100 OldLFDiff; \
		uint16 OldCapsuleYaw; \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 NewFlags; \
		FVRConditionalMoveRep2 MoveReps; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacter_eventServerMoveVRExLight_Parms \
	{ \
		float TimeStamp; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 CompressedMoveFlags; \
		FVRConditionalMoveRep2 MoveReps; \
		uint8 ClientMovementMode; \
	};


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_CALLBACK_WRAPPERS
#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRCharacter(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_AVRCharacter(); \
public: \
	DECLARE_CLASS(AVRCharacter, AVRBaseCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAVRCharacter(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_AVRCharacter(); \
public: \
	DECLARE_CLASS(AVRCharacter, AVRBaseCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRCharacter(AVRCharacter&&); \
	NO_API AVRCharacter(const AVRCharacter&); \
public:


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRCharacter(AVRCharacter&&); \
	NO_API AVRCharacter(const AVRCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRCharacter)


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_PRIVATE_PROPERTY_OFFSET
#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_17_PROLOG \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_EVENT_PARMS


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_RPC_WRAPPERS \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_CALLBACK_WRAPPERS \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_INCLASS \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_CALLBACK_WRAPPERS \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_INCLASS_NO_PURE_DECLS \
	DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DodgeFightVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
