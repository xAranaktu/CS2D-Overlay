#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct D3DVERTEXBUFFERDESCDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_D3DVERTEXBUFFERDESC_New)(D3DVERTEXBUFFERDESC* pThis); // [New at 0x7A4A83] [0x10] ()i
    int(__cdecl* m_D3DVERTEXBUFFERDESC_Delete)(D3DVERTEXBUFFERDESC* pThis); // [Delete at 0x7A4AC1] [0x14] ()i
};


// 4 members
struct D3DVERTEXBUFFERDESC {
    D3DVERTEXBUFFERDESCDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_dwSize; // 0x8 <type_i>
    int m_dwCaps; // 0xC <type_i>
    int m_dwFVF; // 0x10 <type_i>
    int m_dwNumVertices; // 0x14 <type_i>
};


