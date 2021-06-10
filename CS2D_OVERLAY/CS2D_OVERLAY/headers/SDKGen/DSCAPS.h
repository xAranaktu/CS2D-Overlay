#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct DSCAPSDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 104(0x68)
    int(__cdecl* m_DSCAPS_New)(DSCAPS* pThis); // [New at 0x7A1945] [0x10] ()i
    int(__cdecl* m_DSCAPS_Delete)(DSCAPS* pThis); // [Delete at 0x7A1A0F] [0x14] ()i
};


// 24 members
struct DSCAPS {
    DSCAPSDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_dwSize; // 0x8 <type_i>
    int m_dwFlags; // 0xC <type_i>
    int m_dwMinSecondarySampleRate; // 0x10 <type_i>
    int m_dwMaxSecondarySampleRate; // 0x14 <type_i>
    int m_dwPrimaryBuffers; // 0x18 <type_i>
    int m_dwMaxHwMixingAllBuffers; // 0x1C <type_i>
    int m_dwMaxHwMixingStaticBuffers; // 0x20 <type_i>
    int m_dwMaxHwMixingStreamingBuffers; // 0x24 <type_i>
    int m_dwFreeHwMixingAllBuffers; // 0x28 <type_i>
    int m_dwFreeHwMixingStaticBuffers; // 0x2C <type_i>
    int m_dwFreeHwMixingStreamingBuffers; // 0x30 <type_i>
    int m_dwMaxHw3DAllBuffers; // 0x34 <type_i>
    int m_dwMaxHw3DStaticBuffers; // 0x38 <type_i>
    int m_dwMaxHw3DStreamingBuffers; // 0x3C <type_i>
    int m_dwFreeHw3DAllBuffers; // 0x40 <type_i>
    int m_dwFreeHw3DStaticBuffers; // 0x44 <type_i>
    int m_dwFreeHw3DStreamingBuffers; // 0x48 <type_i>
    int m_dwTotalHwMemBytes; // 0x4C <type_i>
    int m_dwFreeHwMemBytes; // 0x50 <type_i>
    int m_dwMaxContigFreeHwMemBytes; // 0x54 <type_i>
    int m_dwUnlockTransferRateHwBuffers; // 0x58 <type_i>
    int m_dwPlayCpuOverheadSwBuffers; // 0x5C <type_i>
    int m_dwReserved1; // 0x60 <type_i>
    int m_dwReserved2; // 0x64 <type_i>
};


