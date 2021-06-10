#pragma once

#include "defines.h"

// 2 methods, 2 functions
struct MuzzleFlashDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 36(0x24)
    int(__cdecl* m_MuzzleFlash_New)(MuzzleFlash* pThis); // [New at 0x5D6DA3] [0x10] ()i
    int(__cdecl* m_MuzzleFlash_Delete)(MuzzleFlash* pThis); // [Delete at 0x5D6DF0] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Create)(tpl* a1, int a2, float a3, float a4, float a5); // [Create at 0x5D6E12] [0x30] (:tpl,i,f,f,f)i
    int(__cdecl* fn_Draw)(); // [Draw at 0x5D7095] [0x34] ()i
};


// 7 members
struct MuzzleFlash {
    MuzzleFlashDecl* decl; // 0x0
    int    refs;  // 0x4
    float m_r; // 0x8 <type_f>
    float m_a; // 0xC <type_f>
    float m_rot; // 0x10 <type_f>
    tpl* m_pl; // 0x14 <type_:tpl>
    int m_typ; // 0x18 <type_i>
    float m_x; // 0x1C <type_f>
    float m_y; // 0x20 <type_f>
};


