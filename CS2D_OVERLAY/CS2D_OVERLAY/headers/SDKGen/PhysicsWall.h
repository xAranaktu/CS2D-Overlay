#pragma once

#include "defines.h"

// 4 methods, 6 functions
struct PhysicsWallDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_PhysicsWall_New)(PhysicsWall* pThis); // [New at 0x5FD84D] [0x10] ()i
    int(__cdecl* m_PhysicsWall_Delete)(PhysicsWall* pThis); // [Delete at 0x5FD893] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_CheckTile)(int a1, int a2); // [CheckTile at 0x5FD8C8] [0x30] (i,i)i
    int(__cdecl* fn_UpdateAll)(); // [UpdateAll at 0x5FDACE] [0x34] ()i
    int(__cdecl* fn_UpdatePlayers)(); // [UpdatePlayers at 0x5FDF15] [0x38] ()i
    int(__cdecl* m_PhysicsWall_Disable)(PhysicsWall* pThis); // [Disable at 0x5FDFB9] [0x3C] ()i
    int(__cdecl* m_PhysicsWall_Enable)(PhysicsWall* pThis); // [Enable at 0x5FE0B3] [0x40] ()i
    PhysicsWall*(__cdecl* fn_Set)(int a1, int a2, int a3); // [Set at 0x5FE0E8] [0x44] (i,i,i):PhysicsWall
    PhysicsWall*(__cdecl* fn_Get)(int a1, int a2); // [Get at 0x5FE295] [0x48] (i,i):PhysicsWall
    PhysicsWall*(__cdecl* fn_Create)(int a1, int a2, int a3); // [Create at 0x5FE2D2] [0x4C] (i,i,i):PhysicsWall
};


// 4 members
struct PhysicsWall {
    PhysicsWallDecl* decl; // 0x0
    int    refs;  // 0x4
    Tbody* m_body; // 0x8 <type_:Tbody>
    TGeom* m_geom; // 0xC <type_:TGeom>
    int m_tileX; // 0x10 <type_i>
    int m_tileY; // 0x14 <type_i>
};


