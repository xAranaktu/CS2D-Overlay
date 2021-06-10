#pragma once

#include "defines.h"

// 19 methods, 0 functions
struct TUDPStreamDecl {
    void* pSuper;  // 0x0 0x8E36F4
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 56(0x38)
    int(__cdecl* m_TUDPStream_New)(TUDPStream* pThis); // [New at 0x7926D1] [0x10] ()i
    int(__cdecl* m_TUDPStream_Delete)(TUDPStream* pThis); // [Delete at 0x79275D] [0x14] ()i
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
    int(__cdecl* m_TUDPStream_Init)(TUDPStream* pThis); // [Init at 0x79277D] [0xA4] ()i
    int(__cdecl* m_TUDPStream_RecvMsg)(TUDPStream* pThis); // [RecvMsg at 0x792A9B] [0xA8] ()i
    int(__cdecl* m_TUDPStream_SendMsg)(TUDPStream* pThis); // [SendMsg at 0x792BDC] [0xAC] ()i
    void* nothing_43; // 0xB0
    int(__cdecl* m_TUDPStream_SetLocalPort)(TUDPStream* pThis, short a1); // [SetLocalPort at 0x792823] [0xB4] (s)i
    short(__cdecl* m_TUDPStream_GetLocalPort)(TUDPStream* pThis); // [GetLocalPort at 0x7928EB] [0xB8] ()s
    int(__cdecl* m_TUDPStream_GetLocalIP)(TUDPStream* pThis); // [GetLocalIP at 0x792908] [0xBC] ()i
    int(__cdecl* m_TUDPStream_SetRemotePort)(TUDPStream* pThis, short a1); // [SetRemotePort at 0x792917] [0xC0] (s)i
    short(__cdecl* m_TUDPStream_GetRemotePort)(TUDPStream* pThis); // [GetRemotePort at 0x79293F] [0xC4] ()s
    int(__cdecl* m_TUDPStream_SetRemoteIP)(TUDPStream* pThis, int a1); // [SetRemoteIP at 0x79295C] [0xC8] (i)i
    int(__cdecl* m_TUDPStream_GetRemoteIP)(TUDPStream* pThis); // [GetRemoteIP at 0x792973] [0xCC] ()i
    int(__cdecl* m_TUDPStream_SetBroadcast)(TUDPStream* pThis, int a1); // [SetBroadcast at 0x792982] [0xD0] (i)i
    int(__cdecl* m_TUDPStream_GetBroadcast)(TUDPStream* pThis); // [GetBroadcast at 0x7929DA] [0xD4] ()i
    short(__cdecl* m_TUDPStream_GetMsgPort)(TUDPStream* pThis); // [GetMsgPort at 0x792A34] [0xD8] ()s
    int(__cdecl* m_TUDPStream_GetMsgIP)(TUDPStream* pThis); // [GetMsgIP at 0x792A51] [0xDC] ()i
    int(__cdecl* m_TUDPStream_SetTimeouts)(TUDPStream* pThis, int a1, int a2); // [SetTimeouts at 0x792A60] [0xE0] (i,i)i
    int(__cdecl* m_TUDPStream_GetRecvTimeout)(TUDPStream* pThis); // [GetRecvTimeout at 0x792A7D] [0xE4] ()i
    int(__cdecl* m_TUDPStream_GetSendTimeout)(TUDPStream* pThis); // [GetSendTimeout at 0x792A8C] [0xE8] ()i
};


// Super: 0x8E36F4
// 8 members
struct TUDPStream {
    TUDPStreamDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_LocalIP; // 0x1C <type_i>
    short m_LocalPort; // 0x20 <type_s>
    short m_RemotePort; // 0x22 <type_s>
    int m_RemoteIP; // 0x24 <type_i>
    int m_MessageIP; // 0x28 <type_i>
    short m_MessagePort; // 0x2C <type_s>
    int m_RecvTimeout; // 0x30 <type_i>
    int m_SendTimeout; // 0x34 <type_i>
};


