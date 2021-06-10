#pragma once

#include "defines.h"

// 7 methods, 2 functions
struct Tgui_mlDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 76(0x4C)
    int(__cdecl* m_Tgui_ml_New)(Tgui_ml* pThis); // [New at 0x728636] [0x10] ()i
    int(__cdecl* m_Tgui_ml_Delete)(Tgui_ml* pThis); // [Delete at 0x728684] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_ml_draw)(Tgui_ml* pThis); // [draw at 0x7287D3] [0x30] ()i
    int(__cdecl* m_Tgui_ml_Update)(Tgui_ml* pThis); // [Update at 0x7287C5] [0x34] ()i
    int(__cdecl* m_Tgui_ml_AutoFit)(Tgui_ml* pThis); // [AutoFit at 0x729841] [0x38] ()i
    Tgui_ml*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3, int a4, int a5); // [Create at 0x7286EA] [0x3C] (:Tgui,i,i,i,i):Tgui_ml
    int(__cdecl* fn_Loadall)(); // [Loadall at 0x728DBE] [0x40] ()i
    int(__cdecl* m_Tgui_ml_Load)(Tgui_ml* pThis, BBString* a1); // [Load at 0x728EB6] [0x44] ($)i
    int(__cdecl* m_Tgui_ml_centersel)(Tgui_ml* pThis); // [centersel at 0x729782] [0x48] ()i
};


// Super: 0x88E898
// 4 members
struct Tgui_ml {
    Tgui_mlDecl* decl; // 0x0
    int    refs;  // 0x4
    Tgui_vscr* m_vscr; // 0x3C <type_:Tgui_vscr>
    Tgui_tab* m_tab; // 0x40 <type_:Tgui_tab>
    TList* m_map; // 0x44 <type_:TList>
    BBString* m_sel; // 0x48 <type_$>
};


