#pragma once

#include "defines.h"

// 10 methods, 3 functions
struct tImageBufferDX9Decl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 56(0x38)
    int(__cdecl* m_tImageBufferDX9_New)(tImageBufferDX9* pThis); // [New at 0x5C2670] [0x10] ()i
    int(__cdecl* m_tImageBufferDX9_Delete)(tImageBufferDX9* pThis); // [Delete at 0x5C26EE] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Test)(); // [Test at 0x5C2723] [0x30] ()i
    tImageBufferDX9*(__cdecl* fn_SetBuffer)(TImage* a1, int a2, int a3); // [SetBuffer at 0x5C2771] [0x34] (:TImage,i,i):tImageBufferDX9
    int(__cdecl* fn_Init)(TGraphics* a1); // [Init at 0x5C27C6] [0x38] (:TGraphics)i
    int(__cdecl* m_tImageBufferDX9_BindBuffer)(tImageBufferDX9* pThis); // [BindBuffer at 0x5C2853] [0x3C] ()i
    int(__cdecl* m_tImageBufferDX9_UnBindBuffer)(tImageBufferDX9* pThis); // [UnBindBuffer at 0x5C28AF] [0x40] ()i
    int(__cdecl* m_tImageBufferDX9_Cls)(tImageBufferDX9* pThis, int a1, int a2, int a3, int a4); // [Cls at 0x5C2911] [0x44] (i,i,i,i)i
    int(__cdecl* m_tImageBufferDX9_BufferWidth)(tImageBufferDX9* pThis); // [BufferWidth at 0x5C295C] [0x48] ()i
    int(__cdecl* m_tImageBufferDX9_BufferHeight)(tImageBufferDX9* pThis); // [BufferHeight at 0x5C296E] [0x4C] ()i
    int(__cdecl* m_tImageBufferDX9_createD3DRenderTarget)(tImageBufferDX9* pThis); // [createD3DRenderTarget at 0x5C2980] [0x50] ()i
    int(__cdecl* m_tImageBufferDX9_beginD3DRenderTarget)(tImageBufferDX9* pThis); // [beginD3DRenderTarget at 0x5C2B6B] [0x54] ()i
    int(__cdecl* m_tImageBufferDX9_endD3DRenderTarget)(tImageBufferDX9* pThis); // [endD3DRenderTarget at 0x5C2B95] [0x58] ()i
};


// 12 members
struct tImageBufferDX9 {
    tImageBufferDX9Decl* decl; // 0x0
    int    refs;  // 0x4
    void* m_d3dImageSurface; // 0x8 <type_?IDirect3DSurface9>
    void* m_d3dBackBufferSurface; // 0xC <type_?IDirect3DSurface9>
    int m_pow2Width; // 0x10 <type_i>
    int m_pow2Height; // 0x14 <type_i>
    int m_bilinear; // 0x18 <type_i>
    TImage* m_image; // 0x1C <type_:TImage>
    TD3D9ImageFrame* m_imageFrame; // 0x20 <type_:TD3D9ImageFrame>
    int m_Frame; // 0x24 <type_i>
    int m_OrigX; // 0x28 <type_i>
    int m_OrigY; // 0x2C <type_i>
    int m_OrigW; // 0x30 <type_i>
    int m_OrigH; // 0x34 <type_i>
};


