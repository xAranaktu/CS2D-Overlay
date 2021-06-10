#pragma once

#include "defines.h"

// 2 methods, 2 functions
struct TaliasDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_Talias_New)(Talias* pThis); // [New at 0x760892] [0x10] ()i
    int(__cdecl* m_Talias_Delete)(Talias* pThis); // [Delete at 0x7608CA] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Create)(BBString* a1, BBString* a2); // [Create at 0x7608FF] [0x30] ($,$)i
    int(__cdecl* fn_exec)(BBString* a1); // [exec at 0x760A43] [0x34] ($)i
};


// 2 members
struct Talias {
    TaliasDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_name; // 0x8 <type_$>
    BBString* m_script; // 0xC <type_$>
};


