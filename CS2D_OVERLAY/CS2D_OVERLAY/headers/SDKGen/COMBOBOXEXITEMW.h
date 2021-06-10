#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct COMBOBOXEXITEMWDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 44(0x2C)
    int(__cdecl* m_COMBOBOXEXITEMW_New)(COMBOBOXEXITEMW* pThis); // [New at 0x7A5250] [0x10] ()i
    int(__cdecl* m_COMBOBOXEXITEMW_Delete)(COMBOBOXEXITEMW* pThis); // [Delete at 0x7A52B1] [0x14] ()i
};


// 9 members
struct COMBOBOXEXITEMW {
    COMBOBOXEXITEMWDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_mask; // 0x8 <type_i>
    int m_iItem; // 0xC <type_i>
    void* m_pszText; // 0x10 <type_*s>
    int m_cchTextMax; // 0x14 <type_i>
    int m_iImage; // 0x18 <type_i>
    int m_iSelectedImage; // 0x1C <type_i>
    int m_iOverlay; // 0x20 <type_i>
    int m_iIndent; // 0x24 <type_i>
    int m_lParam; // 0x28 <type_i>
};


