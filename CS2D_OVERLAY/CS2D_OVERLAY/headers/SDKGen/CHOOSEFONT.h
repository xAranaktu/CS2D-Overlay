#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct CHOOSEFONTDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 68(0x44)
    int(__cdecl* m_CHOOSEFONT_New)(CHOOSEFONT* pThis); // [New at 0x7A57DC] [0x10] ()i
    int(__cdecl* m_CHOOSEFONT_Delete)(CHOOSEFONT* pThis); // [Delete at 0x7A586C] [0x14] ()i
};


// 16 members
struct CHOOSEFONT {
    CHOOSEFONTDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_lStructSize; // 0x8 <type_i>
    int m_hwndOwner; // 0xC <type_i>
    int m_hDC; // 0x10 <type_i>
    void* m_lpLogFont; // 0x14 <type_*b>
    int m_iPointSize; // 0x18 <type_i>
    int m_Flags; // 0x1C <type_i>
    int m_rgbColors; // 0x20 <type_i>
    int m_lCustData; // 0x24 <type_i>
    void* m_lpfnHook; // 0x28 <type_*b>
    void* m_lpTemplateName; // 0x2C <type_*s>
    int m_hInstance; // 0x30 <type_i>
    void* m_lpszStyle; // 0x34 <type_*s>
    short m_nFontType; // 0x38 <type_s>
    short m__align_; // 0x3A <type_s>
    int m_nSizeMin; // 0x3C <type_i>
    int m_nSizeMax; // 0x40 <type_i>
};


