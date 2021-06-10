#pragma once

#include "defines.h"

// 5 methods, 4 functions
struct PhysicsProjectileDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 32(0x20)
    int(__cdecl* m_PhysicsProjectile_New)(PhysicsProjectile* pThis); // [New at 0x5FEAE0] [0x10] ()i
    int(__cdecl* m_PhysicsProjectile_Delete)(PhysicsProjectile* pThis); // [Delete at 0x5FEB3C] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    PhysicsProjectile*(__cdecl* fn_GetByID)(int a1, int a2); // [GetByID at 0x5FEB93] [0x30] (i,i):PhysicsProjectile
    int(__cdecl* m_PhysicsProjectile_Disable)(PhysicsProjectile* pThis); // [Disable at 0x5FEC5B] [0x34] ()i
    int(__cdecl* m_PhysicsProjectile_Enable)(PhysicsProjectile* pThis); // [Enable at 0x5FED01] [0x38] ()i
    int(__cdecl* fn_Set)(tpro* a1, int a2, int a3); // [Set at 0x5FED30] [0x3C] (:tpro,i,i)i
    int(__cdecl* fn_UpdateAll)(); // [UpdateAll at 0x5FEE0C] [0x40] ()i
    int(__cdecl* m_PhysicsProjectile_Init)(PhysicsProjectile* pThis, Vector2* a1); // [Init at 0x5FEFAB] [0x44] (:Vector2)i
    PhysicsProjectile*(__cdecl* fn_Create)(tpro* a1, int a2, int a3); // [Create at 0x5FF04D] [0x48] (:tpro,i,i):PhysicsProjectile
};


// 6 members
struct PhysicsProjectile {
    PhysicsProjectileDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_id; // 0x8 <type_i>
    PhysicsUniqueID* m_physId; // 0xC <type_:PhysicsUniqueID>
    tpro* m_projectile; // 0x10 <type_:tpro>
    int m_player; // 0x14 <type_i>
    TBody* m_body; // 0x18 <type_:TBody>
    TGeom* m_geom; // 0x1C <type_:TGeom>
};


