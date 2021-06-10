#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct PhysicsBulletCollisionDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_PhysicsBulletCollision_New)(PhysicsBulletCollision* pThis); // [New at 0x5FB35D] [0x10] ()i
    int(__cdecl* m_PhysicsBulletCollision_Delete)(PhysicsBulletCollision* pThis); // [Delete at 0x5FB38F] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_PhysicsBulletCollision_init)(PhysicsBulletCollision* pThis, Vector2* a1, float a2); // [init at 0x5FB3B1] [0x30] (:Vector2,f)i
};


// 2 members
struct PhysicsBulletCollision {
    PhysicsBulletCollisionDecl* decl; // 0x0
    int    refs;  // 0x4
    Vector2* m_pos; // 0x8 <type_:Vector2>
    float m_rot; // 0xC <type_f>
};


