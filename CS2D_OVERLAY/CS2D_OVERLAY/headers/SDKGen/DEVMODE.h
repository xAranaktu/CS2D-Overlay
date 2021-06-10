#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct DEVMODEDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 164(0xA4)
    int(__cdecl* m_DEVMODE_New)(DEVMODE* pThis); // [New at 0x7A58EC] [0x10] ()i
    int(__cdecl* m_DEVMODE_Delete)(DEVMODE* pThis); // [Delete at 0x7A5A62] [0x14] ()i
};


// 47 members
struct DEVMODE {
    DEVMODEDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_pad0; // 0x8 <type_i>
    int m_pad1; // 0xC <type_i>
    int m_pad2; // 0x10 <type_i>
    int m_pad3; // 0x14 <type_i>
    int m_pad4; // 0x18 <type_i>
    int m_pad5; // 0x1C <type_i>
    int m_pad6; // 0x20 <type_i>
    int m_pad7; // 0x24 <type_i>
    short m_dmSpecVersion; // 0x28 <type_s>
    short m_dmDriverVersion; // 0x2A <type_s>
    short m_dmSize; // 0x2C <type_s>
    short m_dmDriverExtra; // 0x2E <type_s>
    int m_dmFields; // 0x30 <type_i>
    int m_dmPostition_x; // 0x34 <type_i>
    int m_dmPosition_y; // 0x38 <type_i>
    short m_dmScale; // 0x3C <type_s>
    short m_dmCopies; // 0x3E <type_s>
    short m_dmDefaultSource; // 0x40 <type_s>
    short m_dmPrintQuality; // 0x42 <type_s>
    short m_dmColor; // 0x44 <type_s>
    short m_dmDuplex; // 0x46 <type_s>
    short m_dmYResolution; // 0x48 <type_s>
    short m_dmTTOption; // 0x4A <type_s>
    short m_dmCollate; // 0x4C <type_s>
    short m_pad8; // 0x4E <type_s>
    int m_pad9; // 0x50 <type_i>
    int m_pad10; // 0x54 <type_i>
    int m_pad11; // 0x58 <type_i>
    int m_pad12; // 0x5C <type_i>
    int m_pad13; // 0x60 <type_i>
    int m_pad14; // 0x64 <type_i>
    int m_pad15; // 0x68 <type_i>
    short m_pad16; // 0x6C <type_s>
    short m_dmLogPixels; // 0x6E <type_s>
    int m_dmBitsPerPel; // 0x70 <type_i>
    int m_dmPelsWidth; // 0x74 <type_i>
    int m_dmPelsHeight; // 0x78 <type_i>
    int m_dmDisplayFlags; // 0x7C <type_i>
    int m_dmDisplayFrequency; // 0x80 <type_i>
    int m_dmICMMethod; // 0x84 <type_i>
    int m_dmICMIntent; // 0x88 <type_i>
    int m_dmMediaType; // 0x8C <type_i>
    int m_dmDitherType; // 0x90 <type_i>
    int m_dmReserved1; // 0x94 <type_i>
    int m_dmReserved2; // 0x98 <type_i>
    int m_dmPanningWidth; // 0x9C <type_i>
    int m_dmPanningHeight; // 0xA0 <type_i>
};


