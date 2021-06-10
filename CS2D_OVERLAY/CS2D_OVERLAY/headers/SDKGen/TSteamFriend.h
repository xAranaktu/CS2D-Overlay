#pragma once

#include "defines.h"

// 4 methods, 2 functions
struct TSteamFriendDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 40(0x28)
    int(__cdecl* m_TSteamFriend_New)(TSteamFriend* pThis); // [New at 0x611434] [0x10] ()i
    int(__cdecl* m_TSteamFriend_Delete)(TSteamFriend* pThis); // [Delete at 0x61149A] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Create)(long long a1); // [Create at 0x6114E0] [0x30] (l)i
    int(__cdecl* m_TSteamFriend_Update)(TSteamFriend* pThis); // [Update at 0x61156A] [0x34] ()i
    int(__cdecl* m_TSteamFriend_UpdateSteam)(TSteamFriend* pThis); // [UpdateSteam at 0x6115C9] [0x38] ()i
    int(__cdecl* fn_UpdateAll)(); // [UpdateAll at 0x611820] [0x3C] ()i
};


// 7 members
struct TSteamFriend {
    TSteamFriendDecl* decl; // 0x0
    int    refs;  // 0x4
    long long m_userID; // 0x8 <type_l>
    BBString* m_userName; // 0x10 <type_$>
    int m_userPlaying; // 0x14 <type_i>
    int m_userOnline; // 0x18 <type_i>
    int m_stage; // 0x1C <type_i>
    TSmartSocket* m_Socket; // 0x20 <type_:TSmartSocket>
    TFriend* m_friend; // 0x24 <type_:TFriend>
};


