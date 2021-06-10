#pragma once

#include "defines.h"

// 4 methods, 1 functions
struct TCircularInterpolatorDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 44(0x2C)
    int(__cdecl* m_TCircularInterpolator_New)(TCircularInterpolator* pThis); // [New at 0x5F5E4A] [0x10] ()i
    int(__cdecl* m_TCircularInterpolator_Delete)(TCircularInterpolator* pThis); // [Delete at 0x5F5EA5] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TCircularInterpolator*(__cdecl* fn_Create)(float a1, float a2, float a3, float a4, float a5, float a6); // [Create at 0x5F5EB3] [0x30] (f,f,f,f,f,f):TCircularInterpolator
    float(__cdecl* m_TCircularInterpolator_GetValueFromVector)(TCircularInterpolator* pThis, Vector2* a1); // [GetValueFromVector at 0x5F5EED] [0x34] (:Vector2)f
    float(__cdecl* m_TCircularInterpolator_GetValue)(TCircularInterpolator* pThis, float a1, float a2); // [GetValue at 0x5F5F0B] [0x38] (f,f)f
};


// 9 members
struct TCircularInterpolator {
    TCircularInterpolatorDecl* decl; // 0x0
    int    refs;  // 0x4
    float m_circleValue1; // 0x8 <type_f>
    float m_circleValue2; // 0xC <type_f>
    float m_value1; // 0x10 <type_f>
    float m_value2; // 0x14 <type_f>
    float m_value3; // 0x18 <type_f>
    float m_value4; // 0x1C <type_f>
    float m_maxValue; // 0x20 <type_f>
    float m_minvalue; // 0x24 <type_f>
    float m_twoOverPi; // 0x28 <type_f>
};


