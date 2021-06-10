#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct CHARFORMATDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 68(0x44)
    int(__cdecl* m_CHARFORMAT_New)(CHARFORMAT* pThis); // [New at 0x7A601E] [0x10] ()i
    int(__cdecl* m_CHARFORMAT_Delete)(CHARFORMAT* pThis); // [Delete at 0x7A60F8] [0x14] ()i
};


// 41 members
struct CHARFORMAT {
    CHARFORMATDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_cbSize; // 0x8 <type_i>
    int m_dwMask; // 0xC <type_i>
    int m_dwEffects; // 0x10 <type_i>
    int m_yHeight; // 0x14 <type_i>
    int m_yOffset; // 0x18 <type_i>
    int m_crTextColor; // 0x1C <type_i>
    char m_bCharSet; // 0x20 <type_b>
    char m_bPitchAndFamily; // 0x21 <type_b>
    char m_lfFaceName00; // 0x22 <type_b>
    char m_lfFaceName01; // 0x23 <type_b>
    char m_lfFaceName02; // 0x24 <type_b>
    char m_lfFaceName03; // 0x25 <type_b>
    char m_lfFaceName04; // 0x26 <type_b>
    char m_lfFaceName05; // 0x27 <type_b>
    char m_lfFaceName06; // 0x28 <type_b>
    char m_lfFaceName07; // 0x29 <type_b>
    char m_lfFaceName08; // 0x2A <type_b>
    char m_lfFaceName09; // 0x2B <type_b>
    char m_lfFaceName0a; // 0x2C <type_b>
    char m_lfFaceName0b; // 0x2D <type_b>
    char m_lfFaceName0c; // 0x2E <type_b>
    char m_lfFaceName0d; // 0x2F <type_b>
    char m_lfFaceName0e; // 0x30 <type_b>
    char m_lfFaceName0f; // 0x31 <type_b>
    char m_lfFaceName10; // 0x32 <type_b>
    char m_lfFaceName11; // 0x33 <type_b>
    char m_lfFaceName12; // 0x34 <type_b>
    char m_lfFaceName13; // 0x35 <type_b>
    char m_lfFaceName14; // 0x36 <type_b>
    char m_lfFaceName15; // 0x37 <type_b>
    char m_lfFaceName16; // 0x38 <type_b>
    char m_lfFaceName17; // 0x39 <type_b>
    char m_lfFaceName18; // 0x3A <type_b>
    char m_lfFaceName19; // 0x3B <type_b>
    char m_lfFaceName1a; // 0x3C <type_b>
    char m_lfFaceName1b; // 0x3D <type_b>
    char m_lfFaceName1c; // 0x3E <type_b>
    char m_lfFaceName1d; // 0x3F <type_b>
    char m_lfFaceName1e; // 0x40 <type_b>
    char m_lfFaceName1f; // 0x41 <type_b>
    short m_pad; // 0x42 <type_s>
};


