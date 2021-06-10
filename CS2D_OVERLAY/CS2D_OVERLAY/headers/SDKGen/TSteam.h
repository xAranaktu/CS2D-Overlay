#pragma once

#include "defines.h"

// 14 methods, 4 functions
struct TSteamDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_TSteam_New)(TSteam* pThis); // [New at 0x612B0D] [0x10] ()i
    int(__cdecl* m_TSteam_Delete)(TSteam* pThis); // [Delete at 0x612B49] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Init)(int a1); // [Init at 0x612B6B] [0x30] (i)i
    int(__cdecl* m_TSteam_Initialise)(TSteam* pThis, int a1); // [Initialise at 0x612B8B] [0x34] (i)i
    int(__cdecl* m_TSteam_Close)(TSteam* pThis); // [Close at 0x612BC9] [0x38] ()i
    int(__cdecl* m_TSteam_LogEvents)(TSteam* pThis, int a1); // [LogEvents at 0x612BDC] [0x3C] (i)i
    int(__cdecl* m_TSteam_Online)(TSteam* pThis); // [Online at 0x612BF8] [0x40] ()i
    int(__cdecl* m_TSteam_Offline)(TSteam* pThis); // [Offline at 0x612C16] [0x44] ()i
    int(__cdecl* m_TSteam_NotRunning)(TSteam* pThis); // [NotRunning at 0x612C34] [0x48] ()i
    BBString*(__cdecl* m_TSteam_GetAchievement)(TSteam* pThis, BBString* a1); // [GetAchievement at 0x612C52] [0x4C] ($)$
    BBString*(__cdecl* m_TSteam_SetAchievement)(TSteam* pThis, BBString* a1, int a2); // [SetAchievement at 0x612C8A] [0x50] ($,i)$
    int(__cdecl* m_TSteam_IsAchieved)(TSteam* pThis, BBString* a1); // [IsAchieved at 0x612CD4] [0x54] ($)i
    int(__cdecl* m_TSteam_Achieve)(TSteam* pThis, BBString* a1, int a2); // [Achieve at 0x612D1E] [0x58] ($,i)i
    BBString*(__cdecl* m_TSteam_ClearAchievement)(TSteam* pThis, BBString* a1, int a2); // [ClearAchievement at 0x612D79] [0x5C] ($,i)$
    int(__cdecl* m_TSteam_StoreStats)(TSteam* pThis); // [StoreStats at 0x612DC3] [0x60] ()i
    int(__cdecl* fn_Update)(); // [Update at 0x612DD6] [0x64] ()i
    int(__cdecl* fn_GetStat)(BBString* a1); // [GetStat at 0x612E10] [0x68] ($)i
    int(__cdecl* fn_SetStat)(BBString* a1, int a2); // [SetStat at 0x612E41] [0x6C] ($,i)i
};


// 2 members
struct TSteam {
    TSteamDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_state; // 0x8 <type_i>
    TList* m_eventlog; // 0xC <type_:TList>
};


