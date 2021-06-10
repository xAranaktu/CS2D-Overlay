#pragma once

#include "defines.h"

// 2 methods, 10 functions
struct TrestableDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_Trestable_New)(Trestable* pThis); // [New at 0x650B8B] [0x10] ()i
    int(__cdecl* m_Trestable_Delete)(Trestable* pThis); // [Delete at 0x650BAD] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_createServerTable)(); // [createServerTable at 0x650BBB] [0x30] ()i
    int(__cdecl* fn_createClientTable)(); // [createClientTable at 0x650C90] [0x34] ()i
    int(__cdecl* fn_getIndex)(BBString* a1); // [getIndex at 0x650D59] [0x38] ($)i
    BBString*(__cdecl* fn_getPath)(int a1); // [getPath at 0x650DA6] [0x3C] (i)$
    BBString*(__cdecl* fn_normalizePath)(BBString* a1); // [normalizePath at 0x650DE3] [0x40] ($)$
    int(__cdecl* fn_reset)(); // [reset at 0x650E02] [0x44] ()i
    BBString*(__cdecl* fn_shorten)(BBString* a1); // [shorten at 0x650E1E] [0x48] ($)$
    BBString*(__cdecl* fn_longversion)(BBString* a1); // [longversion at 0x650EF2] [0x4C] ($)$
    BBString*(__cdecl* fn_shortToString)(short a1); // [shortToString at 0x650F77] [0x50] (s)$
    short(__cdecl* fn_stringToShort)(BBString* a1); // [stringToShort at 0x650FE9] [0x54] ($)s
};


// 0 members
struct Trestable {
    TrestableDecl* decl; // 0x0
    int    refs;  // 0x4
};


