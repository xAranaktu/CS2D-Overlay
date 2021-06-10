#pragma once

#include "defines.h"

// 2 methods, 6 functions
struct TcustomtileDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 13(0xD)
    int(__cdecl* m_Tcustomtile_New)(Tcustomtile* pThis); // [New at 0x629704] [0x10] ()i
    int(__cdecl* m_Tcustomtile_Delete)(Tcustomtile* pThis); // [Delete at 0x629736] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_add)(short a1, short a2, char a3); // [add at 0x629744] [0x30] (s,s,b)i
    int(__cdecl* fn_addcheck)(short a1, short a2, char a3); // [addcheck at 0x629804] [0x34] (s,s,b)i
    Tcustomtile*(__cdecl* fn_get)(short a1, short a2); // [get at 0x62993D] [0x38] (s,s):Tcustomtile
    int(__cdecl* fn_clear)(); // [clear at 0x6299E1] [0x3C] ()i
    int(__cdecl* fn_startbatch)(); // [startbatch at 0x629A92] [0x40] ()i
    int(__cdecl* fn_endbatch)(); // [endbatch at 0x629AAE] [0x44] ()i
};


// 3 members
struct Tcustomtile {
    TcustomtileDecl* decl; // 0x0
    int    refs;  // 0x4
    short m_x; // 0x8 <type_s>
    short m_y; // 0xA <type_s>
    char m_oldvalue; // 0xC <type_b>
};


