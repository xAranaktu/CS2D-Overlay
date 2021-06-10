#pragma once

#include "defines.h"

// 2 methods, 4 functions
struct TconlogDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_Tconlog_New)(Tconlog* pThis); // [New at 0x623A28] [0x10] ()i
    int(__cdecl* m_Tconlog_Delete)(Tconlog* pThis); // [Delete at 0x623A58] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_add)(BBString* a1); // [add at 0x623A66] [0x30] ($)i
    int(__cdecl* fn_remove)(BBString* a1); // [remove at 0x623CA1] [0x34] ($)i
    int(__cdecl* fn_removeall)(); // [removeall at 0x623E38] [0x38] ()i
    int(__cdecl* fn_forward)(BBString* a1); // [forward at 0x623E61] [0x3C] ($)i
};


// 2 members
struct Tconlog {
    TconlogDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_ip; // 0x8 <type_i>
    int m_port; // 0xC <type_i>
};


