#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct D3DLIGHT9Decl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 112(0x70)
    int(__cdecl* m_D3DLIGHT9_New)(D3DLIGHT9* pThis); // [New at 0x7A2476] [0x10] ()i
    int(__cdecl* m_D3DLIGHT9_Delete)(D3DLIGHT9* pThis); // [Delete at 0x7A251C] [0x14] ()i
};


// 26 members
struct D3DLIGHT9 {
    D3DLIGHT9Decl* decl; // 0x0
    int    refs;  // 0x4
    int m_Type_; // 0x8 <type_i>
    float m_Diffuse_r; // 0xC <type_f>
    float m_Diffuse_g; // 0x10 <type_f>
    float m_Diffuse_b; // 0x14 <type_f>
    float m_Diffuse_a; // 0x18 <type_f>
    float m_Specular_r; // 0x1C <type_f>
    float m_Specular_g; // 0x20 <type_f>
    float m_Specular_b; // 0x24 <type_f>
    float m_Specular_a; // 0x28 <type_f>
    float m_Ambient_r; // 0x2C <type_f>
    float m_Ambient_g; // 0x30 <type_f>
    float m_Ambient_b; // 0x34 <type_f>
    float m_Ambient_a; // 0x38 <type_f>
    float m_Position_x; // 0x3C <type_f>
    float m_Position_y; // 0x40 <type_f>
    float m_Position_z; // 0x44 <type_f>
    float m_Direction_x; // 0x48 <type_f>
    float m_Direction_y; // 0x4C <type_f>
    float m_Direction_z; // 0x50 <type_f>
    float m_Range; // 0x54 <type_f>
    float m_Falloff; // 0x58 <type_f>
    float m_Attenuation0; // 0x5C <type_f>
    float m_Attenuation1; // 0x60 <type_f>
    float m_Attenuation2; // 0x64 <type_f>
    float m_Theta; // 0x68 <type_f>
    float m_Phi; // 0x6C <type_f>
};


