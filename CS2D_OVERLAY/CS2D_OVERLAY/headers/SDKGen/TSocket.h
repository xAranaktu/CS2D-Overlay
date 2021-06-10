#pragma once

#include "defines.h"

// 19 methods, 3 functions
struct TSocketDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 32(0x20)
    int(__cdecl* m_TSocket_New)(TSocket* pThis); // [New at 0x7990EC] [0x10] ()i
    int(__cdecl* m_TSocket_Delete)(TSocket* pThis); // [Delete at 0x799138] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TSocket_Send)(TSocket* pThis, void* a1, int a2, int a3); // [Send at 0x799146] [0x30] (*b,i,i)i
    int(__cdecl* m_TSocket_Recv)(TSocket* pThis, void* a1, int a2, int a3); // [Recv at 0x799177] [0x34] (*b,i,i)i
    int(__cdecl* m_TSocket_Close)(TSocket* pThis); // [Close at 0x7991A8] [0x38] ()i
    int(__cdecl* m_TSocket_Connected)(TSocket* pThis); // [Connected at 0x7991FC] [0x3C] ()i
    int(__cdecl* m_TSocket_Bind)(TSocket* pThis, int a1); // [Bind at 0x799269] [0x40] (i)i
    int(__cdecl* m_TSocket_Connect)(TSocket* pThis, int a1, int a2); // [Connect at 0x7992A2] [0x44] (i,i)i
    int(__cdecl* m_TSocket_Listen)(TSocket* pThis, int a1); // [Listen at 0x7992FE] [0x48] (i)i
    TSocket*(__cdecl* m_TSocket_Accept)(TSocket* pThis, int a1); // [Accept at 0x799322] [0x4C] (i):TSocket
    int(__cdecl* m_TSocket_ReadAvail)(TSocket* pThis); // [ReadAvail at 0x799385] [0x50] ()i
    int(__cdecl* m_TSocket_SetTCPNoDelay)(TSocket* pThis, int a1); // [SetTCPNoDelay at 0x7993C1] [0x54] (i)i
    int(__cdecl* m_TSocket_Socket)(TSocket* pThis); // [Socket at 0x7993F0] [0x58] ()i
    int(__cdecl* m_TSocket_LocalIp)(TSocket* pThis); // [LocalIp at 0x7993FF] [0x5C] ()i
    int(__cdecl* m_TSocket_LocalPort)(TSocket* pThis); // [LocalPort at 0x79940E] [0x60] ()i
    int(__cdecl* m_TSocket_RemoteIp)(TSocket* pThis); // [RemoteIp at 0x79941D] [0x64] ()i
    int(__cdecl* m_TSocket_RemotePort)(TSocket* pThis); // [RemotePort at 0x79942C] [0x68] ()i
    int(__cdecl* m_TSocket_UpdateLocalName)(TSocket* pThis); // [UpdateLocalName at 0x79943B] [0x6C] ()i
    int(__cdecl* m_TSocket_UpdateRemoteName)(TSocket* pThis); // [UpdateRemoteName at 0x7994E3] [0x70] ()i
    TSocket*(__cdecl* fn_Create)(int a1, int a2); // [Create at 0x799592] [0x74] (i,i):TSocket
    TSocket*(__cdecl* fn_CreateUDP)(); // [CreateUDP at 0x7995EF] [0x78] ():TSocket
    TSocket*(__cdecl* fn_CreateTCP)(); // [CreateTCP at 0x79961E] [0x7C] ():TSocket
};


// 6 members
struct TSocket {
    TSocketDecl* decl; // 0x0
    int    refs;  // 0x4
    int m__socket; // 0x8 <type_i>
    int m__autoClose; // 0xC <type_i>
    int m__localIp; // 0x10 <type_i>
    int m__localPort; // 0x14 <type_i>
    int m__remoteIp; // 0x18 <type_i>
    int m__remotePort; // 0x1C <type_i>
};


