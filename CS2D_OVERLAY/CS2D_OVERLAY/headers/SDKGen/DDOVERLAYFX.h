#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct DDOVERLAYFXDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 64(0x40)
    int(__cdecl* m_DDOVERLAYFX_New)(DDOVERLAYFX* pThis); // [New at 0x7A47E1] [0x10] ()i
    int(__cdecl* m_DDOVERLAYFX_Delete)(DDOVERLAYFX* pThis); // [Delete at 0x7A4865] [0x14] ()i
};


// 12 members
struct DDOVERLAYFX {
    DDOVERLAYFXDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_dwSize; // 0x8 <type_i>
    int m_dwAlphaEdgeBlendBitDepth; // 0xC <type_i>
    int m_dwAlphaEdgeBlend; // 0x10 <type_i>
    int m_dwReserved; // 0x14 <type_i>
    int m_dwAlphaDestConstBitDepth; // 0x18 <type_i>
    int m_dwAlphaDestConst; // 0x1C <type_i>
    int m_dwAlphaSrcConstBitDepth; // 0x20 <type_i>
    int m_dwAlphaSrcConst; // 0x24 <type_i>
    long long m_dckDestColorkey; // 0x28 <type_l>
    long long m_dckSrcColorkey; // 0x30 <type_l>
    int m_dwDDFX; // 0x38 <type_i>
    int m_dwFlags; // 0x3C <type_i>
};


