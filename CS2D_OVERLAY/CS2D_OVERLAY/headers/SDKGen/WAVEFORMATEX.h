#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct WAVEFORMATEXDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 26(0x1A)
    int(__cdecl* m_WAVEFORMATEX_New)(WAVEFORMATEX* pThis); // [New at 0x7A1A70] [0x10] ()i
    int(__cdecl* m_WAVEFORMATEX_Delete)(WAVEFORMATEX* pThis); // [Delete at 0x7A1ABE] [0x14] ()i
};


// 7 members
struct WAVEFORMATEX {
    WAVEFORMATEXDecl* decl; // 0x0
    int    refs;  // 0x4
    short m_wFormatTag; // 0x8 <type_s>
    short m_nChannels; // 0xA <type_s>
    int m_nSamplesPerSec; // 0xC <type_i>
    int m_nAvgBytesPerSec; // 0x10 <type_i>
    short m_nBlockAlign; // 0x14 <type_s>
    short m_wBitsPerSample; // 0x16 <type_s>
    short m_cbSize; // 0x18 <type_s>
};


