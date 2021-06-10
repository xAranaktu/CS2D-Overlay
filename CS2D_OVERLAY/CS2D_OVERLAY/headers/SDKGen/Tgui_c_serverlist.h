#pragma once

#include "defines.h"

// 5 methods, 1 functions
struct Tgui_c_serverlistDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 68(0x44)
    int(__cdecl* m_Tgui_c_serverlist_New)(Tgui_c_serverlist* pThis); // [New at 0x714F5A] [0x10] ()i
    int(__cdecl* m_Tgui_c_serverlist_Delete)(Tgui_c_serverlist* pThis); // [Delete at 0x714F92] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_c_serverlist_draw)(Tgui_c_serverlist* pThis); // [draw at 0x7150A1] [0x30] ()i
    int(__cdecl* m_Tgui_c_serverlist_Update)(Tgui_c_serverlist* pThis); // [Update at 0x715093] [0x34] ()i
    int(__cdecl* m_Tgui_c_serverlist_AutoFit)(Tgui_c_serverlist* pThis); // [AutoFit at 0x7157D6] [0x38] ()i
    Tgui_c_serverlist*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3, int a4, int a5); // [Create at 0x714FD6] [0x3C] (:Tgui,i,i,i,i):Tgui_c_serverlist
};


// Super: 0x88E898
// 2 members
struct Tgui_c_serverlist {
    Tgui_c_serverlistDecl* decl; // 0x0
    int    refs;  // 0x4
    Tgui_vscr* m_vscr; // 0x3C <type_:Tgui_vscr>
    TServer* m_sel; // 0x40 <type_:TServer>
};


