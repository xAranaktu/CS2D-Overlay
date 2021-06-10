#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct DDSCAPSDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_DDSCAPS_New)(DDSCAPS* pThis); // [New at 0x7A378E] [0x10] ()i
    int(__cdecl* m_DDSCAPS_Delete)(DDSCAPS* pThis); // [Delete at 0x7A37B7] [0x14] ()i
};


// 1 members
struct DDSCAPS {
    DDSCAPSDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_dwCaps; // 0x8 <type_i>
};


