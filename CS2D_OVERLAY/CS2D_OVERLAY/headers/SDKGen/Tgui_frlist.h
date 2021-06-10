#pragma once

#include "defines.h"

// 11 methods, 1 functions
struct Tgui_frlistDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 96(0x60)
    int(__cdecl* m_Tgui_frlist_New)(Tgui_frlist* pThis); // [New at 0x730765] [0x10] ()i
    int(__cdecl* m_Tgui_frlist_Delete)(Tgui_frlist* pThis); // [Delete at 0x7307D4] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_frlist_draw)(Tgui_frlist* pThis); // [draw at 0x730940] [0x30] ()i
    int(__cdecl* m_Tgui_frlist_Update)(Tgui_frlist* pThis); // [Update at 0x730932] [0x34] ()i
    int(__cdecl* m_Tgui_frlist_AutoFit)(Tgui_frlist* pThis); // [AutoFit at 0x731FE5] [0x38] ()i
    Tgui_frlist*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3, int a4, int a5); // [Create at 0x73083A] [0x3C] (:Tgui,i,i,i,i):Tgui_frlist
    int(__cdecl* m_Tgui_frlist_centersel)(Tgui_frlist* pThis); // [centersel at 0x731A78] [0x40] ()i
    Tfriend*(__cdecl* m_Tgui_frlist_addfriend)(Tgui_frlist* pThis, BBString* a1, long long a2, int a3); // [addfriend at 0x731B1F] [0x44] ($,l,i):Tfriend
    int(__cdecl* m_Tgui_frlist_joinfriend)(Tgui_frlist* pThis); // [joinfriend at 0x731C9A] [0x48] ()i
    int(__cdecl* m_Tgui_frlist_openprofilewebsite)(Tgui_frlist* pThis); // [openprofilewebsite at 0x731CFC] [0x4C] ()i
    int(__cdecl* m_Tgui_frlist_netupdate)(Tgui_frlist* pThis); // [netupdate at 0x731DAD] [0x50] ()i
    int(__cdecl* m_Tgui_frlist_setfriendname)(Tgui_frlist* pThis, BBString* a1, int a2); // [setfriendname at 0x731F3C] [0x54] ($,i)i
};


// Super: 0x88E898
// 9 members
struct Tgui_frlist {
    Tgui_frlistDecl* decl; // 0x0
    int    refs;  // 0x4
    Tgui_vscr* m_vscr; // 0x3C <type_:Tgui_vscr>
    TList* m_list; // 0x40 <type_:TList>
    Tfriend* m_sel; // 0x44 <type_:Tfriend>
    int m_mode; // 0x48 <type_i>
    BBString* m_mode_user; // 0x4C <type_$>
    int m_loaded; // 0x50 <type_i>
    int m_updated; // 0x54 <type_i>
    int m_fullpartial; // 0x58 <type_i>
    float m_loading_rot; // 0x5C <type_f>
};


