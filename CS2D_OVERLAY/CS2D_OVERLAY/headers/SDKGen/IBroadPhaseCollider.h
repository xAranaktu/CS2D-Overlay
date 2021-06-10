#pragma once

#include "defines.h"

// 5 methods, 0 functions
struct IBroadPhaseColliderDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_IBroadPhaseCollider_New)(IBroadPhaseCollider* pThis); // [New at 0x5EA16C] [0x10] ()i
    int(__cdecl* m_IBroadPhaseCollider_Delete)(IBroadPhaseCollider* pThis); // [Delete at 0x5EA18E] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_IBroadPhaseCollider_ProcessRemovedGeoms)(IBroadPhaseCollider* pThis); // [ProcessRemovedGeoms at 0x7B6004] [0x30] ()i
    int(__cdecl* m_IBroadPhaseCollider_Add)(IBroadPhaseCollider* pThis, TGeom* a1); // [Add at 0x7B6004] [0x34] (:TGeom)i
    int(__cdecl* m_IBroadPhaseCollider_Update)(IBroadPhaseCollider* pThis); // [Update at 0x7B6004] [0x38] ()i
};


// 0 members
struct IBroadPhaseCollider {
    IBroadPhaseColliderDecl* decl; // 0x0
    int    refs;  // 0x4
};


