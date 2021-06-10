#pragma once

#include "defines.h"

// 12 methods, 0 functions
struct TWin32SystemDriverDecl {
    void* pSuper;  // 0x0 0x8FB344
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TWin32SystemDriver_New)(TWin32SystemDriver* pThis); // [New at 0x7B1949] [0x10] ()i
    int(__cdecl* m_TWin32SystemDriver_Delete)(TWin32SystemDriver* pThis); // [Delete at 0x7B1970] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TWin32SystemDriver_Poll)(TWin32SystemDriver* pThis); // [Poll at 0x7B1990] [0x30] ()i
    int(__cdecl* m_TWin32SystemDriver_Wait)(TWin32SystemDriver* pThis); // [Wait at 0x7B19A3] [0x34] ()i
    int(__cdecl* m_TWin32SystemDriver_MoveMouse)(TWin32SystemDriver* pThis, int a1, int a2); // [MoveMouse at 0x7B19B6] [0x38] (i,i)i
    int(__cdecl* m_TWin32SystemDriver_SetMouseVisible)(TWin32SystemDriver* pThis, int a1); // [SetMouseVisible at 0x7B19D4] [0x3C] (i)i
    int(__cdecl* m_TWin32SystemDriver_Notify)(TWin32SystemDriver* pThis, BBString* a1, int a2); // [Notify at 0x7B19EE] [0x40] ($,i)i
    int(__cdecl* m_TWin32SystemDriver_Confirm)(TWin32SystemDriver* pThis, BBString* a1, int a2); // [Confirm at 0x7B1A0C] [0x44] ($,i)i
    int(__cdecl* m_TWin32SystemDriver_Proceed)(TWin32SystemDriver* pThis, BBString* a1, int a2); // [Proceed at 0x7B1A25] [0x48] ($,i)i
    BBString*(__cdecl* m_TWin32SystemDriver_RequestFile)(TWin32SystemDriver* pThis, BBString* a1, BBString* a2, int a3, BBString* a4); // [RequestFile at 0x7B1A3E] [0x4C] ($,$,i,$)$
    BBString*(__cdecl* m_TWin32SystemDriver_RequestDir)(TWin32SystemDriver* pThis, BBString* a1, BBString* a2); // [RequestDir at 0x7B1C34] [0x50] ($,$)$
    int(__cdecl* m_TWin32SystemDriver_OpenURL)(TWin32SystemDriver* pThis, BBString* a1); // [OpenURL at 0x7B1C62] [0x54] ($)i
};


// Super: 0x8FB344
// 0 members
struct TWin32SystemDriver {
    TWin32SystemDriverDecl* decl; // 0x0
    int    refs;  // 0x4
};


