#pragma once

#include "defines.h"

// 2 methods, 8 functions
struct TNetworkDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TNetwork_New)(TNetwork* pThis); // [New at 0x791D45] [0x10] ()i
    int(__cdecl* m_TNetwork_Delete)(TNetwork* pThis); // [Delete at 0x791D67] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_GetHostIP)(BBString* a1); // [GetHostIP at 0x791D75] [0x30] ($)i
    void*(__cdecl* fn_GetHostIPs)(BBString* a1); // [GetHostIPs at 0x791E19] [0x34] ($)[]i
    BBString*(__cdecl* fn_GetHostName)(int a1); // [GetHostName at 0x791EF8] [0x38] (i)$
    BBString*(__cdecl* fn_StringIP)(int a1); // [StringIP at 0x791F3F] [0x3C] (i)$
    BBString*(__cdecl* fn_StringMAC)(void* a1); // [StringMAC at 0x791F69] [0x40] ([]b)$
    int(__cdecl* fn_IntIP)(BBString* a1); // [IntIP at 0x792086] [0x44] ($)i
    int(__cdecl* fn_Ping)(int a1, void* a2, int a3, int a4, int a5); // [Ping at 0x7920BD] [0x48] (i,*b,i,i,i)i
    int(__cdecl* fn_GetAdapterInfo)(void* a1); // [GetAdapterInfo at 0x79237E] [0x4C] (*:TAdapterInfo)i
};


// 0 members
struct TNetwork {
    TNetworkDecl* decl; // 0x0
    int    refs;  // 0x4
};


