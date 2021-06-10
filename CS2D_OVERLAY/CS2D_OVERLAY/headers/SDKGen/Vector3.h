#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct Vector3Decl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_Vector3_New)(Vector3* pThis); // [New at 0x5ED4FA] [0x10] ()i
    int(__cdecl* m_Vector3_Delete)(Vector3* pThis); // [Delete at 0x5ED52B] [0x14] ()i
};


// 3 members
struct Vector3 {
    Vector3Decl* decl; // 0x0
    int    refs;  // 0x4
    float m_X; // 0x8 <type_f>
    float m_Y; // 0xC <type_f>
    float m_Z; // 0x10 <type_f>
};


