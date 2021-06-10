#pragma once

#include "defines.h"

// 2 methods, 2 functions
struct TedDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_Ted_New)(Ted* pThis); // [New at 0x650A17] [0x10] ()i
    int(__cdecl* m_Ted_Delete)(Ted* pThis); // [Delete at 0x650A44] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_update)(); // [update at 0x650A66] [0x30] ()i
    int(__cdecl* fn_add)(Te* a1); // [add at 0x650B41] [0x34] (:Te)i
};


// 1 members
struct Ted {
    TedDecl* decl; // 0x0
    int    refs;  // 0x4
    Te* m_e; // 0x8 <type_:Te>
};


