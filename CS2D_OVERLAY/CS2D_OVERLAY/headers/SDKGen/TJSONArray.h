#pragma once

#include "defines.h"

// 7 methods, 1 functions
struct TJSONArrayDecl {
    void* pSuper;  // 0x0 0x88C54C
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_TJSONArray_New)(TJSONArray* pThis); // [New at 0x683929] [0x10] ()i
    int(__cdecl* m_TJSONArray_Delete)(TJSONArray* pThis); // [Delete at 0x683964] [0x14] ()i
    BBString*(__cdecl* m_TJSONArray_ToString)(TJSONArray* pThis); // [ToString at 0x6839DF] [0x18] ()$
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TJSONValue*(__cdecl* m_TJSONArray_GetByIndex)(TJSONArray* pThis, int a1); // [GetByIndex at 0x683BEB] [0x30] (i):TJSONValue
    void* nothing_12; // 0x34
    int(__cdecl* m_TJSONArray_SetByIndex)(TJSONArray* pThis, int a1, TJSONValue* a2); // [SetByIndex at 0x683C27] [0x38] (i,:TJSONValue)i
    void* nothing_14; // 0x3C
    TJSONValue*(__cdecl* m_TJSONArray_LookupValue)(TJSONArray* pThis, Object* a1); // [LookupValue at 0x683D6E] [0x40] (:Object):TJSONValue
    BBString*(__cdecl* m_TJSONArray_ToSource)(TJSONArray* pThis, int a1); // [ToSource at 0x683AAE] [0x44] (i)$
    TJSONArray*(__cdecl* fn_Create)(int a1); // [Create at 0x683997] [0x48] (i):TJSONArray
};


// Super: 0x88C54C
// 2 members
struct TJSONArray {
    TJSONArrayDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_Items; // 0xC <type_[]:TJSONValue>
    int m_AutoGrow; // 0x10 <type_i>
};


