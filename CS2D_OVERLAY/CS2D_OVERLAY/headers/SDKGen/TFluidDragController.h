#pragma once

#include "defines.h"

// 11 methods, 1 functions
struct TFluidDragControllerDecl {
    void* pSuper;  // 0x0 0x874950
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 112(0x70)
    int(__cdecl* m_TFluidDragController_New)(TFluidDragController* pThis); // [New at 0x5F9C3B] [0x10] ()i
    int(__cdecl* m_TFluidDragController_Delete)(TFluidDragController* pThis); // [Delete at 0x5F9D78] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    void* nothing_12; // 0x34
    void* nothing_13; // 0x38
    void* nothing_14; // 0x3C
    int(__cdecl* m_TFluidDragController_Update)(TFluidDragController* pThis, float a1); // [Update at 0x5F9F40] [0x40] (f)i
    TFluidDragContro*(__cdecl* fn_Create)(IFluidContainer* a1, float a2, float a3, float a4, Vector2* a5); // [Create at 0x5F9E88] [0x44] (:IFluidContainer,f,f,f,:Vector2):TFluidDragContro
    int(__cdecl* m_TFluidDragController_AddGeom)(TFluidDragController* pThis, TGeom* a1); // [AddGeom at 0x5F9EE8] [0x48] (:TGeom)i
    int(__cdecl* m_TFluidDragController_AddOnEntryListener)(TFluidDragController* pThis, Object* a1); // [AddOnEntryListener at 0x5F9F1F] [0x4C] (:Object)i
    int(__cdecl* m_TFluidDragController_OnEntry)(TFluidDragController* pThis, TGeom* a1); // [OnEntry at 0x5FA128] [0x50] (:TGeom)i
    int(__cdecl* m_TFluidDragController_OnExit)(TFluidDragController* pThis, TGeom* a1); // [OnExit at 0x5FA193] [0x54] (:TGeom)i
    int(__cdecl* m_TFluidDragController_FindVerticesInFluid)(TFluidDragController* pThis, TGeom* a1); // [FindVerticesInFluid at 0x5FA1FE] [0x58] (:TGeom)i
    int(__cdecl* m_TFluidDragController_CalculateAreaAndCentroid)(TFluidDragController* pThis); // [CalculateAreaAndCentroid at 0x5FA29B] [0x5C] ()i
    int(__cdecl* m_TFluidDragController_CalculateBuoyancy)(TFluidDragController* pThis); // [CalculateBuoyancy at 0x5FA2ED] [0x60] ()i
    int(__cdecl* m_TFluidDragController_CalculateDrag)(TFluidDragController* pThis, TGeom* a1); // [CalculateDrag at 0x5FA326] [0x64] (:TGeom)i
};


// Super: 0x874950
// 24 members
struct TFluidDragController {
    TFluidDragControllerDecl* decl; // 0x0
    int    refs;  // 0x4
    IFluidContainer* m__fluidContainer; // 0x10 <type_:IFluidContainer>
    TList* m__geomList; // 0x14 <type_:TList>
    float m__density; // 0x18 <type_f>
    float m__linearDragCoefficient; // 0x1C <type_f>
    float m__rotationalDragCoefficient; // 0x20 <type_f>
    Vector2* m__gravity; // 0x24 <type_:Vector2>
    TVertices* m__vertices; // 0x28 <type_:TVertices>
    float m__totalArea; // 0x2C <type_f>
    float m__area; // 0x30 <type_f>
    Vector2* m__centroid; // 0x34 <type_:Vector2>
    Vector2* m__bouyancyForce; // 0x38 <type_:Vector2>
    Vector2* m__linearDragForce; // 0x3C <type_:Vector2>
    float m__rotationalDragTorque; // 0x40 <type_f>
    TMap* m__geomInFluidList; // 0x44 <type_:TMap>
    TList* m__fluidEntryListeners; // 0x48 <type_:TList>
    Vector2* m__totalForce; // 0x4C <type_:Vector2>
    Vector2* m__vert; // 0x50 <type_:Vector2>
    Vector2* m__centroidVelocity; // 0x54 <type_:Vector2>
    Vector2* m__axis; // 0x58 <type_:Vector2>
    float m__min; // 0x5C <type_f>
    float m__max; // 0x60 <type_f>
    float m__dragArea; // 0x64 <type_f>
    float m__partialMass; // 0x68 <type_f>
    Vector2* m__localCentroid; // 0x6C <type_:Vector2>
};


