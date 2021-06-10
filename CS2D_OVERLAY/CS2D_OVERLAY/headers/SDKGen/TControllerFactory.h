#pragma once

#include "defines.h"

// 2 methods, 4 functions
struct TControllerFactoryDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TControllerFactory_New)(TControllerFactory* pThis); // [New at 0x5F1960] [0x10] ()i
    int(__cdecl* m_TControllerFactory_Delete)(TControllerFactory* pThis); // [Delete at 0x5F1982] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TFixedAngleSpring*(__cdecl* fn_CreateFixedAngleSpring)(TPhysicsSimulator* a1, TBody* a2, float a3, float a4); // [CreateFixedAngleSpring at 0x5F1990] [0x30] (:TPhysicsSimulator,:TBody,f,f):TFixedAngleSpring
    TFixedLinearSpring*(__cdecl* fn_CreateFixedLinearSpring)(TPhysicsSimulator* a1, TBody* a2, Vector2* a3, Vector2* a4, float a5, float a6); // [CreateFixedLinearSpring at 0x5F19D8] [0x34] (:TPhysicsSimulator,:TBody,:Vector2,:Vector2,f,f):TFixedLinearSpring
    TLinearSpring*(__cdecl* fn_CreateLinearSpring)(TPhysicsSimulator* a1, TBody* a2, Vector2* a3, TBody* a4, Vector2* a5, float a6, float a7); // [CreateLinearSpring at 0x5F1A28] [0x38] (:TPhysicsSimulator,:TBody,:Vector2,:TBody,:Vector2,f,f):TLinearSpring
    TAngleSpring*(__cdecl* fn_CreateAngleSpring)(TPhysicsSimulator* a1, TBody* a2, TBody* a3, float a4, float a5); // [CreateAngleSpring at 0x5F1A7C] [0x3C] (:TPhysicsSimulator,:TBody,:TBody,f,f):TAngleSpring
};


// 0 members
struct TControllerFactory {
    TControllerFactoryDecl* decl; // 0x0
    int    refs;  // 0x4
};


