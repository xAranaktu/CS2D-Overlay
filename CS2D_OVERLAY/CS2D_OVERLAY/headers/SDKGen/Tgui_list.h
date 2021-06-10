#pragma once

#include "defines.h"

// 10 methods, 1 functions
struct Tgui_listDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 88(0x58)
    int(__cdecl* m_Tgui_list_New)(Tgui_list* pThis); // [New at 0x70DF91] [0x10] ()i
    int(__cdecl* m_Tgui_list_Delete)(Tgui_list* pThis); // [Delete at 0x70DFF8] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_list_draw)(Tgui_list* pThis); // [draw at 0x70E21C] [0x30] ()i
    int(__cdecl* m_Tgui_list_Update)(Tgui_list* pThis); // [Update at 0x70E20E] [0x34] ()i
    int(__cdecl* m_Tgui_list_AutoFit)(Tgui_list* pThis); // [AutoFit at 0x70EBB1] [0x38] ()i
    Tgui_list*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3, int a4, int a5, int a6); // [Create at 0x70E06F] [0x3C] (:Tgui,i,i,i,i,i):Tgui_list
    int(__cdecl* m_Tgui_list_updateHeight)(Tgui_list* pThis, int a1); // [updateHeight at 0x70E1BE] [0x40] (i)i
    int(__cdecl* m_Tgui_list_centersel)(Tgui_list* pThis); // [centersel at 0x70E7AD] [0x44] ()i
    int(__cdecl* m_Tgui_list_selid)(Tgui_list* pThis); // [selid at 0x70E86C] [0x48] ()i
    int(__cdecl* m_Tgui_list_selecttext)(Tgui_list* pThis, BBString* a1); // [selecttext at 0x70E907] [0x4C] ($)i
    int(__cdecl* m_Tgui_list_addSelectionRange)(Tgui_list* pThis, BBString* a1); // [addSelectionRange at 0x70E9BA] [0x50] ($)i
};


// Super: 0x88E898
// 7 members
struct Tgui_list {
    Tgui_listDecl* decl; // 0x0
    int    refs;  // 0x4
    Tgui_vscr* m_vscr; // 0x3C <type_:Tgui_vscr>
    TList* m_list; // 0x40 <type_:TList>
    int m_allowSelect; // 0x44 <type_i>
    int m_multiSel; // 0x48 <type_i>
    BBString* m_sel; // 0x4C <type_$>
    TList* m_selList; // 0x50 <type_:TList>
    BBString* m_lastClick; // 0x54 <type_$>
};


