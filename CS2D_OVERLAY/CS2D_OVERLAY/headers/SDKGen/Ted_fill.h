#pragma once

#include "defines.h"

// 2 methods, 2 functions
struct Ted_fillDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_Ted_fill_New)(Ted_fill* pThis); // [New at 0x6F166C] [0x10] ()i
    int(__cdecl* m_Ted_fill_Delete)(Ted_fill* pThis); // [Delete at 0x6F169C] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_add)(int a1, int a2, int a3, int a4); // [add at 0x6F16AA] [0x30] (i,i,i,i)i
    int(__cdecl* fn_clear)(); // [clear at 0x6F174B] [0x34] ()i
};


// 2 members
struct Ted_fill {
    Ted_fillDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_x; // 0x8 <type_i>
    int m_y; // 0xC <type_i>
};


