#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct D3DCLIPSTATUS9Decl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_D3DCLIPSTATUS9_New)(D3DCLIPSTATUS9* pThis); // [New at 0x7A235D] [0x10] ()i
    int(__cdecl* m_D3DCLIPSTATUS9_Delete)(D3DCLIPSTATUS9* pThis); // [Delete at 0x7A238D] [0x14] ()i
};


// 2 members
struct D3DCLIPSTATUS9 {
    D3DCLIPSTATUS9Decl* decl; // 0x0
    int    refs;  // 0x4
    int m_ClipUnion; // 0x8 <type_i>
    int m_ClipIntersection; // 0xC <type_i>
};


