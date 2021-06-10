#pragma once

#include "defines.h"

// 7 methods, 0 functions
struct TGLGraphicsDriverDecl {
    void* pSuper;  // 0x0 0x8F9E30
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TGLGraphicsDriver_New)(TGLGraphicsDriver* pThis); // [New at 0x7A7B4C] [0x10] ()i
    int(__cdecl* m_TGLGraphicsDriver_Delete)(TGLGraphicsDriver* pThis); // [Delete at 0x7A7B6E] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void*(__cdecl* m_TGLGraphicsDriver_GraphicsModes)(TGLGraphicsDriver* pThis); // [GraphicsModes at 0x7A7B8E] [0x30] ()[]:TGraphicsMode
    TGLGraphics*(__cdecl* m_TGLGraphicsDriver_AttachGraphics)(TGLGraphicsDriver* pThis, int a1, int a2); // [AttachGraphics at 0x7A7C41] [0x34] (i,i):TGLGraphics
    TGLGraphics*(__cdecl* m_TGLGraphicsDriver_CreateGraphics)(TGLGraphicsDriver* pThis, int a1, int a2, int a3, int a4, int a5); // [CreateGraphics at 0x7A7C74] [0x38] (i,i,i,i,i):TGLGraphics
    int(__cdecl* m_TGLGraphicsDriver_SetGraphics)(TGLGraphicsDriver* pThis, TGraphics* a1); // [SetGraphics at 0x7A7CB0] [0x3C] (:TGraphics)i
    int(__cdecl* m_TGLGraphicsDriver_Flip)(TGLGraphicsDriver* pThis, int a1); // [Flip at 0x7A7CE9] [0x40] (i)i
};


// Super: 0x8F9E30
// 0 members
struct TGLGraphicsDriver {
    TGLGraphicsDriverDecl* decl; // 0x0
    int    refs;  // 0x4
};


