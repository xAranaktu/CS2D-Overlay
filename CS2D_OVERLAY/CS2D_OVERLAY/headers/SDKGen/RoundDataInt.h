#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct RoundDataIntDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_RoundDataInt_New)(RoundDataInt* pThis); // [New at 0x789CAF] [0x10] ()i
    int(__cdecl* m_RoundDataInt_Delete)(RoundDataInt* pThis); // [Delete at 0x789CD8] [0x14] ()i
};


// 1 members
struct RoundDataInt {
    RoundDataIntDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_value; // 0x8 <type_i>
};


