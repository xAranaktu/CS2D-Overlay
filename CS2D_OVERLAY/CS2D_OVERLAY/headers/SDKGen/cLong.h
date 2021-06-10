#pragma once

#include "defines.h"

// 8 methods, 3 functions
struct cLongDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 32(0x20)
    int(__cdecl* m_cLong_New)(cLong* pThis); // [New at 0x5C186C] [0x10] ()i
    int(__cdecl* m_cLong_Delete)(cLong* pThis); // [Delete at 0x5C18BF] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    cLong*(__cdecl* fn_Create)(long long a1); // [Create at 0x5C18E1] [0x30] (l):cLong
    int(__cdecl* m_cLong_Set)(cLong* pThis, long long a1); // [Set at 0x5C192A] [0x34] (l)i
    int(__cdecl* m_cLong_Inc)(cLong* pThis, long long a1); // [Inc at 0x5C19A9] [0x38] (l)i
    long long(__cdecl* m_cLong_Get)(cLong* pThis); // [Get at 0x5C19EC] [0x3C] ()l
    int(__cdecl* m_cLong_SetCheck)(cLong* pThis); // [SetCheck at 0x5C1A23] [0x40] ()i
    int(__cdecl* m_cLong_Update)(cLong* pThis); // [Update at 0x5C1AA3] [0x44] ()i
    int(__cdecl* m_cLong_remove)(cLong* pThis); // [remove at 0x5C1B6F] [0x48] ()i
    int(__cdecl* fn_UpdateAll)(); // [UpdateAll at 0x5C1B8F] [0x4C] ()i
    int(__cdecl* fn_Clear)(); // [Clear at 0x5C1BEC] [0x50] ()i
};


// 3 members
struct cLong {
    cLongDecl* decl; // 0x0
    int    refs;  // 0x4
    long long m_value; // 0x8 <type_l>
    void* m_check; // 0x10 <type_[]l>
    long long m_valueRND; // 0x18 <type_l>
};


