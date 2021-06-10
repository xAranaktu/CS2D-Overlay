#pragma once

#include "defines.h"

// 6 methods, 1 functions
struct Tgui_imgDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 76(0x4C)
    int(__cdecl* m_Tgui_img_New)(Tgui_img* pThis); // [New at 0x70FDF7] [0x10] ()i
    int(__cdecl* m_Tgui_img_Delete)(Tgui_img* pThis); // [Delete at 0x70FE35] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_img_draw)(Tgui_img* pThis); // [draw at 0x70FF72] [0x30] ()i
    int(__cdecl* m_Tgui_img_Update)(Tgui_img* pThis); // [Update at 0x70FF64] [0x34] ()i
    int(__cdecl* m_Tgui_img_AutoFit)(Tgui_img* pThis); // [AutoFit at 0x71002B] [0x38] ()i
    Tgui_img*(__cdecl* fn_Create)(Tgui* a1, TImage* a2, int a3, int a4, BBString* a5); // [Create at 0x70FE68] [0x3C] (:Tgui,:TImage,i,i,$):Tgui_img
    int(__cdecl* m_Tgui_img_reset)(Tgui_img* pThis, TImage* a1, int a2, int a3); // [reset at 0x70FF17] [0x40] (:TImage,i,i)i
};


// Super: 0x88E898
// 4 members
struct Tgui_img {
    Tgui_imgDecl* decl; // 0x0
    int    refs;  // 0x4
    TImage* m_img; // 0x3C <type_:TImage>
    int m_frame; // 0x40 <type_i>
    float m_xs; // 0x44 <type_f>
    float m_ys; // 0x48 <type_f>
};


