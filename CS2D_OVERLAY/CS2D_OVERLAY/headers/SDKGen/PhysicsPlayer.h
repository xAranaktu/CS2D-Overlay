#pragma once

#include "defines.h"

// 5 methods, 5 functions
struct PhysicsPlayerDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 40(0x28)
    int(__cdecl* m_PhysicsPlayer_New)(PhysicsPlayer* pThis); // [New at 0x5FF1C5] [0x10] ()i
    int(__cdecl* m_PhysicsPlayer_Delete)(PhysicsPlayer* pThis); // [Delete at 0x5FF23B] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    PhysicsPlayer*(__cdecl* fn_GetByID)(int a1); // [GetByID at 0x5FF2A3] [0x30] (i):PhysicsPlayer
    int(__cdecl* fn_SetForce)(int a1, float a2, float a3); // [SetForce at 0x5FF2B8] [0x34] (i,f,f)i
    int(__cdecl* fn_SetPosition)(int a1, int a2, int a3); // [SetPosition at 0x5FF3C1] [0x38] (i,i,i)i
    int(__cdecl* fn_UpdateAll)(); // [UpdateAll at 0x5FF4A4] [0x3C] ()i
    int(__cdecl* m_PhysicsPlayer_Disable)(PhysicsPlayer* pThis); // [Disable at 0x5FF91A] [0x40] ()i
    int(__cdecl* m_PhysicsPlayer_Enable)(PhysicsPlayer* pThis); // [Enable at 0x5FF9AA] [0x44] ()i
    int(__cdecl* m_PhysicsPlayer_Init)(PhysicsPlayer* pThis, Vector2* a1); // [Init at 0x5FF9D9] [0x48] (:Vector2)i
    PhysicsPlayer*(__cdecl* fn_Create)(int a1, int a2, int a3); // [Create at 0x5FFA40] [0x4C] (i,i,i):PhysicsPlayer
};


// 8 members
struct PhysicsPlayer {
    PhysicsPlayerDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_id; // 0x8 <type_i>
    PhysicsUniqueID* m_physId; // 0xC <type_:PhysicsUniqueID>
    TBody* m_body; // 0x10 <type_:TBody>
    TGeom* m_geom; // 0x14 <type_:TGeom>
    PhysicsPlatform* m_parentPlatform; // 0x18 <type_:PhysicsPlatform>
    int m_controllerId; // 0x1C <type_i>
    Vector2* m_oldPosition; // 0x20 <type_:Vector2>
    int m_moved; // 0x24 <type_i>
};


