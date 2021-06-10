#pragma once

#include "defines.h"

// 8 methods, 3 functions
struct GetUserDataProcessDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 44(0x2C)
    int(__cdecl* m_GetUserDataProcess_New)(GetUserDataProcess* pThis); // [New at 0x788F52] [0x10] ()i
    int(__cdecl* m_GetUserDataProcess_Delete)(GetUserDataProcess* pThis); // [Delete at 0x788FC7] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Create)(tpl* a1, int a2, BBString* a3); // [Create at 0x78902F] [0x30] (:tpl,i,$)i
    int(__cdecl* fn_GetCount)(); // [GetCount at 0x7890D4] [0x34] ()i
    int(__cdecl* m_GetUserDataProcess_Update)(GetUserDataProcess* pThis); // [Update at 0x7890EB] [0x38] ()i
    int(__cdecl* m_GetUserDataProcess_UpdateSteam)(GetUserDataProcess* pThis); // [UpdateSteam at 0x789206] [0x3C] ()i
    int(__cdecl* m_GetUserDataProcess_UpdateUSGN)(GetUserDataProcess* pThis); // [UpdateUSGN at 0x7893CE] [0x40] ()i
    int(__cdecl* m_GetUserDataProcess_UpdateSteam_Country)(GetUserDataProcess* pThis); // [UpdateSteam_Country at 0x7895EE] [0x44] ()i
    int(__cdecl* m_GetUserDataProcess_UpdateUSGN_Country)(GetUserDataProcess* pThis); // [UpdateUSGN_Country at 0x7898EB] [0x48] ()i
    int(__cdecl* m_GetUserDataProcess_SaveSteamCache)(GetUserDataProcess* pThis, BBString* a1); // [SaveSteamCache at 0x789A94] [0x4C] ($)i
    int(__cdecl* fn_UpdateAll)(); // [UpdateAll at 0x789AE5] [0x50] ()i
};


// 8 members
struct GetUserDataProcess {
    GetUserDataProcessDecl* decl; // 0x0
    int    refs;  // 0x4
    tpl* m_p; // 0x8 <type_:tpl>
    int m_stage; // 0xC <type_i>
    TSmartSocket* m_Socket; // 0x10 <type_:TSmartSocket>
    TStream* m_file; // 0x14 <type_:TStream>
    BBString* m_Result; // 0x18 <type_$>
    BBString* m_Data; // 0x1C <type_$>
    long long m_UserID; // 0x20 <type_l>
    int m_userType; // 0x28 <type_i>
};


