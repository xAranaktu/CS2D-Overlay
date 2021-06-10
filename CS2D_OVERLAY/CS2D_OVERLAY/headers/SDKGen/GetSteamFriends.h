#pragma once

#include "defines.h"

// 4 methods, 2 functions
struct GetSteamFriendsDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_GetSteamFriends_New)(GetSteamFriends* pThis); // [New at 0x61187D] [0x10] ()i
    int(__cdecl* m_GetSteamFriends_Delete)(GetSteamFriends* pThis); // [Delete at 0x6118CA] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Create)(long long a1); // [Create at 0x6118FF] [0x30] (l)i
    int(__cdecl* m_GetSteamFriends_Update)(GetSteamFriends* pThis); // [Update at 0x61194C] [0x34] ()i
    int(__cdecl* m_GetSteamFriends_UpdateSteam)(GetSteamFriends* pThis); // [UpdateSteam at 0x6119AB] [0x38] ()i
    int(__cdecl* fn_UpdateAll)(); // [UpdateAll at 0x611B8B] [0x3C] ()i
};


// 4 members
struct GetSteamFriends {
    GetSteamFriendsDecl* decl; // 0x0
    int    refs;  // 0x4
    long long m_userID; // 0x8 <type_l>
    BBString* m_userName; // 0x10 <type_$>
    int m_stage; // 0x14 <type_i>
    TSmartSocket* m_Socket; // 0x18 <type_:TSmartSocket>
};


