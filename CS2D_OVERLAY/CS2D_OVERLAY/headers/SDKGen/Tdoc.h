#pragma once

#include "defines.h"

// 2 methods, 3 functions
struct TdocDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 32(0x20)
    int(__cdecl* m_Tdoc_New)(Tdoc* pThis); // [New at 0x65E85C] [0x10] ()i
    int(__cdecl* m_Tdoc_Delete)(Tdoc* pThis); // [Delete at 0x65E8AC] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_add)(Tdo* a1, int a2, int a3, int a4, int a5); // [add at 0x65E8CE] [0x30] (:Tdo,i,i,i,i)i
    int(__cdecl* fn_checkpointcollision)(int a1, int a2); // [checkpointcollision at 0x65E95B] [0x34] (i,i)i
    int(__cdecl* fn_checkrectcollision)(int a1, int a2, int a3, int a4); // [checkrectcollision at 0x65EBC5] [0x38] (i,i,i,i)i
};


// 6 members
struct Tdoc {
    TdocDecl* decl; // 0x0
    int    refs;  // 0x4
    Tdo* m_do; // 0x8 <type_:Tdo>
    int m_xo; // 0xC <type_i>
    int m_yo; // 0x10 <type_i>
    int m_w; // 0x14 <type_i>
    int m_h; // 0x18 <type_i>
    int m_mode; // 0x1C <type_i>
};


