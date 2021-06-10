#pragma once

#include "defines.h"

// 5 methods, 0 functions
struct TImageGlyphDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 32(0x20)
    int(__cdecl* m_TImageGlyph_New)(TImageGlyph* pThis); // [New at 0x7ABE08] [0x10] ()i
    int(__cdecl* m_TImageGlyph_Delete)(TImageGlyph* pThis); // [Delete at 0x7ABE56] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TImage*(__cdecl* m_TImageGlyph_Pixels)(TImageGlyph* pThis); // [Pixels at 0x7ABE78] [0x30] ():TImage
    float(__cdecl* m_TImageGlyph_Advance)(TImageGlyph* pThis); // [Advance at 0x7ABE87] [0x34] ()f
    int(__cdecl* m_TImageGlyph_GetRect)(TImageGlyph* pThis, void* a1, void* a2, void* a3, void* a4); // [GetRect at 0x7ABE96] [0x38] (*i,*i,*i,*i)i
};


// 6 members
struct TImageGlyph {
    TImageGlyphDecl* decl; // 0x0
    int    refs;  // 0x4
    TImage* m__image; // 0x8 <type_:TImage>
    float m__advance; // 0xC <type_f>
    int m__x; // 0x10 <type_i>
    int m__y; // 0x14 <type_i>
    int m__w; // 0x18 <type_i>
    int m__h; // 0x1C <type_i>
};


