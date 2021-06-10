#pragma once

#include "defines.h"

// 19 methods, 0 functions
struct TMax2DDriverDecl {
    void* pSuper;  // 0x0 0x8F9E30
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TMax2DDriver_New)(TMax2DDriver* pThis); // [New at 0x7ABD53] [0x10] ()i
    int(__cdecl* m_TMax2DDriver_Delete)(TMax2DDriver* pThis); // [Delete at 0x7ABD75] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    void* nothing_12; // 0x34
    void* nothing_13; // 0x38
    void* nothing_14; // 0x3C
    void* nothing_15; // 0x40
    TImageFrame*(__cdecl* m_TMax2DDriver_CreateFrameFromPixmap)(TMax2DDriver* pThis, TPixmap* a1, int a2); // [CreateFrameFromPixmap at 0x7B6004] [0x44] (:TPixmap,i):TImageFrame
    int(__cdecl* m_TMax2DDriver_SetBlend)(TMax2DDriver* pThis, int a1); // [SetBlend at 0x7B6004] [0x48] (i)i
    int(__cdecl* m_TMax2DDriver_SetAlpha)(TMax2DDriver* pThis, float a1); // [SetAlpha at 0x7B6004] [0x4C] (f)i
    int(__cdecl* m_TMax2DDriver_SetColor)(TMax2DDriver* pThis, int a1, int a2, int a3); // [SetColor at 0x7B6004] [0x50] (i,i,i)i
    int(__cdecl* m_TMax2DDriver_SetClsColor)(TMax2DDriver* pThis, int a1, int a2, int a3); // [SetClsColor at 0x7B6004] [0x54] (i,i,i)i
    int(__cdecl* m_TMax2DDriver_SetViewport)(TMax2DDriver* pThis, int a1, int a2, int a3, int a4); // [SetViewport at 0x7B6004] [0x58] (i,i,i,i)i
    int(__cdecl* m_TMax2DDriver_SetTransform)(TMax2DDriver* pThis, float a1, float a2, float a3, float a4); // [SetTransform at 0x7B6004] [0x5C] (f,f,f,f)i
    int(__cdecl* m_TMax2DDriver_SetLineWidth)(TMax2DDriver* pThis, float a1); // [SetLineWidth at 0x7B6004] [0x60] (f)i
    int(__cdecl* m_TMax2DDriver_Cls)(TMax2DDriver* pThis); // [Cls at 0x7B6004] [0x64] ()i
    int(__cdecl* m_TMax2DDriver_Plot)(TMax2DDriver* pThis, float a1, float a2); // [Plot at 0x7B6004] [0x68] (f,f)i
    int(__cdecl* m_TMax2DDriver_DrawLine)(TMax2DDriver* pThis, float a1, float a2, float a3, float a4, float a5, float a6); // [DrawLine at 0x7B6004] [0x6C] (f,f,f,f,f,f)i
    int(__cdecl* m_TMax2DDriver_DrawRect)(TMax2DDriver* pThis, float a1, float a2, float a3, float a4, float a5, float a6); // [DrawRect at 0x7B6004] [0x70] (f,f,f,f,f,f)i
    int(__cdecl* m_TMax2DDriver_DrawOval)(TMax2DDriver* pThis, float a1, float a2, float a3, float a4, float a5, float a6); // [DrawOval at 0x7B6004] [0x74] (f,f,f,f,f,f)i
    int(__cdecl* m_TMax2DDriver_DrawPoly)(TMax2DDriver* pThis, void* a1, float a2, float a3, float a4, float a5); // [DrawPoly at 0x7B6004] [0x78] ([]f,f,f,f,f)i
    int(__cdecl* m_TMax2DDriver_DrawPixmap)(TMax2DDriver* pThis, TPixmap* a1, int a2, int a3); // [DrawPixmap at 0x7B6004] [0x7C] (:TPixmap,i,i)i
    TPixmap*(__cdecl* m_TMax2DDriver_GrabPixmap)(TMax2DDriver* pThis, int a1, int a2, int a3, int a4); // [GrabPixmap at 0x7B6004] [0x80] (i,i,i,i):TPixmap
    int(__cdecl* m_TMax2DDriver_SetResolution)(TMax2DDriver* pThis, float a1, float a2); // [SetResolution at 0x7B6004] [0x84] (f,f)i
};


// Super: 0x8F9E30
// 0 members
struct TMax2DDriver {
    TMax2DDriverDecl* decl; // 0x0
    int    refs;  // 0x4
};


