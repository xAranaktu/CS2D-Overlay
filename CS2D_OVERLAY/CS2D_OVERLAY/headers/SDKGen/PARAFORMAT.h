#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct PARAFORMATDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 164(0xA4)
    int(__cdecl* m_PARAFORMAT_New)(PARAFORMAT* pThis); // [New at 0x7A6106] [0x10] ()i
    int(__cdecl* m_PARAFORMAT_Delete)(PARAFORMAT* pThis); // [Delete at 0x7A625E] [0x14] ()i
};


// 41 members
struct PARAFORMAT {
    PARAFORMATDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_cbSize; // 0x8 <type_i>
    int m_dwMask; // 0xC <type_i>
    short m_wNumbering; // 0x10 <type_s>
    short m_wEffects; // 0x12 <type_s>
    int m_dxStartIndent; // 0x14 <type_i>
    int m_dxRightIndent; // 0x18 <type_i>
    int m_dxOffset; // 0x1C <type_i>
    short m_wAlignment; // 0x20 <type_s>
    short m_cTabCount; // 0x22 <type_s>
    int m_rgxTabs00; // 0x24 <type_i>
    int m_rgxTabs01; // 0x28 <type_i>
    int m_rgxTabs02; // 0x2C <type_i>
    int m_rgxTabs03; // 0x30 <type_i>
    int m_rgxTabs10; // 0x34 <type_i>
    int m_rgxTabs11; // 0x38 <type_i>
    int m_rgxTabs12; // 0x3C <type_i>
    int m_rgxTabs13; // 0x40 <type_i>
    int m_rgxTabs20; // 0x44 <type_i>
    int m_rgxTabs21; // 0x48 <type_i>
    int m_rgxTabs22; // 0x4C <type_i>
    int m_rgxTabs23; // 0x50 <type_i>
    int m_rgxTabs30; // 0x54 <type_i>
    int m_rgxTabs31; // 0x58 <type_i>
    int m_rgxTabs32; // 0x5C <type_i>
    int m_rgxTabs33; // 0x60 <type_i>
    int m_rgxTabs40; // 0x64 <type_i>
    int m_rgxTabs41; // 0x68 <type_i>
    int m_rgxTabs42; // 0x6C <type_i>
    int m_rgxTabs43; // 0x70 <type_i>
    int m_rgxTabs50; // 0x74 <type_i>
    int m_rgxTabs51; // 0x78 <type_i>
    int m_rgxTabs52; // 0x7C <type_i>
    int m_rgxTabs53; // 0x80 <type_i>
    int m_rgxTabs60; // 0x84 <type_i>
    int m_rgxTabs61; // 0x88 <type_i>
    int m_rgxTabs62; // 0x8C <type_i>
    int m_rgxTabs63; // 0x90 <type_i>
    int m_rgxTabs70; // 0x94 <type_i>
    int m_rgxTabs71; // 0x98 <type_i>
    int m_rgxTabs72; // 0x9C <type_i>
    int m_rgxTabs73; // 0xA0 <type_i>
};


