#pragma once

#include "defines.h"

// 18 methods, 5 functions
struct Tgui_slDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 128(0x80)
    int(__cdecl* m_Tgui_sl_New)(Tgui_sl* pThis); // [New at 0x721B19] [0x10] ()i
    int(__cdecl* m_Tgui_sl_Delete)(Tgui_sl* pThis); // [Delete at 0x721BE2] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_sl_draw)(Tgui_sl* pThis); // [draw at 0x721E14] [0x30] ()i
    int(__cdecl* m_Tgui_sl_update)(Tgui_sl* pThis); // [update at 0x725DFB] [0x34] ()i
    int(__cdecl* m_Tgui_sl_AutoFit)(Tgui_sl* pThis); // [AutoFit at 0x72827A] [0x38] ()i
    Tgui_sl*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3, int a4, int a5); // [Create at 0x721C59] [0x3C] (:Tgui,i,i,i,i):Tgui_sl
    int(__cdecl* m_Tgui_sl_updateSize)(Tgui_sl* pThis, int a1, int a2); // [updateSize at 0x721DA2] [0x40] (i,i)i
    int(__cdecl* m_Tgui_sl_draw_stats)(Tgui_sl* pThis, int a1, int a2); // [draw_stats at 0x72585B] [0x44] (i,i)i
    int(__cdecl* fn_pingServers)(TList* a1); // [pingServers at 0x725B6A] [0x48] (:TList)i
    int(__cdecl* fn_overr)(int a1, int a2, int a3, int a4); // [overr at 0x725D4A] [0x4C] (i,i,i,i)i
    Tsv*(__cdecl* m_Tgui_sl_getserver)(Tgui_sl* pThis, int a1, int a2); // [getserver at 0x727238] [0x50] (i,i):Tsv
    int(__cdecl* m_Tgui_sl_addfav)(Tgui_sl* pThis); // [addfav at 0x7272DC] [0x54] ()i
    int(__cdecl* m_Tgui_sl_removefav)(Tgui_sl* pThis); // [removefav at 0x727444] [0x58] ()i
    int(__cdecl* m_Tgui_sl_addrecent)(Tgui_sl* pThis, int a1, short a2); // [addrecent at 0x7274FF] [0x5C] (i,s)i
    int(__cdecl* m_Tgui_sl_copyaddress)(Tgui_sl* pThis, int a1); // [copyaddress at 0x727684] [0x60] (i)i
    int(__cdecl* m_Tgui_sl_isfavorite)(Tgui_sl* pThis, int a1, short a2); // [isfavorite at 0x7277D0] [0x64] (i,s)i
    int(__cdecl* m_Tgui_sl_savefavs)(Tgui_sl* pThis); // [savefavs at 0x727877] [0x68] ()i
    int(__cdecl* m_Tgui_sl_loadfavs)(Tgui_sl* pThis); // [loadfavs at 0x72798F] [0x6C] ()i
    int(__cdecl* m_Tgui_sl_saverecent)(Tgui_sl* pThis); // [saverecent at 0x727A78] [0x70] ()i
    int(__cdecl* m_Tgui_sl_loadrecent)(Tgui_sl* pThis); // [loadrecent at 0x727B90] [0x74] ()i
    int(__cdecl* m_Tgui_sl_reset)(Tgui_sl* pThis); // [reset at 0x727C90] [0x78] ()i
    int(__cdecl* fn_offlineserverlist_save)(); // [offlineserverlist_save at 0x727E48] [0x7C] ()i
    int(__cdecl* fn_offlineserverlist_load)(int a1); // [offlineserverlist_load at 0x7280C5] [0x80] (i)i
};


// Super: 0x88E898
// 17 members
struct Tgui_sl {
    Tgui_slDecl* decl; // 0x0
    int    refs;  // 0x4
    Tgui_vscr* m_vscr; // 0x3C <type_:Tgui_vscr>
    int m_sort; // 0x40 <type_i>
    int m_sortdir; // 0x44 <type_i>
    int m_cpls; // 0x48 <type_i>
    int m_cbots; // 0x4C <type_i>
    int m_csvs; // 0x50 <type_i>
    int m_dpls; // 0x54 <type_i>
    int m_dbots; // 0x58 <type_i>
    int m_dsvs; // 0x5C <type_i>
    TList* m_list; // 0x60 <type_:TList>
    void* m_lists; // 0x64 <type_[]:TList>
    void* m_refresh; // 0x68 <type_[]i>
    void* m_state; // 0x6C <type_[]i>
    int m_sel_ip; // 0x70 <type_i>
    int m_sel_port; // 0x74 <type_i>
    float m_loading_rot; // 0x78 <type_f>
    int m_lastreset; // 0x7C <type_i>
};


