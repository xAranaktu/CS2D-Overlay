#pragma once

#include "defines.h"

// 8 methods, 1 functions
struct TBilinearInterpolatorDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 40(0x28)
    int(__cdecl* m_TBilinearInterpolator_New)(TBilinearInterpolator* pThis); // [New at 0x5F97D7] [0x10] ()i
    int(__cdecl* m_TBilinearInterpolator_Delete)(TBilinearInterpolator* pThis); // [Delete at 0x5F9837] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    Vector2*(__cdecl* m_TBilinearInterpolator_GetMin)(TBilinearInterpolator* pThis); // [GetMin at 0x5F986C] [0x30] ():Vector2
    int(__cdecl* m_TBilinearInterpolator_SetMin)(TBilinearInterpolator* pThis, Vector2* a1); // [SetMin at 0x5F9884] [0x34] (:Vector2)i
    Vector2*(__cdecl* m_TBilinearInterpolator_GetMax)(TBilinearInterpolator* pThis); // [GetMax at 0x5F98A5] [0x38] ():Vector2
    int(__cdecl* m_TBilinearInterpolator_SetMax)(TBilinearInterpolator* pThis, Vector2* a1); // [SetMax at 0x5F98BD] [0x3C] (:Vector2)i
    TBilinearInterpola*(__cdecl* fn_Create)(Vector2* a1, Vector2* a2, float a3, float a4, float a5, float a6, float a7, float a8); // [Create at 0x5F98DE] [0x40] (:Vector2,:Vector2,f,f,f,f,f,f):TBilinearInterpola
    float(__cdecl* m_TBilinearInterpolator_GetValueFromVector)(TBilinearInterpolator* pThis, Vector2* a1); // [GetValueFromVector at 0x5F9942] [0x44] (:Vector2)f
    float(__cdecl* m_TBilinearInterpolator_GetValue)(TBilinearInterpolator* pThis, float a1, float a2); // [GetValue at 0x5F9960] [0x48] (f,f)f
};


// 8 members
struct TBilinearInterpolator {
    TBilinearInterpolatorDecl* decl; // 0x0
    int    refs;  // 0x4
    Vector2* m__max; // 0x8 <type_:Vector2>
    Vector2* m__min; // 0xC <type_:Vector2>
    float m__value1; // 0x10 <type_f>
    float m__value2; // 0x14 <type_f>
    float m__value3; // 0x18 <type_f>
    float m__value4; // 0x1C <type_f>
    float m__maxValue; // 0x20 <type_f>
    float m__minValue; // 0x24 <type_f>
};


