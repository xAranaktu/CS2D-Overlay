#pragma once

#include "defines.h"

// 2 methods, 6 functions
struct TBodyFactoryDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TBodyFactory_New)(TBodyFactory* pThis); // [New at 0x5F043A] [0x10] ()i
    int(__cdecl* m_TBodyFactory_Delete)(TBodyFactory* pThis); // [Delete at 0x5F045C] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TBody*(__cdecl* fn_CreateRectangleBody)(PhysicsUniqueID* a1, TPhysicsSimulator* a2, float a3, float a4, float a5); // [CreateRectangleBody at 0x5F046A] [0x30] (:PhysicsUniqueID,:TPhysicsSimulator,f,f,f):TBody
    TBody*(__cdecl* fn_CreateCircleBody)(PhysicsUniqueID* a1, TPhysicsSimulator* a2, float a3, float a4); // [CreateCircleBody at 0x5F04FA] [0x34] (:PhysicsUniqueID,:TPhysicsSimulator,f,f):TBody
    TBody*(__cdecl* fn_CreatePolygonBody)(PhysicsUniqueID* a1, TPhysicsSimulator* a2, TVertices* a3, float a4); // [CreatePolygonBody at 0x5F05A6] [0x38] (:PhysicsUniqueID,:TPhysicsSimulator,:TVertices,f):TBody
    TBody*(__cdecl* fn_CreateBody)(PhysicsUniqueID* a1, TPhysicsSimulator* a2, float a3, float a4); // [CreateBody at 0x5F0651] [0x3C] (:PhysicsUniqueID,:TPhysicsSimulator,f,f):TBody
    TBody*(__cdecl* fn_CloneBody)(PhysicsUniqueID* a1, TPhysicsSimulator* a2, TBody* a3); // [CloneBody at 0x5F06C5] [0x40] (:PhysicsUniqueID,:TPhysicsSimulator,:TBody):TBody
    float(__cdecl* fn_MOIForRectangle)(float a1, float a2, float a3); // [MOIForRectangle at 0x5F0724] [0x44] (f,f,f)f
};


// 0 members
struct TBodyFactory {
    TBodyFactoryDecl* decl; // 0x0
    int    refs;  // 0x4
};


