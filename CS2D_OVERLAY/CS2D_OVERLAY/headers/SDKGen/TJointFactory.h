#pragma once

#include "defines.h"

// 2 methods, 9 functions
struct TJointFactoryDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TJointFactory_New)(TJointFactory* pThis); // [New at 0x5F1671] [0x10] ()i
    int(__cdecl* m_TJointFactory_Delete)(TJointFactory* pThis); // [Delete at 0x5F1693] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TFixedRevoluteJoint*(__cdecl* fn_CreateFixedRevoluteJoint)(TPhysicsSimulator* a1, TBody* a2, Vector2* a3); // [CreateFixedRevoluteJoint at 0x5F16A1] [0x30] (:TPhysicsSimulator,:TBody,:Vector2):TFixedRevoluteJoint
    TRevoluteJoint*(__cdecl* fn_CreateRevoluteJoint)(TPhysicsSimulator* a1, TBody* a2, TBody* a3, Vector2* a4); // [CreateRevoluteJoint at 0x5F16FC] [0x34] (:TPhysicsSimulator,:TBody,:TBody,:Vector2):TRevoluteJoint
    TAngleJoint*(__cdecl* fn_CreateAngleJoint)(TPhysicsSimulator* a1, TBody* a2, TBody* a3, float a4); // [CreateAngleJoint at 0x5F173A] [0x38] (:TPhysicsSimulator,:TBody,:TBody,f):TAngleJoint
    TFixedAngleJoint*(__cdecl* fn_CreateFixedAngleJoint)(TPhysicsSimulator* a1, TBody* a2, float a3); // [CreateFixedAngleJoint at 0x5F177D] [0x3C] (:TPhysicsSimulator,:TBody,f):TFixedAngleJoint
    TAngleLimitJoint*(__cdecl* fn_CreateAngleLimitJoint)(TPhysicsSimulator* a1, TBody* a2, TBody* a3, float a4, float a5); // [CreateAngleLimitJoint at 0x5F17BC] [0x40] (:TPhysicsSimulator,:TBody,:TBody,f,f):TAngleLimitJoint
    TFixedAngleLimitJoint*(__cdecl* fn_CreateFixedAngleLimitJoint)(TPhysicsSimulator* a1, TBody* a2, float a3, float a4); // [CreateFixedAngleLimitJoint at 0x5F1808] [0x44] (:TPhysicsSimulator,:TBody,f,f):TFixedAngleLimitJoint
    TPinJoint*(__cdecl* fn_CreatePinJoint)(TPhysicsSimulator* a1, TBody* a2, Vector2* a3, TBody* a4, Vector2* a5); // [CreatePinJoint at 0x5F1850] [0x48] (:TPhysicsSimulator,:TBody,:Vector2,:TBody,:Vector2):TPinJoint
    TSliderJoint*(__cdecl* fn_CreateSliderJoint)(TPhysicsSimulator* a1, TBody* a2, Vector2* a3, TBody* a4, Vector2* a5, float a6, float a7); // [CreateSliderJoint at 0x5F1892] [0x4C] (:TPhysicsSimulator,:TBody,:Vector2,:TBody,:Vector2,f,f):TSliderJoint
    TInteractiveAngleJoint*(__cdecl* fn_CreateInteractiveAngleJoint)(TPhysicsSimulator* a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, Vector2* a9, TBody* a10, TBody* a11); // [CreateInteractiveAngleJoint at 0x5F18E6] [0x50] (:TPhysicsSimulator,f,f,f,f,f,f,f,:Vector2,:TBody,:TBody):TInteractiveAngleJoint
};


// 0 members
struct TJointFactory {
    TJointFactoryDecl* decl; // 0x0
    int    refs;  // 0x4
};


