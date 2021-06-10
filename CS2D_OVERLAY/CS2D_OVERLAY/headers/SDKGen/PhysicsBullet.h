#pragma once

#include "defines.h"

// 2 methods, 3 functions
struct PhysicsBulletDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_PhysicsBullet_New)(PhysicsBullet* pThis); // [New at 0x5FB3E6] [0x10] ()i
    int(__cdecl* m_PhysicsBullet_Delete)(PhysicsBullet* pThis); // [Delete at 0x5FB408] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    PhysicsBulletCollision*(__cdecl* fn_Create)(float a1, float a2, float a3, float a4, float a5, float a6); // [Create at 0x5FB416] [0x30] (f,f,f,f,f,f):PhysicsBulletCollision
    int(__cdecl* fn_CheckProjectile)(Tpro* a1, float a2, float a3); // [CheckProjectile at 0x5FB6A5] [0x34] (:Tpro,f,f)i
    int(__cdecl* fn_LineCollidesObjects)(float a1, float a2, float a3, float a4); // [LineCollidesObjects at 0x5FB8B6] [0x38] (f,f,f,f)i
};


// 0 members
struct PhysicsBullet {
    PhysicsBulletDecl* decl; // 0x0
    int    refs;  // 0x4
};


