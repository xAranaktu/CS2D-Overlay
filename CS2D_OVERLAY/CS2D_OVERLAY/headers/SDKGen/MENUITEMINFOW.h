#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct MENUITEMINFOWDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 56(0x38)
    int(__cdecl* m_MENUITEMINFOW_New)(MENUITEMINFOW* pThis); // [New at 0x7A4C9C] [0x10] ()i
    int(__cdecl* m_MENUITEMINFOW_Delete)(MENUITEMINFOW* pThis); // [Delete at 0x7A4D12] [0x14] ()i
};


// 12 members
struct MENUITEMINFOW {
    MENUITEMINFOWDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_cbSize; // 0x8 <type_i>
    int m_fMask; // 0xC <type_i>
    int m_fType; // 0x10 <type_i>
    int m_fState; // 0x14 <type_i>
    int m_wID; // 0x18 <type_i>
    int m_hSubMenu; // 0x1C <type_i>
    int m_hbmpChecked; // 0x20 <type_i>
    int m_hbmpUnchecked; // 0x24 <type_i>
    void* m_dwItemData; // 0x28 <type_*i>
    void* m_dwTypeData; // 0x2C <type_*s>
    int m_cch; // 0x30 <type_i>
    int m_hbmpItem; // 0x34 <type_i>
};


