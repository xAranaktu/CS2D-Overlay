#pragma once

#include "defines.h"

// 2 methods, 1 functions
struct EntityShadowDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_EntityShadow_New)(EntityShadow* pThis); // [New at 0x5E6568] [0x10] ()i
    int(__cdecl* m_EntityShadow_Delete)(EntityShadow* pThis); // [Delete at 0x5E65A3] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Create)(float a1, float a2, float a3, float a4, float a5); // [Create at 0x5E65B1] [0x30] (f,f,f,f,f)i
};


// 5 members
struct EntityShadow {
    EntityShadowDecl* decl; // 0x0
    int    refs;  // 0x4
    float m_X; // 0x8 <type_f>
    float m_Y; // 0xC <type_f>
    float m_W; // 0x10 <type_f>
    float m_H; // 0x14 <type_f>
    float m_Z; // 0x18 <type_f>
};


