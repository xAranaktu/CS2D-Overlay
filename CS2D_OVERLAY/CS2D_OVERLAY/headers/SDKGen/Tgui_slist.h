#pragma once

#include "defines.h"

// 11 methods, 1 functions
struct Tgui_slistDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 88(0x58)
    int(__cdecl* m_Tgui_slist_New)(Tgui_slist* pThis); // [New at 0x712F0C] [0x10] ()i
    int(__cdecl* m_Tgui_slist_Delete)(Tgui_slist* pThis); // [Delete at 0x712F73] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_slist_draw)(Tgui_slist* pThis); // [draw at 0x7131E5] [0x30] ()i
    int(__cdecl* m_Tgui_slist_Update)(Tgui_slist* pThis); // [Update at 0x7131D7] [0x34] ()i
    int(__cdecl* m_Tgui_slist_AutoFit)(Tgui_slist* pThis); // [AutoFit at 0x713AD3] [0x38] ()i
    Tgui_slist*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3, int a4, int a5, int a6); // [Create at 0x712FEA] [0x3C] (:Tgui,i,i,i,i,i):Tgui_slist
    Tgui_slist_entry*(__cdecl* m_Tgui_slist_add)(Tgui_slist* pThis, BBString* a1); // [add at 0x713139] [0x40] ($):Tgui_slist_entry
    int(__cdecl* m_Tgui_slist_updateHeight)(Tgui_slist* pThis, int a1); // [updateHeight at 0x713187] [0x44] (i)i
    int(__cdecl* m_Tgui_slist_centersel)(Tgui_slist* pThis); // [centersel at 0x7136B6] [0x48] ()i
    int(__cdecl* m_Tgui_slist_selid)(Tgui_slist* pThis); // [selid at 0x71377A] [0x4C] ()i
    int(__cdecl* m_Tgui_slist_selecttext)(Tgui_slist* pThis, BBString* a1); // [selecttext at 0x713817] [0x50] ($)i
    int(__cdecl* m_Tgui_slist_addSelectionRange)(Tgui_slist* pThis, BBString* a1); // [addSelectionRange at 0x7138CD] [0x54] ($)i
};


// Super: 0x88E898
// 7 members
struct Tgui_slist {
    Tgui_slistDecl* decl; // 0x0
    int    refs;  // 0x4
    Tgui_vscr* m_vscr; // 0x3C <type_:Tgui_vscr>
    TList* m_list; // 0x40 <type_:TList>
    int m_allowSelect; // 0x44 <type_i>
    int m_multiSel; // 0x48 <type_i>
    BBString* m_sel; // 0x4C <type_$>
    TList* m_selList; // 0x50 <type_:TList>
    BBString* m_lastClick; // 0x54 <type_$>
};


