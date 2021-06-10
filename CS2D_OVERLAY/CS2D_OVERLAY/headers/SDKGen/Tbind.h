#pragma once

#include "defines.h"

// 2 methods, 8 functions
struct TbindDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_Tbind_New)(Tbind* pThis); // [New at 0x760B3C] [0x10] ()i
    int(__cdecl* m_Tbind_Delete)(Tbind* pThis); // [Delete at 0x760B70] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Create)(BBString* a1, BBString* a2); // [Create at 0x760B92] [0x30] ($,$)i
    int(__cdecl* fn_unbindall)(); // [unbindall at 0x760CDE] [0x34] ()i
    int(__cdecl* fn_check)(int a1); // [check at 0x760D42] [0x38] (i)i
    int(__cdecl* fn_cleardowns)(); // [cleardowns at 0x76131D] [0x3C] ()i
    BBString*(__cdecl* fn_find)(BBString* a1); // [find at 0x76138F] [0x40] ($)$
    int(__cdecl* fn_find_key)(BBString* a1); // [find_key at 0x76141B] [0x44] ($)i
    int(__cdecl* fn_CheckInput)(int a1); // [CheckInput at 0x761492] [0x48] (i)i
    int(__cdecl* fn_freecmd)(BBString* a1); // [freecmd at 0x761757] [0x4C] ($)i
};


// 2 members
struct Tbind {
    TbindDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_key; // 0x8 <type_i>
    BBString* m_script; // 0xC <type_$>
};


