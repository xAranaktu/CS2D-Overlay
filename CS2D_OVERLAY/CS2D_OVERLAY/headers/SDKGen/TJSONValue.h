#pragma once

#include "defines.h"

// 8 methods, 0 functions
struct TJSONValueDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TJSONValue_New)(TJSONValue* pThis); // [New at 0x6833A0] [0x10] ()i
    int(__cdecl* m_TJSONValue_Delete)(TJSONValue* pThis); // [Delete at 0x6833C9] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TJSONValue*(__cdecl* m_TJSONValue_GetByIndex)(TJSONValue* pThis, int a1); // [GetByIndex at 0x6833D7] [0x30] (i):TJSONValue
    TJSONValue*(__cdecl* m_TJSONValue_GetByName)(TJSONValue* pThis, Object* a1); // [GetByName at 0x6833E5] [0x34] (:Object):TJSONValue
    int(__cdecl* m_TJSONValue_SetByIndex)(TJSONValue* pThis, int a1, TJSONValue* a2); // [SetByIndex at 0x6833F3] [0x38] (i,:TJSONValue)i
    int(__cdecl* m_TJSONValue_SetByName)(TJSONValue* pThis, Object* a1, TJSONValue* a2); // [SetByName at 0x683401] [0x3C] (:Object,:TJSONValue)i
    TJSONValue*(__cdecl* m_TJSONValue_LookupValue)(TJSONValue* pThis, Object* a1); // [LookupValue at 0x68340F] [0x40] (:Object):TJSONValue
    BBString*(__cdecl* m_TJSONValue_ToSource)(TJSONValue* pThis, int a1); // [ToSource at 0x7B6004] [0x44] (i)$
};


// 1 members
struct TJSONValue {
    TJSONValueDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_Class; // 0x8 <type_i>
};


