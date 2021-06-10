#pragma once

#include "defines.h"

// 2 methods, 4 functions
struct Ttrans_recvDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_Ttrans_recv_New)(Ttrans_recv* pThis); // [New at 0x78050B] [0x10] ()i
    int(__cdecl* m_Ttrans_recv_Delete)(Ttrans_recv* pThis); // [Delete at 0x78054A] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_freeall)(); // [freeall at 0x78057F] [0x30] ()i
    int(__cdecl* fn_ini)(BBString* a1, int a2); // [ini at 0x780628] [0x34] ($,i)i
    int(__cdecl* fn_add)(BBString* a1, TBank* a2); // [add at 0x7806F7] [0x38] ($,:TBank)i
    int(__cdecl* fn_finish)(BBString* a1); // [finish at 0x780ACA] [0x3C] ($)i
};


// 3 members
struct Ttrans_recv {
    Ttrans_recvDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_file; // 0x8 <type_$>
    int m_tsize; // 0xC <type_i>
    TBank* m_data; // 0x10 <type_:TBank>
};


