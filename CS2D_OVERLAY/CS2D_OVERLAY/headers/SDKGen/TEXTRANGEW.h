#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct TEXTRANGEWDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_TEXTRANGEW_New)(TEXTRANGEW* pThis); // [New at 0x7A5E73] [0x10] ()i
    int(__cdecl* m_TEXTRANGEW_Delete)(TEXTRANGEW* pThis); // [Delete at 0x7A5EAA] [0x14] ()i
};


// 3 members
struct TEXTRANGEW {
    TEXTRANGEWDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_cpMin; // 0x8 <type_i>
    int m_cpMax; // 0xC <type_i>
    void* m_lpStrText; // 0x10 <type_*s>
};


