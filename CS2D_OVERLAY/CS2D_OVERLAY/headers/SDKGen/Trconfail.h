#pragma once

#include "defines.h"

// 2 methods, 3 functions
struct TrconfailDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_Trconfail_New)(Trconfail* pThis); // [New at 0x76AF58] [0x10] ()i
    int(__cdecl* m_Trconfail_Delete)(Trconfail* pThis); // [Delete at 0x76AF88] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_addfail)(int a1); // [addfail at 0x76AF96] [0x30] (i)i
    int(__cdecl* fn_checkfail)(int a1); // [checkfail at 0x76B0DD] [0x34] (i)i
    int(__cdecl* fn_freefails)(int a1); // [freefails at 0x76B217] [0x38] (i)i
};


// 2 members
struct Trconfail {
    TrconfailDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_ip; // 0x8 <type_i>
    int m_attempts; // 0xC <type_i>
};


