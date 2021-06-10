#pragma once

#include "defines.h"

// 2 methods, 4 functions
struct TmnDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_Tmn_New)(Tmn* pThis); // [New at 0x787845] [0x10] ()i
    int(__cdecl* m_Tmn_Delete)(Tmn* pThis); // [Delete at 0x787875] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_resetPlayer)(Tpl* a1); // [resetPlayer at 0x787883] [0x30] (:Tpl)i
    int(__cdecl* fn_addPlayerNode)(Tpl* a1); // [addPlayerNode at 0x7878A3] [0x34] (:Tpl)i
    int(__cdecl* fn_getCompensatedPlayerPosition)(Tpl* a1, Tpl* a2); // [getCompensatedPlayerPosition at 0x787930] [0x38] (:Tpl,:Tpl)i
    int(__cdecl* fn_debugPlayerLag)(Tpl* a1); // [debugPlayerLag at 0x787AD9] [0x3C] (:Tpl)i
};


// 2 members
struct Tmn {
    TmnDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_x; // 0x8 <type_i>
    int m_y; // 0xC <type_i>
};


