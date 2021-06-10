#pragma once

#include "defines.h"

// 4 methods, 2 functions
struct TFeatureDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_TFeature_New)(TFeature* pThis); // [New at 0x5EF67D] [0x10] ()i
    int(__cdecl* m_TFeature_Delete)(TFeature* pThis); // [Delete at 0x5EF6BC] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TFeature*(__cdecl* fn_Create)(Vector2* a1); // [Create at 0x5EF6F1] [0x30] (:Vector2):TFeature
    TFeature*(__cdecl* fn_Create2)(Vector2* a1, Vector2* a2, float a3); // [Create2 at 0x5EF727] [0x34] (:Vector2,:Vector2,f):TFeature
    int(__cdecl* m_TFeature_Reset)(TFeature* pThis); // [Reset at 0x5EF771] [0x38] ()i
    int(__cdecl* m_TFeature_Init)(TFeature* pThis, Vector2* a1, Vector2* a2, float a3); // [Init at 0x5EF7A7] [0x3C] (:Vector2,:Vector2,f)i
};


// 3 members
struct TFeature {
    TFeatureDecl* decl; // 0x0
    int    refs;  // 0x4
    Vector2* m_Position; // 0x8 <type_:Vector2>
    Vector2* m_Normal; // 0xC <type_:Vector2>
    float m_Distance; // 0x10 <type_f>
};


