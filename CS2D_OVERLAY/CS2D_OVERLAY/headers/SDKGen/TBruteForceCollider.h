#pragma once

#include "defines.h"

// 6 methods, 1 functions
struct TBruteForceColliderDecl {
    void* pSuper;  // 0x0 0x87530C
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_TBruteForceCollider_New)(TBruteForceCollider* pThis); // [New at 0x5F791B] [0x10] ()i
    int(__cdecl* m_TBruteForceCollider_Delete)(TBruteForceCollider* pThis); // [Delete at 0x5F7974] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TBruteForceCollider_ProcessRemovedGeoms)(TBruteForceCollider* pThis); // [ProcessRemovedGeoms at 0x5F7A31] [0x30] ()i
    int(__cdecl* m_TBruteForceCollider_Add)(TBruteForceCollider* pThis, TGeom* a1); // [Add at 0x5F7A23] [0x34] (:TGeom)i
    int(__cdecl* m_TBruteForceCollider_Update)(TBruteForceCollider* pThis); // [Update at 0x5F7A3F] [0x38] ()i
    TBruteForceCollider*(__cdecl* fn_Create)(TPhysicsSimulator* a1); // [Create at 0x5F79EB] [0x3C] (:TPhysicsSimulator):TBruteForceCollider
    int(__cdecl* m_TBruteForceCollider_DoCollision)(TBruteForceCollider* pThis); // [DoCollision at 0x5F7A59] [0x40] ()i
};


// Super: 0x87530C
// 5 members
struct TBruteForceCollider {
    TBruteForceColliderDecl* decl; // 0x0
    int    refs;  // 0x4
    TPhysicsSimulator* m__physicsSimulator; // 0x8 <type_:TPhysicsSimulator>
    TGeom* m__geometryA; // 0xC <type_:TGeom>
    TGeom* m__geometryB; // 0x10 <type_:TGeom>
    TArbiter* m__arbiter; // 0x14 <type_:TArbiter>
    void* m__geomList; // 0x18 <type_[]:TGeom>
};


