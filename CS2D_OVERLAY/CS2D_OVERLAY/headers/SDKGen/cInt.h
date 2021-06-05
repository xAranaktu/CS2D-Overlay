#pragma once

#include "defines.h"

// 8 methods, 3 functions
struct cIntDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_cInt_New)(cInt* pThis); // [New at 0x5C1C08] [0x10] ()i
    int(__cdecl* m_cInt_Delete)(cInt* pThis); // [Delete at 0x5C1C4D] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    cInt*(__cdecl* fn_Create)(int a1); // [Create at 0x5C1C6F] [0x30] (i):cInt
    int(__cdecl* m_cInt_Set)(cInt* pThis, int a1); // [Set at 0x5C1CA9] [0x34] (i)i
    int(__cdecl* m_cInt_Inc)(cInt* pThis, int a1); // [Inc at 0x5C1D0E] [0x38] (i)i
    int(__cdecl* m_cInt_Get)(cInt* pThis); // [Get at 0x5C1D2E] [0x3C] ()i
    int(__cdecl* m_cInt_SetCheck)(cInt* pThis); // [SetCheck at 0x5C1D40] [0x40] ()i
    int(__cdecl* m_cInt_Update)(cInt* pThis); // [Update at 0x5C1D6F] [0x44] ()i
    int(__cdecl* m_cInt_remove)(cInt* pThis); // [remove at 0x5C1DB7] [0x48] ()i
    int(__cdecl* fn_UpdateAll)(); // [UpdateAll at 0x5C1DD7] [0x4C] ()i
    int(__cdecl* fn_Clear)(); // [Clear at 0x5C1E34] [0x50] ()i
};


// 3 members
struct cInt {
    cIntDecl* decl; // 0x0
    int refs;
    int m_value; // 0x8 <type_i>
    int m_valueRND; // 0xC <type_i>
    void* m_check; // 0x10 <type_[]i>
};


