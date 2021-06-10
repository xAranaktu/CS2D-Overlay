#pragma once

#include "defines.h"

// 7 methods, 1 functions
struct Tgui_clistDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 84(0x54)
    int(__cdecl* m_Tgui_clist_New)(Tgui_clist* pThis); // [New at 0x711A1E] [0x10] ()i
    int(__cdecl* m_Tgui_clist_Delete)(Tgui_clist* pThis); // [Delete at 0x711A82] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_clist_draw)(Tgui_clist* pThis); // [draw at 0x711C2C] [0x30] ()i
    int(__cdecl* m_Tgui_clist_Update)(Tgui_clist* pThis); // [Update at 0x711C1E] [0x34] ()i
    int(__cdecl* m_Tgui_clist_AutoFit)(Tgui_clist* pThis); // [AutoFit at 0x7124BD] [0x38] ()i
    Tgui_clist*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3, int a4, int a5); // [Create at 0x711B0A] [0x3C] (:Tgui,i,i,i,i):Tgui_clist
    int(__cdecl* m_Tgui_clist_centersel)(Tgui_clist* pThis); // [centersel at 0x712363] [0x40] ()i
    int(__cdecl* m_Tgui_clist_selid)(Tgui_clist* pThis); // [selid at 0x712422] [0x44] ()i
};


// Super: 0x88E898
// 6 members
struct Tgui_clist {
    Tgui_clistDecl* decl; // 0x0
    int    refs;  // 0x4
    Tgui_vscr* m_vscr; // 0x3C <type_:Tgui_vscr>
    TList* m_list; // 0x40 <type_:TList>
    BBString* m_sel; // 0x44 <type_$>
    void* m_status; // 0x48 <type_[]i>
    void* m_img; // 0x4C <type_[]:TImage>
    void* m_imgFrame; // 0x50 <type_[]i>
};


