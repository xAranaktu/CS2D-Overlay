#pragma once

#include "defines.h"

// 2 methods, 3 functions
struct Tstats_generalDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 33(0x21)
    int(__cdecl* m_Tstats_general_New)(Tstats_general* pThis); // [New at 0x688F7C] [0x10] ()i
    int(__cdecl* m_Tstats_general_Delete)(Tstats_general* pThis); // [Delete at 0x688FD0] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    Tstats_general*(__cdecl* fn_getstats)(); // [getstats at 0x688FDE] [0x30] ():Tstats_general
    int(__cdecl* fn_savestats)(); // [savestats at 0x689158] [0x34] ()i
    int(__cdecl* fn_loadstats)(); // [loadstats at 0x6892BE] [0x38] ()i
};


// 7 members
struct Tstats_general {
    Tstats_generalDecl* decl; // 0x0
    int    refs;  // 0x4
    char m_day; // 0x8 <type_b>
    char m_month; // 0x9 <type_b>
    short m_year; // 0xA <type_s>
    char m_hour; // 0xC <type_b>
    long long m_up; // 0x10 <type_l>
    long long m_down; // 0x18 <type_l>
    char m_players; // 0x20 <type_b>
};


