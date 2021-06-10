#pragma once

#include "defines.h"

// 2 methods, 3 functions
struct TfirstStartDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TfirstStart_New)(TfirstStart* pThis); // [New at 0x616687] [0x10] ()i
    int(__cdecl* m_TfirstStart_Delete)(TfirstStart* pThis); // [Delete at 0x6166A9] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_check)(); // [check at 0x6166B7] [0x30] ()i
    int(__cdecl* fn_showHelp)(); // [showHelp at 0x616752] [0x34] ()i
    int(__cdecl* fn_useSteamName)(BBString* a1); // [useSteamName at 0x6167CC] [0x38] ($)i
};


// 0 members
struct TfirstStart {
    TfirstStartDecl* decl; // 0x0
    int    refs;  // 0x4
};


