#pragma once

#include "defines.h"

// 2 methods, 4 functions
struct Tp_lightpoolDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_Tp_lightpool_New)(Tp_lightpool* pThis); // [New at 0x65B70C] [0x10] ()i
    int(__cdecl* m_Tp_lightpool_Delete)(Tp_lightpool* pThis); // [Delete at 0x65B72E] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TLightSource*(__cdecl* fn_GetLight)(int a1, int a2, float a3, void* a4, int a5, float a6); // [GetLight at 0x65B73C] [0x30] (i,i,f,[]i,i,f):TLightSource
    int(__cdecl* fn_ReturnLight)(TLightSource* a1); // [ReturnLight at 0x65B854] [0x34] (:TLightSource)i
    int(__cdecl* fn_ClearPool)(); // [ClearPool at 0x65B889] [0x38] ()i
    int(__cdecl* fn_RecoverPool)(); // [RecoverPool at 0x65B902] [0x3C] ()i
};


// 0 members
struct Tp_lightpool {
    Tp_lightpoolDecl* decl; // 0x0
    int    refs;  // 0x4
};


