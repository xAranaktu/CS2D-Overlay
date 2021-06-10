#pragma once

#include "defines.h"

// 4 methods, 0 functions
struct TD3D9ImageFrameDecl {
    void* pSuper;  // 0x0 0x8F8B70
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 44(0x2C)
    int(__cdecl* m_TD3D9ImageFrame_New)(TD3D9ImageFrame* pThis); // [New at 0x79D189] [0x10] ()i
    int(__cdecl* m_TD3D9ImageFrame_Delete)(TD3D9ImageFrame* pThis); // [Delete at 0x79D1F6] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TD3D9ImageFrame_Draw)(TD3D9ImageFrame* pThis, float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10); // [Draw at 0x79D6DA] [0x30] (f,f,f,f,f,f,f,f,f,f)i
    TD3D9ImageFrame*(__cdecl* m_TD3D9ImageFrame_Create)(TD3D9ImageFrame* pThis, TPixmap* a1, int a2); // [Create at 0x79D27B] [0x34] (:TPixmap,i):TD3D9ImageFrame
};


// Super: 0x8F8B70
// 9 members
struct TD3D9ImageFrame {
    TD3D9ImageFrameDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m__texture; // 0x8 <type_?IDirect3DTexture9>
    int m__seq; // 0xC <type_i>
    int m__magfilter; // 0x10 <type_i>
    int m__minfilter; // 0x14 <type_i>
    int m__mipfilter; // 0x18 <type_i>
    float m__uscale; // 0x1C <type_f>
    float m__vscale; // 0x20 <type_f>
    void* m__fverts; // 0x24 <type_[]f>
    void* m__iverts; // 0x28 <type_*i>
};


