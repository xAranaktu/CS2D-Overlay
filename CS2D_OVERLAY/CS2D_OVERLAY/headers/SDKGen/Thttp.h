#pragma once

#include "defines.h"

// 2 methods, 3 functions
struct ThttpDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_Thttp_New)(Thttp* pThis); // [New at 0x785140] [0x10] ()i
    int(__cdecl* m_Thttp_Delete)(Thttp* pThis); // [Delete at 0x785178] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_reset)(); // [reset at 0x7851AD] [0x30] ()i
    int(__cdecl* fn_addjob)(BBString* a1, BBString* a2); // [addjob at 0x78525D] [0x34] ($,$)i
    int(__cdecl* fn_get)(int a1); // [get at 0x785354] [0x38] (i)i
};


// 2 members
struct Thttp {
    ThttpDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_file_url; // 0x8 <type_$>
    BBString* m_file_dest; // 0xC <type_$>
};


