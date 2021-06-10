#pragma once

#include "defines.h"

// 2 methods, 2 functions
struct Tmap_scrollDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_Tmap_scroll_New)(Tmap_scroll* pThis); // [New at 0x62E384] [0x10] ()i
    int(__cdecl* m_Tmap_scroll_Delete)(Tmap_scroll* pThis); // [Delete at 0x62E3A6] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_toplayer_smoothly)(Tpl* a1); // [toplayer_smoothly at 0x62E3B4] [0x30] (:Tpl)i
    int(__cdecl* fn_toplayer_instantly)(Tpl* a1); // [toplayer_instantly at 0x62E4FA] [0x34] (:Tpl)i
};


// 0 members
struct Tmap_scroll {
    Tmap_scrollDecl* decl; // 0x0
    int    refs;  // 0x4
};


