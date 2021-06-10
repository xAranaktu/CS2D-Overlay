#pragma once

#include "defines.h"

// 13 methods, 1 functions
struct Tgui_comboDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 84(0x54)
    int(__cdecl* m_Tgui_combo_New)(Tgui_combo* pThis); // [New at 0x710BCA] [0x10] ()i
    int(__cdecl* m_Tgui_combo_Delete)(Tgui_combo* pThis); // [Delete at 0x710C2A] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_combo_draw)(Tgui_combo* pThis); // [draw at 0x710D9F] [0x30] ()i
    int(__cdecl* m_Tgui_combo_Update)(Tgui_combo* pThis); // [Update at 0x710D91] [0x34] ()i
    int(__cdecl* m_Tgui_combo_AutoFit)(Tgui_combo* pThis); // [AutoFit at 0x711A10] [0x38] ()i
    Tgui_combo*(__cdecl* fn_Create)(Tgui* a1, void* a2, int a3, int a4, int a5); // [Create at 0x710CA1] [0x3C] (:Tgui,[]$,i,i,i):Tgui_combo
    int(__cdecl* m_Tgui_combo_reset)(Tgui_combo* pThis, void* a1, int a2, int a3, int a4); // [reset at 0x710D3E] [0x40] ([]$,i,i,i)i
    int(__cdecl* m_Tgui_combo_selid)(Tgui_combo* pThis); // [selid at 0x7114A2] [0x44] ()i
    int(__cdecl* m_Tgui_combo_setid)(Tgui_combo* pThis, int a1); // [setid at 0x711509] [0x48] (i)i
    int(__cdecl* m_Tgui_combo_setViaRaw)(Tgui_combo* pThis, BBString* a1); // [setViaRaw at 0x71156C] [0x4C] ($)i
    int(__cdecl* m_Tgui_combo_setViaLabel)(Tgui_combo* pThis, BBString* a1); // [setViaLabel at 0x711609] [0x50] ($)i
    BBString*(__cdecl* m_Tgui_combo_getRaw)(Tgui_combo* pThis); // [getRaw at 0x711687] [0x54] ()$
    int(__cdecl* m_Tgui_combo_setStatus)(Tgui_combo* pThis, int a1, int a2); // [setStatus at 0x7116F6] [0x58] (i,i)i
    int(__cdecl* m_Tgui_combo_openContextMenu)(Tgui_combo* pThis); // [openContextMenu at 0x71176E] [0x5C] ()i
};


// Super: 0x88E898
// 6 members
struct Tgui_combo {
    Tgui_comboDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_combo; // 0x3C <type_[]$>
    void* m_status; // 0x40 <type_[]i>
    void* m_raw; // 0x44 <type_[]$>
    void* m_img; // 0x48 <type_[]:TImage>
    void* m_imgFrame; // 0x4C <type_[]i>
    int m_selectedIndex; // 0x50 <type_i>
};


