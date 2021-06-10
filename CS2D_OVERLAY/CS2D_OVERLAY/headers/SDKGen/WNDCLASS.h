#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct WNDCLASSDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 48(0x30)
    int(__cdecl* m_WNDCLASS_New)(WNDCLASS* pThis); // [New at 0x7A4D81] [0x10] ()i
    int(__cdecl* m_WNDCLASS_Delete)(WNDCLASS* pThis); // [Delete at 0x7A4DE9] [0x14] ()i
};


// 10 members
struct WNDCLASS {
    WNDCLASSDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_style; // 0x8 <type_i>
    void* m_lpfnWndProc; // 0xC <type_*b>
    int m_cbClsExtra; // 0x10 <type_i>
    int m_cbWndExtra; // 0x14 <type_i>
    int m_hInstance; // 0x18 <type_i>
    int m_hIcon; // 0x1C <type_i>
    int m_hCursor; // 0x20 <type_i>
    int m_hbrBackground; // 0x24 <type_i>
    void* m_lpszMenuName; // 0x28 <type_*b>
    void* m_lpszClassName; // 0x2C <type_*b>
};


