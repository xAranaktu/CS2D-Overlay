#pragma once

#include "defines.h"

// 2 methods, 2 functions
struct TSteamStatDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TSteamStat_New)(TSteamStat* pThis); // [New at 0x611BE8] [0x10] ()i
    int(__cdecl* m_TSteamStat_Delete)(TSteamStat* pThis); // [Delete at 0x611C0A] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Get)(BBString* a1); // [Get at 0x611C18] [0x30] ($)i
    int(__cdecl* fn_Increase)(BBString* a1, int a2); // [Increase at 0x611C57] [0x34] ($,i)i
};


// 0 members
struct TSteamStat {
    TSteamStatDecl* decl; // 0x0
    int    refs;  // 0x4
};


