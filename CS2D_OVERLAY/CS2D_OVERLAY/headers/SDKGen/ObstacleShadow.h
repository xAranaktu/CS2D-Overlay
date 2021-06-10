#pragma once

#include "defines.h"

// 2 methods, 2 functions
struct ObstacleShadowDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 36(0x24)
    int(__cdecl* m_ObstacleShadow_New)(ObstacleShadow* pThis); // [New at 0x5E6643] [0x10] ()i
    int(__cdecl* m_ObstacleShadow_Delete)(ObstacleShadow* pThis); // [Delete at 0x5E6690] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Create)(TImage* a1, float a2, float a3, float a4, float a5, float a6, int a7); // [Create at 0x5E66B2] [0x30] (:TImage,f,f,f,f,f,i)i
    int(__cdecl* fn_Draw)(float a1); // [Draw at 0x5E67C2] [0x34] (f)i
};


// 7 members
struct ObstacleShadow {
    ObstacleShadowDecl* decl; // 0x0
    int    refs;  // 0x4
    TImage* m_Image; // 0x8 <type_:TImage>
    float m_X; // 0xC <type_f>
    float m_Y; // 0x10 <type_f>
    float m_XS; // 0x14 <type_f>
    float m_YS; // 0x18 <type_f>
    float m_Rotation; // 0x1C <type_f>
    int m_frame; // 0x20 <type_i>
};


