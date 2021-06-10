#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct DDCAPS_DX3Decl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 324(0x144)
    int(__cdecl* m_DDCAPS_DX3_New)(DDCAPS_DX3* pThis); // [New at 0x7A3A11] [0x10] ()i
    int(__cdecl* m_DDCAPS_DX3_Delete)(DDCAPS_DX3* pThis); // [Delete at 0x7A3CEF] [0x14] ()i
};


// 79 members
struct DDCAPS_DX3 {
    DDCAPS_DX3Decl* decl; // 0x0
    int    refs;  // 0x4
    int m_dwSize; // 0x8 <type_i>
    int m_dwCaps; // 0xC <type_i>
    int m_dwCaps2; // 0x10 <type_i>
    int m_dwCKeyCaps; // 0x14 <type_i>
    int m_dwFXCaps; // 0x18 <type_i>
    int m_dwFXAlphaCaps; // 0x1C <type_i>
    int m_dwPalCaps; // 0x20 <type_i>
    int m_dwSVCaps; // 0x24 <type_i>
    int m_dwAlphaBltConstBitDepths; // 0x28 <type_i>
    int m_dwAlphaBltPixelBitDepths; // 0x2C <type_i>
    int m_dwAlphaBltSurfaceBitDepths; // 0x30 <type_i>
    int m_dwAlphaOverlayConstBitDepths; // 0x34 <type_i>
    int m_dwAlphaOverlayPixelBitDepths; // 0x38 <type_i>
    int m_dwAlphaOverlaySurfaceBitDepths; // 0x3C <type_i>
    int m_dwZBufferBitDepths; // 0x40 <type_i>
    int m_dwVidMemTotal; // 0x44 <type_i>
    int m_dwVidMemFree; // 0x48 <type_i>
    int m_dwMaxVisibleOverlays; // 0x4C <type_i>
    int m_dwCurrVisibleOverlays; // 0x50 <type_i>
    int m_dwNumFourCCCodes; // 0x54 <type_i>
    int m_dwAlignBoundarySrc; // 0x58 <type_i>
    int m_dwAlignSizeSrc; // 0x5C <type_i>
    int m_dwAlignBoundaryDest; // 0x60 <type_i>
    int m_dwAlignSizeDest; // 0x64 <type_i>
    int m_dwAlignStrideAlign; // 0x68 <type_i>
    int m_dwRops_0; // 0x6C <type_i>
    int m_dwRops_1; // 0x70 <type_i>
    int m_dwRops_2; // 0x74 <type_i>
    int m_dwRops_3; // 0x78 <type_i>
    int m_dwRops_4; // 0x7C <type_i>
    int m_dwRops_5; // 0x80 <type_i>
    int m_dwRops_6; // 0x84 <type_i>
    int m_dwRops_7; // 0x88 <type_i>
    int m_ddsCaps; // 0x8C <type_i>
    int m_dwMinOverlayStretch; // 0x90 <type_i>
    int m_dwMaxOverlayStretch; // 0x94 <type_i>
    int m_dwMinLiveVideoStretch; // 0x98 <type_i>
    int m_dwMaxLiveVideoStretch; // 0x9C <type_i>
    int m_dwMinHwCodecStretch; // 0xA0 <type_i>
    int m_dwMaxHwCodecStretch; // 0xA4 <type_i>
    int m_dwReserved1; // 0xA8 <type_i>
    int m_dwReserved2; // 0xAC <type_i>
    int m_dwReserved3; // 0xB0 <type_i>
    int m_dwSVBCaps; // 0xB4 <type_i>
    int m_dwSVBCKeyCaps; // 0xB8 <type_i>
    int m_dwSVBFXCaps; // 0xBC <type_i>
    int m_dwSVBRops_0; // 0xC0 <type_i>
    int m_dwSVBRops_1; // 0xC4 <type_i>
    int m_dwSVBRops_2; // 0xC8 <type_i>
    int m_dwSVBRops_3; // 0xCC <type_i>
    int m_dwSVBRops_4; // 0xD0 <type_i>
    int m_dwSVBRops_5; // 0xD4 <type_i>
    int m_dwSVBRops_6; // 0xD8 <type_i>
    int m_dwSVBRops_7; // 0xDC <type_i>
    int m_dwVSBCaps; // 0xE0 <type_i>
    int m_dwVSBCKeyCaps; // 0xE4 <type_i>
    int m_dwVSBFXCaps; // 0xE8 <type_i>
    int m_dwVSBRops_0; // 0xEC <type_i>
    int m_dwVSBRops_1; // 0xF0 <type_i>
    int m_dwVSBRops_2; // 0xF4 <type_i>
    int m_dwVSBRops_3; // 0xF8 <type_i>
    int m_dwVSBRops_4; // 0xFC <type_i>
    int m_dwVSBRops_5; // 0x100 <type_i>
    int m_dwVSBRops_6; // 0x104 <type_i>
    int m_dwVSBRops_7; // 0x108 <type_i>
    int m_dwSSBCaps; // 0x10C <type_i>
    int m_dwSSBCKeyCaps; // 0x110 <type_i>
    int m_dwSSBFXCaps; // 0x114 <type_i>
    int m_dwSSBRops_0; // 0x118 <type_i>
    int m_dwSSBRops_1; // 0x11C <type_i>
    int m_dwSSBRops_2; // 0x120 <type_i>
    int m_dwSSBRops_3; // 0x124 <type_i>
    int m_dwSSBRops_4; // 0x128 <type_i>
    int m_dwSSBRops_5; // 0x12C <type_i>
    int m_dwSSBRops_6; // 0x130 <type_i>
    int m_dwSSBRops_7; // 0x134 <type_i>
    int m_dwReserved4; // 0x138 <type_i>
    int m_dwReserved5; // 0x13C <type_i>
    int m_dwReserved6; // 0x140 <type_i>
};


