#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct D3DRECTPATCH_INFODecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 36(0x24)
    int(__cdecl* m_D3DRECTPATCH_INFO_New)(D3DRECTPATCH_INFO* pThis); // [New at 0x7A1E8A] [0x10] ()i
    int(__cdecl* m_D3DRECTPATCH_INFO_Delete)(D3DRECTPATCH_INFO* pThis); // [Delete at 0x7A1EDD] [0x14] ()i
};


// 7 members
struct D3DRECTPATCH_INFO {
    D3DRECTPATCH_INFODecl* decl; // 0x0
    int    refs;  // 0x4
    int m_StartVertexOffsetWidth; // 0x8 <type_i>
    int m_StartVertexOffsetHeight; // 0xC <type_i>
    int m_Width; // 0x10 <type_i>
    int m_Height; // 0x14 <type_i>
    int m_Stride; // 0x18 <type_i>
    int m_Basis; // 0x1C <type_i>
    int m_Degree; // 0x20 <type_i>
};


