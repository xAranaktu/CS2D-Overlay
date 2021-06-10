#pragma once

#include "defines.h"

// 6 methods, 1 functions
struct Tgui_infoDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 64(0x40)
    int(__cdecl* m_Tgui_info_New)(Tgui_info* pThis); // [New at 0x708669] [0x10] ()i
    int(__cdecl* m_Tgui_info_Delete)(Tgui_info* pThis); // [Delete at 0x708692] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_info_draw)(Tgui_info* pThis); // [draw at 0x7087A5] [0x30] ()i
    int(__cdecl* m_Tgui_info_Update)(Tgui_info* pThis); // [Update at 0x70874A] [0x34] ()i
    int(__cdecl* m_Tgui_info_AutoFit)(Tgui_info* pThis); // [AutoFit at 0x708A16] [0x38] ()i
    Tgui_info*(__cdecl* fn_Create)(Tgui* a1, BBString* a2, int a3, int a4, int a5); // [Create at 0x7086B2] [0x3C] (:Tgui,$,i,i,i):Tgui_info
    int(__cdecl* m_Tgui_info_reset)(Tgui_info* pThis, BBString* a1, int a2, int a3); // [reset at 0x708758] [0x40] ($,i,i)i
};


// Super: 0x88E898
// 1 members
struct Tgui_info {
    Tgui_infoDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_warning; // 0x3C <type_i>
};


