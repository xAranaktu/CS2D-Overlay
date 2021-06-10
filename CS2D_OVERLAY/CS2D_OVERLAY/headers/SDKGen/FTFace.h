#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct FTFaceDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 100(0x64)
    int(__cdecl* m_FTFace_New)(FTFace* pThis); // [New at 0x79B6C3] [0x10] ()i
    int(__cdecl* m_FTFace_Delete)(FTFace* pThis); // [Delete at 0x79B79A] [0x14] ()i
};


// 27 members
struct FTFace {
    FTFaceDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_numfaces; // 0x8 <type_i>
    int m_index; // 0xC <type_i>
    int m_flags; // 0x10 <type_i>
    int m_style; // 0x14 <type_i>
    int m_numglyphs; // 0x18 <type_i>
    void* m_fname; // 0x1C <type_*b>
    void* m_sname; // 0x20 <type_*b>
    int m_numsizes; // 0x24 <type_i>
    void* m_sizes; // 0x28 <type_*i>
    int m_numcharmaps; // 0x2C <type_i>
    void* m_charmaps; // 0x30 <type_*i>
    void* m_genericdata; // 0x34 <type_*b>
    int m_genericdestructor; // 0x38 <type_i>
    int m_bx0; // 0x3C <type_i>
    int m_by0; // 0x40 <type_i>
    int m_bx1; // 0x44 <type_i>
    int m_by1; // 0x48 <type_i>
    short m_unitsperem; // 0x4C <type_s>
    short m_ascender; // 0x4E <type_s>
    short m_descender; // 0x50 <type_s>
    short m_height; // 0x52 <type_s>
    short m_maxawidth; // 0x54 <type_s>
    short m_maxahieght; // 0x56 <type_s>
    short m_underlinepos; // 0x58 <type_s>
    short m_underlinethick; // 0x5A <type_s>
    void* m_glyphslot; // 0x5C <type_*i>
    void* m_metrics; // 0x60 <type_*b>
};


