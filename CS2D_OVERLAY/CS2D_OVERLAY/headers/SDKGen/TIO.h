#pragma once

#include "defines.h"

// 10 methods, 0 functions
struct TIODecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TIO_New)(TIO* pThis); // [New at 0x7B3CA5] [0x10] ()i
    int(__cdecl* m_TIO_Delete)(TIO* pThis); // [Delete at 0x7B3CC7] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TIO_Eof)(TIO* pThis); // [Eof at 0x7B3CE1] [0x30] ()i
    int(__cdecl* m_TIO_Pos)(TIO* pThis); // [Pos at 0x7B3D0F] [0x34] ()i
    int(__cdecl* m_TIO_Size)(TIO* pThis); // [Size at 0x7B3D1D] [0x38] ()i
    int(__cdecl* m_TIO_Seek)(TIO* pThis, int a1); // [Seek at 0x7B3D2B] [0x3C] (i)i
    int(__cdecl* m_TIO_Flush)(TIO* pThis); // [Flush at 0x7B3D39] [0x40] ()i
    int(__cdecl* m_TIO_Close)(TIO* pThis); // [Close at 0x7B3D47] [0x44] ()i
    int(__cdecl* m_TIO_Read)(TIO* pThis, void* a1, int a2); // [Read at 0x7B3D55] [0x48] (*b,i)i
    int(__cdecl* m_TIO_Write)(TIO* pThis, void* a1, int a2); // [Write at 0x7B3D70] [0x4C] (*b,i)i
};


// 0 members
struct TIO {
    TIODecl* decl; // 0x0
    int    refs;  // 0x4
};


