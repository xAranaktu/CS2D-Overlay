#pragma once

#include "defines.h"

// 7 methods, 1 functions
struct TRamStreamDecl {
    void* pSuper;  // 0x0 0x8FC2BC
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_TRamStream_New)(TRamStream* pThis); // [New at 0x798DCB] [0x10] ()i
    int(__cdecl* m_TRamStream_Delete)(TRamStream* pThis); // [Delete at 0x798E10] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    int(__cdecl* m_TRamStream_Pos)(TRamStream* pThis); // [Pos at 0x798E30] [0x34] ()i
    int(__cdecl* m_TRamStream_Size)(TRamStream* pThis); // [Size at 0x798E3F] [0x38] ()i
    int(__cdecl* m_TRamStream_Seek)(TRamStream* pThis, int a1); // [Seek at 0x798E4E] [0x3C] (i)i
    void* nothing_15; // 0x40
    void* nothing_16; // 0x44
    int(__cdecl* m_TRamStream_Read)(TRamStream* pThis, void* a1, int a2); // [Read at 0x798E77] [0x48] (*b,i)i
    int(__cdecl* m_TRamStream_Write)(TRamStream* pThis, void* a1, int a2); // [Write at 0x798ED9] [0x4C] (*b,i)i
    void* nothing_19; // 0x50
    void* nothing_20; // 0x54
    void* nothing_21; // 0x58
    void* nothing_22; // 0x5C
    void* nothing_23; // 0x60
    void* nothing_24; // 0x64
    void* nothing_25; // 0x68
    void* nothing_26; // 0x6C
    void* nothing_27; // 0x70
    void* nothing_28; // 0x74
    void* nothing_29; // 0x78
    void* nothing_30; // 0x7C
    void* nothing_31; // 0x80
    void* nothing_32; // 0x84
    void* nothing_33; // 0x88
    void* nothing_34; // 0x8C
    void* nothing_35; // 0x90
    void* nothing_36; // 0x94
    void* nothing_37; // 0x98
    void* nothing_38; // 0x9C
    void* nothing_39; // 0xA0
    TRamStream*(__cdecl* fn_Create)(void* a1, int a2, int a3, int a4); // [Create at 0x798F3B] [0xA4] (*b,i,i,i):TRamStream
};


// Super: 0x8FC2BC
// 5 members
struct TRamStream {
    TRamStreamDecl* decl; // 0x0
    int    refs;  // 0x4
    int m__pos; // 0x8 <type_i>
    int m__size; // 0xC <type_i>
    void* m__buf; // 0x10 <type_*b>
    int m__read; // 0x14 <type_i>
    int m__write; // 0x18 <type_i>
};


