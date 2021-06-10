#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct DDARGBDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_DDARGB_New)(DDARGB* pThis); // [New at 0x7A35F1] [0x10] ()i
    int(__cdecl* m_DDARGB_Delete)(DDARGB* pThis); // [Delete at 0x7A3623] [0x14] ()i
};


// 4 members
struct DDARGB {
    DDARGBDecl* decl; // 0x0
    int    refs;  // 0x4
    char m_blue; // 0x8 <type_b>
    char m_green; // 0x9 <type_b>
    char m_red; // 0xA <type_b>
    char m_alpha; // 0xB <type_b>
};


