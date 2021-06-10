#pragma once

#include "defines.h"

// 2 methods, 13 functions
struct MathHelperDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_MathHelper_New)(MathHelper* pThis); // [New at 0x5EBD27] [0x10] ()i
    int(__cdecl* m_MathHelper_Delete)(MathHelper* pThis); // [Delete at 0x5EBD49] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    float(__cdecl* fn_Lerp)(float a1, float a2, float a3); // [Lerp at 0x5EBD57] [0x30] (f,f,f)f
    float(__cdecl* fn_SmoothStep)(float a1, float a2, float a3); // [SmoothStep at 0x5EBD71] [0x34] (f,f,f)f
    float(__cdecl* fn_Clamp)(float a1, float a2, float a3); // [Clamp at 0x5EBDB4] [0x38] (f,f,f)f
    float(__cdecl* fn_Distance)(float a1, float a2); // [Distance at 0x5EBDEE] [0x3C] (f,f)f
    float(__cdecl* fn_ToRadians)(float a1); // [ToRadians at 0x5EBE0D] [0x40] (f)f
    float(__cdecl* fn_ToDegrees)(float a1); // [ToDegrees at 0x5EBE1F] [0x44] (f)f
    int(__cdecl* fn_LineToCircle)(float a1, float a2, float a3, float a4, float a5, float a6, float a7); // [LineToCircle at 0x5EBE31] [0x48] (f,f,f,f,f,f,f)i
    float(__cdecl* fn_PointToPointDist)(float a1, float a2, float a3, float a4); // [PointToPointDist at 0x5EBF0C] [0x4C] (f,f,f,f)f
    int(__cdecl* fn_PointInPoly)(float a1, float a2, TVertices* a3); // [PointInPoly at 0x5EBF49] [0x50] (f,f,:TVertices)i
    int(__cdecl* fn_CircleToPoly)(float a1, float a2, float a3, void* a4); // [CircleToPoly at 0x5EC086] [0x54] (f,f,f,[]f)i
    Vector2*(__cdecl* fn_LineIntersect)(vector2* a1, vector2* a2, vector2* a3, vector2* a4); // [LineIntersect at 0x5EC135] [0x58] (:vector2,:vector2,:vector2,:vector2):Vector2
    int(__cdecl* fn_GetQuad)(float a1, float a2, float a3, float a4); // [GetQuad at 0x5EC2BE] [0x5C] (f,f,f,f)i
    Vector2*(__cdecl* fn_BounceAngle)(float a1, float a2, float a3); // [BounceAngle at 0x5EC327] [0x60] (f,f,f):Vector2
};


// 0 members
struct MathHelper {
    MathHelperDecl* decl; // 0x0
    int    refs;  // 0x4
};


