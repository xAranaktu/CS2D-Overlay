#pragma once

#include "defines.h"

// 12 methods, 0 functions
struct TSystemDriverDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TSystemDriver_New)(TSystemDriver* pThis); // [New at 0x7B18D8] [0x10] ()i
    int(__cdecl* m_TSystemDriver_Delete)(TSystemDriver* pThis); // [Delete at 0x7B18FA] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TSystemDriver_Poll)(TSystemDriver* pThis); // [Poll at 0x7B6004] [0x30] ()i
    int(__cdecl* m_TSystemDriver_Wait)(TSystemDriver* pThis); // [Wait at 0x7B6004] [0x34] ()i
    int(__cdecl* m_TSystemDriver_MoveMouse)(TSystemDriver* pThis, int a1, int a2); // [MoveMouse at 0x7B6004] [0x38] (i,i)i
    int(__cdecl* m_TSystemDriver_SetMouseVisible)(TSystemDriver* pThis, int a1); // [SetMouseVisible at 0x7B6004] [0x3C] (i)i
    int(__cdecl* m_TSystemDriver_Notify)(TSystemDriver* pThis, BBString* a1, int a2); // [Notify at 0x7B6004] [0x40] ($,i)i
    int(__cdecl* m_TSystemDriver_Confirm)(TSystemDriver* pThis, BBString* a1, int a2); // [Confirm at 0x7B6004] [0x44] ($,i)i
    int(__cdecl* m_TSystemDriver_Proceed)(TSystemDriver* pThis, BBString* a1, int a2); // [Proceed at 0x7B6004] [0x48] ($,i)i
    BBString*(__cdecl* m_TSystemDriver_RequestFile)(TSystemDriver* pThis, BBString* a1, BBString* a2, int a3, BBString* a4); // [RequestFile at 0x7B6004] [0x4C] ($,$,i,$)$
    BBString*(__cdecl* m_TSystemDriver_RequestDir)(TSystemDriver* pThis, BBString* a1, BBString* a2); // [RequestDir at 0x7B6004] [0x50] ($,$)$
    int(__cdecl* m_TSystemDriver_OpenURL)(TSystemDriver* pThis, BBString* a1); // [OpenURL at 0x7B6004] [0x54] ($)i
};


// 0 members
struct TSystemDriver {
    TSystemDriverDecl* decl; // 0x0
    int    refs;  // 0x4
};


