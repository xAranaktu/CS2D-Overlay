#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct TOOLINFOWDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 52(0x34)
    int(__cdecl* m_TOOLINFOW_New)(TOOLINFOW* pThis); // [New at 0x7A5466] [0x10] ()i
    int(__cdecl* m_TOOLINFOW_Delete)(TOOLINFOW* pThis); // [Delete at 0x7A54D5] [0x14] ()i
};


// 11 members
struct TOOLINFOW {
    TOOLINFOWDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_cbSize; // 0x8 <type_i>
    int m_uFlags; // 0xC <type_i>
    int m_hwnd; // 0x10 <type_i>
    int m_uId; // 0x14 <type_i>
    int m_rect_left; // 0x18 <type_i>
    int m_rect_top; // 0x1C <type_i>
    int m_rect_right; // 0x20 <type_i>
    int m_rect_bottom; // 0x24 <type_i>
    int m_hinst; // 0x28 <type_i>
    void* m_lpszText; // 0x2C <type_*s>
    int m_lParam; // 0x30 <type_i>
};


