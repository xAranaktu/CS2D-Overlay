#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct DDSCAPS2Decl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_DDSCAPS2_New)(DDSCAPS2* pThis); // [New at 0x7A3841] [0x10] ()i
    int(__cdecl* m_DDSCAPS2_Delete)(DDSCAPS2* pThis); // [Delete at 0x7A387F] [0x14] ()i
};


// 4 members
struct DDSCAPS2 {
    DDSCAPS2Decl* decl; // 0x0
    int    refs;  // 0x4
    int m_dwCaps; // 0x8 <type_i>
    int m_dwCaps2; // 0xC <type_i>
    int m_dwCaps3; // 0x10 <type_i>
    int m_dwCaps4; // 0x14 <type_i>
};


