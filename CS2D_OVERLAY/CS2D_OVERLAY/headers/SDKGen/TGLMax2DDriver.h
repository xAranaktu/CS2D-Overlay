#pragma once

#include "defines.h"

// 27 methods, 0 functions
struct TGLMax2DDriverDecl {
    void* pSuper;  // 0x0 0x8F8E2C
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TGLMax2DDriver_New)(TGLMax2DDriver* pThis); // [New at 0x7A6C4B] [0x10] ()i
    int(__cdecl* m_TGLMax2DDriver_Delete)(TGLMax2DDriver* pThis); // [Delete at 0x7A6C6D] [0x14] ()i
    BBString*(__cdecl* m_TGLMax2DDriver_ToString)(TGLMax2DDriver* pThis); // [ToString at 0x7A6EF6] [0x18] ()$
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void*(__cdecl* m_TGLMax2DDriver_GraphicsModes)(TGLMax2DDriver* pThis); // [GraphicsModes at 0x7A6CB9] [0x30] ()[]:TGraphicsMode
    TMax2DGraphics*(__cdecl* m_TGLMax2DDriver_AttachGraphics)(TGLMax2DDriver* pThis, int a1, int a2); // [AttachGraphics at 0x7A6CD0] [0x34] (i,i):TMax2DGraphics
    TMax2DGraphics*(__cdecl* m_TGLMax2DDriver_CreateGraphics)(TGLMax2DDriver* pThis, int a1, int a2, int a3, int a4, int a5); // [CreateGraphics at 0x7A6D11] [0x38] (i,i,i,i,i):TMax2DGraphics
    int(__cdecl* m_TGLMax2DDriver_SetGraphics)(TGLMax2DDriver* pThis, TGraphics* a1); // [SetGraphics at 0x7A6D5B] [0x3C] (:TGraphics)i
    int(__cdecl* m_TGLMax2DDriver_Flip)(TGLMax2DDriver* pThis, int a1); // [Flip at 0x7A6ED4] [0x40] (i)i
    TGLImageFrame*(__cdecl* m_TGLMax2DDriver_CreateFrameFromPixmap)(TGLMax2DDriver* pThis, TPixmap* a1, int a2); // [CreateFrameFromPixmap at 0x7A6F04] [0x44] (:TPixmap,i):TGLImageFrame
    int(__cdecl* m_TGLMax2DDriver_SetBlend)(TGLMax2DDriver* pThis, int a1); // [SetBlend at 0x7A6F1E] [0x48] (i)i
    int(__cdecl* m_TGLMax2DDriver_SetAlpha)(TGLMax2DDriver* pThis, float a1); // [SetAlpha at 0x7A702A] [0x4C] (f)i
    int(__cdecl* m_TGLMax2DDriver_SetColor)(TGLMax2DDriver* pThis, int a1, int a2, int a3); // [SetColor at 0x7A70D7] [0x50] (i,i,i)i
    int(__cdecl* m_TGLMax2DDriver_SetClsColor)(TGLMax2DDriver* pThis, int a1, int a2, int a3); // [SetClsColor at 0x7A7183] [0x54] (i,i,i)i
    int(__cdecl* m_TGLMax2DDriver_SetViewport)(TGLMax2DDriver* pThis, int a1, int a2, int a3, int a4); // [SetViewport at 0x7A7234] [0x58] (i,i,i,i)i
    int(__cdecl* m_TGLMax2DDriver_SetTransform)(TGLMax2DDriver* pThis, float a1, float a2, float a3, float a4); // [SetTransform at 0x7A72BE] [0x5C] (f,f,f,f)i
    int(__cdecl* m_TGLMax2DDriver_SetLineWidth)(TGLMax2DDriver* pThis, float a1); // [SetLineWidth at 0x7A70B5] [0x60] (f)i
    int(__cdecl* m_TGLMax2DDriver_Cls)(TGLMax2DDriver* pThis); // [Cls at 0x7A72F4] [0x64] ()i
    int(__cdecl* m_TGLMax2DDriver_Plot)(TGLMax2DDriver* pThis, float a1, float a2); // [Plot at 0x7A7312] [0x68] (f,f)i
    int(__cdecl* m_TGLMax2DDriver_DrawLine)(TGLMax2DDriver* pThis, float a1, float a2, float a3, float a4, float a5, float a6); // [DrawLine at 0x7A735A] [0x6C] (f,f,f,f,f,f)i
    int(__cdecl* m_TGLMax2DDriver_DrawRect)(TGLMax2DDriver* pThis, float a1, float a2, float a3, float a4, float a5, float a6); // [DrawRect at 0x7A7415] [0x70] (f,f,f,f,f,f)i
    int(__cdecl* m_TGLMax2DDriver_DrawOval)(TGLMax2DDriver* pThis, float a1, float a2, float a3, float a4, float a5, float a6); // [DrawOval at 0x7A7536] [0x74] (f,f,f,f,f,f)i
    int(__cdecl* m_TGLMax2DDriver_DrawPoly)(TGLMax2DDriver* pThis, void* a1, float a2, float a3, float a4, float a5); // [DrawPoly at 0x7A769A] [0x78] ([]f,f,f,f,f)i
    int(__cdecl* m_TGLMax2DDriver_DrawPixmap)(TGLMax2DDriver* pThis, TPixmap* a1, int a2, int a3); // [DrawPixmap at 0x7A7744] [0x7C] (:TPixmap,i,i)i
    TPixmap*(__cdecl* m_TGLMax2DDriver_GrabPixmap)(TGLMax2DDriver* pThis, int a1, int a2, int a3, int a4); // [GrabPixmap at 0x7A7823] [0x80] (i,i,i,i):TPixmap
    int(__cdecl* m_TGLMax2DDriver_SetResolution)(TGLMax2DDriver* pThis, float a1, float a2); // [SetResolution at 0x7A789F] [0x84] (f,f)i
    TGLMax2DDriver*(__cdecl* m_TGLMax2DDriver_Create)(TGLMax2DDriver* pThis); // [Create at 0x7A6C8D] [0x88] ():TGLMax2DDriver
    int(__cdecl* m_TGLMax2DDriver_ResetGLContext)(TGLMax2DDriver* pThis, TGraphics* a1); // [ResetGLContext at 0x7A6DDE] [0x8C] (:TGraphics)i
};


// Super: 0x8F8E2C
// 0 members
struct TGLMax2DDriver {
    TGLMax2DDriverDecl* decl; // 0x0
    int    refs;  // 0x4
};


