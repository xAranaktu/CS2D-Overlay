#pragma once

#include "defines.h"

// 4 methods, 0 functions
struct TKeyValueDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_TKeyValue_New)(TKeyValue* pThis); // [New at 0x799D33] [0x10] ()i
    int(__cdecl* m_TKeyValue_Delete)(TKeyValue* pThis); // [Delete at 0x799D6B] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    Object*(__cdecl* m_TKeyValue_Key)(TKeyValue* pThis); // [Key at 0x799DA0] [0x30] ():Object
    Object*(__cdecl* m_TKeyValue_Value)(TKeyValue* pThis); // [Value at 0x799DAF] [0x34] ():Object
};


// 2 members
struct TKeyValue {
    TKeyValueDecl* decl; // 0x0
    int    refs;  // 0x4
    Object* m__key; // 0x8 <type_:Object>
    Object* m__value; // 0xC <type_:Object>
};


