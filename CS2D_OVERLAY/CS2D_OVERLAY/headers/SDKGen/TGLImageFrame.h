#pragma once

#include "defines.h"

// 3 methods, 1 functions
struct TGLImageFrameDecl {
    void* pSuper;  // 0x0 0x8F8B70
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 40(0x28)
    int(__cdecl* m_TGLImageFrame_New)(TGLImageFrame* pThis); // [New at 0x7A6851] [0x10] ()i
    int(__cdecl* m_TGLImageFrame_Delete)(TGLImageFrame* pThis); // [Delete at 0x7A68A7] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TGLImageFrame_Draw)(TGLImageFrame* pThis, float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10); // [Draw at 0x7A68E6] [0x30] (f,f,f,f,f,f,f,f,f,f)i
    TGLImageFrame*(__cdecl* fn_CreateFromPixmap)(TPixmap* a1, int a2); // [CreateFromPixmap at 0x7A6A6F] [0x34] (:TPixmap,i):TGLImageFrame
};


// Super: 0x8F8B70
// 8 members
struct TGLImageFrame {
    TGLImageFrameDecl* decl; // 0x0
    int    refs;  // 0x4
    float m_u0; // 0x8 <type_f>
    float m_v0; // 0xC <type_f>
    float m_u1; // 0x10 <type_f>
    float m_v1; // 0x14 <type_f>
    float m_uscale; // 0x18 <type_f>
    float m_vscale; // 0x1C <type_f>
    int m_name; // 0x20 <type_i>
    int m_seq; // 0x24 <type_i>
};


