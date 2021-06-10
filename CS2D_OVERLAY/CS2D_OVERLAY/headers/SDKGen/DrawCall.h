#pragma once

#include "defines.h"

// 2 methods, 4 functions
struct DrawCallDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_DrawCall_New)(DrawCall* pThis); // [New at 0x5C599C] [0x10] ()i
    int(__cdecl* m_DrawCall_Delete)(DrawCall* pThis); // [Delete at 0x5C59E3] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Add)(void* a1, float a2); // [Add at 0x5C5A05] [0x30] ([]f,f)i
    int(__cdecl* fn_Draw)(); // [Draw at 0x5C5A69] [0x34] ()i
    int(__cdecl* fn_Compares)(Object* a1, Object* a2); // [Compares at 0x5C5B08] [0x38] (:Object,:Object)i
    int(__cdecl* fn_DrawCube)(float a1, float a2, float a3, float a4); // [DrawCube at 0x5C5B4F] [0x3C] (f,f,f,f)i
};


// 5 members
struct DrawCall {
    DrawCallDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_poly; // 0x8 <type_[]f>
    int m_cr; // 0xC <type_i>
    int m_cg; // 0x10 <type_i>
    int m_cb; // 0x14 <type_i>
    float m_distance; // 0x18 <type_f>
};


