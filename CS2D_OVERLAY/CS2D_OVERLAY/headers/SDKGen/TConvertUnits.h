#pragma once

#include "defines.h"

// 2 methods, 5 functions
struct TConvertUnitsDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TConvertUnits_New)(TConvertUnits* pThis); // [New at 0x5F9A2C] [0x10] ()i
    int(__cdecl* m_TConvertUnits_Delete)(TConvertUnits* pThis); // [Delete at 0x5F9A4E] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_SetDisplayUnitsToSimUnitsRatio)(float a1); // [SetDisplayUnitsToSimUnitsRatio at 0x5F9A5C] [0x30] (f)i
    float(__cdecl* fn_ToDisplayUnits)(float a1); // [ToDisplayUnits at 0x5F9A81] [0x34] (f)f
    float(__cdecl* fn_ToSimUnits)(float a1); // [ToSimUnits at 0x5F9A93] [0x38] (f)f
    Vector2*(__cdecl* fn_ToDisplayUnitsVector)(Vector2* a1); // [ToDisplayUnitsVector at 0x5F9AA5] [0x3C] (:Vector2):Vector2
    Vector2*(__cdecl* fn_ToSimUnitsVector)(Vector2* a1); // [ToSimUnitsVector at 0x5F9AC1] [0x40] (:Vector2):Vector2
};


// 0 members
struct TConvertUnits {
    TConvertUnitsDecl* decl; // 0x0
    int    refs;  // 0x4
};


