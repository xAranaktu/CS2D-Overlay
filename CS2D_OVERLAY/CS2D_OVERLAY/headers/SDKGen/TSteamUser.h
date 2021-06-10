#pragma once

#include "defines.h"

// 2 methods, 5 functions
struct TSteamUserDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 40(0x28)
    int(__cdecl* m_TSteamUser_New)(TSteamUser* pThis); // [New at 0x6107B7] [0x10] ()i
    int(__cdecl* m_TSteamUser_Delete)(TSteamUser* pThis); // [Delete at 0x610816] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Add)(BBString* a1, long long a2); // [Add at 0x61085C] [0x30] ($,l)i
    TSteamUser*(__cdecl* fn_GetByID)(long long a1); // [GetByID at 0x6108C1] [0x34] (l):TSteamUser
    TSteamUser*(__cdecl* fn_GetRecentPlayedUser)(); // [GetRecentPlayedUser at 0x61094C] [0x38] ():TSteamUser
    int(__cdecl* fn_SetDefaultUser)(); // [SetDefaultUser at 0x6109C0] [0x3C] ()i
    TSteamUser*(__cdecl* fn_GetDefaultUser)(); // [GetDefaultUser at 0x6109F4] [0x40] ():TSteamUser
};


// 6 members
struct TSteamUser {
    TSteamUserDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_name; // 0x8 <type_$>
    long long m_id; // 0x10 <type_l>
    int m_timestamp; // 0x18 <type_i>
    BBString* m_personaname; // 0x1C <type_$>
    BBString* m_AccountName; // 0x20 <type_$>
    int m_mostrecent; // 0x24 <type_i>
};


