#pragma once

#include "defines.h"

// 3 methods, 2 functions
struct LeaderboardEntryDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_LeaderboardEntry_New)(LeaderboardEntry* pThis); // [New at 0x6101BB] [0x10] ()i
    int(__cdecl* m_LeaderboardEntry_Delete)(LeaderboardEntry* pThis); // [Delete at 0x610202] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    LeaderboardEntry*(__cdecl* fn_Get)(int a1); // [Get at 0x610224] [0x30] (i):LeaderboardEntry
    int(__cdecl* fn_Set)(int a1, BBString* a2, int a3, int a4); // [Set at 0x6102D1] [0x34] (i,$,i,i)i
    int(__cdecl* m_LeaderboardEntry_Update)(LeaderboardEntry* pThis); // [Update at 0x61038B] [0x38] ()i
};


// 5 members
struct LeaderboardEntry {
    LeaderboardEntryDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_place; // 0x8 <type_i>
    BBString* m_name; // 0xC <type_$>
    float m_age; // 0x10 <type_f>
    int m_points; // 0x14 <type_i>
    int m_stage; // 0x18 <type_i>
};


