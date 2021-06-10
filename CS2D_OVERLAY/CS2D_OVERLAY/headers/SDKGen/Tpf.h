#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct TpfDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_Tpf_New)(Tpf* pThis); // [New at 0x5BABBE] [0x10] ()i
    int(__cdecl* m_Tpf_Delete)(Tpf* pThis); // [Delete at 0x5BABF5] [0x14] ()i
};


// 3 members
struct Tpf {
    TpfDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_x; // 0x8 <type_i>
    int m_y; // 0xC <type_i>
    int m_c; // 0x10 <type_i>
};


