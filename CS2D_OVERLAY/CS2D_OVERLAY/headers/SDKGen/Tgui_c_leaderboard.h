#pragma once

#include "defines.h"

// 5 methods, 1 functions
struct Tgui_c_leaderboardDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 68(0x44)
    int(__cdecl* m_Tgui_c_leaderboard_New)(Tgui_c_leaderboard* pThis); // [New at 0x7157E4] [0x10] ()i
    int(__cdecl* m_Tgui_c_leaderboard_Delete)(Tgui_c_leaderboard* pThis); // [Delete at 0x71581C] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_c_leaderboard_draw)(Tgui_c_leaderboard* pThis); // [draw at 0x71592B] [0x30] ()i
    int(__cdecl* m_Tgui_c_leaderboard_Update)(Tgui_c_leaderboard* pThis); // [Update at 0x71591D] [0x34] ()i
    int(__cdecl* m_Tgui_c_leaderboard_AutoFit)(Tgui_c_leaderboard* pThis); // [AutoFit at 0x715DD3] [0x38] ()i
    Tgui_c_leaderboard*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3, int a4, int a5); // [Create at 0x715860] [0x3C] (:Tgui,i,i,i,i):Tgui_c_leaderboard
};


// Super: 0x88E898
// 2 members
struct Tgui_c_leaderboard {
    Tgui_c_leaderboardDecl* decl; // 0x0
    int    refs;  // 0x4
    Tgui_vscr* m_vscr; // 0x3C <type_:Tgui_vscr>
    TServer* m_sel; // 0x40 <type_:TServer>
};


