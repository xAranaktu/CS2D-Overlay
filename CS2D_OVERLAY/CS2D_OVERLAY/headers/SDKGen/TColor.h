#pragma once

#include "defines.h"

// 10 methods, 2 functions
struct TColorDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_TColor_New)(TColor* pThis); // [New at 0x60C4DD] [0x10] ()i
    int(__cdecl* m_TColor_Delete)(TColor* pThis); // [Delete at 0x60C529] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TColor*(__cdecl* fn_Create)(char a1, char a2, char a3, char a4); // [Create at 0x60C537] [0x30] (b,b,b,b):TColor
    int(__cdecl* m_TColor_Set)(TColor* pThis); // [Set at 0x60C59C] [0x34] ()i
    int(__cdecl* m_TColor_Reset)(TColor* pThis); // [Reset at 0x60C609] [0x38] ()i
    TColor*(__cdecl* m_TColor_Copy)(TColor* pThis); // [Copy at 0x60C638] [0x3C] ():TColor
    int(__cdecl* m_TColor_GetRedBytes)(TColor* pThis, int a1); // [GetRedBytes at 0x60C67A] [0x40] (i)i
    int(__cdecl* m_TColor_GetGreenBytes)(TColor* pThis, int a1); // [GetGreenBytes at 0x60C68E] [0x44] (i)i
    int(__cdecl* m_TColor_GetBlueBytes)(TColor* pThis, int a1); // [GetBlueBytes at 0x60C6A2] [0x48] (i)i
    int(__cdecl* m_TColor_GetAlphaBytes)(TColor* pThis, int a1); // [GetAlphaBytes at 0x60C6B3] [0x4C] (i)i
    int(__cdecl* m_TColor_GetPixel32)(TColor* pThis); // [GetPixel32 at 0x60C6C7] [0x50] ()i
    int(__cdecl* fn_MakePixel32)(int a1, int a2, int a3, int a4); // [MakePixel32 at 0x60C6F7] [0x54] (i,i,i,i)i
};


// 8 members
struct TColor {
    TColorDecl* decl; // 0x0
    int    refs;  // 0x4
    char m_R; // 0x8 <type_b>
    char m_G; // 0x9 <type_b>
    char m_B; // 0xA <type_b>
    char m_A; // 0xB <type_b>
    int m__r; // 0xC <type_i>
    int m__g; // 0x10 <type_i>
    int m__b; // 0x14 <type_i>
    float m__a; // 0x18 <type_f>
};


