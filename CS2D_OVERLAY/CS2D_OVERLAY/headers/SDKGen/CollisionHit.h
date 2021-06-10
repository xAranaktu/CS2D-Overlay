#pragma once

#include "defines.h"

// 2 methods, 2 functions
struct CollisionHitDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_CollisionHit_New)(CollisionHit* pThis); // [New at 0x609E6A] [0x10] ()i
    int(__cdecl* m_CollisionHit_Delete)(CollisionHit* pThis); // [Delete at 0x609EAD] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Create)(TGeom* a1, TGeom* a2); // [Create at 0x609EF3] [0x30] (:TGeom,:TGeom)i
    int(__cdecl* fn_UpdateAll)(); // [UpdateAll at 0x609F88] [0x34] ()i
};


// 3 members
struct CollisionHit {
    CollisionHitDecl* decl; // 0x0
    int    refs;  // 0x4
    Vector2* m_velocity; // 0x8 <type_:Vector2>
    TGeom* m_geom; // 0xC <type_:TGeom>
    TGeom* m_geom2; // 0x10 <type_:TGeom>
};


