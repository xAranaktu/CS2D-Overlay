#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct D3DVIEWPORT9Decl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 32(0x20)
    int(__cdecl* m_D3DVIEWPORT9_New)(D3DVIEWPORT9* pThis); // [New at 0x7A239B] [0x10] ()i
    int(__cdecl* m_D3DVIEWPORT9_Delete)(D3DVIEWPORT9* pThis); // [Delete at 0x7A23E3] [0x14] ()i
};


// 6 members
struct D3DVIEWPORT9 {
    D3DVIEWPORT9Decl* decl; // 0x0
    int    refs;  // 0x4
    int m_X; // 0x8 <type_i>
    int m_Y; // 0xC <type_i>
    int m_Width; // 0x10 <type_i>
    int m_Height; // 0x14 <type_i>
    float m_MinZ; // 0x18 <type_f>
    float m_MaxZ; // 0x1C <type_f>
};


