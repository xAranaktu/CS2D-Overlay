#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct D3DVIEWPORT7Decl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 32(0x20)
    int(__cdecl* m_D3DVIEWPORT7_New)(D3DVIEWPORT7* pThis); // [New at 0x7A4A29] [0x10] ()i
    int(__cdecl* m_D3DVIEWPORT7_Delete)(D3DVIEWPORT7* pThis); // [Delete at 0x7A4A75] [0x14] ()i
};


// 6 members
struct D3DVIEWPORT7 {
    D3DVIEWPORT7Decl* decl; // 0x0
    int    refs;  // 0x4
    int m_dwX; // 0x8 <type_i>
    int m_dwY; // 0xC <type_i>
    int m_dwWidth; // 0x10 <type_i>
    int m_dwHeight; // 0x14 <type_i>
    int m_dvMinZ; // 0x18 <type_i>
    int m_dvMaxZ; // 0x1C <type_i>
};


