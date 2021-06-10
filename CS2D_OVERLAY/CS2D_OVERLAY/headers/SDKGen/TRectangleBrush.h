#pragma once

#include "defines.h"

// 13 methods, 1 functions
struct TRectangleBrushDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 32(0x20)
    int(__cdecl* m_TRectangleBrush_New)(TRectangleBrush* pThis); // [New at 0x60CCEE] [0x10] ()i
    int(__cdecl* m_TRectangleBrush_Delete)(TRectangleBrush* pThis); // [Delete at 0x60CD44] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TColor*(__cdecl* m_TRectangleBrush_GetColor)(TRectangleBrush* pThis); // [GetColor at 0x60CD8A] [0x30] ():TColor
    int(__cdecl* m_TRectangleBrush_SetColor)(TRectangleBrush* pThis, TColor* a1); // [SetColor at 0x60CD99] [0x34] (:TColor)i
    float(__cdecl* m_TRectangleBrush_GetLayer)(TRectangleBrush* pThis); // [GetLayer at 0x60CDC8] [0x38] ()f
    int(__cdecl* m_TRectangleBrush_SetLayer)(TRectangleBrush* pThis, float a1); // [SetLayer at 0x60CDD7] [0x3C] (f)i
    TColor*(__cdecl* m_TRectangleBrush_GetBorderColor)(TRectangleBrush* pThis); // [GetBorderColor at 0x60CDEE] [0x40] ():TColor
    int(__cdecl* m_TRectangleBrush_SetBorderColor)(TRectangleBrush* pThis, TColor* a1); // [SetBorderColor at 0x60CDFD] [0x44] (:TColor)i
    int(__cdecl* m_TRectangleBrush_GetWidth)(TRectangleBrush* pThis); // [GetWidth at 0x60CE37] [0x48] ()i
    int(__cdecl* m_TRectangleBrush_GetHeight)(TRectangleBrush* pThis); // [GetHeight at 0x60CE46] [0x4C] ()i
    int(__cdecl* m_TRectangleBrush_SetWidth)(TRectangleBrush* pThis, int a1); // [SetWidth at 0x60CE55] [0x50] (i)i
    int(__cdecl* m_TRectangleBrush_SetHeight)(TRectangleBrush* pThis, int a1); // [SetHeight at 0x60CE6C] [0x54] (i)i
    TRectangleBrush*(__cdecl* fn_Create)(int a1, int a2, TColor* a3, TColor* a4); // [Create at 0x60CE83] [0x58] (i,i,:TColor,:TColor):TRectangleBrush
    int(__cdecl* m_TRectangleBrush_Draw)(TRectangleBrush* pThis, Vector2* a1); // [Draw at 0x60CF26] [0x5C] (:Vector2)i
};


// 6 members
struct TRectangleBrush {
    TRectangleBrushDecl* decl; // 0x0
    int    refs;  // 0x4
    TColor* m__borderColor; // 0x8 <type_:TColor>
    TColor* m__color; // 0xC <type_:TColor>
    float m__layer; // 0x10 <type_f>
    int m__width; // 0x14 <type_i>
    int m__height; // 0x18 <type_i>
    TImage* m__texture; // 0x1C <type_:TImage>
};


