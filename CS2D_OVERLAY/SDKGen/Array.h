#pragma once

#include "defines.h"

// 0 methods, 0 functions
struct ArrayDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x58F8A0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 0(0x0)
    void* nothing_3; // 0x10
};


// 0 members
struct Array {
    ArrayDecl* decl; // 0x0
    unsigned int    kind;  // 0x4 DebugeclCodes (?)
};


