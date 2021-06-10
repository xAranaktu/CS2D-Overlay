#pragma once

#include "defines.h"

// 4 methods, 0 functions
struct TJointDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TJoint_New)(TJoint* pThis); // [New at 0x5E9E71] [0x10] ()i
    int(__cdecl* m_TJoint_Delete)(TJoint* pThis); // [Delete at 0x5E9E9E] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    void* nothing_12; // 0x34
    int(__cdecl* m_TJoint_PreStep)(TJoint* pThis, float a1); // [PreStep at 0x7B6004] [0x38] (f)i
    int(__cdecl* m_TJoint_Update)(TJoint* pThis); // [Update at 0x7B6004] [0x3C] ()i
};


// 1 members
struct TJoint {
    TJointDecl* decl; // 0x0
    int    refs;  // 0x4
    Object* m__tag; // 0x8 <type_:Object>
};


