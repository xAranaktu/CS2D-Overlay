#pragma once

#include "defines.h"

// 7 methods, 3 functions
struct TMax2DGraphicsDecl {
    void* pSuper;  // 0x0 0x8F9BF4
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 144(0x90)
    int(__cdecl* m_TMax2DGraphics_New)(TMax2DGraphics* pThis); // [New at 0x7A8BB3] [0x10] ()i
    int(__cdecl* m_TMax2DGraphics_Delete)(TMax2DGraphics* pThis); // [Delete at 0x7A8CB9] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    TMax2DDriver*(__cdecl* m_TMax2DGraphics_Driver)(TMax2DGraphics* pThis); // [Driver at 0x7A8D14] [0x34] ():TMax2DDriver
    int(__cdecl* m_TMax2DGraphics_GetSettings)(TMax2DGraphics* pThis, void* a1, void* a2, void* a3, void* a4, void* a5); // [GetSettings at 0x7A8D26] [0x38] (*i,*i,*i,*i,*i)i
    int(__cdecl* m_TMax2DGraphics_Close)(TMax2DGraphics* pThis); // [Close at 0x7A8DAE] [0x3C] ()i
    int(__cdecl* m_TMax2DGraphics_Validate)(TMax2DGraphics* pThis); // [Validate at 0x7A8E33] [0x40] ()i
    int(__cdecl* m_TMax2DGraphics_MakeCurrent)(TMax2DGraphics* pThis); // [MakeCurrent at 0x7A8F9A] [0x44] ()i
    int(__cdecl* fn_ClearCurrent)(); // [ClearCurrent at 0x7A9035] [0x48] ()i
    TMax2DGraphics*(__cdecl* fn_Current)(); // [Current at 0x7A9087] [0x4C] ():TMax2DGraphics
    TMax2DGraphics*(__cdecl* fn_Create)(TGraphics* a1, TMax2DDriver* a2); // [Create at 0x7A9095] [0x50] (:TGraphics,:TMax2DDriver):TMax2DGraphics
};


// Super: 0x8F9BF4
// 34 members
struct TMax2DGraphics {
    TMax2DGraphicsDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_color_red; // 0x8 <type_i>
    int m_color_green; // 0xC <type_i>
    int m_color_blue; // 0x10 <type_i>
    float m_color_alpha; // 0x14 <type_f>
    int m_clscolor_red; // 0x18 <type_i>
    int m_clscolor_green; // 0x1C <type_i>
    int m_clscolor_blue; // 0x20 <type_i>
    float m_line_width; // 0x24 <type_f>
    float m_tform_rot; // 0x28 <type_f>
    float m_tform_scale_x; // 0x2C <type_f>
    float m_tform_scale_y; // 0x30 <type_f>
    float m_tform_ix; // 0x34 <type_f>
    float m_tform_iy; // 0x38 <type_f>
    float m_tform_jx; // 0x3C <type_f>
    float m_tform_jy; // 0x40 <type_f>
    int m_viewport_x; // 0x44 <type_i>
    int m_viewport_y; // 0x48 <type_i>
    int m_viewport_w; // 0x4C <type_i>
    int m_viewport_h; // 0x50 <type_i>
    float m_origin_x; // 0x54 <type_f>
    float m_origin_y; // 0x58 <type_f>
    float m_handle_x; // 0x5C <type_f>
    float m_handle_y; // 0x60 <type_f>
    TImageFont* m_image_font; // 0x64 <type_:TImageFont>
    int m_blend_mode; // 0x68 <type_i>
    float m_vres_width; // 0x6C <type_f>
    float m_vres_height; // 0x70 <type_f>
    float m_vres_mousexscale; // 0x74 <type_f>
    float m_vres_mouseyscale; // 0x78 <type_f>
    int m_g_width; // 0x7C <type_i>
    int m_g_height; // 0x80 <type_i>
    TGraphics* m__graphics; // 0x84 <type_:TGraphics>
    TMax2DDriver* m__driver; // 0x88 <type_:TMax2DDriver>
    int m__setup; // 0x8C <type_i>
};


