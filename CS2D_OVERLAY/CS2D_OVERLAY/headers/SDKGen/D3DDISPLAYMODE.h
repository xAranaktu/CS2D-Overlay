#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct D3DDISPLAYMODEDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_D3DDISPLAYMODE_New)(D3DDISPLAYMODE* pThis); // [New at 0x7A1CC8] [0x10] ()i
    int(__cdecl* m_D3DDISPLAYMODE_Delete)(D3DDISPLAYMODE* pThis); // [Delete at 0x7A1D06] [0x14] ()i
};


// 4 members
struct D3DDISPLAYMODE {
    D3DDISPLAYMODEDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_Width; // 0x8 <type_i>
    int m_Height; // 0xC <type_i>
    int m_RefreshRate; // 0x10 <type_i>
    int m_Format; // 0x14 <type_i>
};


