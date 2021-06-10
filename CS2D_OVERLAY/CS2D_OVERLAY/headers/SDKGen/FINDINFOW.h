#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct FINDINFOWDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 32(0x20)
    int(__cdecl* m_FINDINFOW_New)(FINDINFOW* pThis); // [New at 0x7A560F] [0x10] ()i
    int(__cdecl* m_FINDINFOW_Delete)(FINDINFOW* pThis); // [Delete at 0x7A565B] [0x14] ()i
};


// 6 members
struct FINDINFOW {
    FINDINFOWDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_flags; // 0x8 <type_i>
    void* m_psz; // 0xC <type_*s>
    int m_lParam; // 0x10 <type_i>
    int m_pt_x; // 0x14 <type_i>
    int m_pt_y; // 0x18 <type_i>
    int m_vkDirection; // 0x1C <type_i>
};


