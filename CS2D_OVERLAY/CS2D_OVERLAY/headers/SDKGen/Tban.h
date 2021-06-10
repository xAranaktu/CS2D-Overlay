#pragma once

#include "defines.h"

// 2 methods, 10 functions
struct TbanDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_Tban_New)(Tban* pThis); // [New at 0x6DABE6] [0x10] ()i
    int(__cdecl* m_Tban_Delete)(Tban* pThis); // [Delete at 0x6DAC33] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_freeid)(int a1); // [freeid at 0x6DAC68] [0x30] (i)i
    int(__cdecl* fn_freeall)(); // [freeall at 0x6DAD09] [0x34] ()i
    int(__cdecl* fn_unban)(BBString* a1); // [unban at 0x6DAD46] [0x38] ($)i
    int(__cdecl* fn_tempban)(int a1, int a2); // [tempban at 0x6DADF5] [0x3C] (i,i)i
    int(__cdecl* fn_add)(int a1, BBString* a2, int a3, BBString* a4); // [add at 0x6DAE4E] [0x40] (i,$,i,$)i
    int(__cdecl* fn_banned)(BBString* a1, BBString* a2, int a3, long long a4); // [banned at 0x6DB578] [0x44] ($,$,i,l)i
    int(__cdecl* fn_saveall)(); // [saveall at 0x6DB8A3] [0x48] ()i
    int(__cdecl* fn_loadall)(); // [loadall at 0x6DBE42] [0x4C] ()i
    int(__cdecl* fn_updatetemp)(); // [updatetemp at 0x6DC0AC] [0x50] ()i
    int(__cdecl* fn_reload)(); // [reload at 0x6DC201] [0x54] ()i
};


// 5 members
struct Tban {
    TbanDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_typ; // 0x8 <type_i>
    BBString* m_data; // 0xC <type_$>
    int m_temp; // 0x10 <type_i>
    int m_bantime; // 0x14 <type_i>
    BBString* m_reason; // 0x18 <type_$>
};


