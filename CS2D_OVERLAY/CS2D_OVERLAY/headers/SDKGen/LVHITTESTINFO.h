#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct LVHITTESTINFODecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_LVHITTESTINFO_New)(LVHITTESTINFO* pThis); // [New at 0x7A5669] [0x10] ()i
    int(__cdecl* m_LVHITTESTINFO_Delete)(LVHITTESTINFO* pThis); // [Delete at 0x7A56AE] [0x14] ()i
};


// 5 members
struct LVHITTESTINFO {
    LVHITTESTINFODecl* decl; // 0x0
    int    refs;  // 0x4
    int m_pt_x; // 0x8 <type_i>
    int m_pt_y; // 0xC <type_i>
    int m_flags; // 0x10 <type_i>
    int m_iItem; // 0x14 <type_i>
    int m_iSubItem; // 0x18 <type_i>
};


