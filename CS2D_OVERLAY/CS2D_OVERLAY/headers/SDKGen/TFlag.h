#pragma once

#include "defines.h"

// 2 methods, 6 functions
struct TFlagDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TFlag_New)(TFlag* pThis); // [New at 0x6A1820] [0x10] ()i
    int(__cdecl* m_TFlag_Delete)(TFlag* pThis); // [Delete at 0x6A1842] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Insert)(BBString* a1, BBString* a2); // [Insert at 0x6A1850] [0x30] ($,$)i
    BBString*(__cdecl* fn_GetCountryByIso)(BBString* a1); // [GetCountryByIso at 0x6A1874] [0x34] ($)$
    int(__cdecl* fn_Init)(); // [Init at 0x6A18DD] [0x38] ()i
    int(__cdecl* fn_ImportFlags)(); // [ImportFlags at 0x6A2B20] [0x3C] ()i
    int(__cdecl* fn_GetFlagByIso)(BBString* a1); // [GetFlagByIso at 0x6A2BD4] [0x40] ($)i
    BBString*(__cdecl* fn_LanguageIsoToCountryIso)(BBString* a1); // [LanguageIsoToCountryIso at 0x6A2C1B] [0x44] ($)$
};


// 0 members
struct TFlag {
    TFlagDecl* decl; // 0x0
    int    refs;  // 0x4
};


