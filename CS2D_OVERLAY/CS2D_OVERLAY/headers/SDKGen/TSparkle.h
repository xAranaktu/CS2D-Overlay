#pragma once

#include "defines.h"

// 3 methods, 4 functions
struct TSparkleDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 56(0x38)
    int(__cdecl* m_TSparkle_New)(TSparkle* pThis); // [New at 0x5D7CFF] [0x10] ()i
    int(__cdecl* m_TSparkle_Delete)(TSparkle* pThis); // [Delete at 0x5D7D61] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_CreateEffect)(float a1, float a2, float a3, int a4, float a5, float a6, float a7); // [CreateEffect at 0x5D7D6F] [0x30] (f,f,f,i,f,f,f)i
    int(__cdecl* fn_CreateEffect360)(float a1, float a2, float a3, int a4, float a5, float a6, float a7); // [CreateEffect360 at 0x5D7E44] [0x34] (f,f,f,i,f,f,f)i
    TSparkle*(__cdecl* fn_Create)(float a1, float a2, float a3, float a4, float a5); // [Create at 0x5D7EF9] [0x38] (f,f,f,f,f):TSparkle
    int(__cdecl* m_TSparkle_SetColor)(TSparkle* pThis, float a1, float a2, float a3); // [SetColor at 0x5D7F97] [0x3C] (f,f,f)i
    int(__cdecl* fn_Draw)(); // [Draw at 0x5D7FBC] [0x40] ()i
};


// 12 members
struct TSparkle {
    TSparkleDecl* decl; // 0x0
    int    refs;  // 0x4
    float m_x; // 0x8 <type_f>
    float m_y; // 0xC <type_f>
    float m_rot; // 0x10 <type_f>
    float m_scaleX; // 0x14 <type_f>
    float m_scaleY; // 0x18 <type_f>
    float m_a; // 0x1C <type_f>
    float m_speed; // 0x20 <type_f>
    float m_xs; // 0x24 <type_f>
    float m_ys; // 0x28 <type_f>
    float m_r; // 0x2C <type_f>
    float m_g; // 0x30 <type_f>
    float m_b; // 0x34 <type_f>
};


