#pragma once

#include "defines.h"

// 2 methods, 3 functions
struct LeaderboardPlayerDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 60(0x3C)
    int(__cdecl* m_LeaderboardPlayer_New)(LeaderboardPlayer* pThis); // [New at 0x72ECA1] [0x10] ()i
    int(__cdecl* m_LeaderboardPlayer_Delete)(LeaderboardPlayer* pThis); // [Delete at 0x72ED1F] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Clear)(); // [Clear at 0x72ED54] [0x30] ()i
    int(__cdecl* fn_add)(int a1, BBString* a2, int a3, long long a4, int a5, int a6, int a7, int a8, int a9, int a10); // [add at 0x72ED9F] [0x34] (i,$,i,l,i,i,i,i,i,i)i
    LeaderboardPlayer*(__cdecl* fn_GetID)(int a1); // [GetID at 0x72EF0E] [0x38] (i):LeaderboardPlayer
};


// 11 members
struct LeaderboardPlayer {
    LeaderboardPlayerDecl* decl; // 0x0
    int    refs;  // 0x4
    tpl* m_pl; // 0x8 <type_:tpl>
    int m_id; // 0xC <type_i>
    BBString* m_name; // 0x10 <type_$>
    int m_mvp; // 0x14 <type_i>
    int m_frags; // 0x18 <type_i>
    int m_deaths; // 0x1C <type_i>
    int m_assists; // 0x20 <type_i>
    int m_score; // 0x24 <type_i>
    int m_timeplayed; // 0x28 <type_i>
    long long m_userID; // 0x30 <type_l>
    int m_userType; // 0x38 <type_i>
};


