#pragma once

#include "defines.h"

// 6 methods, 1 functions
struct Tgui_keysDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 68(0x44)
    int(__cdecl* m_Tgui_keys_New)(Tgui_keys* pThis); // [New at 0x72C59F] [0x10] ()i
    int(__cdecl* m_Tgui_keys_Delete)(Tgui_keys* pThis); // [Delete at 0x72C5D3] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_keys_draw)(Tgui_keys* pThis); // [draw at 0x72C6DE] [0x30] ()i
    int(__cdecl* m_Tgui_keys_Update)(Tgui_keys* pThis); // [Update at 0x72C6D0] [0x34] ()i
    int(__cdecl* m_Tgui_keys_AutoFit)(Tgui_keys* pThis); // [AutoFit at 0x72CDE5] [0x38] ()i
    Tgui_keys*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3); // [Create at 0x72C606] [0x3C] (:Tgui,i,i):Tgui_keys
    int(__cdecl* m_Tgui_keys_getkey)(Tgui_keys* pThis); // [getkey at 0x72CC4C] [0x40] ()i
};


// Super: 0x88E898
// 2 members
struct Tgui_keys {
    Tgui_keysDecl* decl; // 0x0
    int    refs;  // 0x4
    Tgui_vscr* m_vscr; // 0x3C <type_:Tgui_vscr>
    int m_keylisten; // 0x40 <type_i>
};


