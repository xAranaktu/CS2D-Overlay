#pragma once

#include "defines.h"

// 2 methods, 2 functions
struct NativeFlareDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 40(0x28)
    int(__cdecl* m_NativeFlare_New)(NativeFlare* pThis); // [New at 0x5D7680] [0x10] ()i
    int(__cdecl* m_NativeFlare_Delete)(NativeFlare* pThis); // [Delete at 0x5D76D8] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Create)(tpl* a1, float a2, float a3, float a4, int a5, MuzzleFlash* a6, float a7); // [Create at 0x5D770D] [0x30] (:tpl,f,f,f,i,:MuzzleFlash,f)i
    int(__cdecl* fn_Draw)(); // [Draw at 0x5D779F] [0x34] ()i
};


// 8 members
struct NativeFlare {
    NativeFlareDecl* decl; // 0x0
    int    refs;  // 0x4
    float m_r; // 0x8 <type_f>
    float m_sx; // 0xC <type_f>
    float m_a; // 0x10 <type_f>
    tpl* m_pl; // 0x14 <type_:tpl>
    float m_dist; // 0x18 <type_f>
    float m_rot; // 0x1C <type_f>
    int m_typ; // 0x20 <type_i>
    MuzzleFlash* m_mf; // 0x24 <type_:MuzzleFlash>
};


