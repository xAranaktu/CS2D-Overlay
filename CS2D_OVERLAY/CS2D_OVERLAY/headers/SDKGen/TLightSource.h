#pragma once

#include "defines.h"

// 14 methods, 5 functions
struct TLightSourceDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 108(0x6C)
    int(__cdecl* m_TLightSource_New)(TLightSource* pThis); // [New at 0x5DACFA] [0x10] ()i
    int(__cdecl* m_TLightSource_Delete)(TLightSource* pThis); // [Delete at 0x5DADC3] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TLightSource*(__cdecl* fn_CreateLight)(int a1, int a2, float a3, void* a4, int a5, float a6, int a7, int a8); // [CreateLight at 0x5DADE5] [0x30] (i,i,f,[]i,i,f,i,i):TLightSource
    int(__cdecl* m_TLightSource_ChangeRotation)(TLightSource* pThis, float a1); // [ChangeRotation at 0x5DAEA2] [0x34] (f)i
    int(__cdecl* m_TLightSource_ChangeColor)(TLightSource* pThis, void* a1); // [ChangeColor at 0x5DAEB9] [0x38] ([]i)i
    int(__cdecl* m_TLightSource_ChangeAngle)(TLightSource* pThis, int a1, int a2); // [ChangeAngle at 0x5DAEF4] [0x3C] (i,i)i
    int(__cdecl* m_TLightSource_ChangeAlpha)(TLightSource* pThis, float a1); // [ChangeAlpha at 0x5DAF11] [0x40] (f)i
    int(__cdecl* m_TLightSource_ChangeState)(TLightSource* pThis, int a1); // [ChangeState at 0x5DAF28] [0x44] (i)i
    int(__cdecl* m_TLightSource_ChangePosition)(TLightSource* pThis, float a1, float a2); // [ChangePosition at 0x5DAF7D] [0x48] (f,f)i
    int(__cdecl* m_TLightSource_ChangeRadius)(TLightSource* pThis, int a1); // [ChangeRadius at 0x5DAFB8] [0x4C] (i)i
    int(__cdecl* fn_UpdateLightsList)(); // [UpdateLightsList at 0x5DAFEF] [0x50] ()i
    int(__cdecl* m_TLightSource_Update)(TLightSource* pThis, int a1); // [Update at 0x5DB06B] [0x54] (i)i
    int(__cdecl* m_TLightSource_UpdateLightBuffer)(TLightSource* pThis, int a1); // [UpdateLightBuffer at 0x5DB1C0] [0x58] (i)i
    int(__cdecl* fn_DrawLightsList)(float a1); // [DrawLightsList at 0x5DCBD5] [0x5C] (f)i
    int(__cdecl* fn_DrawLightsColorList)(); // [DrawLightsColorList at 0x5DCE93] [0x60] ()i
    int(__cdecl* m_TLightSource_DrawLineLight)(TLightSource* pThis, float a1, float a2, float a3, float a4, float a5, float a6, float a7, int a8, int a9); // [DrawLineLight at 0x5DD1B9] [0x64] (f,f,f,f,f,f,f,i,i)i
    TLightSource*(__cdecl* fn_GetBufferLight)(LightFBOManager* a1); // [GetBufferLight at 0x5DD7BC] [0x68] (:LightFBOManager):TLightSource
    int(__cdecl* m_TLightSource_Remove)(TLightSource* pThis); // [Remove at 0x5DD822] [0x6C] ()i
    int(__cdecl* m_TLightSource_CalculateShadow)(TLightSource* pThis, float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, int a9, int a10); // [CalculateShadow at 0x5DD859] [0x70] (f,f,f,f,f,f,f,f,i,i)i
};


// 25 members
struct TLightSource {
    TLightSourceDecl* decl; // 0x0
    int    refs;  // 0x4
    float m_ColorR; // 0x8 <type_f>
    float m_ColorG; // 0xC <type_f>
    float m_ColorB; // 0x10 <type_f>
    int m_PosX; // 0x14 <type_i>
    int m_PosY; // 0x18 <type_i>
    float m_size; // 0x1C <type_f>
    int m_LastX; // 0x20 <type_i>
    int m_LastY; // 0x24 <type_i>
    int m_LastSize; // 0x28 <type_i>
    int m_LastRotation; // 0x2C <type_i>
    int m_LastColorR; // 0x30 <type_i>
    int m_LastColorG; // 0x34 <type_i>
    int m_LastColorB; // 0x38 <type_i>
    int m_LastAngleStart; // 0x3C <type_i>
    int m_LastAngleEnd; // 0x40 <type_i>
    float m_Alpha; // 0x44 <type_f>
    float m_Rotation; // 0x48 <type_f>
    LightFBOManager* m_Buffer; // 0x4C <type_:LightFBOManager>
    int m_AngleStart; // 0x50 <type_i>
    int m_AngleEnd; // 0x54 <type_i>
    int m_InScreen; // 0x58 <type_i>
    int m_State; // 0x5C <type_i>
    int m_ID; // 0x60 <type_i>
    int m_LightType; // 0x64 <type_i>
    int m_MaxLightSize; // 0x68 <type_i>
};


