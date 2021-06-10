#pragma once

#include "defines.h"

// 2 methods, 2 functions
struct TConfigHackerDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TConfigHacker_New)(TConfigHacker* pThis); // [New at 0x5BF509] [0x10] ()i
    int(__cdecl* m_TConfigHacker_Delete)(TConfigHacker* pThis); // [Delete at 0x5BF52B] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_changeValues)(BBString* a1, void* a2, void* a3); // [changeValues at 0x5BF539] [0x30] ($,[]$,[]$)i
    TList*(__cdecl* fn_readConfig)(BBString* a1); // [readConfig at 0x5BF6C9] [0x34] ($):TList
};


// 0 members
struct TConfigHacker {
    TConfigHackerDecl* decl; // 0x0
    int    refs;  // 0x4
};


