#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct TD3D7SurfaceDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TD3D7Surface_New)(TD3D7Surface* pThis); // [New at 0x79FEA9] [0x10] ()i
    int(__cdecl* m_TD3D7Surface_Delete)(TD3D7Surface* pThis); // [Delete at 0x79FED2] [0x14] ()i
};


// 1 members
struct TD3D7Surface {
    TD3D7SurfaceDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_surf; // 0x8 <type_?IDirectDrawSurface7>
};


