#pragma once

#include "defines.h"

// 2 methods, 1 functions
struct Tparse_cacheDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_Tparse_cache_New)(Tparse_cache* pThis); // [New at 0x76B292] [0x10] ()i
    int(__cdecl* m_Tparse_cache_Delete)(Tparse_cache* pThis); // [Delete at 0x76B2C6] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_countAndAdd)(BBString* a1); // [countAndAdd at 0x76B2E8] [0x30] ($)i
};


// 2 members
struct Tparse_cache {
    Tparse_cacheDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_cmd; // 0x8 <type_$>
    int m_count; // 0xC <type_i>
};


