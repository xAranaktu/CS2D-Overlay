#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct DDRGBADecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_DDRGBA_New)(DDRGBA* pThis); // [New at 0x7A3631] [0x10] ()i
    int(__cdecl* m_DDRGBA_Delete)(DDRGBA* pThis); // [Delete at 0x7A3663] [0x14] ()i
};


// 4 members
struct DDRGBA {
    DDRGBADecl* decl; // 0x0
    int    refs;  // 0x4
    char m_red; // 0x8 <type_b>
    char m_green; // 0x9 <type_b>
    char m_blue; // 0xA <type_b>
    char m_alpha; // 0xB <type_b>
};


