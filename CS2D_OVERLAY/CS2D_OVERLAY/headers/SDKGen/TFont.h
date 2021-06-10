#pragma once

#include "defines.h"

// 7 methods, 0 functions
struct TFontDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TFont_New)(TFont* pThis); // [New at 0x7AC51A] [0x10] ()i
    int(__cdecl* m_TFont_Delete)(TFont* pThis); // [Delete at 0x7AC53C] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TFont_Style)(TFont* pThis); // [Style at 0x7B6004] [0x30] ()i
    int(__cdecl* m_TFont_Height)(TFont* pThis); // [Height at 0x7B6004] [0x34] ()i
    int(__cdecl* m_TFont_CountGlyphs)(TFont* pThis); // [CountGlyphs at 0x7B6004] [0x38] ()i
    int(__cdecl* m_TFont_CharToGlyph)(TFont* pThis, int a1); // [CharToGlyph at 0x7B6004] [0x3C] (i)i
    TGlyph*(__cdecl* m_TFont_LoadGlyph)(TFont* pThis, int a1); // [LoadGlyph at 0x7B6004] [0x40] (i):TGlyph
};


// 0 members
struct TFont {
    TFontDecl* decl; // 0x0
    int    refs;  // 0x4
};


