#pragma once

#include "defines.h"

// 7 methods, 1 functions
struct TFreeTypeFontDecl {
    void* pSuper;  // 0x0 0x8F9A24
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 44(0x2C)
    int(__cdecl* m_TFreeTypeFont_New)(TFreeTypeFont* pThis); // [New at 0x79B007] [0x10] ()i
    int(__cdecl* m_TFreeTypeFont_Delete)(TFreeTypeFont* pThis); // [Delete at 0x79B070] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TFreeTypeFont_Style)(TFreeTypeFont* pThis); // [Style at 0x79B0CA] [0x30] ()i
    int(__cdecl* m_TFreeTypeFont_Height)(TFreeTypeFont* pThis); // [Height at 0x79B0D9] [0x34] ()i
    int(__cdecl* m_TFreeTypeFont_CountGlyphs)(TFreeTypeFont* pThis); // [CountGlyphs at 0x79B0E8] [0x38] ()i
    int(__cdecl* m_TFreeTypeFont_CharToGlyph)(TFreeTypeFont* pThis, int a1); // [CharToGlyph at 0x79B0FA] [0x3C] (i)i
    TFreeTypeGlyph*(__cdecl* m_TFreeTypeFont_LoadGlyph)(TFreeTypeFont* pThis, int a1); // [LoadGlyph at 0x79B118] [0x40] (i):TFreeTypeGlyph
    TFreeTypeFont*(__cdecl* fn_Load)(BBString* a1, int a2, int a3); // [Load at 0x79B398] [0x44] ($,i,i):TFreeTypeFont
};


// Super: 0x8F9A24
// 9 members
struct TFreeTypeFont {
    TFreeTypeFontDecl* decl; // 0x0
    int    refs;  // 0x4
    FTFace* m__face; // 0x8 <type_:FTFace>
    void* m__ft_face; // 0xC <type_*b>
    int m__style; // 0x10 <type_i>
    int m__height; // 0x14 <type_i>
    int m__ascend; // 0x18 <type_i>
    int m__descend; // 0x1C <type_i>
    void* m__glyphs; // 0x20 <type_[]:TFreeTypeGlyph>
    void* m__buf; // 0x24 <type_*b>
    int m__buf_size; // 0x28 <type_i>
};


