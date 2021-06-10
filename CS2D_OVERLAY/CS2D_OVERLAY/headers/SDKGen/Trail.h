#pragma once

#include "defines.h"

// 2 methods, 2 functions
struct TrailDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_Trail_New)(Trail* pThis); // [New at 0x5CB4A7] [0x10] ()i
    int(__cdecl* m_Trail_Delete)(Trail* pThis); // [Delete at 0x5CB4D3] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    Trail*(__cdecl* fn_Create)(float a1, float a2); // [Create at 0x5CB4E1] [0x30] (f,f):Trail
    int(__cdecl* fn_Update)(tpl* a1); // [Update at 0x5CB503] [0x34] (:tpl)i
};


// 2 members
struct Trail {
    TrailDecl* decl; // 0x0
    int    refs;  // 0x4
    float m_X; // 0x8 <type_f>
    float m_Y; // 0xC <type_f>
};


