#pragma once

#include "defines.h"

// 7 methods, 1 functions
struct TBankStreamDecl {
    void* pSuper;  // 0x0 0x8FC2BC
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_TBankStream_New)(TBankStream* pThis); // [New at 0x7B30E3] [0x10] ()i
    int(__cdecl* m_TBankStream_Delete)(TBankStream* pThis); // [Delete at 0x7B3117] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    int(__cdecl* m_TBankStream_Pos)(TBankStream* pThis); // [Pos at 0x7B314A] [0x34] ()i
    int(__cdecl* m_TBankStream_Size)(TBankStream* pThis); // [Size at 0x7B3159] [0x38] ()i
    int(__cdecl* m_TBankStream_Seek)(TBankStream* pThis, int a1); // [Seek at 0x7B3171] [0x3C] (i)i
    void* nothing_15; // 0x40
    void* nothing_16; // 0x44
    int(__cdecl* m_TBankStream_Read)(TBankStream* pThis, void* a1, int a2); // [Read at 0x7B31B4] [0x48] (*b,i)i
    int(__cdecl* m_TBankStream_Write)(TBankStream* pThis, void* a1, int a2); // [Write at 0x7B3241] [0x4C] (*b,i)i
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
    TBankStream*(__cdecl* fn_Create)(TBank* a1); // [Create at 0x7B32CF] [0xA4] (:TBank):TBankStream
};


// Super: 0x8FC2BC
// 2 members
struct TBankStream {
    TBankStreamDecl* decl; // 0x0
    int    refs;  // 0x4
    int m__pos; // 0x8 <type_i>
    TBank* m__bank; // 0xC <type_:TBank>
};


