#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct D3DMATERIAL7Decl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 76(0x4C)
    int(__cdecl* m_D3DMATERIAL7_New)(D3DMATERIAL7* pThis); // [New at 0x7A49A4] [0x10] ()i
    int(__cdecl* m_D3DMATERIAL7_Delete)(D3DMATERIAL7* pThis); // [Delete at 0x7A4A1B] [0x14] ()i
};


// 17 members
struct D3DMATERIAL7 {
    D3DMATERIAL7Decl* decl; // 0x0
    int    refs;  // 0x4
    float m_diffuse_r; // 0x8 <type_f>
    float m_diffuse_g; // 0xC <type_f>
    float m_diffuse_b; // 0x10 <type_f>
    float m_diffuse_a; // 0x14 <type_f>
    float m_ambient_r; // 0x18 <type_f>
    float m_ambient_g; // 0x1C <type_f>
    float m_ambient_b; // 0x20 <type_f>
    float m_ambient_a; // 0x24 <type_f>
    float m_specular_r; // 0x28 <type_f>
    float m_specular_g; // 0x2C <type_f>
    float m_specular_b; // 0x30 <type_f>
    float m_specular_a; // 0x34 <type_f>
    float m_emissive_r; // 0x38 <type_f>
    float m_emissive_g; // 0x3C <type_f>
    float m_emissive_b; // 0x40 <type_f>
    float m_emissive_a; // 0x44 <type_f>
    float m_power; // 0x48 <type_f>
};


