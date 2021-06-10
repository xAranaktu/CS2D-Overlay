#pragma once

#include "defines.h"

// 8 methods, 3 functions
struct cFloatDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_cFloat_New)(cFloat* pThis); // [New at 0x5C1E50] [0x10] ()i
    int(__cdecl* m_cFloat_Delete)(cFloat* pThis); // [Delete at 0x5C1EA3] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    cFloat*(__cdecl* fn_Create)(float a1); // [Create at 0x5C1EC5] [0x30] (f):cFloat
    int(__cdecl* m_cFloat_Set)(cFloat* pThis, float a1); // [Set at 0x5C1EFC] [0x34] (f)i
    int(__cdecl* m_cFloat_Inc)(cFloat* pThis, float a1); // [Inc at 0x5C1F91] [0x38] (f)i
    float(__cdecl* m_cFloat_Get)(cFloat* pThis); // [Get at 0x5C1FE2] [0x3C] ()f
    int(__cdecl* m_cFloat_SetCheck)(cFloat* pThis); // [SetCheck at 0x5C2024] [0x40] ()i
    int(__cdecl* m_cFloat_Update)(cFloat* pThis); // [Update at 0x5C2074] [0x44] ()i
    int(__cdecl* m_cFloat_remove)(cFloat* pThis); // [remove at 0x5C20E6] [0x48] ()i
    int(__cdecl* fn_UpdateAll)(); // [UpdateAll at 0x5C2106] [0x4C] ()i
    int(__cdecl* fn_Clear)(); // [Clear at 0x5C2163] [0x50] ()i
};


// 3 members
struct cFloat {
    cFloatDecl* decl; // 0x0
    int    refs;  // 0x4
    long long m_value; // 0x8 <type_l>
    long long m_valueRND; // 0x10 <type_l>
    void* m_check; // 0x18 <type_[]l>
};


