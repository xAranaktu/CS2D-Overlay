#pragma once

#include "defines.h"

// 2 methods, 2 functions
struct DebugLineDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_DebugLine_New)(DebugLine* pThis); // [New at 0x5CC476] [0x10] ()i
    int(__cdecl* m_DebugLine_Delete)(DebugLine* pThis); // [Delete at 0x5CC4AC] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Create)(float a1, float a2, float a3, float a4); // [Create at 0x5CC4BA] [0x30] (f,f,f,f)i
    int(__cdecl* fn_draw)(); // [draw at 0x5CC4C8] [0x34] ()i
};


// 4 members
struct DebugLine {
    DebugLineDecl* decl; // 0x0
    int    refs;  // 0x4
    float m_x0; // 0x8 <type_f>
    float m_y0; // 0xC <type_f>
    float m_x1; // 0x10 <type_f>
    float m_y1; // 0x14 <type_f>
};


