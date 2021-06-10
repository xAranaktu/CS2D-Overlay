#pragma once

#include "defines.h"

// 3 methods, 1 functions
struct TStreamStreamDecl {
    void* pSuper;  // 0x0 0x8FC564
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TStreamStream_New)(TStreamStream* pThis); // [New at 0x7B467D] [0x10] ()i
    int(__cdecl* m_TStreamStream_Delete)(TStreamStream* pThis); // [Delete at 0x7B469F] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    void* nothing_12; // 0x34
    void* nothing_13; // 0x38
    void* nothing_14; // 0x3C
    void* nothing_15; // 0x40
    int(__cdecl* m_TStreamStream_Close)(TStreamStream* pThis); // [Close at 0x7B46BF] [0x44] ()i
    void* nothing_17; // 0x48
    void* nothing_18; // 0x4C
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
    void* nothing_40; // 0xA4
    TStreamStream*(__cdecl* fn_Create)(TStream* a1); // [Create at 0x7B46E1] [0xA8] (:TStream):TStreamStream
};


// Super: 0x8FC564
// 0 members
struct TStreamStream {
    TStreamStreamDecl* decl; // 0x0
    int    refs;  // 0x4
};


