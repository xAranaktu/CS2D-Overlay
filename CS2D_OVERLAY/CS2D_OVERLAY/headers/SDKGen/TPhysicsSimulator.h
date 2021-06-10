#pragma once

#include "defines.h"

// 44 methods, 1 functions
struct TPhysicsSimulatorDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 144(0x90)
    int(__cdecl* m_TPhysicsSimulator_New)(TPhysicsSimulator* pThis); // [New at 0x5F1AC8] [0x10] ()i
    int(__cdecl* m_TPhysicsSimulator_Delete)(TPhysicsSimulator* pThis); // [Delete at 0x5F1C59] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TGeomList*(__cdecl* m_TPhysicsSimulator_GetGeomList)(TPhysicsSimulator* pThis); // [GetGeomList at 0x5F1DA4] [0x30] ():TGeomList
    TBodyList*(__cdecl* m_TPhysicsSimulator_GetBodyList)(TPhysicsSimulator* pThis); // [GetBodyList at 0x5F1DB3] [0x34] ():TBodyList
    TControllerList*(__cdecl* m_TPhysicsSimulator_GetControllerList)(TPhysicsSimulator* pThis); // [GetControllerList at 0x5F1DC2] [0x38] ():TControllerList
    TJointList*(__cdecl* m_TPhysicsSimulator_GetJointList)(TPhysicsSimulator* pThis); // [GetJointList at 0x5F1DD1] [0x3C] ():TJointList
    TArbiterList*(__cdecl* m_TPhysicsSimulator_GetArbiterList)(TPhysicsSimulator* pThis); // [GetArbiterList at 0x5F1DE0] [0x40] ():TArbiterList
    Vector2*(__cdecl* m_TPhysicsSimulator_GetGravity)(TPhysicsSimulator* pThis); // [GetGravity at 0x5F1DEF] [0x44] ():Vector2
    int(__cdecl* m_TPhysicsSimulator_SetGravity)(TPhysicsSimulator* pThis, Vector2* a1); // [SetGravity at 0x5F1E07] [0x48] (:Vector2)i
    int(__cdecl* m_TPhysicsSimulator_GetIterations)(TPhysicsSimulator* pThis); // [GetIterations at 0x5F1E28] [0x4C] ()i
    int(__cdecl* m_TPhysicsSimulator_SetIterations)(TPhysicsSimulator* pThis, int a1); // [SetIterations at 0x5F1E37] [0x50] (i)i
    float(__cdecl* m_TPhysicsSimulator_GetAllowedPenetration)(TPhysicsSimulator* pThis); // [GetAllowedPenetration at 0x5F1E4E] [0x54] ()f
    int(__cdecl* m_TPhysicsSimulator_SetAllowedPenetration)(TPhysicsSimulator* pThis, float a1); // [SetAllowedPenetration at 0x5F1E5D] [0x58] (f)i
    float(__cdecl* m_TPhysicsSimulator_GetBiasFactor)(TPhysicsSimulator* pThis); // [GetBiasFactor at 0x5F1E74] [0x5C] ()f
    int(__cdecl* m_TPhysicsSimulator_SetBiasFactor)(TPhysicsSimulator* pThis, float a1); // [SetBiasFactor at 0x5F1E83] [0x60] (f)i
    int(__cdecl* m_TPhysicsSimulator_GetMaxContactsToDetect)(TPhysicsSimulator* pThis); // [GetMaxContactsToDetect at 0x5F1E9A] [0x64] ()i
    int(__cdecl* m_TPhysicsSimulator_SetMaxContactsToDetect)(TPhysicsSimulator* pThis, int a1); // [SetMaxContactsToDetect at 0x5F1EA9] [0x68] (i)i
    int(__cdecl* m_TPhysicsSimulator_SetMaxContactsToResolve)(TPhysicsSimulator* pThis, int a1); // [SetMaxContactsToResolve at 0x5F1EC0] [0x6C] (i)i
    int(__cdecl* m_TPhysicsSimulator_GetMaxContactsToResolve)(TPhysicsSimulator* pThis); // [GetMaxContactsToResolve at 0x5F1ED7] [0x70] ()i
    int(__cdecl* m_TPhysicsSimulator_GetFrictionType)(TPhysicsSimulator* pThis); // [GetFrictionType at 0x5F1EE6] [0x74] ()i
    int(__cdecl* m_TPhysicsSimulator_SetFrictionType)(TPhysicsSimulator* pThis, int a1); // [SetFrictionType at 0x5F1EF5] [0x78] (i)i
    TPhysicsSimulator*(__cdecl* fn_Create)(Vector2* a1); // [Create at 0x5F1F0C] [0x7C] (:Vector2):TPhysicsSimulator
    int(__cdecl* m_TPhysicsSimulator__Init)(TPhysicsSimulator* pThis); // [_Init at 0x5F1F5B] [0x80] ()i
    int(__cdecl* m_TPhysicsSimulator_SetBroadPhaseCollider)(TPhysicsSimulator* pThis, IBroadPhaseCollider* a1); // [SetBroadPhaseCollider at 0x5F2191] [0x84] (:IBroadPhaseCollider)i
    int(__cdecl* m_TPhysicsSimulator_AddGeom)(TPhysicsSimulator* pThis, TGeom* a1); // [AddGeom at 0x5F21E3] [0x88] (:TGeom)i
    int(__cdecl* m_TPhysicsSimulator_RemoveGeom)(TPhysicsSimulator* pThis, TGeom* a1); // [RemoveGeom at 0x5F221A] [0x8C] (:TGeom)i
    int(__cdecl* m_TPhysicsSimulator_AddBody)(TPhysicsSimulator* pThis, TBody* a1); // [AddBody at 0x5F223B] [0x90] (:TBody)i
    int(__cdecl* m_TPhysicsSimulator_RemoveBody)(TPhysicsSimulator* pThis, TBody* a1); // [RemoveBody at 0x5F2272] [0x94] (:TBody)i
    int(__cdecl* m_TPhysicsSimulator_AddController)(TPhysicsSimulator* pThis, TController* a1); // [AddController at 0x5F2293] [0x98] (:TController)i
    int(__cdecl* m_TPhysicsSimulator_RemoveController)(TPhysicsSimulator* pThis, TController* a1); // [RemoveController at 0x5F22CA] [0x9C] (:TController)i
    int(__cdecl* m_TPhysicsSimulator_AddJoint)(TPhysicsSimulator* pThis, TJoint* a1); // [AddJoint at 0x5F22EB] [0xA0] (:TJoint)i
    int(__cdecl* m_TPhysicsSimulator_RemoveJoint)(TPhysicsSimulator* pThis, TJoint* a1); // [RemoveJoint at 0x5F2322] [0xA4] (:TJoint)i
    TBody*(__cdecl* m_TPhysicsSimulator_GetBody)(TPhysicsSimulator* pThis, Object* a1); // [GetBody at 0x5F2343] [0xA8] (:Object):TBody
    int(__cdecl* m_TPhysicsSimulator_Clear)(TPhysicsSimulator* pThis); // [Clear at 0x5F23D9] [0xAC] ()i
    int(__cdecl* m_TPhysicsSimulator_Update)(TPhysicsSimulator* pThis, float a1); // [Update at 0x5F2428] [0xB0] (f)i
    TGeom*(__cdecl* m_TPhysicsSimulator_Collide)(TPhysicsSimulator* pThis, Vector2* a1); // [Collide at 0x5F2581] [0xB4] (:Vector2):TGeom
    int(__cdecl* m_TPhysicsSimulator__DoBroadPhaseCollision)(TPhysicsSimulator* pThis); // [_DoBroadPhaseCollision at 0x5F25F7] [0xB8] ()i
    int(__cdecl* m_TPhysicsSimulator__DoNarrowPhaseCollision)(TPhysicsSimulator* pThis); // [_DoNarrowPhaseCollision at 0x5F2617] [0xBC] ()i
    int(__cdecl* m_TPhysicsSimulator__ApplyForces)(TPhysicsSimulator* pThis, float a1); // [_ApplyForces at 0x5F2688] [0xC0] (f)i
    int(__cdecl* m_TPhysicsSimulator__ApplyImpulses)(TPhysicsSimulator* pThis, float a1); // [_ApplyImpulses at 0x5F27F3] [0xC4] (f)i
    int(__cdecl* m_TPhysicsSimulator__UpdatePositions)(TPhysicsSimulator* pThis, float a1); // [_UpdatePositions at 0x5F2969] [0xC8] (f)i
    int(__cdecl* m_TPhysicsSimulator__ReleaseArbitersWithContactCountZero)(TPhysicsSimulator* pThis, TArbiter* a1); // [_ReleaseArbitersWithContactCountZero at 0x5F29D1] [0xCC] (:TArbiter)i
    int(__cdecl* m_TPhysicsSimulator__ProcessAddedItems)(TPhysicsSimulator* pThis); // [_ProcessAddedItems at 0x5F2A04] [0xD0] ()i
    int(__cdecl* m_TPhysicsSimulator__ProcessRemovedItems)(TPhysicsSimulator* pThis); // [_ProcessRemovedItems at 0x5F2C2E] [0xD4] ()i
    int(__cdecl* m_TPhysicsSimulator__ProcessDisposedItems)(TPhysicsSimulator* pThis); // [_ProcessDisposedItems at 0x5F2EAC] [0xD8] ()i
};


