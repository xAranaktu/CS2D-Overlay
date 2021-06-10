#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct TControllerDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_TController_New)(TController* pThis); // [New at 0x5E9D75] [0x10] ()i
    int(__cdecl* m_TController_Delete)(TController* pThis); // [Delete at 0x5E9DA9] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    void* nothing_12; // 0x34
    void* nothing_13; // 0x38
    void* nothing_14; // 0x3C
    int(__cdecl* m_TController_Update)(TController* pThis, float a1); // [Update at 0x7B6004] [0x40] (f)i
};


// 2 members
struct TController {
    TControllerDecl* decl; // 0x0
    int    refs;  // 0x4
    int m__isEnabled; // 0x8 <type_i>
    Object* m__tag; // 0xC <type_:Object>
};


