#pragma once

#include "defines.h"

// 11 methods, 1 functions
struct TLineBrushDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 52(0x34)
    int(__cdecl* m_TLineBrush_New)(TLineBrush* pThis); // [New at 0x60C778] [0x10] ()i
    int(__cdecl* m_TLineBrush_Delete)(TLineBrush* pThis); // [Delete at 0x60C80A] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TColor*(__cdecl* m_TLineBrush_GetColor)(TLineBrush* pThis); // [GetColor at 0x60C894] [0x30] ():TColor
    int(__cdecl* m_TLineBrush_SetColor)(TLineBrush* pThis, TColor* a1); // [SetColor at 0x60C8A3] [0x34] (:TColor)i
    float(__cdecl* m_TLineBrush_GetThickness)(TLineBrush* pThis); // [GetThickness at 0x60C8D2] [0x38] ()f
    int(__cdecl* m_TLineBrush_SetThickness)(TLineBrush* pThis, float a1); // [SetThickness at 0x60C8E1] [0x3C] (f)i
    float(__cdecl* m_TLineBrush_GetLayer)(TLineBrush* pThis); // [GetLayer at 0x60C8F8] [0x40] ()f
    int(__cdecl* m_TLineBrush_SetLayer)(TLineBrush* pThis, float a1); // [SetLayer at 0x60C907] [0x44] (f)i
    TLineBrush*(__cdecl* fn_Create)(float a1, TColor* a2); // [Create at 0x60C91E] [0x48] (f,:TColor):TLineBrush
    int(__cdecl* m_TLineBrush_Draw)(TLineBrush* pThis, Vector2* a1, Vector2* a2); // [Draw at 0x60C9A0] [0x4C] (:Vector2,:Vector2)i
    int(__cdecl* m_TLineBrush_CalculateRotation)(TLineBrush* pThis, Vector2* a1); // [CalculateRotation at 0x60CA2F] [0x50] (:Vector2)i
    int(__cdecl* m_TLineBrush_CalculateScale)(TLineBrush* pThis, Vector2* a1); // [CalculateScale at 0x60CAA0] [0x54] (:Vector2)i
};


// 11 members
struct TLineBrush {
    TLineBrushDecl* decl; // 0x0
    int    refs;  // 0x4
    float m__thickness; // 0x8 <type_f>
    TColor* m__color; // 0xC <type_:TColor>
    float m__layer; // 0x10 <type_f>
    TImage* m__texture; // 0x14 <type_:TImage>
    Vector2* m__xVector; // 0x18 <type_:Vector2>
    Vector2* m__origin; // 0x1C <type_:Vector2>
    Vector2* m__scale; // 0x20 <type_:Vector2>
    float m__rotation; // 0x24 <type_f>
    Vector2* m__difference; // 0x28 <type_:Vector2>
    Vector2* m__normalizedDiff; // 0x2C <type_:Vector2>
    float m__theta; // 0x30 <type_f>
};


