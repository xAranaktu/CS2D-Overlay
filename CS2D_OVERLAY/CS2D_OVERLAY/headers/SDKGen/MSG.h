#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct MSGDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 36(0x24)
    int(__cdecl* m_MSG_New)(MSG* pThis); // [New at 0x7A4D20] [0x10] ()i
    int(__cdecl* m_MSG_Delete)(MSG* pThis); // [Delete at 0x7A4D73] [0x14] ()i
};


// 7 members
struct MSG {
    MSGDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_hwnd; // 0x8 <type_i>
    int m_message; // 0xC <type_i>
    int m_wParam; // 0x10 <type_i>
    int m_lParam; // 0x14 <type_i>
    int m_time; // 0x18 <type_i>
    int m_pt_x; // 0x1C <type_i>
    int m_pt_y; // 0x20 <type_i>
};


