#pragma once

#include "defines.h"

// 5 methods, 2 functions
struct TGetSteamUserNameDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_TGetSteamUserName_New)(TGetSteamUserName* pThis); // [New at 0x610A39] [0x10] ()i
    int(__cdecl* m_TGetSteamUserName_Delete)(TGetSteamUserName* pThis); // [Delete at 0x610A86] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Create)(long long a1); // [Create at 0x610ABB] [0x30] (l)i
    int(__cdecl* m_TGetSteamUserName_Update)(TGetSteamUserName* pThis); // [Update at 0x610B84] [0x34] ()i
    int(__cdecl* m_TGetSteamUserName_UpdateSteam)(TGetSteamUserName* pThis); // [UpdateSteam at 0x610C39] [0x38] ()i
    int(__cdecl* fn_UpdateAll)(); // [UpdateAll at 0x610D99] [0x3C] ()i
    int(__cdecl* m_TGetSteamUserName_ReadJson)(TGetSteamUserName* pThis, BBString* a1); // [ReadJson at 0x610DF6] [0x40] ($)i
};


// 4 members
struct TGetSteamUserName {
    TGetSteamUserNameDecl* decl; // 0x0
    int    refs;  // 0x4
    long long m_userID; // 0x8 <type_l>
    BBString* m_userName; // 0x10 <type_$>
    TSmartSocket* m_Socket; // 0x14 <type_:TSmartSocket>
    int m_stage; // 0x18 <type_i>
};


