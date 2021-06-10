#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct TINITCOMMONCONTROLSEXDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_TINITCOMMONCONTROLSEX_New)(TINITCOMMONCONTROLSEX* pThis); // [New at 0x7A5428] [0x10] ()i
    int(__cdecl* m_TINITCOMMONCONTROLSEX_Delete)(TINITCOMMONCONTROLSEX* pThis); // [Delete at 0x7A5458] [0x14] ()i
};


// 2 members
struct TINITCOMMONCONTROLSEX {
    TINITCOMMONCONTROLSEXDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_dwSize; // 0x8 <type_i>
    int m_dwICC; // 0xC <type_i>
};


