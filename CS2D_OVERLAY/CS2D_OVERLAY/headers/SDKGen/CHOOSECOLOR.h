#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct CHOOSECOLORDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 44(0x2C)
    int(__cdecl* m_CHOOSECOLOR_New)(CHOOSECOLOR* pThis); // [New at 0x7A576D] [0x10] ()i
    int(__cdecl* m_CHOOSECOLOR_Delete)(CHOOSECOLOR* pThis); // [Delete at 0x7A57CE] [0x14] ()i
};


// 9 members
struct CHOOSECOLOR {
    CHOOSECOLORDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_lStructSize; // 0x8 <type_i>
    int m_hwndOwner; // 0xC <type_i>
    int m_hInstance; // 0x10 <type_i>
    int m_rgbResult; // 0x14 <type_i>
    void* m_lpCustColors; // 0x18 <type_*b>
    int m_Flags; // 0x1C <type_i>
    int m_lCustData; // 0x20 <type_i>
    void* m_lpfnHook; // 0x24 <type_*b>
    void* m_lpTemplateName; // 0x28 <type_*s>
};


