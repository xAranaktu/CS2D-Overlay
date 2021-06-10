#pragma once

#include "defines.h"

// 14 methods, 1 functions
struct Tgui_modlistDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 92(0x5C)
    int(__cdecl* m_Tgui_modlist_New)(Tgui_modlist* pThis); // [New at 0x7336CF] [0x10] ()i
    int(__cdecl* m_Tgui_modlist_Delete)(Tgui_modlist* pThis); // [Delete at 0x733739] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_modlist_draw)(Tgui_modlist* pThis); // [draw at 0x7338FE] [0x30] ()i
    int(__cdecl* m_Tgui_modlist_Update)(Tgui_modlist* pThis); // [Update at 0x734A6F] [0x34] ()i
    int(__cdecl* m_Tgui_modlist_AutoFit)(Tgui_modlist* pThis); // [AutoFit at 0x7352F7] [0x38] ()i
    Tgui_modlist*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3, int a4, int a5, Tgui_tb* a6); // [Create at 0x73379F] [0x3C] (:Tgui,i,i,i,i,:Tgui_tb):Tgui_modlist
    int(__cdecl* m_Tgui_modlist_centersel)(Tgui_modlist* pThis); // [centersel at 0x734A7D] [0x40] ()i
    Tgui_modlist_entry*(__cdecl* m_Tgui_modlist_AddMod)(Tgui_modlist* pThis, BBString* a1, int a2); // [AddMod at 0x734B24] [0x44] ($,i):Tgui_modlist_entry
    int(__cdecl* m_Tgui_modlist_ShowEntryInfo)(Tgui_modlist* pThis, Tgui_modlist_entry* a1); // [ShowEntryInfo at 0x734BB5] [0x48] (:Tgui_modlist_entry)i
    int(__cdecl* m_Tgui_modlist_Clear)(Tgui_modlist* pThis); // [Clear at 0x734CB6] [0x4C] ()i
    int(__cdecl* m_Tgui_modlist_Apply)(Tgui_modlist* pThis, int a1); // [Apply at 0x734CE1] [0x50] (i)i
    int(__cdecl* m_Tgui_modlist_LoadMods)(Tgui_modlist* pThis, TList* a1); // [LoadMods at 0x734DA6] [0x54] (:TList)i
    BBString*(__cdecl* m_Tgui_modlist_GetString)(Tgui_modlist* pThis); // [GetString at 0x734F3A] [0x58] ()$
    int(__cdecl* m_Tgui_modlist_LoadList)(Tgui_modlist* pThis, int a1); // [LoadList at 0x734FE6] [0x5C] (i)i
    int(__cdecl* m_Tgui_modlist_SaveList)(Tgui_modlist* pThis, int a1); // [SaveList at 0x7351D7] [0x60] (i)i
};


// Super: 0x88E898
// 8 members
struct Tgui_modlist {
    Tgui_modlistDecl* decl; // 0x0
    int    refs;  // 0x4
    Tgui_vscr* m_vscr; // 0x3C <type_:Tgui_vscr>
    TList* m_list; // 0x40 <type_:TList>
    Tgui_modlist_entry* m_sel; // 0x44 <type_:Tgui_modlist_entry>
    int m_namewidth; // 0x48 <type_i>
    int m_authorwidth; // 0x4C <type_i>
    int m_versionwidth; // 0x50 <type_i>
    int m_reload_mods; // 0x54 <type_i>
    Tgui_tb* m_infobox; // 0x58 <type_:Tgui_tb>
};


