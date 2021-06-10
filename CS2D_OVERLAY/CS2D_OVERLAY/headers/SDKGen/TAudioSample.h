#pragma once

#include "defines.h"

// 4 methods, 2 functions
struct TAudioSampleDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_TAudioSample_New)(TAudioSample* pThis); // [New at 0x797B43] [0x10] ()i
    int(__cdecl* m_TAudioSample_Delete)(TAudioSample* pThis); // [Delete at 0x797B88] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TAudioSample*(__cdecl* m_TAudioSample_Copy)(TAudioSample* pThis); // [Copy at 0x797BAA] [0x30] ():TAudioSample
    TAudioSample*(__cdecl* m_TAudioSample_Convert)(TAudioSample* pThis, int a1); // [Convert at 0x797BE3] [0x34] (i):TAudioSample
    TAudioSample*(__cdecl* fn_Create)(int a1, int a2, int a3); // [Create at 0x797C20] [0x38] (i,i,i):TAudioSample
    TAudioSample*(__cdecl* fn_CreateStatic)(void* a1, int a2, int a3, int a4); // [CreateStatic at 0x797C78] [0x3C] (*b,i,i,i):TAudioSample
};


// 5 members
struct TAudioSample {
    TAudioSampleDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_samples; // 0x8 <type_*b>
    int m_length; // 0xC <type_i>
    int m_hertz; // 0x10 <type_i>
    int m_format; // 0x14 <type_i>
    int m_capacity; // 0x18 <type_i>
};


