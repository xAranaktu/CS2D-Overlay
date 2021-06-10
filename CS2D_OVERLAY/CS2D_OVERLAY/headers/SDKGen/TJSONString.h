#pragma once

#include "defines.h"

// 4 methods, 1 functions
struct TJSONStringDecl {
    void* pSuper;  // 0x0 0x88C54C
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_TJSONString_New)(TJSONString* pThis); // [New at 0x683E4B] [0x10] ()i
    int(__cdecl* m_TJSONString_Delete)(TJSONString* pThis); // [Delete at 0x683E7F] [0x14] ()i
    BBString*(__cdecl* m_TJSONString_ToString)(TJSONString* pThis); // [ToString at 0x683EEA] [0x18] ()$
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
    BBString*(__cdecl* m_TJSONString_ToSource)(TJSONString* pThis, int a1); // [ToSource at 0x683EF9] [0x44] (i)$
    TJSONString*(__cdecl* fn_Create)(BBString* a1); // [Create at 0x683EB2] [0x48] ($):TJSONString
};


// Super: 0x88C54C
// 1 members
struct TJSONString {
    TJSONStringDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_Value; // 0xC <type_$>
};


