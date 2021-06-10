#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct CHARFORMATWDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 100(0x64)
    int(__cdecl* m_CHARFORMATW_New)(CHARFORMATW* pThis); // [New at 0x7A5EF6] [0x10] ()i
    int(__cdecl* m_CHARFORMATW_Delete)(CHARFORMATW* pThis); // [Delete at 0x7A6010] [0x14] ()i
};


// 41 members
struct CHARFORMATW {
    CHARFORMATWDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_cbSize; // 0x8 <type_i>
    int m_dwMask; // 0xC <type_i>
    int m_dwEffects; // 0x10 <type_i>
    int m_yHeight; // 0x14 <type_i>
    int m_yOffset; // 0x18 <type_i>
    int m_crTextColor; // 0x1C <type_i>
    char m_bCharSet; // 0x20 <type_b>
    char m_bPitchAndFamily; // 0x21 <type_b>
    short m_lfFaceName00; // 0x22 <type_s>
    short m_lfFaceName01; // 0x24 <type_s>
    short m_lfFaceName02; // 0x26 <type_s>
    short m_lfFaceName03; // 0x28 <type_s>
    short m_lfFaceName04; // 0x2A <type_s>
    short m_lfFaceName05; // 0x2C <type_s>
    short m_lfFaceName06; // 0x2E <type_s>
    short m_lfFaceName07; // 0x30 <type_s>
    short m_lfFaceName08; // 0x32 <type_s>
    short m_lfFaceName09; // 0x34 <type_s>
    short m_lfFaceName0a; // 0x36 <type_s>
    short m_lfFaceName0b; // 0x38 <type_s>
    short m_lfFaceName0c; // 0x3A <type_s>
    short m_lfFaceName0d; // 0x3C <type_s>
    short m_lfFaceName0e; // 0x3E <type_s>
    short m_lfFaceName0f; // 0x40 <type_s>
    short m_lfFaceName10; // 0x42 <type_s>
    short m_lfFaceName11; // 0x44 <type_s>
    short m_lfFaceName12; // 0x46 <type_s>
    short m_lfFaceName13; // 0x48 <type_s>
    short m_lfFaceName14; // 0x4A <type_s>
    short m_lfFaceName15; // 0x4C <type_s>
    short m_lfFaceName16; // 0x4E <type_s>
    short m_lfFaceName17; // 0x50 <type_s>
    short m_lfFaceName18; // 0x52 <type_s>
    short m_lfFaceName19; // 0x54 <type_s>
    short m_lfFaceName1a; // 0x56 <type_s>
    short m_lfFaceName1b; // 0x58 <type_s>
    short m_lfFaceName1c; // 0x5A <type_s>
    short m_lfFaceName1d; // 0x5C <type_s>
    short m_lfFaceName1e; // 0x5E <type_s>
    short m_lfFaceName1f; // 0x60 <type_s>
    short m_pad; // 0x62 <type_s>
};


