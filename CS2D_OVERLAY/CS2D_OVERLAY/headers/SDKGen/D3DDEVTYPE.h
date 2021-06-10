#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct D3DDEVTYPEDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_D3DDEVTYPE_New)(D3DDEVTYPE* pThis); // [New at 0x7A2071] [0x10] ()i
    int(__cdecl* m_D3DDEVTYPE_Delete)(D3DDEVTYPE* pThis); // [Delete at 0x7A2093] [0x14] ()i
};


// 0 members
struct D3DDEVTYPE {
    D3DDEVTYPEDecl* decl; // 0x0
    int    refs;  // 0x4
};


