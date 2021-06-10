#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct TrpfDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 18(0x12)
    int(__cdecl* m_Trpf_New)(Trpf* pThis); // [New at 0x67CFF5] [0x10] ()i
    int(__cdecl* m_Trpf_Delete)(Trpf* pThis); // [Delete at 0x67D02C] [0x14] ()i
};


// 3 members
struct Trpf {
    TrpfDecl* decl; // 0x0
    int    refs;  // 0x4
    char m_flags; // 0x8 <type_b>
    TBank* m_data; // 0xC <type_:TBank>
    short m_rot; // 0x10 <type_s>
};


