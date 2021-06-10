#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct D3DSURFACE_DESCDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 40(0x28)
    int(__cdecl* m_D3DSURFACE_DESC_New)(D3DSURFACE_DESC* pThis); // [New at 0x7A1DE4] [0x10] ()i
    int(__cdecl* m_D3DSURFACE_DESC_Delete)(D3DSURFACE_DESC* pThis); // [Delete at 0x7A1E3E] [0x14] ()i
};


// 8 members
struct D3DSURFACE_DESC {
    D3DSURFACE_DESCDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_Format; // 0x8 <type_i>
    int m_Type_; // 0xC <type_i>
    int m_Usage; // 0x10 <type_i>
    int m_Pool; // 0x14 <type_i>
    int m_MultiSampleType; // 0x18 <type_i>
    int m_MultiSampleQuality; // 0x1C <type_i>
    int m_Width; // 0x20 <type_i>
    int m_Height; // 0x24 <type_i>
};


