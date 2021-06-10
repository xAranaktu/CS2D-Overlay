#pragma once

#include "defines.h"

// 4 methods, 0 functions
struct TJSONNullDecl {
    void* pSuper;  // 0x0 0x88C54C
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TJSONNull_New)(TJSONNull* pThis); // [New at 0x684071] [0x10] ()i
    int(__cdecl* m_TJSONNull_Delete)(TJSONNull* pThis); // [Delete at 0x68409A] [0x14] ()i
    BBString*(__cdecl* m_TJSONNull_ToString)(TJSONNull* pThis); // [ToString at 0x6840BA] [0x18] ()$
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
    BBString*(__cdecl* m_TJSONNull_ToSource)(TJSONNull* pThis, int a1); // [ToSource at 0x6840C8] [0x44] (i)$
};


// Super: 0x88C54C
// 0 members
struct TJSONNull {
    TJSONNullDecl* decl; // 0x0
    int    refs;  // 0x4
};


