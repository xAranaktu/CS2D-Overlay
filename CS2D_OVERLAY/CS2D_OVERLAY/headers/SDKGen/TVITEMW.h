#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct TVITEMWDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 52(0x34)
    int(__cdecl* m_TVITEMW_New)(TVITEMW* pThis); // [New at 0x7A5320] [0x10] ()i
    int(__cdecl* m_TVITEMW_Delete)(TVITEMW* pThis); // [Delete at 0x7A538F] [0x14] ()i
};


// 11 members
struct TVITEMW {
    TVITEMWDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_mask; // 0x8 <type_i>
    int m_hItem; // 0xC <type_i>
    int m_state; // 0x10 <type_i>
    int m_stateMask; // 0x14 <type_i>
    void* m_pszText; // 0x18 <type_*s>
    int m_cchTextMax; // 0x1C <type_i>
    int m_iImage; // 0x20 <type_i>
    int m_iSelectedImage; // 0x24 <type_i>
    int m_cChildren; // 0x28 <type_i>
    int m_lParam; // 0x2C <type_i>
    int m_iIntegral; // 0x30 <type_i>
};


