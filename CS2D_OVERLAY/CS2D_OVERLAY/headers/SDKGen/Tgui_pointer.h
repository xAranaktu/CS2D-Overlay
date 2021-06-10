#pragma once

#include "defines.h"

// 5 methods, 1 functions
struct Tgui_pointerDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 60(0x3C)
    int(__cdecl* m_Tgui_pointer_New)(Tgui_pointer* pThis); // [New at 0x733354] [0x10] ()i
    int(__cdecl* m_Tgui_pointer_Delete)(Tgui_pointer* pThis); // [Delete at 0x733376] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_pointer_draw)(Tgui_pointer* pThis); // [draw at 0x73340C] [0x30] ()i
    int(__cdecl* m_Tgui_pointer_Update)(Tgui_pointer* pThis); // [Update at 0x7336B3] [0x34] ()i
    int(__cdecl* m_Tgui_pointer_AutoFit)(Tgui_pointer* pThis); // [AutoFit at 0x7336C1] [0x38] ()i
    Tgui_pointer*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3); // [Create at 0x733396] [0x3C] (:Tgui,i,i):Tgui_pointer
};


// Super: 0x88E898
// 0 members
struct Tgui_pointer {
    Tgui_pointerDecl* decl; // 0x0
    int    refs;  // 0x4
};


