#pragma once

#include "defines.h"

// 2 methods, 3 functions
struct ThookStackDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_ThookStack_New)(ThookStack* pThis); // [New at 0x76BAB8] [0x10] ()i
    int(__cdecl* m_ThookStack_Delete)(ThookStack* pThis); // [Delete at 0x76BAEC] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_push)(int a1); // [push at 0x76BB0E] [0x30] (i)i
    int(__cdecl* fn_pop)(); // [pop at 0x76BB97] [0x34] ()i
    int(__cdecl* fn_clear)(); // [clear at 0x76BBA5] [0x38] ()i
};


// 2 members
struct ThookStack {
    ThookStackDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_hook; // 0x8 <type_i>
    ThookStack* m_sub; // 0xC <type_:ThookStack>
};


