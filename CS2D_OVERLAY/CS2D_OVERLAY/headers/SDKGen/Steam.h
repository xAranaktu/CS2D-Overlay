#pragma once

#include "defines.h"

// 2 methods, 5 functions
struct SteamDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_Steam_New)(Steam* pThis); // [New at 0x61285C] [0x10] ()i
    int(__cdecl* m_Steam_Delete)(Steam* pThis); // [Delete at 0x61287E] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_IsSteamInstall)(); // [IsSteamInstall at 0x61288C] [0x30] ()i
    int(__cdecl* fn_Init)(); // [Init at 0x6128F1] [0x34] ()i
    int(__cdecl* fn_Update)(); // [Update at 0x612A55] [0x38] ()i
    int(__cdecl* fn_Close)(); // [Close at 0x612AAE] [0x3C] ()i
    int(__cdecl* fn_IsOnline)(); // [IsOnline at 0x612ADA] [0x40] ()i
};


// 0 members
struct Steam {
    SteamDecl* decl; // 0x0
    int    refs;  // 0x4
};


