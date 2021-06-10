#pragma once

#include "defines.h"

// 2 methods, 4 functions
struct TluatimerDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 32(0x20)
    int(__cdecl* m_Tluatimer_New)(Tluatimer* pThis); // [New at 0x7759B6] [0x10] ()i
    int(__cdecl* m_Tluatimer_Delete)(Tluatimer* pThis); // [Delete at 0x775A0E] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_freeall)(); // [freeall at 0x775A54] [0x30] ()i
    int(__cdecl* fn_addtimer)(int a1, BBString* a2, BBString* a3, int a4); // [addtimer at 0x775A7A] [0x34] (i,$,$,i)i
    int(__cdecl* fn_freetimer)(BBString* a1, BBString* a2); // [freetimer at 0x775B32] [0x38] ($,$)i
    int(__cdecl* fn_update)(); // [update at 0x775BFE] [0x3C] ()i
};


// 6 members
struct Tluatimer {
    TluatimerDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_start; // 0x8 <type_i>
    int m_time; // 0xC <type_i>
    int m_c; // 0x10 <type_i>
    BBString* m_func; // 0x14 <type_$>
    void* m_funct; // 0x18 <type_[]$>
    BBString* m_param; // 0x1C <type_$>
};


