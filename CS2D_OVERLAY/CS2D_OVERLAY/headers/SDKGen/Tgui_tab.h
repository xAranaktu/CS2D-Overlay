#pragma once

#include "defines.h"

// 6 methods, 4 functions
struct Tgui_tabDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 72(0x48)
    int(__cdecl* m_Tgui_tab_New)(Tgui_tab* pThis); // [New at 0x70C17F] [0x10] ()i
    int(__cdecl* m_Tgui_tab_Delete)(Tgui_tab* pThis); // [Delete at 0x70C1BE] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_tab_draw)(Tgui_tab* pThis); // [draw at 0x70C313] [0x30] ()i
    int(__cdecl* m_Tgui_tab_Update)(Tgui_tab* pThis); // [Update at 0x70C305] [0x34] ()i
    int(__cdecl* m_Tgui_tab_AutoFit)(Tgui_tab* pThis); // [AutoFit at 0x70CB48] [0x38] ()i
    Tgui_tab*(__cdecl* fn_Create)(Tgui* a1, void* a2, int a3, int a4); // [Create at 0x70C202] [0x3C] (:Tgui,[]$,i,i):Tgui_tab
    int(__cdecl* m_Tgui_tab_showTab)(Tgui_tab* pThis, int a1); // [showTab at 0x70C9E6] [0x40] (i)i
    int(__cdecl* fn_SetTab)(Tgui_tab* a1, int a2); // [SetTab at 0x70CA76] [0x44] (:Tgui_tab,i)i
    int(__cdecl* fn_ClearTab)(); // [ClearTab at 0x70CAB0] [0x48] ()i
    int(__cdecl* fn_AddToActiveTab)(Tgui* a1); // [AddToActiveTab at 0x70CAE1] [0x4C] (:Tgui)i
};


// Super: 0x88E898
// 3 members
struct Tgui_tab {
    Tgui_tabDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_tab; // 0x3C <type_[]$>
    void* m_tabItems; // 0x40 <type_[]:TList>
    int m_sel; // 0x44 <type_i>
};


