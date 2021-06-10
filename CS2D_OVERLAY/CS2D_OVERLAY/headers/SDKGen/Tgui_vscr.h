#pragma once

#include "defines.h"

// 5 methods, 1 functions
struct Tgui_vscrDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 76(0x4C)
    int(__cdecl* m_Tgui_vscr_New)(Tgui_vscr* pThis); // [New at 0x70EBBF] [0x10] ()i
    int(__cdecl* m_Tgui_vscr_Delete)(Tgui_vscr* pThis); // [Delete at 0x70EBFB] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_vscr_draw)(Tgui_vscr* pThis); // [draw at 0x70ECAE] [0x30] ()i
    int(__cdecl* m_Tgui_vscr_Update)(Tgui_vscr* pThis); // [Update at 0x70ECA0] [0x34] ()i
    int(__cdecl* m_Tgui_vscr_AutoFit)(Tgui_vscr* pThis); // [AutoFit at 0x70F1D9] [0x38] ()i
    Tgui_vscr*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3, int a4); // [Create at 0x70EC1B] [0x3C] (:Tgui,i,i,i):Tgui_vscr
};


// Super: 0x88E898
// 4 members
struct Tgui_vscr {
    Tgui_vscrDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_scr; // 0x3C <type_i>
    int m_maxscr; // 0x40 <type_i>
    int m_scrv; // 0x44 <type_i>
    float m_sensitivity; // 0x48 <type_f>
};


