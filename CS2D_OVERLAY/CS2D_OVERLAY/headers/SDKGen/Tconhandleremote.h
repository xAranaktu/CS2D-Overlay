#pragma once

#include "defines.h"

// 2 methods, 1 functions
struct TconhandleremoteDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_Tconhandleremote_New)(Tconhandleremote* pThis); // [New at 0x6237B3] [0x10] ()i
    int(__cdecl* m_Tconhandleremote_Delete)(Tconhandleremote* pThis); // [Delete at 0x6237D5] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_handle)(BBString* a1); // [handle at 0x6237E3] [0x30] ($)i
};


// 0 members
struct Tconhandleremote {
    TconhandleremoteDecl* decl; // 0x0
    int    refs;  // 0x4
};


