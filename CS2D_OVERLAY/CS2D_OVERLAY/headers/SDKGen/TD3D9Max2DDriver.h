#pragma once

#include "defines.h"

// 27 methods, 0 functions
struct TD3D9Max2DDriverDecl {
    void* pSuper;  // 0x0 0x8F8E2C
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TD3D9Max2DDriver_New)(TD3D9Max2DDriver* pThis); // [New at 0x79D92F] [0x10] ()i
    int(__cdecl* m_TD3D9Max2DDriver_Delete)(TD3D9Max2DDriver* pThis); // [Delete at 0x79D951] [0x14] ()i
    BBString*(__cdecl* m_TD3D9Max2DDriver_ToString)(TD3D9Max2DDriver* pThis); // [ToString at 0x79D971] [0x18] ()$
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void*(__cdecl* m_TD3D9Max2DDriver_GraphicsModes)(TD3D9Max2DDriver* pThis); // [GraphicsModes at 0x79D9DB] [0x30] ()[]:TGraphicsMode
    TGraphics*(__cdecl* m_TD3D9Max2DDriver_AttachGraphics)(TD3D9Max2DDriver* pThis, int a1, int a2); // [AttachGraphics at 0x79D9F2] [0x34] (i,i):TGraphics
    TGraphics*(__cdecl* m_TD3D9Max2DDriver_CreateGraphics)(TD3D9Max2DDriver* pThis, int a1, int a2, int a3, int a4, int a5); // [CreateGraphics at 0x79DA33] [0x38] (i,i,i,i,i):TGraphics
    int(__cdecl* m_TD3D9Max2DDriver_SetGraphics)(TD3D9Max2DDriver* pThis, TGraphics* a1); // [SetGraphics at 0x79DA89] [0x3C] (:TGraphics)i
    int(__cdecl* m_TD3D9Max2DDriver_Flip)(TD3D9Max2DDriver* pThis, int a1); // [Flip at 0x79DBF8] [0x40] (i)i
    TImageFrame*(__cdecl* m_TD3D9Max2DDriver_CreateFrameFromPixmap)(TD3D9Max2DDriver* pThis, TPixmap* a1, int a2); // [CreateFrameFromPixmap at 0x79DF2E] [0x44] (:TPixmap,i):TImageFrame
    int(__cdecl* m_TD3D9Max2DDriver_SetBlend)(TD3D9Max2DDriver* pThis, int a1); // [SetBlend at 0x79DF59] [0x48] (i)i
    int(__cdecl* m_TD3D9Max2DDriver_SetAlpha)(TD3D9Max2DDriver* pThis, float a1); // [SetAlpha at 0x79E0E1] [0x4C] (f)i
    int(__cdecl* m_TD3D9Max2DDriver_SetColor)(TD3D9Max2DDriver* pThis, int a1, int a2, int a3); // [SetColor at 0x79E182] [0x50] (i,i,i)i
    int(__cdecl* m_TD3D9Max2DDriver_SetClsColor)(TD3D9Max2DDriver* pThis, int a1, int a2, int a3); // [SetClsColor at 0x79E24A] [0x54] (i,i,i)i
    int(__cdecl* m_TD3D9Max2DDriver_SetViewport)(TD3D9Max2DDriver* pThis, int a1, int a2, int a3, int a4); // [SetViewport at 0x79E2D0] [0x58] (i,i,i,i)i
    int(__cdecl* m_TD3D9Max2DDriver_SetTransform)(TD3D9Max2DDriver* pThis, float a1, float a2, float a3, float a4); // [SetTransform at 0x79E39A] [0x5C] (f,f,f,f)i
    int(__cdecl* m_TD3D9Max2DDriver_SetLineWidth)(TD3D9Max2DDriver* pThis, float a1); // [SetLineWidth at 0x79E3D0] [0x60] (f)i
    int(__cdecl* m_TD3D9Max2DDriver_Cls)(TD3D9Max2DDriver* pThis); // [Cls at 0x79E3E7] [0x64] ()i
    int(__cdecl* m_TD3D9Max2DDriver_Plot)(TD3D9Max2DDriver* pThis, float a1, float a2); // [Plot at 0x79E419] [0x68] (f,f)i
    int(__cdecl* m_TD3D9Max2DDriver_DrawLine)(TD3D9Max2DDriver* pThis, float a1, float a2, float a3, float a4, float a5, float a6); // [DrawLine at 0x79E474] [0x6C] (f,f,f,f,f,f)i
    int(__cdecl* m_TD3D9Max2DDriver_DrawRect)(TD3D9Max2DDriver* pThis, float a1, float a2, float a3, float a4, float a5, float a6); // [DrawRect at 0x79E6BF] [0x70] (f,f,f,f,f,f)i
    int(__cdecl* m_TD3D9Max2DDriver_DrawOval)(TD3D9Max2DDriver* pThis, float a1, float a2, float a3, float a4, float a5, float a6); // [DrawOval at 0x79E7E9] [0x74] (f,f,f,f,f,f)i
    int(__cdecl* m_TD3D9Max2DDriver_DrawPoly)(TD3D9Max2DDriver* pThis, void* a1, float a2, float a3, float a4, float a5); // [DrawPoly at 0x79E99F] [0x78] ([]f,f,f,f,f)i
    int(__cdecl* m_TD3D9Max2DDriver_DrawPixmap)(TD3D9Max2DDriver* pThis, TPixmap* a1, int a2, int a3); // [DrawPixmap at 0x79EAB4] [0x7C] (:TPixmap,i,i)i
    TPixmap*(__cdecl* m_TD3D9Max2DDriver_GrabPixmap)(TD3D9Max2DDriver* pThis, int a1, int a2, int a3, int a4); // [GrabPixmap at 0x79EBF9] [0x80] (i,i,i,i):TPixmap
    int(__cdecl* m_TD3D9Max2DDriver_SetResolution)(TD3D9Max2DDriver* pThis, float a1, float a2); // [SetResolution at 0x79EDA8] [0x84] (f,f)i
    TD3D9Max2DDriver*(__cdecl* m_TD3D9Max2DDriver_Create)(TD3D9Max2DDriver* pThis); // [Create at 0x79D97F] [0x88] ():TD3D9Max2DDriver
    int(__cdecl* m_TD3D9Max2DDriver_ResetDevice)(TD3D9Max2DDriver* pThis); // [ResetDevice at 0x79DCED] [0x8C] ()i
};


// Super: 0x8F8E2C
// 0 members
struct TD3D9Max2DDriver {
    TD3D9Max2DDriverDecl* decl; // 0x0
    int    refs;  // 0x4
};


