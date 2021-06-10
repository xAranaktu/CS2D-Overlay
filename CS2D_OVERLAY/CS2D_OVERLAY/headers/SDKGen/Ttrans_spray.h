#pragma once

#include "defines.h"

// 2 methods, 6 functions
struct Ttrans_sprayDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_Ttrans_spray_New)(Ttrans_spray* pThis); // [New at 0x78178A] [0x10] ()i
    int(__cdecl* m_Ttrans_spray_Delete)(Ttrans_spray* pThis); // [Delete at 0x7817BA] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_freeall)(); // [freeall at 0x7817C8] [0x30] ()i
    int(__cdecl* fn_add)(int a1, int a2); // [add at 0x78182C] [0x34] (i,i)i
    int(__cdecl* fn_sendalltoplayer)(int a1); // [sendalltoplayer at 0x7818D8] [0x38] (i)i
    int(__cdecl* fn_send)(); // [send at 0x7819AE] [0x3C] ()i
    int(__cdecl* fn_clientsend)(); // [clientsend at 0x781B97] [0x40] ()i
    int(__cdecl* fn_receive)(int a1); // [receive at 0x781CB9] [0x44] (i)i
};


// 2 members
struct Ttrans_spray {
    Ttrans_sprayDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_dest; // 0x8 <type_i>
    int m_source; // 0xC <type_i>
};


