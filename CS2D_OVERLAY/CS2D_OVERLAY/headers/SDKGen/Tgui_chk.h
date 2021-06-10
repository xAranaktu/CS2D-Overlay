#pragma once

#include "defines.h"

// 6 methods, 1 functions
struct Tgui_chkDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 64(0x40)
    int(__cdecl* m_Tgui_chk_New)(Tgui_chk* pThis); // [New at 0x70B622] [0x10] ()i
    int(__cdecl* m_Tgui_chk_Delete)(Tgui_chk* pThis); // [Delete at 0x70B64B] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_chk_draw)(Tgui_chk* pThis); // [draw at 0x70B758] [0x30] ()i
    int(__cdecl* m_Tgui_chk_Update)(Tgui_chk* pThis); // [Update at 0x70B74A] [0x34] ()i
    int(__cdecl* m_Tgui_chk_AutoFit)(Tgui_chk* pThis); // [AutoFit at 0x70BBCC] [0x38] ()i
    Tgui_chk*(__cdecl* fn_Create)(Tgui* a1, BBString* a2, int a3, int a4); // [Create at 0x70B66B] [0x3C] (:Tgui,$,i,i):Tgui_chk
    int(__cdecl* m_Tgui_chk_reset)(Tgui_chk* pThis, BBString* a1, int a2, int a3); // [reset at 0x70B6FD] [0x40] ($,i,i)i
};


// Super: 0x88E898
// 1 members
struct Tgui_chk {
    Tgui_chkDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_state; // 0x3C <type_i>
};


