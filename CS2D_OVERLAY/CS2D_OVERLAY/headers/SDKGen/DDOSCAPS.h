#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct DDOSCAPSDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_DDOSCAPS_New)(DDOSCAPS* pThis); // [New at 0x7A37C5] [0x10] ()i
    int(__cdecl* m_DDOSCAPS_Delete)(DDOSCAPS* pThis); // [Delete at 0x7A37EE] [0x14] ()i
};


// 1 members
struct DDOSCAPS {
    DDOSCAPSDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_dwCaps; // 0x8 <type_i>
};


