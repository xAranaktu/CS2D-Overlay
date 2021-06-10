#pragma once

#include "defines.h"

// 2 methods, 2 functions
struct GraphicsDriverDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_GraphicsDriver_New)(GraphicsDriver* pThis); // [New at 0x5C593F] [0x10] ()i
    int(__cdecl* m_GraphicsDriver_Delete)(GraphicsDriver* pThis); // [Delete at 0x5C5961] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_SetDriver)(int a1); // [SetDriver at 0x5C596F] [0x30] (i)i
    int(__cdecl* fn_GetOpenGL)(); // [GetOpenGL at 0x5C5985] [0x34] ()i
};


// 0 members
struct GraphicsDriver {
    GraphicsDriverDecl* decl; // 0x0
    int    refs;  // 0x4
};


