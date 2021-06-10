#pragma once

#include "defines.h"

// 2 methods, 1 functions
struct Tau_fileDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_Tau_file_New)(Tau_file* pThis); // [New at 0x786858] [0x10] ()i
    int(__cdecl* m_Tau_file_Delete)(Tau_file* pThis); // [Delete at 0x786890] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_add)(BBString* a1); // [add at 0x7868C5] [0x30] ($)i
};


// 2 members
struct Tau_file {
    Tau_fileDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_path; // 0x8 <type_$>
    TBank* m_bank; // 0xC <type_:TBank>
};


