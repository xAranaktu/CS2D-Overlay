#pragma once

#include "defines.h"

// 9 methods, 2 functions
struct TSweepAndPruneColliderDecl {
    void* pSuper;  // 0x0 0x87530C
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 36(0x24)
    int(__cdecl* m_TSweepAndPruneCollider_New)(TSweepAndPruneCollider* pThis); // [New at 0x5F7DF5] [0x10] ()i
    int(__cdecl* m_TSweepAndPruneCollider_Delete)(TSweepAndPruneCollider* pThis); // [Delete at 0x5F7E60] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TSweepAndPruneCollider_ProcessRemovedGeoms)(TSweepAndPruneCollider* pThis); // [ProcessRemovedGeoms at 0x5F7FD2] [0x30] ()i
    int(__cdecl* m_TSweepAndPruneCollider_Add)(TSweepAndPruneCollider* pThis, TGeom* a1); // [Add at 0x5F8182] [0x34] (:TGeom)i
    int(__cdecl* m_TSweepAndPruneCollider_Update)(TSweepAndPruneCollider* pThis); // [Update at 0x5F8626] [0x38] ()i
    TSweepAndPruneCollider*(__cdecl* fn_Create)(TPhysicsSimulator* a1); // [Create at 0x5F7EE8] [0x3C] (:TPhysicsSimulator):TSweepAndPruneCollider
    int(__cdecl* fn_DoCollision)(TGeom* a1, TGeom* a2); // [DoCollision at 0x5F820C] [0x40] (:TGeom,:TGeom)i
    int(__cdecl* m_TSweepAndPruneCollider_UpdateExtentValues)(TSweepAndPruneCollider* pThis); // [UpdateExtentValues at 0x5F844C] [0x44] ()i
    int(__cdecl* m_TSweepAndPruneCollider_HandleCollisions)(TSweepAndPruneCollider* pThis); // [HandleCollisions at 0x5F851B] [0x48] ()i
    int(__cdecl* m_TSweepAndPruneCollider_Run)(TSweepAndPruneCollider* pThis); // [Run at 0x5F85FB] [0x4C] ()i
    int(__cdecl* m_TSweepAndPruneCollider_ForceNonIncrementalUpdate)(TSweepAndPruneCollider* pThis); // [ForceNonIncrementalUpdate at 0x5F867B] [0x50] ()i
};


// Super: 0x87530C
// 7 members
struct TSweepAndPruneCollider {
    TSweepAndPruneColliderDecl* decl; // 0x0
    int    refs;  // 0x4
    TPhysicsSimulator* m__physics; // 0x8 <type_:TPhysicsSimulator>
    TExtentList* m__xExtentList; // 0xC <type_:TExtentList>
    TExtentList* m__yExtentList; // 0x10 <type_:TExtentList>
    TExtentInfoList* m__xInfoList; // 0x14 <type_:TExtentInfoList>
    TExtentInfoList* m__yInfoList; // 0x18 <type_:TExtentInfoList>
    TCollisionPairDictionary* m__collisionPairs; // 0x1C <type_:TCollisionPairDictionary>
    int m__bForce; // 0x20 <type_i>
};


