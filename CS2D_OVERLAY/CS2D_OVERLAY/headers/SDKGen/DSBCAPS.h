#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct DSBCAPSDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_DSBCAPS_New)(DSBCAPS* pThis); // [New at 0x7A1A1D] [0x10] ()i
    int(__cdecl* m_DSBCAPS_Delete)(DSBCAPS* pThis); // [Delete at 0x7A1A62] [0x14] ()i
};


// 5 members
struct DSBCAPS {
    DSBCAPSDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_dwSize; // 0x8 <type_i>
    int m_dwFlags; // 0xC <type_i>
    int m_dwBufferBytes; // 0x10 <type_i>
    int m_dwUnlockTransferRate; // 0x14 <type_i>
    int m_dwPlayCpuOverhead; // 0x18 <type_i>
};


