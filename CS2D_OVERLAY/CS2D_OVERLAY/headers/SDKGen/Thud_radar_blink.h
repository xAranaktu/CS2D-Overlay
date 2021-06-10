#pragma once

#include "defines.h"

// 2 methods, 3 functions
struct Thud_radar_blinkDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_Thud_radar_blink_New)(Thud_radar_blink* pThis); // [New at 0x73AE38] [0x10] ()i
    int(__cdecl* m_Thud_radar_blink_Delete)(Thud_radar_blink* pThis); // [Delete at 0x73AE72] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    Thud_radar_blink*(__cdecl* fn_Create)(int a1, int a2); // [Create at 0x73AE80] [0x30] (i,i):Thud_radar_blink
    int(__cdecl* fn_update)(); // [update at 0x73AEC5] [0x34] ()i
    int(__cdecl* fn_freeall)(); // [freeall at 0x73AFA3] [0x38] ()i
};


// 4 members
struct Thud_radar_blink {
    Thud_radar_blinkDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_x; // 0x8 <type_i>
    int m_y; // 0xC <type_i>
    float m_size; // 0x10 <type_f>
    float m_alpha; // 0x14 <type_f>
};


