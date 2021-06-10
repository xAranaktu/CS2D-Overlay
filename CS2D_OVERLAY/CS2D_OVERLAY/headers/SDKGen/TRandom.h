#pragma once

#include "defines.h"

// 2 methods, 3 functions
struct TRandomDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TRandom_New)(TRandom* pThis); // [New at 0x789E34] [0x10] ()i
    int(__cdecl* m_TRandom_Delete)(TRandom* pThis); // [Delete at 0x789E56] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_GenerateSeed)(int a1); // [GenerateSeed at 0x789E64] [0x30] (i)i
    int(__cdecl* fn_GenerateNumber)(int a1); // [GenerateNumber at 0x789EBC] [0x34] (i)i
    int(__cdecl* fn_GetNumber)(int a1, int a2); // [GetNumber at 0x789EDE] [0x38] (i,i)i
};


// 0 members
struct TRandom {
    TRandomDecl* decl; // 0x0
    int    refs;  // 0x4
};


