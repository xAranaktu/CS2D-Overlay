#pragma once

#include "defines.h"

// 5 methods, 0 functions
struct TFreeTypeGlyphDecl {
    void* pSuper;  // 0x0 0x8F9924
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 32(0x20)
    int(__cdecl* m_TFreeTypeGlyph_New)(TFreeTypeGlyph* pThis); // [New at 0x79AF23] [0x10] ()i
    int(__cdecl* m_TFreeTypeGlyph_Delete)(TFreeTypeGlyph* pThis); // [Delete at 0x79AF71] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TPixmap*(__cdecl* m_TFreeTypeGlyph_Pixels)(TFreeTypeGlyph* pThis); // [Pixels at 0x79AFA4] [0x30] ():TPixmap
    float(__cdecl* m_TFreeTypeGlyph_Advance)(TFreeTypeGlyph* pThis); // [Advance at 0x79AFC1] [0x34] ()f
    int(__cdecl* m_TFreeTypeGlyph_GetRect)(TFreeTypeGlyph* pThis, void* a1, void* a2, void* a3, void* a4); // [GetRect at 0x79AFD0] [0x38] (*i,*i,*i,*i)i
};


// Super: 0x8F9924
// 6 members
struct TFreeTypeGlyph {
    TFreeTypeGlyphDecl* decl; // 0x0
    int    refs;  // 0x4
    TPixmap* m__pixmap; // 0x8 <type_:TPixmap>
    float m__advance; // 0xC <type_f>
    int m__x; // 0x10 <type_i>
    int m__y; // 0x14 <type_i>
    int m__w; // 0x18 <type_i>
    int m__h; // 0x1C <type_i>
};


