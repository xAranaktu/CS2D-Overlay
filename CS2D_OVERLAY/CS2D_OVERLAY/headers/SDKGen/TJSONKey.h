#pragma once

#include "defines.h"

// 4 methods, 0 functions
struct TJSONKeyDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TJSONKey_New)(TJSONKey* pThis); // [New at 0x6832BC] [0x10] ()i
    int(__cdecl* m_TJSONKey_Delete)(TJSONKey* pThis); // [Delete at 0x6832E9] [0x14] ()i
    BBString*(__cdecl* m_TJSONKey_ToString)(TJSONKey* pThis); // [ToString at 0x68330B] [0x18] ()$
    int(__cdecl* m_TJSONKey_Compare)(TJSONKey* pThis, Object* a1); // [Compare at 0x683335] [0x1C] (:Object)i
};


// 1 members
struct TJSONKey {
    TJSONKeyDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_Value; // 0x8 <type_$>
};


