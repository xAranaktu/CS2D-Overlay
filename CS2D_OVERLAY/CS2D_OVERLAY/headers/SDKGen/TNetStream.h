#pragma once

#include "defines.h"

// 12 methods, 0 functions
struct TNetStreamDecl {
    void* pSuper;  // 0x0 0x8FC2BC
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_TNetStream_New)(TNetStream* pThis); // [New at 0x79242E] [0x10] ()i
    int(__cdecl* m_TNetStream_Delete)(TNetStream* pThis); // [Delete at 0x792496] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TNetStream_Eof)(TNetStream* pThis); // [Eof at 0x7925E6] [0x30] ()i
    void* nothing_12; // 0x34
    int(__cdecl* m_TNetStream_Size)(TNetStream* pThis); // [Size at 0x7925FE] [0x38] ()i
    void* nothing_14; // 0x3C
    int(__cdecl* m_TNetStream_Flush)(TNetStream* pThis); // [Flush at 0x79260D] [0x40] ()i
    int(__cdecl* m_TNetStream_Close)(TNetStream* pThis); // [Close at 0x792650] [0x44] ()i
    int(__cdecl* m_TNetStream_Read)(TNetStream* pThis, void* a1, int a2); // [Read at 0x7924E3] [0x48] (*b,i)i
    int(__cdecl* m_TNetStream_Write)(TNetStream* pThis, void* a1, int a2); // [Write at 0x792566] [0x4C] (*b,i)i
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
    int(__cdecl* m_TNetStream_Init)(TNetStream* pThis); // [Init at 0x7B6004] [0xA4] ()i
    int(__cdecl* m_TNetStream_RecvMsg)(TNetStream* pThis); // [RecvMsg at 0x7B6004] [0xA8] ()i
    int(__cdecl* m_TNetStream_SendMsg)(TNetStream* pThis); // [SendMsg at 0x7B6004] [0xAC] ()i
    int(__cdecl* m_TNetStream_RecvAvail)(TNetStream* pThis); // [RecvAvail at 0x792688] [0xB0] ()i
};


// Super: 0x8FC2BC
// 5 members
struct TNetStream {
    TNetStreamDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_Socket; // 0x8 <type_i>
    void* m_RecvBuffer; // 0xC <type_*b>
    void* m_SendBuffer; // 0x10 <type_*b>
    int m_RecvSize; // 0x14 <type_i>
    int m_SendSize; // 0x18 <type_i>
};


