#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct LVITEMWDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 60(0x3C)
    int(__cdecl* m_LVITEMW_New)(LVITEMW* pThis); // [New at 0x7A5584] [0x10] ()i
    int(__cdecl* m_LVITEMW_Delete)(LVITEMW* pThis); // [Delete at 0x7A5601] [0x14] ()i
};


// 13 members
struct LVITEMW {
    LVITEMWDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_mask; // 0x8 <type_i>
    int m_iItem; // 0xC <type_i>
    int m_iSubItem; // 0x10 <type_i>
    int m_state; // 0x14 <type_i>
    int m_stateMask; // 0x18 <type_i>
    void* m_pszText; // 0x1C <type_*s>
    int m_cchTextMax; // 0x20 <type_i>
    int m_iImage; // 0x24 <type_i>
    int m_lParam; // 0x28 <type_i>
    int m_iIndent; // 0x2C <type_i>
    int m_iGroupId; // 0x30 <type_i>
    int m_cColumns; // 0x34 <type_i>
    void* m_puColumns; // 0x38 <type_*i>
};


