#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct TJointListDecl {
    void* pSuper;  // 0x0 0x87372C
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TJointList_New)(TJointList* pThis); // [New at 0x5E9E2F] [0x10] ()i
    int(__cdecl* m_TJointList_Delete)(TJointList* pThis); // [Delete at 0x5E9E51] [0x14] ()i
};


// Super: 0x87372C
// 0 members
struct TJointList {
    TJointListDecl* decl; // 0x0
    int    refs;  // 0x4
};


