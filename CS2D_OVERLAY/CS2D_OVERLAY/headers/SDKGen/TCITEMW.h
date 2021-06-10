#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct TCITEMWDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 36(0x24)
    int(__cdecl* m_TCITEMW_New)(TCITEMW* pThis); // [New at 0x7A52BF] [0x10] ()i
    int(__cdecl* m_TCITEMW_Delete)(TCITEMW* pThis); // [Delete at 0x7A5312] [0x14] ()i
};


// 7 members
struct TCITEMW {
    TCITEMWDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_mask; // 0x8 <type_i>
    int m_dwState; // 0xC <type_i>
    int m_dwStateMask; // 0x10 <type_i>
    void* m_pszText; // 0x14 <type_*s>
    int m_cchTextMax; // 0x18 <type_i>
    int m_iImage; // 0x1C <type_i>
    int m_lParam; // 0x20 <type_i>
};


