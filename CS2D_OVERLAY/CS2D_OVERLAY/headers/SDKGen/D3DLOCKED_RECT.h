#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct D3DLOCKED_RECTDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_D3DLOCKED_RECT_New)(D3DLOCKED_RECT* pThis); // [New at 0x7A1E4C] [0x10] ()i
    int(__cdecl* m_D3DLOCKED_RECT_Delete)(D3DLOCKED_RECT* pThis); // [Delete at 0x7A1E7C] [0x14] ()i
};


// 2 members
struct D3DLOCKED_RECT {
    D3DLOCKED_RECTDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_Pitch; // 0x8 <type_i>
    void* m_pBits; // 0xC <type_*b>
};


