#pragma once

#include "defines.h"

// 6 methods, 0 functions
struct Tgui_slist_entryDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 36(0x24)
    int(__cdecl* m_Tgui_slist_entry_New)(Tgui_slist_entry* pThis); // [New at 0x713AE1] [0x10] ()i
    int(__cdecl* m_Tgui_slist_entry_Delete)(Tgui_slist_entry* pThis); // [Delete at 0x713B7E] [0x14] ()i
    void* nothing_5; // 0x18
    int(__cdecl* m_Tgui_slist_entry_Compare)(Tgui_slist_entry* pThis, Object* a1); // [Compare at 0x713E97] [0x1C] (:Object)i
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_slist_entry_addText)(Tgui_slist_entry* pThis, BBString* a1, int a2, int a3, int a4, int a5); // [addText at 0x713BF7] [0x30] ($,i,i,i,i)i
    int(__cdecl* m_Tgui_slist_entry_tintTeamColor)(Tgui_slist_entry* pThis, Tpl* a1); // [tintTeamColor at 0x713C8F] [0x34] (:Tpl)i
    int(__cdecl* m_Tgui_slist_entry_draw)(Tgui_slist_entry* pThis, int a1, int a2, int a3, int a4, int a5, int a6); // [draw at 0x713CE5] [0x38] (i,i,i,i,i,i)i
};


// 7 members
struct Tgui_slist_entry {
    Tgui_slist_entryDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_plain; // 0x8 <type_$>
    void* m_txt; // 0xC <type_[]$>
    void* m_r; // 0x10 <type_[]i>
    void* m_g; // 0x14 <type_[]i>
    void* m_b; // 0x18 <type_[]i>
    void* m_align; // 0x1C <type_[]i>
    int m_insertIndex; // 0x20 <type_i>
};


