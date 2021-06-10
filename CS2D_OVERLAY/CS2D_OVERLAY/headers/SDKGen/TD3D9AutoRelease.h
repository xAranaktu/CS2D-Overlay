#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct TD3D9AutoReleaseDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TD3D9AutoRelease_New)(TD3D9AutoRelease* pThis); // [New at 0x79F002] [0x10] ()i
    int(__cdecl* m_TD3D9AutoRelease_Delete)(TD3D9AutoRelease* pThis); // [Delete at 0x79F02B] [0x14] ()i
};


// 1 members
struct TD3D9AutoRelease {
    TD3D9AutoReleaseDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_unk; // 0x8 <type_?IUnknown>
};


