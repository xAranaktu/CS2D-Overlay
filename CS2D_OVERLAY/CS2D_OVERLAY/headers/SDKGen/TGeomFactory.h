#pragma once

#include "defines.h"

// 2 methods, 7 functions
struct TGeomFactoryDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TGeomFactory_New)(TGeomFactory* pThis); // [New at 0x5F0748] [0x10] ()i
    int(__cdecl* m_TGeomFactory_Delete)(TGeomFactory* pThis); // [Delete at 0x5F076A] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_SetGridCellSizeAABBFactor)(float a1); // [SetGridCellSizeAABBFactor at 0x5F0778] [0x30] (f)i
    float(__cdecl* fn_GetGridCelLSizeAABBFactor)(); // [GetGridCelLSizeAABBFactor at 0x5F078F] [0x34] ()f
    TGeom*(__cdecl* fn_CreateRectangleGeom)(TPhysicsSimulator* a1, TBody* a2, float a3, float a4, Vector2* a5, float a6, float a7); // [CreateRectangleGeom at 0x5F079E] [0x38] (:TPhysicsSimulator,:TBody,f,f,:Vector2,f,f):TGeom
    TGeom*(__cdecl* fn_CreateCircleGeom)(TPhysicsSimulator* a1, TBody* a2, float a3, int a4, Vector2* a5, float a6, float a7); // [CreateCircleGeom at 0x5F0821] [0x3C] (:TPhysicsSimulator,:TBody,f,i,:Vector2,f,f):TGeom
    TGeom*(__cdecl* fn_CreatePolygonGeom)(TPhysicsSimulator* a1, TBody* a2, TVertices* a3, Vector2* a4, float a5, float a6); // [CreatePolygonGeom at 0x5F089F] [0x40] (:TPhysicsSimulator,:TBody,:TVertices,:Vector2,f,f):TGeom
    TGeom*(__cdecl* fn_CloneGeom)(TPhysicsSimulator* a1, TBody* a2, TGeom* a3, Vector2* a4, float a5); // [CloneGeom at 0x5F0931] [0x44] (:TPhysicsSimulator,:TBody,:TGeom,:Vector2,f):TGeom
    float(__cdecl* fn_CalculateGridCellSizeFromAABB)(TVertices* a1); // [CalculateGridCellSizeFromAABB at 0x5F0978] [0x48] (:TVertices)f
};


// 0 members
struct TGeomFactory {
    TGeomFactoryDecl* decl; // 0x0
    int    refs;  // 0x4
};


