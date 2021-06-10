#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct D3DCLIPSTATUSDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 40(0x28)
    int(__cdecl* m_D3DCLIPSTATUS_New)(D3DCLIPSTATUS* pThis); // [New at 0x7A1BE0] [0x10] ()i
    int(__cdecl* m_D3DCLIPSTATUS_Delete)(D3DCLIPSTATUS* pThis); // [Delete at 0x7A1C3A] [0x14] ()i
};


// 8 members
struct D3DCLIPSTATUS {
    D3DCLIPSTATUSDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_dwFlags; // 0x8 <type_i>
    int m_dwStatus; // 0xC <type_i>
    int m_minx; // 0x10 <type_i>
    int m_maxx; // 0x14 <type_i>
    int m_miny; // 0x18 <type_i>
    int m_maxy; // 0x1C <type_i>
    int m_minz; // 0x20 <type_i>
    int m_maxz; // 0x24 <type_i>
};


