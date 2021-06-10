#pragma once

#include "defines.h"

// 2 methods, 4 functions
struct ApplicationDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_Application_New)(Application* pThis); // [New at 0x5CB62A] [0x10] ()i
    int(__cdecl* m_Application_Delete)(Application* pThis); // [Delete at 0x5CB64C] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    float(__cdecl* fn_GetPolledMouseX)(); // [GetPolledMouseX at 0x5CB65A] [0x30] ()f
    float(__cdecl* fn_GetPolledMouseY)(); // [GetPolledMouseY at 0x5CB671] [0x34] ()f
    float(__cdecl* fn_GetMouseX)(); // [GetMouseX at 0x5CB688] [0x38] ()f
    float(__cdecl* fn_GetMouseY)(); // [GetMouseY at 0x5CB697] [0x3C] ()f
};


// 0 members
struct Application {
    ApplicationDecl* decl; // 0x0
    int    refs;  // 0x4
};


