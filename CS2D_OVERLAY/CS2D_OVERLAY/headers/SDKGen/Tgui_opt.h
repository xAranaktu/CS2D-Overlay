#pragma once

#include "defines.h"

// 6 methods, 1 functions
struct Tgui_optDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 68(0x44)
    int(__cdecl* m_Tgui_opt_New)(Tgui_opt* pThis); // [New at 0x70BC13] [0x10] ()i
    int(__cdecl* m_Tgui_opt_Delete)(Tgui_opt* pThis); // [Delete at 0x70BC47] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_opt_draw)(Tgui_opt* pThis); // [draw at 0x70BD60] [0x30] ()i
    int(__cdecl* m_Tgui_opt_Update)(Tgui_opt* pThis); // [Update at 0x70BD52] [0x34] ()i
    int(__cdecl* m_Tgui_opt_AutoFit)(Tgui_opt* pThis); // [AutoFit at 0x70C138] [0x38] ()i
    Tgui_opt*(__cdecl* fn_Create)(Tgui* a1, void* a2, int a3, int a4); // [Create at 0x70BC7A] [0x3C] (:Tgui,[]$,i,i):Tgui_opt
    int(__cdecl* m_Tgui_opt_reset)(Tgui_opt* pThis, void* a1, int a2, int a3); // [reset at 0x70BD05] [0x40] ([]$,i,i)i
};


// Super: 0x88E898
// 2 members
struct Tgui_opt {
    Tgui_optDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_opt; // 0x3C <type_[]$>
    int m_sel; // 0x40 <type_i>
};


