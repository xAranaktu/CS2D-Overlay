#pragma once

#include "defines.h"

// 5 methods, 0 functions
struct TCStandardIODecl {
    void* pSuper;  // 0x0 0x8FC2BC
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TCStandardIO_New)(TCStandardIO* pThis); // [New at 0x7AEF1A] [0x10] ()i
    int(__cdecl* m_TCStandardIO_Delete)(TCStandardIO* pThis); // [Delete at 0x7AEF3C] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    void* nothing_12; // 0x34
    void* nothing_13; // 0x38
    void* nothing_14; // 0x3C
    int(__cdecl* m_TCStandardIO_Flush)(TCStandardIO* pThis); // [Flush at 0x7AEF5C] [0x40] ()i
    void* nothing_16; // 0x44
    int(__cdecl* m_TCStandardIO_Read)(TCStandardIO* pThis, void* a1, int a2); // [Read at 0x7AEF78] [0x48] (*b,i)i
    int(__cdecl* m_TCStandardIO_Write)(TCStandardIO* pThis, void* a1, int a2); // [Write at 0x7AEF99] [0x4C] (*b,i)i
};


// Super: 0x8FC2BC
// 0 members
struct TCStandardIO {
    TCStandardIODecl* decl; // 0x0
    int    refs;  // 0x4
};


