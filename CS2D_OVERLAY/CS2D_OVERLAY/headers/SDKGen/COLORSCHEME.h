#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct COLORSCHEMEDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_COLORSCHEME_New)(COLORSCHEME* pThis); // [New at 0x7A553F] [0x10] ()i
    int(__cdecl* m_COLORSCHEME_Delete)(COLORSCHEME* pThis); // [Delete at 0x7A5576] [0x14] ()i
};


// 3 members
struct COLORSCHEME {
    COLORSCHEMEDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_dwSize; // 0x8 <type_i>
    int m_clrBtnHighlight; // 0xC <type_i>
    int m_clrBtnShadow; // 0x10 <type_i>
};


