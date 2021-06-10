#pragma once

#include "defines.h"

// 3 methods, 10 functions
struct TmoDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 32(0x20)
    int(__cdecl* m_Tmo_New)(Tmo* pThis); // [New at 0x61F4C9] [0x10] ()i
    int(__cdecl* m_Tmo_Delete)(Tmo* pThis); // [Delete at 0x61F529] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_add)(int a1, BBString* a2, BBString* a3, BBString* a4, BBString* a5); // [add at 0x61F591] [0x30] (i,$,$,$,$)i
    int(__cdecl* fn_updatelist_options)(); // [updatelist_options at 0x61F64E] [0x34] ()i
    int(__cdecl* fn_updatelist_server)(); // [updatelist_server at 0x61FB32] [0x38] ()i
    int(__cdecl* fn_setvalue_options)(int a1); // [setvalue_options at 0x620016] [0x3C] (i)i
    int(__cdecl* fn_setvalue_server)(int a1); // [setvalue_server at 0x62052F] [0x40] (i)i
    int(__cdecl* fn_save_options)(); // [save_options at 0x620A48] [0x44] ()i
    int(__cdecl* fn_save_server)(TStream* a1); // [save_server at 0x620B19] [0x48] (:TStream)i
    int(__cdecl* fn_save_raw)(TStream* a1, TList* a2); // [save_raw at 0x620B3A] [0x4C] (:TStream,:TList)i
    int(__cdecl* m_Tmo_getcvalue)(Tmo* pThis); // [getcvalue at 0x620ECC] [0x50] ()i
    BBString*(__cdecl* fn_getcmd_options)(); // [getcmd_options at 0x620F05] [0x54] ()$
    BBString*(__cdecl* fn_getcmd_server)(); // [getcmd_server at 0x620F33] [0x58] ()$
};


// 6 members
struct Tmo {
    TmoDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_cat; // 0x8 <type_i>
    BBString* m_cmd; // 0xC <type_$>
    BBString* m_def; // 0x10 <type_$>
    BBString* m_values; // 0x14 <type_$>
    BBString* m_info; // 0x18 <type_$>
    BBString* m_cv; // 0x1C <type_$>
};


