#pragma once

#include "defines.h"

// 0 methods, 0 functions
struct ObjectDecl {
    void* pSuper;  // 0x0 0x0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    void* nothing_3; // 0x10
};


// 0 members
struct Object {
    ObjectDecl* decl; // 0x0
    int    refs;  // 0x4
};


