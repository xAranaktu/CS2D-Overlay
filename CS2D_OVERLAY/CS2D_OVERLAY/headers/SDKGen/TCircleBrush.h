#pragma once

#include "defines.h"

// 9 methods, 1 functions
struct TCircleBrushDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_TCircleBrush_New)(TCircleBrush* pThis); // [New at 0x60CADE] [0x10] ()i
    int(__cdecl* m_TCircleBrush_Delete)(TCircleBrush* pThis); // [Delete at 0x60CB2B] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TColor*(__cdecl* m_TCircleBrush_GetColor)(TCircleBrush* pThis); // [GetColor at 0x60CB71] [0x30] ():TColor
    int(__cdecl* m_TCircleBrush_SetColor)(TCircleBrush* pThis, TColor* a1); // [SetColor at 0x60CB80] [0x34] (:TColor)i
    float(__cdecl* m_TCircleBrush_GetLayer)(TCircleBrush* pThis); // [GetLayer at 0x60CBAF] [0x38] ()f
    int(__cdecl* m_TCircleBrush_SetLayer)(TCircleBrush* pThis, float a1); // [SetLayer at 0x60CBBE] [0x3C] (f)i
    TColor*(__cdecl* m_TCircleBrush_GetBorderColor)(TCircleBrush* pThis); // [GetBorderColor at 0x60CBD5] [0x40] ():TColor
    int(__cdecl* m_TCircleBrush_SetBorderColor)(TCircleBrush* pThis, TColor* a1); // [SetBorderColor at 0x60CBE4] [0x44] (:TColor)i
    TCircleBrush*(__cdecl* fn_Create)(float a1, TColor* a2, TColor* a3); // [Create at 0x60CC1E] [0x48] (f,:TColor,:TColor):TCircleBrush
    int(__cdecl* m_TCircleBrush_Draw)(TCircleBrush* pThis, Vector2* a1); // [Draw at 0x60CCC7] [0x4C] (:Vector2)i
};


// 5 members
struct TCircleBrush {
    TCircleBrushDecl* decl; // 0x0
    int    refs;  // 0x4
    TColor* m__borderColor; // 0x8 <type_:TColor>
    TColor* m__color; // 0xC <type_:TColor>
    float m__layer; // 0x10 <type_f>
    float m__radius; // 0x14 <type_f>
    TImage* m__texture; // 0x18 <type_:TImage>
};


