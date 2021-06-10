#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct D3DMATERIAL9Decl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 76(0x4C)
    int(__cdecl* m_D3DMATERIAL9_New)(D3DMATERIAL9* pThis); // [New at 0x7A23F1] [0x10] ()i
    int(__cdecl* m_D3DMATERIAL9_Delete)(D3DMATERIAL9* pThis); // [Delete at 0x7A2468] [0x14] ()i
};


// 17 members
struct D3DMATERIAL9 {
    D3DMATERIAL9Decl* decl; // 0x0
    int    refs;  // 0x4
    float m_Diffuse_r; // 0x8 <type_f>
    float m_Diffuse_g; // 0xC <type_f>
    float m_Diffuse_b; // 0x10 <type_f>
    float m_Diffuse_a; // 0x14 <type_f>
    float m_Ambient_r; // 0x18 <type_f>
    float m_Ambient_g; // 0x1C <type_f>
    float m_Ambient_b; // 0x20 <type_f>
    float m_Ambient_a; // 0x24 <type_f>
    float m_Specular_r; // 0x28 <type_f>
    float m_Specular_g; // 0x2C <type_f>
    float m_Specular_b; // 0x30 <type_f>
    float m_Specular_a; // 0x34 <type_f>
    float m_Emissive_r; // 0x38 <type_f>
    float m_Emissive_g; // 0x3C <type_f>
    float m_Emissive_b; // 0x40 <type_f>
    float m_Emissive_a; // 0x44 <type_f>
    float m_Power; // 0x48 <type_f>
};


