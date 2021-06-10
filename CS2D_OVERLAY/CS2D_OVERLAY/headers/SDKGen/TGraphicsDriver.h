#pragma once

#include "defines.h"

// 7 methods, 0 functions
struct TGraphicsDriverDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TGraphicsDriver_New)(TGraphicsDriver* pThis); // [New at 0x7AC7D8] [0x10] ()i
    int(__cdecl* m_TGraphicsDriver_Delete)(TGraphicsDriver* pThis); // [Delete at 0x7AC7FA] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void*(__cdecl* m_TGraphicsDriver_GraphicsModes)(TGraphicsDriver* pThis); // [GraphicsModes at 0x7B6004] [0x30] ()[]:TGraphicsMode
    TGraphics*(__cdecl* m_TGraphicsDriver_AttachGraphics)(TGraphicsDriver* pThis, int a1, int a2); // [AttachGraphics at 0x7B6004] [0x34] (i,i):TGraphics
    TGraphics*(__cdecl* m_TGraphicsDriver_CreateGraphics)(TGraphicsDriver* pThis, int a1, int a2, int a3, int a4, int a5); // [CreateGraphics at 0x7B6004] [0x38] (i,i,i,i,i):TGraphics
    int(__cdecl* m_TGraphicsDriver_SetGraphics)(TGraphicsDriver* pThis, TGraphics* a1); // [SetGraphics at 0x7B6004] [0x3C] (:TGraphics)i
    int(__cdecl* m_TGraphicsDriver_Flip)(TGraphicsDriver* pThis, int a1); // [Flip at 0x7B6004] [0x40] (i)i
};


// 0 members
struct TGraphicsDriver {
    TGraphicsDriverDecl* decl; // 0x0
    int    refs;  // 0x4
};


