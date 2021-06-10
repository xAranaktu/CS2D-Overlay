#pragma once

#include "defines.h"

// 7 methods, 2 functions
struct TSocketStreamDecl {
    void* pSuper;  // 0x0 0x8FC2BC
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_TSocketStream_New)(TSocketStream* pThis); // [New at 0x798A60] [0x10] ()i
    int(__cdecl* m_TSocketStream_Delete)(TSocketStream* pThis); // [Delete at 0x798A94] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TSocketStream_Eof)(TSocketStream* pThis); // [Eof at 0x798B0B] [0x30] ()i
    void* nothing_12; // 0x34
    void* nothing_13; // 0x38
    void* nothing_14; // 0x3C
    void* nothing_15; // 0x40
    int(__cdecl* m_TSocketStream_Close)(TSocketStream* pThis); // [Close at 0x798B59] [0x44] ()i
    int(__cdecl* m_TSocketStream_Read)(TSocketStream* pThis, void* a1, int a2); // [Read at 0x798AC7] [0x48] (*b,i)i
    int(__cdecl* m_TSocketStream_Write)(TSocketStream* pThis, void* a1, int a2); // [Write at 0x798AE9] [0x4C] (*b,i)i
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
    TSocket*(__cdecl* m_TSocketStream_Socket)(TSocketStream* pThis); // [Socket at 0x798BB6] [0xA4] ():TSocket
    TSocketStream*(__cdecl* fn_Create)(TSocket* a1, int a2); // [Create at 0x798BC5] [0xA8] (:TSocket,i):TSocketStream
    TSocketStream*(__cdecl* fn_CreateClient)(BBString* a1, int a2); // [CreateClient at 0x798C09] [0xAC] ($,i):TSocketStream
};


// Super: 0x8FC2BC
// 2 members
struct TSocketStream {
    TSocketStreamDecl* decl; // 0x0
    int    refs;  // 0x4
    TSocket* m__socket; // 0x8 <type_:TSocket>
    int m__autoClose; // 0xC <type_i>
};


