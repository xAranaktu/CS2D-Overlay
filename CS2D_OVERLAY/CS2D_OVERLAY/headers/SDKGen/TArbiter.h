#pragma once

#include "defines.h"

// 16 methods, 1 functions
struct TArbiterDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 184(0xB8)
    int(__cdecl* m_TArbiter_New)(TArbiter* pThis); // [New at 0x5E7234] [0x10] ()i
    int(__cdecl* m_TArbiter_Delete)(TArbiter* pThis); // [Delete at 0x5E7407] [0x14] ()i
    void* nothing_5; // 0x18
    int(__cdecl* m_TArbiter_Compare)(TArbiter* pThis, Object* a1); // [Compare at 0x5E8746] [0x1C] (:Object)i
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TGeom*(__cdecl* m_TArbiter_GetGeomA)(TArbiter* pThis); // [GetGeomA at 0x5E75B9] [0x30] ():TGeom
    int(__cdecl* m_TArbiter_SetGeomA)(TArbiter* pThis, TGeom* a1); // [SetGeomA at 0x5E75C8] [0x34] (:TGeom)i
    TGeom*(__cdecl* m_TArbiter_GetGeomB)(TArbiter* pThis); // [GetGeomB at 0x5E75F7] [0x38] ():TGeom
    int(__cdecl* m_TArbiter_SetGeomB)(TArbiter* pThis, TGeom* a1); // [SetGeomB at 0x5E7606] [0x3C] (:TGeom)i
    TArbiter*(__cdecl* fn_CreateArbiter)(TGeom* a1, TGeom* a2, TPhysicsSimulator* a3); // [CreateArbiter at 0x5E7635] [0x40] (:TGeom,:TGeom,:TPhysicsSimulator):TArbiter
    int(__cdecl* m_TArbiter_ConstructArbiter)(TArbiter* pThis, TGeom* a1, TGeom* a2, TPhysicsSimulator* a3); // [ConstructArbiter at 0x5E766B] [0x44] (:TGeom,:TGeom,:TPhysicsSimulator)i
    int(__cdecl* m_TArbiter__InitializeContactLists)(TArbiter* pThis, int a1); // [_InitializeContactLists at 0x5E7791] [0x48] (i)i
    int(__cdecl* m_TArbiter_GetContactCount)(TArbiter* pThis); // [GetContactCount at 0x5E7833] [0x4C] ()i
    TContactList*(__cdecl* m_TArbiter_GetContactList)(TArbiter* pThis); // [GetContactList at 0x5E784A] [0x50] ():TContactList
    int(__cdecl* m_TArbiter_Reset)(TArbiter* pThis); // [Reset at 0x5E7859] [0x54] ()i
    int(__cdecl* m_TArbiter_PreStepImpulse)(TArbiter* pThis, float a1); // [PreStepImpulse at 0x5E78CA] [0x58] (f)i
    int(__cdecl* m_TArbiter_ApplyImpulse)(TArbiter* pThis); // [ApplyImpulse at 0x5E7C80] [0x5C] ()i
    int(__cdecl* m_TArbiter_Collide)(TArbiter* pThis); // [Collide at 0x5E819B] [0x60] ()i
    int(__cdecl* m_TArbiter__Collide)(TArbiter* pThis, TGeom* a1, TGeom* a2, TContactList* a3); // [_Collide at 0x5E8353] [0x64] (:TGeom,:TGeom,:TContactList)i
};


// 44 members
struct TArbiter {
    TArbiterDecl* decl; // 0x0
    int    refs;  // 0x4
    TGeom* m_geometryA; // 0x8 <type_:TGeom>
    TGeom* m_geometryB; // 0xC <type_:TGeom>
    TPhysicsSimulator* m__physicsSimulator; // 0x10 <type_:TPhysicsSimulator>
    float m__frictionCoefficientCombined; // 0x14 <type_f>
    TContactList* m__contactlist; // 0x18 <type_:TContactList>
    TContactList* m__newContactList; // 0x1C <type_:TContactList>
    TContactList* m__mergedContactList; // 0x20 <type_:TContactList>
    Vector2* m__vec1; // 0x24 <type_:Vector2>
    Vector2* m__vec2; // 0x28 <type_:Vector2>
    Vector2* m__vec3; // 0x2C <type_:Vector2>
    Vector2* m__vec4; // 0x30 <type_:Vector2>
    Vector2* m__vec5; // 0x34 <type_:Vector2>
    float m__float1; // 0x38 <type_f>
    float m__float2; // 0x3C <type_f>
    Vector2* m__r1; // 0x40 <type_:Vector2>
    Vector2* m__r2; // 0x44 <type_:Vector2>
    float m__rn1; // 0x48 <type_f>
    float m__rn2; // 0x4C <type_f>
    float m__rt1; // 0x50 <type_f>
    float m__rt2; // 0x54 <type_f>
    float m__kTangent; // 0x58 <type_f>
    float m__minf; // 0x5C <type_f>
    float m__restitution; // 0x60 <type_f>
    float m__kNormal; // 0x64 <type_f>
    Vector2* m__tangent; // 0x68 <type_:Vector2>
    Vector2* m__dv; // 0x6C <type_:Vector2>
    float m__vn; // 0x70 <type_f>
    float m__normalVelocityBias; // 0x74 <type_f>
    float m__normalImpulseBias; // 0x78 <type_f>
    float m__normalImpulseBiasOriginal; // 0x7C <type_f>
    float m__normalImpulse; // 0x80 <type_f>
    float m__oldNormalImpulse; // 0x84 <type_f>
    float m__maxTangentImpulse; // 0x88 <type_f>
    float m__vt; // 0x8C <type_f>
    float m__tangentImpulse; // 0x90 <type_f>
    float m__oldTangentImpulse; // 0x94 <type_f>
    Vector2* m__impulse; // 0x98 <type_:Vector2>
    Vector2* m__impulseBias; // 0x9C <type_:Vector2>
    TFeature* m__feature; // 0xA0 <type_:TFeature>
    Vector2* m__localVertex; // 0xA4 <type_:Vector2>
    Vector2* m__vertRef; // 0xA8 <type_:Vector2>
    TMatrix* m__matrixInverseTemp; // 0xAC <type_:TMatrix>
    TMatrix* m__matrixTemp; // 0xB0 <type_:TMatrix>
    TContactId* m__contactIdTemp; // 0xB4 <type_:TContactId>
};


