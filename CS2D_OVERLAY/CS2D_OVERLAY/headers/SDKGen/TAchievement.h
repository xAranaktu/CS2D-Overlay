#pragma once

#include "defines.h"

// 2 methods, 14 functions
struct TAchievementDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TAchievement_New)(TAchievement* pThis); // [New at 0x611CEC] [0x10] ()i
    int(__cdecl* m_TAchievement_Delete)(TAchievement* pThis); // [Delete at 0x611D0E] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Init)(); // [Init at 0x611D1C] [0x30] ()i
    int(__cdecl* fn_Update)(); // [Update at 0x611D36] [0x34] ()i
    int(__cdecl* fn_RoundReset)(int a1); // [RoundReset at 0x611D8E] [0x38] (i)i
    int(__cdecl* fn_LoadCache)(); // [LoadCache at 0x611DF4] [0x3C] ()i
    int(__cdecl* fn_SaveCache)(); // [SaveCache at 0x611FE8] [0x40] ()i
    int(__cdecl* fn_PrepareFolders)(); // [PrepareFolders at 0x6121AF] [0x44] ()i
    int(__cdecl* fn_Increase)(int a1); // [Increase at 0x6122C2] [0x48] (i)i
    int(__cdecl* fn_IncreaseBy)(int a1, int a2); // [IncreaseBy at 0x612355] [0x4C] (i,i)i
    int(__cdecl* fn_Get)(int a1); // [Get at 0x6123EC] [0x50] (i)i
    int(__cdecl* fn_IncreaseWpn)(int a1); // [IncreaseWpn at 0x61245F] [0x54] (i)i
    int(__cdecl* fn_GetWpn)(int a1); // [GetWpn at 0x6124F5] [0x58] (i)i
    int(__cdecl* fn_Unlock)(BBString* a1); // [Unlock at 0x61256B] [0x5C] ($)i
    int(__cdecl* fn_IsAchieved)(BBString* a1); // [IsAchieved at 0x6125D8] [0x60] ($)i
    int(__cdecl* fn_IsMultiplayerGame)(int a1); // [IsMultiplayerGame at 0x61263E] [0x64] (i)i
};


// 0 members
struct TAchievement {
    TAchievementDecl* decl; // 0x0
    int    refs;  // 0x4
};


