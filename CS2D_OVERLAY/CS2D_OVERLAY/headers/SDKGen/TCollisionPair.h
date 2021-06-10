#pragma once

#include "defines.h"

// 4 methods, 1 functions
struct TCollisionPairDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_TCollisionPair_New)(TCollisionPair* pThis); // [New at 0x5F8957] [0x10] ()i
    int(__cdecl* m_TCollisionPair_Delete)(TCollisionPair* pThis); // [Delete at 0x5F898F] [0x14] ()i
    void* nothing_5; // 0x18
    int(__cdecl* m_TCollisionPair_Compare)(TCollisionPair* pThis, Object* a1); // [Compare at 0x5F8A80] [0x1C] (:Object)i
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TCollisionPair*(__cdecl* fn_Create)(TGeom* a1, TGeom* a2); // [Create at 0x5F89C4] [0x30] (:TGeom,:TGeom):TCollisionPair
    int(__cdecl* m_TCollisionPair_GetHashCode)(TCollisionPair* pThis); // [GetHashCode at 0x5F8A62] [0x34] ()i
};


// 2 members
struct TCollisionPair {
    TCollisionPairDecl* decl; // 0x0
    int    refs;  // 0x4
    TGeom* m_geom1; // 0x8 <type_:TGeom>
    TGeom* m_geom2; // 0xC <type_:TGeom>
};


