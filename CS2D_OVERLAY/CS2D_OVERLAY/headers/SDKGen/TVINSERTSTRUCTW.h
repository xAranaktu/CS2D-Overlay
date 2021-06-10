#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct TVINSERTSTRUCTWDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 60(0x3C)
    int(__cdecl* m_TVINSERTSTRUCTW_New)(TVINSERTSTRUCTW* pThis); // [New at 0x7A539D] [0x10] ()i
    int(__cdecl* m_TVINSERTSTRUCTW_Delete)(TVINSERTSTRUCTW* pThis); // [Delete at 0x7A541A] [0x14] ()i
};


// 13 members
struct TVINSERTSTRUCTW {
    TVINSERTSTRUCTWDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_hParent; // 0x8 <type_i>
    int m_hInsertAfter; // 0xC <type_i>
    int m_item_mask; // 0x10 <type_i>
    int m_item_hItem; // 0x14 <type_i>
    int m_item_state; // 0x18 <type_i>
    int m_item_stateMask; // 0x1C <type_i>
    void* m_item_pszText; // 0x20 <type_*s>
    int m_item_cchTextMax; // 0x24 <type_i>
    int m_item_iImage; // 0x28 <type_i>
    int m_item_iSelectedImage; // 0x2C <type_i>
    int m_item_cChildren; // 0x30 <type_i>
    int m_item_lParam; // 0x34 <type_i>
    int m_itemx_iIntegral; // 0x38 <type_i>
};


