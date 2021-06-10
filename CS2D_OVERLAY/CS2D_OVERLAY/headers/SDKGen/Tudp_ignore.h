#pragma once

#include "defines.h"

// 2 methods, 4 functions
struct Tudp_ignoreDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_Tudp_ignore_New)(Tudp_ignore* pThis); // [New at 0x790A95] [0x10] ()i
    int(__cdecl* m_Tudp_ignore_Delete)(Tudp_ignore* pThis); // [Delete at 0x790ACB] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_add)(int a1, short a2, int a3); // [add at 0x790AD9] [0x30] (i,s,i)i
    int(__cdecl* fn_isIgnored)(int a1, short a2); // [isIgnored at 0x790C0E] [0x34] (i,s)i
    int(__cdecl* fn_check)(int a1, short a2); // [check at 0x790CD3] [0x38] (i,s)i
    int(__cdecl* fn_update)(); // [update at 0x790D04] [0x3C] ()i
};


// 3 members
struct Tudp_ignore {
    Tudp_ignoreDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_ip; // 0x8 <type_i>
    short m_port; // 0xC <type_s>
    int m_timeout; // 0x10 <type_i>
};


