#pragma once

#include "defines.h"

// 4 methods, 1 functions
struct TJSONNumberDecl {
    void* pSuper;  // 0x0 0x88C54C
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_TJSONNumber_New)(TJSONNumber* pThis); // [New at 0x683F23] [0x10] ()i
    int(__cdecl* m_TJSONNumber_Delete)(TJSONNumber* pThis); // [Delete at 0x683F51] [0x14] ()i
    BBString*(__cdecl* m_TJSONNumber_ToString)(TJSONNumber* pThis); // [ToString at 0x683F8D] [0x18] ()$
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
    BBString*(__cdecl* m_TJSONNumber_ToSource)(TJSONNumber* pThis, int a1); // [ToSource at 0x683FAA] [0x44] (i)$
    TJSONNumber*(__cdecl* fn_Create)(void* a1); // [Create at 0x683F71] [0x48] (d):TJSONNumber
};


// Super: 0x88C54C
// 1 members
struct TJSONNumber {
    TJSONNumberDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_Value; // 0x10 <type_d>
};


