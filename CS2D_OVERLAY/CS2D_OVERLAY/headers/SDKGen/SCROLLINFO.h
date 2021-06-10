#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct SCROLLINFODecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 36(0x24)
    int(__cdecl* m_SCROLLINFO_New)(SCROLLINFO* pThis); // [New at 0x7A4C3B] [0x10] ()i
    int(__cdecl* m_SCROLLINFO_Delete)(SCROLLINFO* pThis); // [Delete at 0x7A4C8E] [0x14] ()i
};


// 7 members
struct SCROLLINFO {
    SCROLLINFODecl* decl; // 0x0
    int    refs;  // 0x4
    int m_cbSize; // 0x8 <type_i>
    int m_fMask; // 0xC <type_i>
    int m_nMin; // 0x10 <type_i>
    int m_nMax; // 0x14 <type_i>
    int m_nPage; // 0x18 <type_i>
    int m_nPos; // 0x1C <type_i>
    int m_nTrackPos; // 0x20 <type_i>
};


