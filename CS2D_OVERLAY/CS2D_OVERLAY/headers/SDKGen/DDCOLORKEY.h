#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct DDCOLORKEYDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_DDCOLORKEY_New)(DDCOLORKEY* pThis); // [New at 0x7A3671] [0x10] ()i
    int(__cdecl* m_DDCOLORKEY_Delete)(DDCOLORKEY* pThis); // [Delete at 0x7A36A1] [0x14] ()i
};


// 2 members
struct DDCOLORKEY {
    DDCOLORKEYDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_dwColorSpaceLowValue; // 0x8 <type_i>
    int m_dwColorSpaceHighValue; // 0xC <type_i>
};


