#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct DDSURFACEDESC2Decl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 132(0x84)
    int(__cdecl* m_DDSURFACEDESC2_New)(DDSURFACEDESC2* pThis); // [New at 0x7A33EB] [0x10] ()i
    int(__cdecl* m_DDSURFACEDESC2_Delete)(DDSURFACEDESC2* pThis); // [Delete at 0x7A34E9] [0x14] ()i
};


// 27 members
struct DDSURFACEDESC2 {
    DDSURFACEDESC2Decl* decl; // 0x0
    int    refs;  // 0x4
    int m_dwSize; // 0x8 <type_i>
    int m_dwFlags; // 0xC <type_i>
    int m_dwHeight; // 0x10 <type_i>
    int m_dwWidth; // 0x14 <type_i>
    int m_lPitch; // 0x18 <type_i>
    int m_dwBackBufferCount; // 0x1C <type_i>
    int m_dwMipMapCount; // 0x20 <type_i>
    int m_dwAlphaBitDepth; // 0x24 <type_i>
    int m_dwReserved; // 0x28 <type_i>
    void* m_lpSurface; // 0x2C <type_*b>
    long long m_dddckCKDestOverlay; // 0x30 <type_l>
    long long m_ddckCKDestBlt; // 0x38 <type_l>
    long long m_ddckCKSrcOverlay; // 0x40 <type_l>
    long long m_ddckCKSrcBlt; // 0x48 <type_l>
    int m_ddpf_dwSize; // 0x50 <type_i>
    int m_ddpf_dwFlags; // 0x54 <type_i>
    int m_ddpf_dwFourCC; // 0x58 <type_i>
    int m_ddpf_BitCount; // 0x5C <type_i>
    int m_ddpf_BitMask_0; // 0x60 <type_i>
    int m_ddpf_BitMask_1; // 0x64 <type_i>
    int m_ddpf_BitMask_2; // 0x68 <type_i>
    int m_ddpf_BitMask_3; // 0x6C <type_i>
    int m_ddsCaps; // 0x70 <type_i>
    int m_ddsCaps2; // 0x74 <type_i>
    int m_ddsCaps3; // 0x78 <type_i>
    int m_ddsCaps4; // 0x7C <type_i>
    int m_dwTextureStage; // 0x80 <type_i>
};


