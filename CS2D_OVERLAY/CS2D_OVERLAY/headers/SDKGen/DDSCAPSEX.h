#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct DDSCAPSEXDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_DDSCAPSEX_New)(DDSCAPSEX* pThis); // [New at 0x7A37FC] [0x10] ()i
    int(__cdecl* m_DDSCAPSEX_Delete)(DDSCAPSEX* pThis); // [Delete at 0x7A3833] [0x14] ()i
};


// 3 members
struct DDSCAPSEX {
    DDSCAPSEXDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_dwCaps2; // 0x8 <type_i>
    int m_dwCaps3; // 0xC <type_i>
    int m_dwCaps4; // 0x10 <type_i>
};


