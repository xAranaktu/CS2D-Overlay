#pragma once

#include "defines.h"

// 4 methods, 1 functions
struct TJSONBooleanDecl {
    void* pSuper;  // 0x0 0x88C54C
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_TJSONBoolean_New)(TJSONBoolean* pThis); // [New at 0x683FC7] [0x10] ()i
    int(__cdecl* m_TJSONBoolean_Delete)(TJSONBoolean* pThis); // [Delete at 0x683FF7] [0x14] ()i
    BBString*(__cdecl* m_TJSONBoolean_ToString)(TJSONBoolean* pThis); // [ToString at 0x684035] [0x18] ()$
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    void* nothing_12; // 0x34
    void* nothing_13; // 0x38
    void* nothing_14; // 0x3C
    void* nothing_15; // 0x40
    BBString*(__cdecl* m_TJSONBoolean_ToSource)(TJSONBoolean* pThis, int a1); // [ToSource at 0x684053] [0x44] (i)$
    TJSONBoolean*(__cdecl* fn_Create)(int a1); // [Create at 0x684017] [0x48] (i):TJSONBoolean
};


// Super: 0x88C54C
// 1 members
struct TJSONBoolean {
    TJSONBooleanDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_Value; // 0xC <type_i>
};


