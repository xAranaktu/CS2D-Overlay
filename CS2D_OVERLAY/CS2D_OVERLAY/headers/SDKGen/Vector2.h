#pragma once

#include "defines.h"

// 16 methods, 22 functions
struct Vector2Decl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_Vector2_New)(Vector2* pThis); // [New at 0x5E6B31] [0x10] ()i
    int(__cdecl* m_Vector2_Delete)(Vector2* pThis); // [Delete at 0x5E6B5D] [0x14] ()i
    BBString*(__cdecl* m_Vector2_ToString)(Vector2* pThis); // [ToString at 0x5E719B] [0x18] ()$
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    Vector2*(__cdecl* fn_Zero)(); // [Zero at 0x5E6B6B] [0x30] ():Vector2
    Vector2*(__cdecl* fn_One)(); // [One at 0x5E6B82] [0x34] ():Vector2
    Vector2*(__cdecl* fn_UnitX)(); // [UnitX at 0x5E6B99] [0x38] ():Vector2
    Vector2*(__cdecl* fn_UnitY)(); // [UnitY at 0x5E6BB0] [0x3C] ():Vector2
    Vector2*(__cdecl* fn_Create)(float a1, float a2); // [Create at 0x5E6BC7] [0x40] (f,f):Vector2
    int(__cdecl* fn_InitVector2)(); // [InitVector2 at 0x5E6BE9] [0x44] ()i
    float(__cdecl* m_Vector2_Length)(Vector2* pThis); // [Length at 0x5E6CB1] [0x48] ()f
    float(__cdecl* m_Vector2_LengthSquared)(Vector2* pThis); // [LengthSquared at 0x5E6CD9] [0x4C] ()f
    int(__cdecl* m_Vector2_Normalize)(Vector2* pThis); // [Normalize at 0x5E6CF3] [0x50] ()i
    Vector2*(__cdecl* m_Vector2_Scale)(Vector2* pThis, float a1); // [Scale at 0x5E6D49] [0x54] (f):Vector2
    Vector2*(__cdecl* m_Vector2_Subtract)(Vector2* pThis, Vector2* a1); // [Subtract at 0x5E6D68] [0x58] (:Vector2):Vector2
    Vector2*(__cdecl* m_Vector2_Add)(Vector2* pThis, Vector2* a1); // [Add at 0x5E6D89] [0x5C] (:Vector2):Vector2
    Vector2*(__cdecl* m_Vector2_Multiply)(Vector2* pThis, Vector2* a1); // [Multiply at 0x5E6DAA] [0x60] (:Vector2):Vector2
    Vector2*(__cdecl* m_Vector2_Divide)(Vector2* pThis, Vector2* a1); // [Divide at 0x5E6DCB] [0x64] (:Vector2):Vector2
    int(__cdecl* m_Vector2_Set)(Vector2* pThis, Vector2* a1); // [Set at 0x5E6DEC] [0x68] (:Vector2)i
    int(__cdecl* m_Vector2_SetParts)(Vector2* pThis, float a1, float a2); // [SetParts at 0x5E6E0C] [0x6C] (f,f)i
    Vector2*(__cdecl* m_Vector2_Copy)(Vector2* pThis); // [Copy at 0x5E6E2B] [0x70] ():Vector2
    Vector2*(__cdecl* fn_Lerp)(Vector2* a1, Vector2* a2, float a3); // [Lerp at 0x5E6E46] [0x74] (:Vector2,:Vector2,f):Vector2
    int(__cdecl* fn_LerpRef)(Vector2* a1, Vector2* a2, float a3, Vector2* a4); // [LerpRef at 0x5E6E81] [0x78] (:Vector2,:Vector2,f,:Vector2)i
    int(__cdecl* fn_NormalizeRef)(Vector2* a1, Vector2* a2); // [NormalizeRef at 0x5E6EBB] [0x7C] (:Vector2,:Vector2)i
    int(__cdecl* fn_AddVectorsRef)(Vector2* a1, Vector2* a2, Vector2* a3); // [AddVectorsRef at 0x5E6F12] [0x80] (:Vector2,:Vector2,:Vector2)i
    float(__cdecl* fn_ATan2)(Vector2* a1, Vector2* a2); // [ATan2 at 0x5E6F3B] [0x84] (:Vector2,:Vector2)f
    float(__cdecl* fn_Distance)(Vector2* a1, Vector2* a2); // [Distance at 0x5E6F6A] [0x88] (:Vector2,:Vector2)f
    float(__cdecl* fn_DistanceSquared)(Vector2* a1, Vector2* a2); // [DistanceSquared at 0x5E6F9D] [0x8C] (:Vector2,:Vector2)f
    float(__cdecl* fn_Dot)(Vector2* a1, Vector2* a2); // [Dot at 0x5E6FC2] [0x90] (:Vector2,:Vector2)f
    Vector2*(__cdecl* fn_AddVectors)(Vector2* a1, Vector2* a2); // [AddVectors at 0x5E6FDF] [0x94] (:Vector2,:Vector2):Vector2
    Vector2*(__cdecl* fn_SubtractVectors)(Vector2* a1, Vector2* a2); // [SubtractVectors at 0x5E7011] [0x98] (:Vector2,:Vector2):Vector2
    int(__cdecl* fn_SubtractVectorsRef)(Vector2* a1, Vector2* a2, Vector2* a3); // [SubtractVectorsRef at 0x5E7043] [0x9C] (:Vector2,:Vector2,:Vector2)i
    Vector2*(__cdecl* fn_DividVectors)(Vector2* a1, Vector2* a2); // [DividVectors at 0x5E706C] [0xA0] (:Vector2,:Vector2):Vector2
    Vector2*(__cdecl* m_Vector2_MultiplyVectors)(Vector2* pThis, Vector2* a1, Vector2* a2); // [MultiplyVectors at 0x5E709E] [0xA4] (:Vector2,:Vector2):Vector2
    Vector2*(__cdecl* fn_ScaleVector)(Vector2* a1, float a2); // [ScaleVector at 0x5E70D2] [0xA8] (:Vector2,f):Vector2
    int(__cdecl* fn_TransformRef)(Vector2* a1, TMatrix* a2, Vector2* a3); // [TransformRef at 0x5E70F8] [0xAC] (:Vector2,:TMatrix,:Vector2)i
    int(__cdecl* fn_TransformNormalRef)(Vector2* a1, TMatrix* a2, Vector2* a3); // [TransformNormalRef at 0x5E7139] [0xB0] (:Vector2,:TMatrix,:Vector2)i
    int(__cdecl* fn_ScaleRef)(Vector2* a1, float a2, Vector2* a3); // [ScaleRef at 0x5E7174] [0xB4] (:Vector2,f,:Vector2)i
    int(__cdecl* m_Vector2_Equals)(Vector2* pThis, Vector2* a1); // [Equals at 0x5E71F3] [0xB8] (:Vector2)i
};


// 2 members
struct Vector2 {
    Vector2Decl* decl; // 0x0
    int    refs;  // 0x4
    float m_X; // 0x8 <type_f>
    float m_Y; // 0xC <type_f>
};


