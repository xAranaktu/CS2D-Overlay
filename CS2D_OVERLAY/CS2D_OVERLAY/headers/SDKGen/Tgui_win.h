#pragma once

#include "defines.h"

// 13 methods, 6 functions
struct Tgui_winDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 84(0x54)
    int(__cdecl* m_Tgui_win_New)(Tgui_win* pThis); // [New at 0x706B29] [0x10] ()i
    int(__cdecl* m_Tgui_win_Delete)(Tgui_win* pThis); // [Delete at 0x706B71] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_win_draw)(Tgui_win* pThis); // [draw at 0x706C3F] [0x30] ()i
    int(__cdecl* m_Tgui_win_update)(Tgui_win* pThis); // [update at 0x706C31] [0x34] ()i
    int(__cdecl* m_Tgui_win_AutoFit)(Tgui_win* pThis); // [AutoFit at 0x70810E] [0x38] ()i
    Tgui_win*(__cdecl* fn_Create)(BBString* a1, int a2, int a3, int a4, int a5); // [Create at 0x706B91] [0x3C] ($,i,i,i,i):Tgui_win
    int(__cdecl* m_Tgui_win_open)(Tgui_win* pThis, int a1, int a2); // [open at 0x70747D] [0x40] (i,i)i
    int(__cdecl* m_Tgui_win_close)(Tgui_win* pThis, int a1); // [close at 0x70756A] [0x44] (i)i
    int(__cdecl* fn_closeall)(); // [closeall at 0x70769E] [0x48] ()i
    int(__cdecl* fn_isAnyOpened)(); // [isAnyOpened at 0x707737] [0x4C] ()i
    int(__cdecl* m_Tgui_win_tofront)(Tgui_win* pThis); // [tofront at 0x707798] [0x50] ()i
    int(__cdecl* m_Tgui_win_DrawChilds)(Tgui_win* pThis); // [DrawChilds at 0x7077FE] [0x54] ()i
    int(__cdecl* m_Tgui_win_UpdateChilds)(Tgui_win* pThis); // [UpdateChilds at 0x70794B] [0x58] ()i
    int(__cdecl* m_Tgui_win_center)(Tgui_win* pThis, int a1, int a2); // [center at 0x707A98] [0x5C] (i,i)i
    int(__cdecl* m_Tgui_win_centerWithBorder)(Tgui_win* pThis); // [centerWithBorder at 0x707B07] [0x60] ()i
    int(__cdecl* m_Tgui_win_swap)(Tgui_win* pThis, Tgui_win* a1); // [swap at 0x707C05] [0x64] (:Tgui_win)i
    int(__cdecl* fn_activate)(); // [activate at 0x707CDA] [0x68] ()i
    int(__cdecl* fn_covers)(int a1, int a2); // [covers at 0x708050] [0x6C] (i,i)i
    int(__cdecl* fn_GetAvailableWidth)(Tgui* a1, Tgui* a2); // [GetAvailableWidth at 0x70816B] [0x70] (:Tgui,:Tgui)i
};


// Super: 0x88E898
// 6 members
struct Tgui_win {
    Tgui_winDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_activefade; // 0x3C <type_i>
    int m_xbutton; // 0x40 <type_i>
    int m_moveable; // 0x44 <type_i>
    int m_loading; // 0x48 <type_i>
    float m_loading_rot; // 0x4C <type_f>
    float m_loading_dots; // 0x50 <type_f>
};


