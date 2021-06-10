#pragma once

#include "defines.h"

// 2 methods, 5 functions
struct Teditor_actionlistDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_Teditor_actionlist_New)(Teditor_actionlist* pThis); // [New at 0x6ED164] [0x10] ()i
    int(__cdecl* m_Teditor_actionlist_Delete)(Teditor_actionlist* pThis); // [Delete at 0x6ED1AE] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_reset)(); // [reset at 0x6ED1D0] [0x30] ()i
    int(__cdecl* fn_undo)(); // [undo at 0x6ED234] [0x34] ()i
    Teditor_actionlist*(__cdecl* fn_add)(int a1, int a2, int a3, int a4, int a5); // [add at 0x6ED4DD] [0x38] (i,i,i,i,i):Teditor_actionlist
    int(__cdecl* fn_batch_start)(); // [batch_start at 0x6ED53F] [0x3C] ()i
    int(__cdecl* fn_batch_end)(); // [batch_end at 0x6ED557] [0x40] ()i
};


// 6 members
struct Teditor_actionlist {
    Teditor_actionlistDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_typ; // 0x8 <type_i>
    int m_x; // 0xC <type_i>
    int m_y; // 0x10 <type_i>
    char m_oldstate; // 0x14 <type_b>
    char m_oldmode; // 0x15 <type_b>
    Tmap_d* m_olddata; // 0x18 <type_:Tmap_d>
};


