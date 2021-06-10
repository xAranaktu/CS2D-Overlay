#pragma once

#include "defines.h"

// 2 methods, 2 functions
struct MathDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_Math_New)(Math* pThis); // [New at 0x5B9DE0] [0x10] ()i
    int(__cdecl* m_Math_Delete)(Math* pThis); // [Delete at 0x5B9E02] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_pointInRect)(int a1, int a2, int a3, int a4, int a5, int a6); // [pointInRect at 0x5B9E10] [0x30] (i,i,i,i,i,i)i
    float(__cdecl* fn_dist)(int a1, int a2, int a3, int a4); // [dist at 0x5B9E66] [0x34] (i,i,i,i)f
};


// 0 members
struct Math {
    MathDecl* decl; // 0x0
    int    refs;  // 0x4
};


