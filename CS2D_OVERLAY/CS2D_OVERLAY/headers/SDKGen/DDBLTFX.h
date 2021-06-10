#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct DDBLTFXDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 108(0x6C)
    int(__cdecl* m_DDBLTFX_New)(DDBLTFX* pThis); // [New at 0x7A36AF] [0x10] ()i
    int(__cdecl* m_DDBLTFX_Delete)(DDBLTFX* pThis); // [Delete at 0x7A3780] [0x14] ()i
};


// 25 members
struct DDBLTFX {
    DDBLTFXDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_dwSize; // 0x8 <type_i>
    int m_dwDDFX; // 0xC <type_i>
    int m_dwROP; // 0x10 <type_i>
    int m_dwDDROP; // 0x14 <type_i>
    int m_dwRotationAngle; // 0x18 <type_i>
    int m_dwZBufferOpCode; // 0x1C <type_i>
    int m_dwZBufferLow; // 0x20 <type_i>
    int m_dwZBufferHigh; // 0x24 <type_i>
    int m_dwZBufferBaseDest; // 0x28 <type_i>
    int m_dwZDestConstBitDepth; // 0x2C <type_i>
    int m_dwZDestConst; // 0x30 <type_i>
    int m_dwZSrcConstBitDepth; // 0x34 <type_i>
    int m_dwZSrcConst; // 0x38 <type_i>
    int m_dwAlphaEdgeBlendBitDepth; // 0x3C <type_i>
    int m_dwAlphaEdgeBlend; // 0x40 <type_i>
    int m_dwReserved; // 0x44 <type_i>
    int m_dwAlphaDestConstBitDepth; // 0x48 <type_i>
    int m_dwAlphaDestConst; // 0x4C <type_i>
    int m_dwAlphaSrcConstBitDepth; // 0x50 <type_i>
    int m_dwAlphaSrcConst; // 0x54 <type_i>
    int m_dwFillColor; // 0x58 <type_i>
    int m_ddckDestColorkeyLo; // 0x5C <type_i>
    int m_ddckDestColorkeyHi; // 0x60 <type_i>
    int m_ddckSrcColorkeyLo; // 0x64 <type_i>
    int m_ddckSrcColorkeyHi; // 0x68 <type_i>
};


