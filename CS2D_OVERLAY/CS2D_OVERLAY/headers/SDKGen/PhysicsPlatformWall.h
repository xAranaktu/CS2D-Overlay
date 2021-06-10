#pragma once

#include "defines.h"

// 4 methods, 1 functions
struct PhysicsPlatformWallDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_PhysicsPlatformWall_New)(PhysicsPlatformWall* pThis); // [New at 0x602CEE] [0x10] ()i
    int(__cdecl* m_PhysicsPlatformWall_Delete)(PhysicsPlatformWall* pThis); // [Delete at 0x602D34] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_PhysicsPlatformWall_Disable)(PhysicsPlatformWall* pThis); // [Disable at 0x602D69] [0x30] ()i
    int(__cdecl* m_PhysicsPlatformWall_Enable)(PhysicsPlatformWall* pThis); // [Enable at 0x602DB7] [0x34] ()i
    PhysicsPlatformWall*(__cdecl* fn_Create)(int a1, int a2); // [Create at 0x602DD7] [0x38] (i,i):PhysicsPlatformWall
};


// 4 members
struct PhysicsPlatformWall {
    PhysicsPlatformWallDecl* decl; // 0x0
    int    refs;  // 0x4
    Tbody* m_body; // 0x8 <type_:Tbody>
    TGeom* m_geom; // 0xC <type_:TGeom>
    int m_destroyed; // 0x10 <type_i>
    int m_id; // 0x14 <type_i>
};


