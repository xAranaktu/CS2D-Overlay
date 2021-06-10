#pragma once

#include "defines.h"

// 0 methods, 0 functions
struct nilDecl {
    void* pSuper;  // 0x0 0x896800
    void* pFree;  // 0x4 0x1C
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 7884651(0x784F6B)
    void* nothing_3; // 0x10
};


// Super: 0x896800
// 0 members
struct nil {
    nilDecl* decl; // 0x0
    int    refs;  // 0x4
};


