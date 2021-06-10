#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct D3DRASTER_STATUSDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_D3DRASTER_STATUS_New)(D3DRASTER_STATUS* pThis); // [New at 0x7A1D14] [0x10] ()i
    int(__cdecl* m_D3DRASTER_STATUS_Delete)(D3DRASTER_STATUS* pThis); // [Delete at 0x7A1D44] [0x14] ()i
};


// 2 members
struct D3DRASTER_STATUS {
    D3DRASTER_STATUSDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_InVBlank; // 0x8 <type_i>
    int m_ScanLine; // 0xC <type_i>
};


