#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct DSBUFFERDESCDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 44(0x2C)
    int(__cdecl* m_DSBUFFERDESC_New)(DSBUFFERDESC* pThis); // [New at 0x7A1ACC] [0x10] ()i
    int(__cdecl* m_DSBUFFERDESC_Delete)(DSBUFFERDESC* pThis); // [Delete at 0x7A1B2D] [0x14] ()i
};


// 9 members
struct DSBUFFERDESC {
    DSBUFFERDESCDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_dwSize; // 0x8 <type_i>
    int m_dwFlags; // 0xC <type_i>
    int m_dwBufferBytes; // 0x10 <type_i>
    int m_dwReserved; // 0x14 <type_i>
    void* m_lpwfxFormat; // 0x18 <type_*b>
    int m_guid3DAlgorithm0; // 0x1C <type_i>
    int m_guid3DAlgorithm1; // 0x20 <type_i>
    int m_guid3DAlgorithm2; // 0x24 <type_i>
    int m_guid3DAlgorithm3; // 0x28 <type_i>
};


