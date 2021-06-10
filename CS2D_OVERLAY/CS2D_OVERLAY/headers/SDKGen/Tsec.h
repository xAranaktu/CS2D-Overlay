#pragma once

#include "defines.h"

// 3 methods, 2 functions
struct TsecDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 60(0x3C)
    int(__cdecl* m_Tsec_New)(Tsec* pThis); // [New at 0x5BFDA5] [0x10] ()i
    int(__cdecl* m_Tsec_Delete)(Tsec* pThis); // [Delete at 0x5BFE2A] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    Tsec*(__cdecl* fn_add)(int a1, BBString* a2); // [add at 0x5BFE5F] [0x30] (i,$):Tsec
    int(__cdecl* m_Tsec_encode)(Tsec* pThis, BBString* a1); // [encode at 0x5BFEA3] [0x34] ($)i
    int(__cdecl* fn_check)(); // [check at 0x5C0070] [0x38] ()i
};


// 13 members
struct Tsec {
    TsecDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_typ; // 0x8 <type_i>
    int m_v_int; // 0xC <type_i>
    BBString* m_v_string; // 0x10 <type_$>
    int m_ec_int1; // 0x14 <type_i>
    int m_ec_int2; // 0x18 <type_i>
    int m_ec_int3; // 0x1C <type_i>
    int m_ec_int4; // 0x20 <type_i>
    int m_ec_int5; // 0x24 <type_i>
    int m_ec_int6; // 0x28 <type_i>
    int m_ec_int7; // 0x2C <type_i>
    int m_ec_int8; // 0x30 <type_i>
    BBString* m_ec_string; // 0x34 <type_$>
    int m_ec_ms; // 0x38 <type_i>
};


