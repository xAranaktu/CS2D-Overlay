#pragma once

#include "defines.h"

// 6 methods, 1 functions
struct TWrapperDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 40(0x28)
    int(__cdecl* m_TWrapper_New)(TWrapper* pThis); // [New at 0x5F0087] [0x10] ()i
    int(__cdecl* m_TWrapper_Delete)(TWrapper* pThis); // [Delete at 0x5F00F1] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TWrapper*(__cdecl* fn_Create)(TGeom* a1); // [Create at 0x5F0159] [0x30] (:TGeom):TWrapper
    int(__cdecl* m_TWrapper_AddStubs)(TWrapper* pThis, void* a1, void* a2); // [AddStubs at 0x5F0225] [0x34] (*[]:TStub,*[]:TStub)i
    int(__cdecl* m_TWrapper_Update)(TWrapper* pThis); // [Update at 0x5F0371] [0x38] ()i
    int(__cdecl* m_TWrapper_SetX)(TWrapper* pThis); // [SetX at 0x5F03F4] [0x3C] ()i
    int(__cdecl* m_TWrapper_SetY)(TWrapper* pThis); // [SetY at 0x5F0417] [0x40] ()i
};


// 8 members
struct TWrapper {
    TWrapperDecl* decl; // 0x0
    int    refs;  // 0x4
    TGeom* m_geom; // 0x8 <type_:TGeom>
    int m_shouldAddNode; // 0xC <type_i>
    float m_minf; // 0x10 <type_f>
    float m_maxf; // 0x14 <type_f>
    TStub* m__xBegin; // 0x18 <type_:TStub>
    TStub* m__xEnd; // 0x1C <type_:TStub>
    TStub* m__yBegin; // 0x20 <type_:TStub>
    TStub* m__yEnd; // 0x24 <type_:TStub>
};