// 34 members
struct TPhysicsSimulator {
    TPhysicsSimulatorDecl* decl; // 0x0
    int    refs;  // 0x4
    Vector2* m__gravity; // 0x8 <type_:Vector2>
    TArbiterPool* m__arbiterPool; // 0xC <type_:TArbiterPool>
    int m__arbiterPoolSize; // 0x10 <type_i>
    TContactPool* m__contactPool; // 0x14 <type_:TContactPool>
    int m__contactPoolSize; // 0x18 <type_i>
    TGeomList* m__geomList; // 0x1C <type_:TGeomList>
    TList* m__geomAddList; // 0x20 <type_:TList>
    TList* m__geomRemoveList; // 0x24 <type_:TList>
    TBodyList* m__bodyList; // 0x28 <type_:TBodyList>
    TList* m__bodyAddList; // 0x2C <type_:TList>
    TList* m__bodyRemoveList; // 0x30 <type_:TList>
    TControllerList* m__controllerList; // 0x34 <type_:TControllerList>
    TList* m__controllerAddList; // 0x38 <type_:TList>
    TList* m__controllerRemoveList; // 0x3C <type_:TList>
    TJointList* m__jointList; // 0x40 <type_:TJointList>
    TList* m__jointAddList; // 0x44 <type_:TList>
    TList* m__jointRemoveList; // 0x48 <type_:TList>
    TArbiterList* m__arbiterList; // 0x4C <type_:TArbiterList>
    int m__iterations; // 0x50 <type_i>
    float m__allowedPenetration; // 0x54 <type_f>
    float m__biasFactor; // 0x58 <type_f>
    int m__maxContactsToDetect; // 0x5C <type_i>
    int m__maxContactsToResolve; // 0x60 <type_i>
    int m__frictionType; // 0x64 <type_i>
    int m_UpdateTime; // 0x68 <type_i>
    int m_CleanUptime; // 0x6C <type_i>
    int m_BroadPhaseCollisionTime; // 0x70 <type_i>
    int m_NarrowPhaseCollisionTime; // 0x74 <type_i>
    int m_ApplyForcesTime; // 0x78 <type_i>
    int m_ApplyImpulsesTime; // 0x7C <type_i>
    int m_UpdatePositionsTime; // 0x80 <type_i>
    int m_EnableDiagnostics; // 0x84 <type_i>
    IBroadPhaseCollider* m__broadPhaseCollider; // 0x88 <type_:IBroadPhaseCollider>
    Vector2* m__gravityForce; // 0x8C <type_:Vector2>
};


