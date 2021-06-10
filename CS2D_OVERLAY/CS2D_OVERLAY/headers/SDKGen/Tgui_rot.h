#pragma once

#include "defines.h"

// 5 methods, 1 functions
struct Tgui_rotDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 64(0x40)
    int(__cdecl* m_Tgui_rot_New)(Tgui_rot* pThis); // [New at 0x710039] [0x10] ()i
    int(__cdecl* m_Tgui_rot_Delete)(Tgui_rot* pThis); // [Delete at 0x710062] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_rot_draw)(Tgui_rot* pThis); // [draw at 0x7100FF] [0x30] ()i
    int(__cdecl* m_Tgui_rot_Update)(Tgui_rot* pThis); // [Update at 0x7100F1] [0x34] ()i
    int(__cdecl* m_Tgui_rot_AutoFit)(Tgui_rot* pThis); // [AutoFit at 0x7104BD] [0x38] ()i
    Tgui_rot*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3); // [Create at 0x710082] [0x3C] (:Tgui,i,i):Tgui_rot
};


// Super: 0x88E898
// 1 members
struct Tgui_rot {
    Tgui_rotDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_rot; // 0x3C <type_i>
};


