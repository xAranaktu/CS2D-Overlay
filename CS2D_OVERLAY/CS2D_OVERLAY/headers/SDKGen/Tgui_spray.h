#pragma once

#include "defines.h"

// 7 methods, 1 functions
struct Tgui_sprayDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 72(0x48)
    int(__cdecl* m_Tgui_spray_New)(Tgui_spray* pThis); // [New at 0x72B4DF] [0x10] ()i
    int(__cdecl* m_Tgui_spray_Delete)(Tgui_spray* pThis); // [Delete at 0x72B51E] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_spray_draw)(Tgui_spray* pThis); // [draw at 0x72B5E8] [0x30] ()i
    int(__cdecl* m_Tgui_spray_Update)(Tgui_spray* pThis); // [Update at 0x72C583] [0x34] ()i
    int(__cdecl* m_Tgui_spray_AutoFit)(Tgui_spray* pThis); // [AutoFit at 0x72C591] [0x38] ()i
    Tgui_spray*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3); // [Create at 0x72B562] [0x3C] (:Tgui,i,i):Tgui_spray
    int(__cdecl* m_Tgui_spray_draw_col)(Tgui_spray* pThis, int a1, int a2, int a3); // [draw_col at 0x72BCFE] [0x40] (i,i,i)i
    int(__cdecl* m_Tgui_spray_selectspray)(Tgui_spray* pThis, BBString* a1); // [selectspray at 0x72C132] [0x44] ($)i
};


// Super: 0x88E898
// 3 members
struct Tgui_spray {
    Tgui_sprayDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_path; // 0x3C <type_$>
    TImage* m_image; // 0x40 <type_:TImage>
    int m_color; // 0x44 <type_i>
};


