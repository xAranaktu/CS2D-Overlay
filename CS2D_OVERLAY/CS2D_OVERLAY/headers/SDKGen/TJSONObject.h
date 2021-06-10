#pragma once

#include "defines.h"

// 7 methods, 0 functions
struct TJSONObjectDecl {
    void* pSuper;  // 0x0 0x88C54C
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_TJSONObject_New)(TJSONObject* pThis); // [New at 0x68341B] [0x10] ()i
    int(__cdecl* m_TJSONObject_Delete)(TJSONObject* pThis); // [Delete at 0x68346A] [0x14] ()i
    BBString*(__cdecl* m_TJSONObject_ToString)(TJSONObject* pThis); // [ToString at 0x6834AE] [0x18] ()$
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    TJSONValue*(__cdecl* m_TJSONObject_GetByName)(TJSONObject* pThis, Object* a1); // [GetByName at 0x683784] [0x34] (:Object):TJSONValue
    void* nothing_13; // 0x38
    int(__cdecl* m_TJSONObject_SetByName)(TJSONObject* pThis, Object* a1, TJSONValue* a2); // [SetByName at 0x6837AE] [0x3C] (:Object,:TJSONValue)i
    TJSONValue*(__cdecl* m_TJSONObject_LookupValue)(TJSONObject* pThis, Object* a1); // [LookupValue at 0x68389C] [0x40] (:Object):TJSONValue
    BBString*(__cdecl* m_TJSONObject_ToSource)(TJSONObject* pThis, int a1); // [ToSource at 0x6835E0] [0x44] (i)$
};


// Super: 0x88C54C
// 2 members
struct TJSONObject {
    TJSONObjectDecl* decl; // 0x0
    int    refs;  // 0x4
    TMap* m_Items; // 0xC <type_:TMap>
    TList* m_List; // 0x10 <type_:TList>
};


