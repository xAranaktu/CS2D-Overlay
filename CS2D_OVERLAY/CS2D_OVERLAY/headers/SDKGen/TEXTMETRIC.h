#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct TEXTMETRICDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 68(0x44)
    int(__cdecl* m_TEXTMETRIC_New)(TEXTMETRIC* pThis); // [New at 0x7A5CC6] [0x10] ()i
    int(__cdecl* m_TEXTMETRIC_Delete)(TEXTMETRIC* pThis); // [Delete at 0x7A5D6D] [0x14] ()i
};


// 23 members
struct TEXTMETRIC {
    TEXTMETRICDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_tmHeight; // 0x8 <type_i>
    int m_tmAscent; // 0xC <type_i>
    int m_tmDescent; // 0x10 <type_i>
    int m_tmInternalLeading; // 0x14 <type_i>
    int m_tmExternalLeading; // 0x18 <type_i>
    int m_tmAveCharWidth; // 0x1C <type_i>
    int m_tmMaxCharWidth; // 0x20 <type_i>
    int m_tmWeight; // 0x24 <type_i>
    int m_tmOverhang; // 0x28 <type_i>
    int m_tmDigitizedAspectX; // 0x2C <type_i>
    int m_tmDigitizedAspectY; // 0x30 <type_i>
    short m_tmFirstChar; // 0x34 <type_s>
    short m_tmLastChar; // 0x36 <type_s>
    short m_tmDefaultChar; // 0x38 <type_s>
    short m_tmBreakChar; // 0x3A <type_s>
    char m_tmItalic; // 0x3C <type_b>
    char m_tmUnderlined; // 0x3D <type_b>
    char m_tmStruckOut; // 0x3E <type_b>
    char m_tmPitchAndFamily; // 0x3F <type_b>
    char m_tmCharSet; // 0x40 <type_b>
    char m_pad0; // 0x41 <type_b>
    char m_pad1; // 0x42 <type_b>
    char m_pad2; // 0x43 <type_b>
};


