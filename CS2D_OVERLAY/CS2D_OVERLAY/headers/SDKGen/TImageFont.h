#pragma once

#include "defines.h"

// 8 methods, 2 functions
struct TImageFontDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_TImageFont_New)(TImageFont* pThis); // [New at 0x7ABECD] [0x10] ()i
    int(__cdecl* m_TImageFont_Delete)(TImageFont* pThis); // [Delete at 0x7ABF0C] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TImageFont_Style)(TImageFont* pThis); // [Style at 0x7ABF41] [0x30] ()i
    int(__cdecl* m_TImageFont_Height)(TImageFont* pThis); // [Height at 0x7ABF69] [0x34] ()i
    int(__cdecl* m_TImageFont_CountGlyphs)(TImageFont* pThis); // [CountGlyphs at 0x7ABF91] [0x38] ()i
    int(__cdecl* m_TImageFont_CharToGlyph)(TImageFont* pThis, int a1); // [CharToGlyph at 0x7ABFA3] [0x3C] (i)i
    TImageGlyph*(__cdecl* m_TImageFont_LoadGlyph)(TImageFont* pThis, int a1); // [LoadGlyph at 0x7ABFF5] [0x40] (i):TImageGlyph
    int(__cdecl* m_TImageFont_Draw)(TImageFont* pThis, BBString* a1, float a2, float a3, float a4, float a5, float a6, float a7); // [Draw at 0x7AC0F7] [0x44] ($,f,f,f,f,f,f)i
    TImageFont*(__cdecl* fn_Load)(Object* a1, int a2, int a3); // [Load at 0x7AC237] [0x48] (:Object,i,i):TImageFont
    TImageFont*(__cdecl* fn_CreateDefault)(); // [CreateDefault at 0x7AC2E3] [0x4C] ():TImageFont
};


// 3 members
struct TImageFont {
    TImageFontDecl* decl; // 0x0
    int    refs;  // 0x4
    TFont* m__src_font; // 0x8 <type_:TFont>
    void* m__glyphs; // 0xC <type_[]:TImageGlyph>
    int m__imageFlags; // 0x10 <type_i>
};


