#pragma once

#include "defines.h"

// 2 methods, 5 functions
struct TDrawingHelperDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TDrawingHelper_New)(TDrawingHelper* pThis); // [New at 0x60B544] [0x10] ()i
    int(__cdecl* m_TDrawingHelper_Delete)(TDrawingHelper* pThis); // [Delete at 0x60B566] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_DrawGeom)(TGeom* a1, TImage* a2); // [DrawGeom at 0x60B574] [0x30] (:TGeom,:TImage)i
    TImage*(__cdecl* fn_CreateLineTexture)(int a1, TColor* a2); // [CreateLineTexture at 0x60B613] [0x34] (i,:TColor):TImage
    TImage*(__cdecl* fn_CreateRectangleTexture)(int a1, int a2, TColor* a3, TColor* a4, int a5, int a6, int a7); // [CreateRectangleTexture at 0x60B750] [0x38] (i,i,:TColor,:TColor,i,i,i):TImage
    TImage*(__cdecl* fn_CreateCircleTexture)(int a1, TColor* a2, TColor* a3, int a4, int a5, int a6); // [CreateCircleTexture at 0x60BACE] [0x3C] (i,:TColor,:TColor,i,i,i):TImage
    TImage*(__cdecl* fn_CreatePolygonTexture)(void* a1, TColor* a2); // [CreatePolygonTexture at 0x60BE57] [0x40] ([]:Vector2,:TColor):TImage
};


// 0 members
struct TDrawingHelper {
    TDrawingHelperDecl* decl; // 0x0
    int    refs;  // 0x4
};


