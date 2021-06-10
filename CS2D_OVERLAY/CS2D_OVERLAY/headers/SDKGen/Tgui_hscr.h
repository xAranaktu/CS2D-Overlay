#pragma once

#include "defines.h"

// 5 methods, 1 functions
struct Tgui_hscrDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 76(0x4C)
    int(__cdecl* m_Tgui_hscr_New)(Tgui_hscr* pThis); // [New at 0x70F1E7] [0x10] ()i
    int(__cdecl* m_Tgui_hscr_Delete)(Tgui_hscr* pThis); // [Delete at 0x70F225] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_hscr_draw)(Tgui_hscr* pThis); // [draw at 0x70F2CF] [0x30] ()i
    int(__cdecl* m_Tgui_hscr_Update)(Tgui_hscr* pThis); // [Update at 0x70F2C1] [0x34] ()i
    int(__cdecl* m_Tgui_hscr_AutoFit)(Tgui_hscr* pThis); // [AutoFit at 0x70F8A0] [0x38] ()i
    Tgui_hscr*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3, int a4); // [Create at 0x70F245] [0x3C] (:Tgui,i,i,i):Tgui_hscr
};


// Super: 0x88E898
// 4 members
struct Tgui_hscr {
    Tgui_hscrDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_scr; // 0x3C <type_i>
    int m_maxscr; // 0x40 <type_i>
    int m_scrv; // 0x44 <type_i>
    int m_showToolTip; // 0x48 <type_i>
};


