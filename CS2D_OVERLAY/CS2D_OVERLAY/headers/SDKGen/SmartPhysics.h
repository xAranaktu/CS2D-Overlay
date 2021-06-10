#pragma once

#include "defines.h"

// 2 methods, 7 functions
struct SmartPhysicsDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_SmartPhysics_New)(SmartPhysics* pThis); // [New at 0x60A179] [0x10] ()i
    int(__cdecl* m_SmartPhysics_Delete)(SmartPhysics* pThis); // [Delete at 0x60A19B] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Enable)(); // [Enable at 0x60A1A9] [0x30] ()i
    int(__cdecl* fn_Disable)(); // [Disable at 0x60A1C1] [0x34] ()i
    int(__cdecl* fn_Initialize)(); // [Initialize at 0x60A1D9] [0x38] ()i
    int(__cdecl* fn_Start)(); // [Start at 0x60A2AA] [0x3C] ()i
    int(__cdecl* fn_StartRound)(); // [StartRound at 0x60A2CE] [0x40] ()i
    int(__cdecl* fn_Update)(); // [Update at 0x60A46A] [0x44] ()i
    int(__cdecl* fn_SetCamera)(float a1, float a2); // [SetCamera at 0x60A55F] [0x48] (f,f)i
};


// 0 members
struct SmartPhysics {
    SmartPhysicsDecl* decl; // 0x0
    int    refs;  // 0x4
};


