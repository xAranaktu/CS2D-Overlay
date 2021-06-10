#pragma once

#include "defines.h"

// 6 methods, 0 functions
struct TGraphicsDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TGraphics_New)(TGraphics* pThis); // [New at 0x7AC6BE] [0x10] ()i
    int(__cdecl* m_TGraphics_Delete)(TGraphics* pThis); // [Delete at 0x7AC6E0] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TGraphics__pad)(TGraphics* pThis); // [_pad at 0x7AC6EE] [0x30] ()i
    TGraphicsDriver*(__cdecl* m_TGraphics_Driver)(TGraphics* pThis); // [Driver at 0x7B6004] [0x34] ():TGraphicsDriver
    int(__cdecl* m_TGraphics_GetSettings)(TGraphics* pThis, void* a1, void* a2, void* a3, void* a4, void* a5); // [GetSettings at 0x7B6004] [0x38] (*i,*i,*i,*i,*i)i
    int(__cdecl* m_TGraphics_Close)(TGraphics* pThis); // [Close at 0x7B6004] [0x3C] ()i
};


// 0 members
struct TGraphics {
    TGraphicsDecl* decl; // 0x0
    int    refs;  // 0x4
};


