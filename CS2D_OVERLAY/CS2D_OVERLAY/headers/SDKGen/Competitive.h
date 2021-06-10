#pragma once

#include "defines.h"

// 2 methods, 6 functions
struct CompetitiveDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_Competitive_New)(Competitive* pThis); // [New at 0x60FD80] [0x10] ()i
    int(__cdecl* m_Competitive_Delete)(Competitive* pThis); // [Delete at 0x60FDA2] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Received)(); // [Received at 0x60FDB0] [0x30] ()i
    int(__cdecl* fn_SaveLobbyStats)(); // [SaveLobbyStats at 0x60FDC8] [0x34] ()i
    int(__cdecl* fn_LoadLobbyStats)(); // [LoadLobbyStats at 0x60FF00] [0x38] ()i
    int(__cdecl* fn_SetLogin)(); // [SetLogin at 0x610043] [0x3C] ()i
    int(__cdecl* fn_LoginUser)(int a1, long long a2, BBString* a3); // [LoginUser at 0x61009D] [0x40] (i,l,$)i
    int(__cdecl* fn_Update)(); // [Update at 0x6100FE] [0x44] ()i
};


// 0 members
struct Competitive {
    CompetitiveDecl* decl; // 0x0
    int    refs;  // 0x4
};


