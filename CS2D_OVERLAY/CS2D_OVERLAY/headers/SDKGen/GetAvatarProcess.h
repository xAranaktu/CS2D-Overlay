#pragma once

#include "defines.h"

// 7 methods, 7 functions
struct GetAvatarProcessDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 48(0x30)
    int(__cdecl* m_GetAvatarProcess_New)(GetAvatarProcess* pThis); // [New at 0x787BDC] [0x10] ()i
    int(__cdecl* m_GetAvatarProcess_Delete)(GetAvatarProcess* pThis); // [Delete at 0x787C5C] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Create)(tpl* a1); // [Create at 0x787CD5] [0x30] (:tpl)i
    int(__cdecl* fn_GetCount)(); // [GetCount at 0x787E78] [0x34] ()i
    int(__cdecl* m_GetAvatarProcess_Update)(GetAvatarProcess* pThis); // [Update at 0x787E8F] [0x38] ()i
    int(__cdecl* fn_debug_msg)(BBString* a1); // [debug_msg at 0x787F9C] [0x3C] ($)i
    int(__cdecl* m_GetAvatarProcess_UpdateSteam)(GetAvatarProcess* pThis); // [UpdateSteam at 0x787FBF] [0x40] ()i
    int(__cdecl* m_GetAvatarProcess_UpdateUSGN)(GetAvatarProcess* pThis); // [UpdateUSGN at 0x7886C5] [0x44] ()i
    int(__cdecl* m_GetAvatarProcess_SaveSteamCache)(GetAvatarProcess* pThis, BBString* a1); // [SaveSteamCache at 0x788C13] [0x48] ($)i
    int(__cdecl* m_GetAvatarProcess_SaveUSGNCache)(GetAvatarProcess* pThis, BBString* a1); // [SaveUSGNCache at 0x788C67] [0x4C] ($)i
    TImage*(__cdecl* fn_LoadCachedAvatarImage)(int a1, long long a2); // [LoadCachedAvatarImage at 0x788CB1] [0x50] (i,l):TImage
    int(__cdecl* fn_CreateAllFolders)(); // [CreateAllFolders at 0x788D9E] [0x54] ()i
    int(__cdecl* fn_CreateFolder)(BBString* a1); // [CreateFolder at 0x788E7B] [0x58] ($)i
    int(__cdecl* fn_UpdateAll)(); // [UpdateAll at 0x788EE5] [0x5C] ()i
};


// 9 members
struct GetAvatarProcess {
    GetAvatarProcessDecl* decl; // 0x0
    int    refs;  // 0x4
    tpl* m_p; // 0x8 <type_:tpl>
    int m_UserType; // 0xC <type_i>
    long long m_UserID; // 0x10 <type_l>
    int m_stage; // 0x18 <type_i>
    TSmartSocket* m_Socket; // 0x1C <type_:TSmartSocket>
    TStream* m_file; // 0x20 <type_:TStream>
    BBString* m_URL; // 0x24 <type_$>
    BBString* m_CacheURL; // 0x28 <type_$>
    BBString* m_cachePath; // 0x2C <type_$>
};


