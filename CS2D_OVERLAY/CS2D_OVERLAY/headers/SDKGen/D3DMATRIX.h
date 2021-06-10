#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct D3DMATRIXDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 72(0x48)
    int(__cdecl* m_D3DMATRIX_New)(D3DMATRIX* pThis); // [New at 0x7A1C48] [0x10] ()i
    int(__cdecl* m_D3DMATRIX_Delete)(D3DMATRIX* pThis); // [Delete at 0x7A1CBA] [0x14] ()i
};


// 16 members
struct D3DMATRIX {
    D3DMATRIXDecl* decl; // 0x0
    int    refs;  // 0x4
    float m__11; // 0x8 <type_f>
    float m__12; // 0xC <type_f>
    float m__13; // 0x10 <type_f>
    float m__14; // 0x14 <type_f>
    float m__21; // 0x18 <type_f>
    float m__22; // 0x1C <type_f>
    float m__23; // 0x20 <type_f>
    float m__24; // 0x24 <type_f>
    float m__31; // 0x28 <type_f>
    float m__32; // 0x2C <type_f>
    float m__33; // 0x30 <type_f>
    float m__34; // 0x34 <type_f>
    float m__41; // 0x38 <type_f>
    float m__42; // 0x3C <type_f>
    float m__43; // 0x40 <type_f>
    float m__44; // 0x44 <type_f>
};


