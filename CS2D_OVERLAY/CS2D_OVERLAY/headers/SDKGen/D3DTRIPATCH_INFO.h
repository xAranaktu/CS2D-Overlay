#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct D3DTRIPATCH_INFODecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_D3DTRIPATCH_INFO_New)(D3DTRIPATCH_INFO* pThis); // [New at 0x7A1EEB] [0x10] ()i
    int(__cdecl* m_D3DTRIPATCH_INFO_Delete)(D3DTRIPATCH_INFO* pThis); // [Delete at 0x7A1F29] [0x14] ()i
};


// 4 members
struct D3DTRIPATCH_INFO {
    D3DTRIPATCH_INFODecl* decl; // 0x0
    int    refs;  // 0x4
    int m_StartVertexOffset; // 0x8 <type_i>
    int m_NumVertices; // 0xC <type_i>
    int m_Basis; // 0x10 <type_i>
    int m_Degree; // 0x14 <type_i>
};


