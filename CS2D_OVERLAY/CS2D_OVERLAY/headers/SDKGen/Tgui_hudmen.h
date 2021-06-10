#pragma once

#include "defines.h"

// 14 methods, 4 functions
struct Tgui_hudmenDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 80(0x50)
    int(__cdecl* m_Tgui_hudmen_New)(Tgui_hudmen* pThis); // [New at 0x715DE1] [0x10] ()i
    int(__cdecl* m_Tgui_hudmen_Delete)(Tgui_hudmen* pThis); // [Delete at 0x715E22] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_hudmen_draw)(Tgui_hudmen* pThis); // [draw at 0x716574] [0x30] ()i
    int(__cdecl* m_Tgui_hudmen_Update)(Tgui_hudmen* pThis); // [Update at 0x715EC8] [0x34] ()i
    int(__cdecl* m_Tgui_hudmen_AutoFit)(Tgui_hudmen* pThis); // [AutoFit at 0x721B0B] [0x38] ()i
    int(__cdecl* m_Tgui_hudmen_close)(Tgui_hudmen* pThis); // [close at 0x715E42] [0x3C] ()i
    Tgui_hudmen*(__cdecl* fn_Create)(Tgui* a1, int a2); // [Create at 0x715E69] [0x40] (:Tgui,i):Tgui_hudmen
    int(__cdecl* m_Tgui_hudmen_buyWpnButton)(Tgui_hudmen* pThis, int a1, int a2, int a3, int a4, int a5); // [buyWpnButton at 0x71ED88] [0x44] (i,i,i,i,i)i
    int(__cdecl* m_Tgui_hudmen_button)(Tgui_hudmen* pThis, int a1, int a2, BBString* a3, int a4, BBString* a5, int a6, int a7, TImage* a8); // [button at 0x71EE41] [0x48] (i,i,$,i,$,i,i,:TImage)i
    int(__cdecl* m_Tgui_hudmen_fbutton)(Tgui_hudmen* pThis, int a1, int a2, BBString* a3, int a4, int a5); // [fbutton at 0x71F913] [0x4C] (i,i,$,i,i)i
    int(__cdecl* m_Tgui_hudmen_box)(Tgui_hudmen* pThis, int a1, int a2, int a3, int a4); // [box at 0x71FDBF] [0x50] (i,i,i,i)i
    int(__cdecl* m_Tgui_hudmen_weaponinfo)(Tgui_hudmen* pThis, int a1); // [weaponinfo at 0x71FF8C] [0x54] (i)i
    int(__cdecl* m_Tgui_hudmen_moneyinfo)(Tgui_hudmen* pThis); // [moneyinfo at 0x7212C7] [0x58] ()i
    int(__cdecl* fn_votesetup)(); // [votesetup at 0x72137E] [0x5C] ()i
    int(__cdecl* fn_updatevotescreen)(); // [updatevotescreen at 0x72167D] [0x60] ()i
    int(__cdecl* fn_getVoteBrightness)(int a1); // [getVoteBrightness at 0x7216A7] [0x64] (i)i
    int(__cdecl* m_Tgui_hudmen_custombuy)(Tgui_hudmen* pThis, int a1); // [custombuy at 0x7216E8] [0x68] (i)i
    int(__cdecl* m_Tgui_hudmen_drawBuySectionPreview)(Tgui_hudmen* pThis, void* a1, int a2); // [drawBuySectionPreview at 0x7218DC] [0x6C] ([]i,i)i
};


// Super: 0x88E898
// 5 members
struct Tgui_hudmen {
    Tgui_hudmenDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_menu; // 0x3C <type_i>
    int m_overn; // 0x40 <type_i>
    float m_rot; // 0x44 <type_f>
    float m_loading_rot; // 0x48 <type_f>
    int m_playerContext; // 0x4C <type_i>
};


