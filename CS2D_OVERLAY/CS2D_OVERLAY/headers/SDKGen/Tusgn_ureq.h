#pragma once

#include "defines.h"

// 2 methods, 3 functions
struct Tusgn_ureqDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 88(0x58)
    int(__cdecl* m_Tusgn_ureq_New)(Tusgn_ureq* pThis); // [New at 0x77C195] [0x10] ()i
    int(__cdecl* m_Tusgn_ureq_Delete)(Tusgn_ureq* pThis); // [Delete at 0x77C25F] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_add)(int a1, int a2, int a3, BBString* a4, BBString* a5, int a6, int a7, int a8, long long a9, BBString* a10, int a11, BBString* a12, BBString* a13, BBString* a14, int a15, int a16, int a17, Tudp_con* a18); // [add at 0x77C2E9] [0x30] (i,i,i,$,$,i,i,i,l,$,i,$,$,$,i,i,i,:Tudp_con)i
    int(__cdecl* fn_update)(); // [update at 0x77C4B7] [0x34] ()i
    int(__cdecl* fn_getanswer)(int a1, int a2); // [getanswer at 0x77C63B] [0x38] (i,i)i
};


// 19 members
struct Tusgn_ureq {
    Tusgn_ureqDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_ip; // 0x8 <type_i>
    int m_port; // 0xC <type_i>
    int m_userid; // 0x10 <type_i>
    BBString* m_name; // 0x14 <type_$>
    BBString* m_spray; // 0x18 <type_$>
    int m_joinmode; // 0x1C <type_i>
    int m_screenResX; // 0x20 <type_i>
    int m_screenResY; // 0x24 <type_i>
    BBString* m_loc; // 0x28 <type_$>
    BBString* m_loc_iso; // 0x2C <type_$>
    long long m_steamid; // 0x30 <type_l>
    BBString* m_steamname; // 0x38 <type_$>
    int m_steamos; // 0x3C <type_i>
    BBString* m_usgnname; // 0x40 <type_$>
    int m_screen4by3; // 0x44 <type_i>
    int m_screenWin; // 0x48 <type_i>
    int m_microphoneSupport; // 0x4C <type_i>
    Tudp_con* m_con; // 0x50 <type_:Tudp_con>
    int m_attempts; // 0x54 <type_i>
};


