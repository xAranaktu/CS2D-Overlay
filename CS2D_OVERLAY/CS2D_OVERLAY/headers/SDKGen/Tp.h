#pragma once

#include "defines.h"

// 2 methods, 17 functions
struct TpDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 72(0x48)
    int(__cdecl* m_Tp_New)(Tp* pThis); // [New at 0x652F28] [0x10] ()i
    int(__cdecl* m_Tp_Delete)(Tp* pThis); // [Delete at 0x652FBA] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_freeall)(); // [freeall at 0x653000] [0x30] ()i
    int(__cdecl* fn_freetype)(int a1); // [freetype at 0x6530EA] [0x34] (i)i
    Tp*(__cdecl* fn_getOrCreate)(int a1, float a2, float a3, int a4); // [getOrCreate at 0x653185] [0x38] (i,f,f,i):Tp
    int(__cdecl* fn_resetCounter)(); // [resetCounter at 0x65324F] [0x3C] ()i
    Tp*(__cdecl* fn_Create)(int a1, float a2, float a3, int a4); // [Create at 0x653271] [0x40] (i,f,f,i):Tp
    int(__cdecl* fn_draw)(int a1, int a2); // [draw at 0x65455A] [0x44] (i,i)i
    int(__cdecl* fn_wallblood)(int a1, int a2); // [wallblood at 0x6594CD] [0x48] (i,i)i
    Tp*(__cdecl* fn_sprayblood)(int a1, int a2, int a3, int a4, int a5, int a6); // [sprayblood at 0x6595E0] [0x4C] (i,i,i,i,i,i):Tp
    int(__cdecl* fn_groundblood)(int a1, int a2, int a3, int a4, int a5); // [groundblood at 0x6597BB] [0x50] (i,i,i,i,i)i
    int(__cdecl* fn_matp)(int a1, int a2, int a3, int a4, float a5); // [matp at 0x6598C4] [0x54] (i,i,i,i,f)i
    int(__cdecl* fn_breakable)(int a1, int a2, int a3, int a4); // [breakable at 0x659DDC] [0x58] (i,i,i,i)i
    int(__cdecl* fn_killbreakable)(int a1, int a2, int a3, int a4); // [killbreakable at 0x65A2F2] [0x5C] (i,i,i,i)i
    int(__cdecl* fn_explosion)(int a1, int a2, int a3, float a4); // [explosion at 0x65A5F8] [0x60] (i,i,i,f)i
    int(__cdecl* fn_spawnfx)(int a1, int a2, int a3, int a4); // [spawnfx at 0x65ADDB] [0x64] (i,i,i,i)i
    int(__cdecl* fn_freeonwall)(int a1, int a2); // [freeonwall at 0x65B139] [0x68] (i,i)i
    Tp*(__cdecl* fn_CreateLight)(int a1, int a2, int a3, int a4, int a5, int a6, int a7); // [CreateLight at 0x65B235] [0x6C] (i,i,i,i,i,i,i):Tp
    int(__cdecl* fn_CreateLine)(int a1, int a2, int a3, int a4, int a5, int a6, int a7, float a8, int a9, float a10); // [CreateLine at 0x65B44C] [0x70] (i,i,i,i,i,i,i,f,i,f)i
};


// 16 members
struct Tp {
    TpDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_typ; // 0x8 <type_i>
    int m_level; // 0xC <type_i>
    float m_x; // 0x10 <type_f>
    float m_y; // 0x14 <type_f>
    float m_fx; // 0x18 <type_f>
    float m_fy; // 0x1C <type_f>
    float m_sx; // 0x20 <type_f>
    float m_sy; // 0x24 <type_f>
    float m_a; // 0x28 <type_f>
    float m_age; // 0x2C <type_f>
    float m_rot; // 0x30 <type_f>
    float m_rots; // 0x34 <type_f>
    float m_frame; // 0x38 <type_f>
    void* m_col; // 0x3C <type_[]f>
    TImage* m_img; // 0x40 <type_:TImage>
    TLightSource* m_light; // 0x44 <type_:TLightSource>
};


