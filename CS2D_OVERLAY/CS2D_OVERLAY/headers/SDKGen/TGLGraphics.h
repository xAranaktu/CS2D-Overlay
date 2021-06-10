#pragma once

#include "defines.h"

// 5 methods, 0 functions
struct TGLGraphicsDecl {
    void* pSuper;  // 0x0 0x8F9BF4
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TGLGraphics_New)(TGLGraphics* pThis); // [New at 0x7A7A3F] [0x10] ()i
    int(__cdecl* m_TGLGraphics_Delete)(TGLGraphics* pThis); // [Delete at 0x7A7A68] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    TGLGraphicsDriver*(__cdecl* m_TGLGraphics_Driver)(TGLGraphics* pThis); // [Driver at 0x7A7A88] [0x34] ():TGLGraphicsDriver
    int(__cdecl* m_TGLGraphics_GetSettings)(TGLGraphics* pThis, void* a1, void* a2, void* a3, void* a4, void* a5); // [GetSettings at 0x7A7A96] [0x38] (*i,*i,*i,*i,*i)i
    int(__cdecl* m_TGLGraphics_Close)(TGLGraphics* pThis); // [Close at 0x7A7B1A] [0x3C] ()i
};


// Super: 0x8F9BF4
// 1 members
struct TGLGraphics {
    TGLGraphicsDecl* decl; // 0x0
    int    refs;  // 0x4
    int m__context; // 0x8 <type_i>
};


