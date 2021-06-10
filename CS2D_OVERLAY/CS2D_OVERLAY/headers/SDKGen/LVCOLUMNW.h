#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct LVCOLUMNWDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 40(0x28)
    int(__cdecl* m_LVCOLUMNW_New)(LVCOLUMNW* pThis); // [New at 0x7A56BC] [0x10] ()i
    int(__cdecl* m_LVCOLUMNW_Delete)(LVCOLUMNW* pThis); // [Delete at 0x7A5716] [0x14] ()i
};


// 8 members
struct LVCOLUMNW {
    LVCOLUMNWDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_mask; // 0x8 <type_i>
    int m_fmt; // 0xC <type_i>
    int m_cx; // 0x10 <type_i>
    void* m_pszText; // 0x14 <type_*s>
    int m_cchTextMax; // 0x18 <type_i>
    int m_iSubItem; // 0x1C <type_i>
    int m_iImage; // 0x20 <type_i>
    int m_iOrder; // 0x24 <type_i>
};


