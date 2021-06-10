#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct FTGlyphDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 116(0x74)
    int(__cdecl* m_FTGlyph_New)(FTGlyph* pThis); // [New at 0x79B823] [0x10] ()i
    int(__cdecl* m_FTGlyph_Delete)(FTGlyph* pThis); // [Delete at 0x79B909] [0x14] ()i
};


// 29 members
struct FTGlyph {
    FTGlyphDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_lib; // 0x8 <type_i>
    int m_face; // 0xC <type_i>
    int m_nextglyph; // 0x10 <type_i>
    int m_reserved; // 0x14 <type_i>
    void* m_genericdata; // 0x18 <type_*b>
    int m_genericdestructor; // 0x1C <type_i>
    int m_metric_width; // 0x20 <type_i>
    int m_metric_height; // 0x24 <type_i>
    int m_metric_horibearingx; // 0x28 <type_i>
    int m_metric_horibearingy; // 0x2C <type_i>
    int m_metric_horiadvance; // 0x30 <type_i>
    int m_metric_vertbearingx; // 0x34 <type_i>
    int m_metric_vertbearingy; // 0x38 <type_i>
    int m_metric_vertadvance; // 0x3C <type_i>
    int m_hadvance; // 0x40 <type_i>
    int m_vadvance; // 0x44 <type_i>
    int m_advancex; // 0x48 <type_i>
    int m_advancey; // 0x4C <type_i>
    int m_glyphformat; // 0x50 <type_i>
    int m_rows; // 0x54 <type_i>
    int m_width; // 0x58 <type_i>
    int m_pitch; // 0x5C <type_i>
    void* m_buffer; // 0x60 <type_*b>
    short m_numgreys; // 0x64 <type_s>
    char m_pixel_mode; // 0x66 <type_b>
    char m_palette_mode; // 0x67 <type_b>
    void* m_palette; // 0x68 <type_*b>
    int m_bitmap_left; // 0x6C <type_i>
    int m_bitmap_top; // 0x70 <type_i>
};


