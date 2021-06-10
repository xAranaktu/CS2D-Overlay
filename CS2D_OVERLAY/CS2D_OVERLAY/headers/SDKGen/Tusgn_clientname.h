#pragma once

#include "defines.h"

// 2 methods, 3 functions
struct Tusgn_clientnameDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_Tusgn_clientname_New)(Tusgn_clientname* pThis); // [New at 0x77CFFB] [0x10] ()i
    int(__cdecl* m_Tusgn_clientname_Delete)(Tusgn_clientname* pThis); // [Delete at 0x77D02F] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_add)(int a1, BBString* a2, int a3); // [add at 0x77D051] [0x30] (i,$,i)i
    BBString*(__cdecl* fn_getname)(int a1); // [getname at 0x77D1D0] [0x34] (i)$
    int(__cdecl* fn_readnames)(); // [readnames at 0x77D239] [0x38] ()i
};


// 2 members
struct Tusgn_clientname {
    Tusgn_clientnameDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_id; // 0x8 <type_i>
    BBString* m_name; // 0xC <type_$>
};


