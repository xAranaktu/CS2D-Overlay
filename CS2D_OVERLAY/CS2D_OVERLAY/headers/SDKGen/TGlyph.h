#pragma once

#include "defines.h"

// 5 methods, 0 functions
struct TGlyphDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TGlyph_New)(TGlyph* pThis); // [New at 0x7AC4EA] [0x10] ()i
    int(__cdecl* m_TGlyph_Delete)(TGlyph* pThis); // [Delete at 0x7AC50C] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    Object*(__cdecl* m_TGlyph_Pixels)(TGlyph* pThis); // [Pixels at 0x7B6004] [0x30] ():Object
    float(__cdecl* m_TGlyph_Advance)(TGlyph* pThis); // [Advance at 0x7B6004] [0x34] ()f
    int(__cdecl* m_TGlyph_GetRect)(TGlyph* pThis, void* a1, void* a2, void* a3, void* a4); // [GetRect at 0x7B6004] [0x38] (*i,*i,*i,*i)i
};


// 0 members
struct TGlyph {
    TGlyphDecl* decl; // 0x0
    int    refs;  // 0x4
};


