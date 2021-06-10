#pragma once

#include "defines.h"

// 18 methods, 1 functions
struct TJSONDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_TJSON_New)(TJSON* pThis); // [New at 0x684BCB] [0x10] ()i
    int(__cdecl* m_TJSON_Delete)(TJSON* pThis); // [Delete at 0x684C0B] [0x14] ()i
    BBString*(__cdecl* m_TJSON_ToString)(TJSON* pThis); // [ToString at 0x6858B9] [0x18] ()$
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TJSON*(__cdecl* fn_Create)(Object* a1); // [Create at 0x684C40] [0x30] (:Object):TJSON
    TJSONValue*(__cdecl* m_TJSON_Read)(TJSON* pThis, Object* a1); // [Read at 0x684C6B] [0x34] (:Object):TJSONValue
    int(__cdecl* m_TJSON_Write)(TJSON* pThis, Object* a1); // [Write at 0x684E85] [0x38] (:Object)i
    TJSONValue*(__cdecl* m_TJSON_ParseString)(TJSON* pThis, Object* a1); // [ParseString at 0x684F63] [0x3C] (:Object):TJSONValue
    TJSONValue*(__cdecl* m_TJSON_Lookup)(TJSON* pThis, BBString* a1); // [Lookup at 0x68501B] [0x40] ($):TJSONValue
    int(__cdecl* m_TJSON_SetValue)(TJSON* pThis, BBString* a1, Object* a2); // [SetValue at 0x685147] [0x44] ($,:Object)i
    TJSONValue*(__cdecl* m_TJSON_GetValue)(TJSON* pThis, BBString* a1); // [GetValue at 0x68539F] [0x48] ($):TJSONValue
    void*(__cdecl* m_TJSON_GetNumber)(TJSON* pThis, BBString* a1); // [GetNumber at 0x6853C6] [0x4C] ($)d
    BBString*(__cdecl* m_TJSON_GetString)(TJSON* pThis, BBString* a1); // [GetString at 0x685418] [0x50] ($)$
    int(__cdecl* m_TJSON_GetBoolean)(TJSON* pThis, BBString* a1); // [GetBoolean at 0x68546D] [0x54] ($)i
    TJSONObject*(__cdecl* m_TJSON_GetObject)(TJSON* pThis, BBString* a1); // [GetObject at 0x6854C2] [0x58] ($):TJSONObject
    TJSONArray*(__cdecl* m_TJSON_GetArray)(TJSON* pThis, BBString* a1); // [GetArray at 0x685514] [0x5C] ($):TJSONArray
    void*(__cdecl* m_TJSON_GetArrayInt)(TJSON* pThis, BBString* a1); // [GetArrayInt at 0x685566] [0x60] ($)[]i
    void*(__cdecl* m_TJSON_GetArrayDouble)(TJSON* pThis, BBString* a1); // [GetArrayDouble at 0x685678] [0x64] ($)[]d
    void*(__cdecl* m_TJSON_GetArrayString)(TJSON* pThis, BBString* a1); // [GetArrayString at 0x685782] [0x68] ($)[]$
    BBString*(__cdecl* m_TJSON_ToSource)(TJSON* pThis, int a1); // [ToSource at 0x6858D1] [0x6C] (i)$
};


// 2 members
struct TJSON {
    TJSONDecl* decl; // 0x0
    int    refs;  // 0x4
    TJSONValue* m_Root; // 0x8 <type_:TJSONValue>
    TJSONKey* m_LookupKey; // 0xC <type_:TJSONKey>
};


