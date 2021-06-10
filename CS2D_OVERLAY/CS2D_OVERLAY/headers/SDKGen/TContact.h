#pragma once

#include "defines.h"

// 9 methods, 1 functions
struct TContactDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 60(0x3C)
    int(__cdecl* m_TContact_New)(TContact* pThis); // [New at 0x5EF7EA] [0x10] ()i
    int(__cdecl* m_TContact_Delete)(TContact* pThis); // [Delete at 0x5EF877] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TContact*(__cdecl* fn_Create)(Vector2* a1, Vector2* a2, float a3, TContactId* a4); // [Create at 0x5EF8DF] [0x30] (:Vector2,:Vector2,f,:TContactId):TContact
    int(__cdecl* m_TContact_Init)(TContact* pThis, Vector2* a1, Vector2* a2, float a3, TContactId* a4); // [Init at 0x5EF961] [0x34] (:Vector2,:Vector2,f,:TContactId)i
    int(__cdecl* m_TContact_SetMassNormal)(TContact* pThis, float a1); // [SetMassNormal at 0x5EF9DA] [0x38] (f)i
    int(__cdecl* m_TContact_SetMassTangent)(TContact* pThis, float a1); // [SetMassTangent at 0x5EF9F1] [0x3C] (f)i
    int(__cdecl* m_TContact_SetBias)(TContact* pThis, float a1); // [SetBias at 0x5EFA08] [0x40] (f)i
    int(__cdecl* m_TContact_SetNormalImpulse)(TContact* pThis, float a1); // [SetNormalImpulse at 0x5EFA1F] [0x44] (f)i
    int(__cdecl* m_TContact_SetTangentImpulse)(TContact* pThis, float a1); // [SetTangentImpulse at 0x5EFA36] [0x48] (f)i
    int(__cdecl* m_TContact_Equals)(TContact* pThis, Object* a1); // [Equals at 0x5EFA4D] [0x4C] (:Object)i
};


// 13 members
struct TContact {
    TContactDecl* decl; // 0x0
    int    refs;  // 0x4
    Vector2* m_Position; // 0x8 <type_:Vector2>
    Vector2* m_Normal; // 0xC <type_:Vector2>
    float m_Seperation; // 0x10 <type_f>
    TContactId* m__contactId; // 0x14 <type_:TContactId>
    float m__normalImpulse; // 0x18 <type_f>
    float m__tangentImpulse; // 0x1C <type_f>
    float m__massNormal; // 0x20 <type_f>
    float m__massTangent; // 0x24 <type_f>
    float m__normalVelocityBias; // 0x28 <type_f>
    float m__normalImpulseBias; // 0x2C <type_f>
    Vector2* m__r1; // 0x30 <type_:Vector2>
    Vector2* m__r2; // 0x34 <type_:Vector2>
    float m__bounceVelocity; // 0x38 <type_f>
};


