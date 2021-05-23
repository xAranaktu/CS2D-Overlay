#pragma once

#include "defines.h"

// 3 methods, 4 functions
struct TtimerDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_Ttimer_New)(Ttimer* pThis); // [New at 0x5BA813] [0x10] ()i
    int(__cdecl* m_Ttimer_Delete)(Ttimer* pThis); // [Delete at 0x5BA83C] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_freeall)(); // [freeall at 0x5BA84A] [0x30] ()i
    int(__cdecl* fn_free)(Ttimer* a1); // [free at 0x5BA8AE] [0x34] (:Ttimer)i
    Ttimer*(__cdecl* fn_set)(int a1); // [set at 0x5BA8CE] [0x38] (i):Ttimer
    int(__cdecl* fn_update)(); // [update at 0x5BA908] [0x3C] ()i
    int(__cdecl* m_Ttimer_reset)(Ttimer* pThis, int a1); // [reset at 0x5BA97A] [0x40] (i)i
};


// 1 members
struct Ttimer {
    TtimerDecl* decl; // 0x0
    unsigned int    kind;  // 0x4 DebugeclCodes (?)
    int m_time; // 0x8 <type_i>
};


