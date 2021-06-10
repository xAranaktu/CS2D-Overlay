#pragma once

#include "defines.h"

// 5 methods, 0 functions
struct TguiDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 60(0x3C)
    int(__cdecl* m_Tgui_New)(Tgui* pThis); // [New at 0x706A54] [0x10] ()i
    int(__cdecl* m_Tgui_Delete)(Tgui* pThis); // [Delete at 0x706AE3] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_draw)(Tgui* pThis); // [draw at 0x7B6004] [0x30] ()i
    int(__cdecl* m_Tgui_update)(Tgui* pThis); // [update at 0x7B6004] [0x34] ()i
    int(__cdecl* m_Tgui_AutoFit)(Tgui* pThis); // [AutoFit at 0x7B6004] [0x38] ()i
};


// 13 members
struct Tgui {
    TguiDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_typ; // 0x8 <type_i>
    BBString* m_title; // 0xC <type_$>
    int m_x; // 0x10 <type_i>
    int m_y; // 0x14 <type_i>
    int m_w; // 0x18 <type_i>
    int m_h; // 0x1C <type_i>
    int m_active; // 0x20 <type_i>
    int m_visible; // 0x24 <type_i>
    Tgui* m_parent; // 0x28 <type_:Tgui>
    TList* m_childs; // 0x2C <type_:TList>
    int m_blendin; // 0x30 <type_i>
    float m_overblend; // 0x34 <type_f>
    int m_group; // 0x38 <type_i>
};


