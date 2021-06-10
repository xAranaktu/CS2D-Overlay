#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct PIXELFORMATDESCRIPTORDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 48(0x30)
    int(__cdecl* m_PIXELFORMATDESCRIPTOR_New)(PIXELFORMATDESCRIPTOR* pThis); // [New at 0x7A5A70] [0x10] ()i
    int(__cdecl* m_PIXELFORMATDESCRIPTOR_Delete)(PIXELFORMATDESCRIPTOR* pThis); // [Delete at 0x7A5B0A] [0x14] ()i
};


// 26 members
struct PIXELFORMATDESCRIPTOR {
    PIXELFORMATDESCRIPTORDecl* decl; // 0x0
    int    refs;  // 0x4
    short m_nSize; // 0x8 <type_s>
    short m_nVersion; // 0xA <type_s>
    int m_dwFlags; // 0xC <type_i>
    char m_iPixelType; // 0x10 <type_b>
    char m_cColorBits; // 0x11 <type_b>
    char m_cRedBits; // 0x12 <type_b>
    char m_cRedShift; // 0x13 <type_b>
    char m_cGreenBits; // 0x14 <type_b>
    char m_cGreenShift; // 0x15 <type_b>
    char m_cBlueBits; // 0x16 <type_b>
    char m_cBlueShift; // 0x17 <type_b>
    char m_cAlphaBits; // 0x18 <type_b>
    char m_cAlphaShift; // 0x19 <type_b>
    char m_cAccumBits; // 0x1A <type_b>
    char m_cAccumRedBits; // 0x1B <type_b>
    char m_cAccumGreenBits; // 0x1C <type_b>
    char m_cAccumBlueBits; // 0x1D <type_b>
    char m_cAccumAlphaBits; // 0x1E <type_b>
    char m_cDepthBits; // 0x1F <type_b>
    char m_cStencilBits; // 0x20 <type_b>
    char m_cAuxBuffers; // 0x21 <type_b>
    char m_iLayerType; // 0x22 <type_b>
    char m_bReserved; // 0x23 <type_b>
    int m_dwLayerMask; // 0x24 <type_i>
    int m_dwVisibleMask; // 0x28 <type_i>
    int m_dwDamageMask; // 0x2C <type_i>
};


