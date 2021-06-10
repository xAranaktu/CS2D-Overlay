#pragma once

#include "defines.h"

// 2 methods, 5 functions
struct IsoEngineDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_IsoEngine_New)(IsoEngine* pThis); // [New at 0x5C6033] [0x10] ()i
    int(__cdecl* m_IsoEngine_Delete)(IsoEngine* pThis); // [Delete at 0x5C6055] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_TransformRotate)(void* a1, void* a2, float a3); // [TransformRotate at 0x5C6063] [0x30] (*f,*f,f)i
    int(__cdecl* fn_DrawLinePoly3D)(void* a1, void* a2, void* a3, float a4, float a5, float a6, float a7); // [DrawLinePoly3D at 0x5C60E9] [0x34] ([]f,[]f,[]f,f,f,f,f)i
    int(__cdecl* fn_DrawVoxelWeapon)(TImage* a1, int a2, int a3, float a4); // [DrawVoxelWeapon at 0x5C62D2] [0x38] (:TImage,i,i,f)i
    int(__cdecl* fn_PixelInMap)(int a1, int a2); // [PixelInMap at 0x5C6A34] [0x3C] (i,i)i
    int(__cdecl* fn_inMap)(int a1, int a2); // [inMap at 0x5C6AF8] [0x40] (i,i)i
};


// 0 members
struct IsoEngine {
    IsoEngineDecl* decl; // 0x0
    int    refs;  // 0x4
};


