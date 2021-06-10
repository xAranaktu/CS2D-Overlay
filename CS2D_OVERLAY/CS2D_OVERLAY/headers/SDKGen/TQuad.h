#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct TQuadDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 44(0x2C)
    int(__cdecl* m_TQuad_New)(TQuad* pThis); // [New at 0x7AB478] [0x10] ()i
    int(__cdecl* m_TQuad_Delete)(TQuad* pThis); // [Delete at 0x7AB4EB] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TQuad_SetCoords)(TQuad* pThis, float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8); // [SetCoords at 0x7AB542] [0x30] (f,f,f,f,f,f,f,f)i
};


// 9 members
struct TQuad {
    TQuadDecl* decl; // 0x0
    int    refs;  // 0x4
    TQuad* m_link; // 0x8 <type_:TQuad>
    Object* m_id; // 0xC <type_:Object>
    TPixmap* m_mask; // 0x10 <type_:TPixmap>
    int m_frame; // 0x14 <type_i>
    float m_minx; // 0x18 <type_f>
    float m_miny; // 0x1C <type_f>
    float m_maxx; // 0x20 <type_f>
    float m_maxy; // 0x24 <type_f>
    void* m_xyuv; // 0x28 <type_[]f>
};


