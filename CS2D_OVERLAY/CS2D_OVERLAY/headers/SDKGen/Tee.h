#pragma once

#include "defines.h"

// 2 methods, 3 functions
struct TeeDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_Tee_New)(Tee* pThis); // [New at 0x64EB44] [0x10] ()i
    int(__cdecl* m_Tee_Delete)(Tee* pThis); // [Delete at 0x64EB7B] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_freeall)(); // [freeall at 0x64EB89] [0x30] ()i
    int(__cdecl* fn_triggerstart)(); // [triggerstart at 0x64EBA5] [0x34] ()i
    int(__cdecl* fn_run)(int a1, int a2, int a3, int a4, int a5, int a6, int a7); // [run at 0x64EC0A] [0x38] (i,i,i,i,i,i,i)i
};


// 3 members
struct Tee {
    TeeDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_x; // 0x8 <type_i>
    int m_y; // 0xC <type_i>
    int m_event; // 0x10 <type_i>
};


