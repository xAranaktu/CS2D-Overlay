#pragma once

#include "defines.h"

// 5 methods, 7 functions
struct Tstats_userDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 56(0x38)
    int(__cdecl* m_Tstats_user_New)(Tstats_user* pThis); // [New at 0x688364] [0x10] ()i
    int(__cdecl* m_Tstats_user_Delete)(Tstats_user* pThis); // [Delete at 0x6883DC] [0x14] ()i
    void* nothing_5; // 0x18
    int(__cdecl* m_Tstats_user_Compare)(Tstats_user* pThis, Object* a1); // [Compare at 0x6885D2] [0x1C] (:Object)i
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_GenerateTop)(); // [GenerateTop at 0x6883FE] [0x30] ()i
    int(__cdecl* m_Tstats_user_update)(Tstats_user* pThis); // [update at 0x68853A] [0x34] ()i
    int(__cdecl* m_Tstats_user_GetSortValue)(Tstats_user* pThis); // [GetSortValue at 0x688587] [0x38] ()i
    Tpl*(__cdecl* fn_getuserUSGN)(int a1); // [getuserUSGN at 0x688605] [0x3C] (i):Tpl
    Tpl*(__cdecl* fn_getuserSteam)(long long a1); // [getuserSteam at 0x688693] [0x40] (l):Tpl
    Tstats_user*(__cdecl* fn_getstats)(int a1, long long a2, BBString* a3); // [getstats at 0x68871E] [0x44] (i,l,$):Tstats_user
    Tstats_user*(__cdecl* fn_getstatsornull)(int a1, long long a2); // [getstatsornull at 0x688801] [0x48] (i,l):Tstats_user
    int(__cdecl* fn_saveuser)(); // [saveuser at 0x68889D] [0x4C] ()i
    int(__cdecl* fn_loaduser)(); // [loaduser at 0x688A14] [0x50] ()i
};


// 17 members
struct Tstats_user {
    Tstats_userDecl* decl; // 0x0
    unsigned int    kind;  // 0x4 DebugeclCodes (?)
    BBString* m_name; // 0x8 <type_$>
    int m_userType; // 0xC <type_i>
    long long m_userID; // 0x10 <type_l>
    int m_score; // 0x18 <type_i>
    int m_frags; // 0x1C <type_i>
    int m_deaths; // 0x20 <type_i>
    int m_assists; // 0x24 <type_i>
    int m_mvps; // 0x28 <type_i>
    int m_secs; // 0x2C <type_i>
    float m_kdratio; // 0x30 <type_f>
    int m_sortv; // 0x34 <type_i>
    int m_user_usgn; // 0x86D814 <type_i>
    int m_user_steam; // 0x86EF7C <type_i>
    BBString* m_CuserStats_fileName; // 0x88D728 <type_$>
    BBString* m_versionAlpha; // 0x88D760 <type_$>
    BBString* m_versionBeta; // 0x88D798 <type_$>
    BBString* m_versionSteam; // 0x88D7D0 <type_$>
};


