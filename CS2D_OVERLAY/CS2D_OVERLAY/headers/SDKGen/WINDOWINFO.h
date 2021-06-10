#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct WINDOWINFODecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 70(0x46)
    int(__cdecl* m_WINDOWINFO_New)(WINDOWINFO* pThis); // [New at 0x7A4EE3] [0x10] ()i
    int(__cdecl* m_WINDOWINFO_Delete)(WINDOWINFO* pThis); // [Delete at 0x7A4F74] [0x14] ()i
};


// 16 members
struct WINDOWINFO {
    WINDOWINFODecl* decl; // 0x0
    int    refs;  // 0x4
    int m_cbSize; // 0x8 <type_i>
    int m_rcWindowl; // 0xC <type_i>
    int m_rcWindowt; // 0x10 <type_i>
    int m_rcWindowr; // 0x14 <type_i>
    int m_rcWindowb; // 0x18 <type_i>
    int m_rcClientl; // 0x1C <type_i>
    int m_rcClientt; // 0x20 <type_i>
    int m_rcClientr; // 0x24 <type_i>
    int m_rcClientb; // 0x28 <type_i>
    int m_dwStyle; // 0x2C <type_i>
    int m_dwExStyle; // 0x30 <type_i>
    int m_dwWindowStatus; // 0x34 <type_i>
    int m_cxWindowBorders; // 0x38 <type_i>
    int m_cyWindowBorders; // 0x3C <type_i>
    int m_atomWindowType; // 0x40 <type_i>
    short m_wCreatorVersion; // 0x44 <type_s>
};


