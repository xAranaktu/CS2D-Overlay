#pragma once

#include "defines.h"

// 20 methods, 0 functions
struct TTCPStreamDecl {
    void* pSuper;  // 0x0 0x8E36F4
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 56(0x38)
    int(__cdecl* m_TTCPStream_New)(TTCPStream* pThis); // [New at 0x792CE5] [0x10] ()i
    int(__cdecl* m_TTCPStream_Delete)(TTCPStream* pThis); // [Delete at 0x792D65] [0x14] ()i
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
    void* nothing_16; // 0x44
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
    int(__cdecl* m_TTCPStream_Init)(TTCPStream* pThis); // [Init at 0x792D85] [0xA4] ()i
    int(__cdecl* m_TTCPStream_RecvMsg)(TTCPStream* pThis); // [RecvMsg at 0x7931BD] [0xA8] ()i
    int(__cdecl* m_TTCPStream_SendMsg)(TTCPStream* pThis); // [SendMsg at 0x7932B3] [0xAC] ()i
    void* nothing_43; // 0xB0
    int(__cdecl* m_TTCPStream_SetLocalPort)(TTCPStream* pThis, short a1); // [SetLocalPort at 0x792E2B] [0xB4] (s)i
    short(__cdecl* m_TTCPStream_GetLocalPort)(TTCPStream* pThis); // [GetLocalPort at 0x792EF3] [0xB8] ()s
    int(__cdecl* m_TTCPStream_GetLocalIP)(TTCPStream* pThis); // [GetLocalIP at 0x792F10] [0xBC] ()i
    int(__cdecl* m_TTCPStream_SetRemotePort)(TTCPStream* pThis, short a1); // [SetRemotePort at 0x792F1F] [0xC0] (s)i
    short(__cdecl* m_TTCPStream_GetRemotePort)(TTCPStream* pThis); // [GetRemotePort at 0x792F47] [0xC4] ()s
    int(__cdecl* m_TTCPStream_SetRemoteIP)(TTCPStream* pThis, int a1); // [SetRemoteIP at 0x792F64] [0xC8] (i)i
    int(__cdecl* m_TTCPStream_GetRemoteIP)(TTCPStream* pThis); // [GetRemoteIP at 0x792F7B] [0xCC] ()i
    int(__cdecl* m_TTCPStream_SetTimeouts)(TTCPStream* pThis, int a1, int a2, int a3); // [SetTimeouts at 0x792F8A] [0xD0] (i,i,i)i
    int(__cdecl* m_TTCPStream_GetRecvTimeout)(TTCPStream* pThis); // [GetRecvTimeout at 0x792FAF] [0xD4] ()i
    int(__cdecl* m_TTCPStream_GetSendTimeout)(TTCPStream* pThis); // [GetSendTimeout at 0x792FBE] [0xD8] ()i
    int(__cdecl* m_TTCPStream_GetAcceptTimeout)(TTCPStream* pThis); // [GetAcceptTimeout at 0x792FCD] [0xDC] ()i
    int(__cdecl* m_TTCPStream_Connect)(TTCPStream* pThis); // [Connect at 0x792FDC] [0xE0] ()i
    int(__cdecl* m_TTCPStream_Listen)(TTCPStream* pThis, int a1); // [Listen at 0x79303A] [0xE4] (i)i
    TTCPStream*(__cdecl* m_TTCPStream_Accept)(TTCPStream* pThis); // [Accept at 0x793073] [0xE8] ():TTCPStream
    int(__cdecl* m_TTCPStream_GetState)(TTCPStream* pThis); // [GetState at 0x7933A7] [0xEC] ()i
};


// Super: 0x8E36F4
// 7 members
struct TTCPStream {
    TTCPStreamDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_LocalIP; // 0x1C <type_i>
    short m_LocalPort; // 0x20 <type_s>
    int m_RemoteIP; // 0x24 <type_i>
    short m_RemotePort; // 0x28 <type_s>
    int m_RecvTimeout; // 0x2C <type_i>
    int m_SendTimeout; // 0x30 <type_i>
    int m_AcceptTimeout; // 0x34 <type_i>
};


