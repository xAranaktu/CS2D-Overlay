#pragma once

#include "defines.h"

// 3 methods, 1 functions
struct THudItemHoverDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_THudItemHover_New)(THudItemHover* pThis); // [New at 0x75979F] [0x10] ()i
    int(__cdecl* m_THudItemHover_Delete)(THudItemHover* pThis); // [Delete at 0x7597DE] [0x14] ()i
    void* nothing_5; // 0x18
    int(__cdecl* m_THudItemHover_Compare)(THudItemHover* pThis, Object* a1); // [Compare at 0x759883] [0x1C] (:Object)i
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Add)(BBString* a1, BBString* a2, int a3, TList* a4); // [Add at 0x759813] [0x30] ($,$,i,:TList)i
};


// 3 members
struct THudItemHover {
    THudItemHoverDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_color; // 0x8 <type_$>
    BBString* m_txt; // 0xC <type_$>
    int m_order; // 0x10 <type_i>
};


