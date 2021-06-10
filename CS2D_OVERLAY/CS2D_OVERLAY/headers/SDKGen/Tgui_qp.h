#pragma once

#include "defines.h"

// 6 methods, 3 functions
struct Tgui_qpDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 72(0x48)
    int(__cdecl* m_Tgui_qp_New)(Tgui_qp* pThis); // [New at 0x732091] [0x10] ()i
    int(__cdecl* m_Tgui_qp_Delete)(Tgui_qp* pThis); // [Delete at 0x7320C8] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_qp_draw)(Tgui_qp* pThis); // [draw at 0x73221F] [0x30] ()i
    int(__cdecl* m_Tgui_qp_Update)(Tgui_qp* pThis); // [Update at 0x732211] [0x34] ()i
    int(__cdecl* m_Tgui_qp_AutoFit)(Tgui_qp* pThis); // [AutoFit at 0x732979] [0x38] ()i
    Tgui_qp*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3, int a4, int a5); // [Create at 0x7320E8] [0x3C] (:Tgui,i,i,i,i):Tgui_qp
    int(__cdecl* fn_addBan)(int a1, int a2); // [addBan at 0x732160] [0x40] (i,i)i
    int(__cdecl* fn_isBanned)(int a1, int a2); // [isBanned at 0x732187] [0x44] (i,i)i
    int(__cdecl* m_Tgui_qp_reset)(Tgui_qp* pThis); // [reset at 0x73295A] [0x48] ()i
};


// Super: 0x88E898
// 3 members
struct Tgui_qp {
    Tgui_qpDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_status; // 0x3C <type_i>
    int m_oldquickplaycount; // 0x40 <type_i>
    int m_joincountdown; // 0x44 <type_i>
};


