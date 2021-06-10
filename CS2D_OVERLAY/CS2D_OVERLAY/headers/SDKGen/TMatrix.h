#pragma once

#include "defines.h"

// 9 methods, 10 functions
struct TMatrixDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 72(0x48)
    int(__cdecl* m_TMatrix_New)(TMatrix* pThis); // [New at 0x5EC3AB] [0x10] ()i
    int(__cdecl* m_TMatrix_Delete)(TMatrix* pThis); // [Delete at 0x5EC41D] [0x14] ()i
    BBString*(__cdecl* m_TMatrix_ToString)(TMatrix* pThis); // [ToString at 0x5ED272] [0x18] ()$
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TMatrix*(__cdecl* fn_Create)(float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15, float a16); // [Create at 0x5EC42B] [0x30] (f,f,f,f,f,f,f,f,f,f,f,f,f,f,f,f):TMatrix
    TMatrix*(__cdecl* fn_CreateRotationZ)(float a1); // [CreateRotationZ at 0x5EC4A1] [0x34] (f):TMatrix
    int(__cdecl* fn_CreateRotationZRef)(float a1, TMatrix* a2); // [CreateRotationZRef at 0x5EC547] [0x38] (f,:TMatrix)i
    int(__cdecl* fn_CreateTranslation)(float a1, float a2, float a3, TMatrix* a4); // [CreateTranslation at 0x5EC5E4] [0x3C] (f,f,f,:TMatrix)i
    int(__cdecl* fn_InvertRef)(TMatrix* a1, TMatrix* a2); // [InvertRef at 0x5EC64A] [0x40] (:TMatrix,:TMatrix)i
    TMatrix*(__cdecl* fn_Invert)(TMatrix* a1); // [Invert at 0x5EC9B3] [0x44] (:TMatrix):TMatrix
    int(__cdecl* fn_Transpose)(TMatrix* a1, TMatrix* a2); // [Transpose at 0x5ECD23] [0x48] (:TMatrix,:TMatrix)i
    int(__cdecl* fn_Multiply)(TMatrix* a1, TMatrix* a2, TMatrix* a3); // [Multiply at 0x5ECDE0] [0x4C] (:TMatrix,:TMatrix,:TMatrix)i
    int(__cdecl* fn_AddRef)(TMatrix* a1, TMatrix* a2, TMatrix* a3); // [AddRef at 0x5ED04C] [0x50] (:TMatrix,:TMatrix,:TMatrix)i
    Vector3*(__cdecl* m_TMatrix_GetRight)(TMatrix* pThis); // [GetRight at 0x5ED0F3] [0x54] ():Vector3
    int(__cdecl* m_TMatrix_SetRight)(TMatrix* pThis, Vector3* a1); // [SetRight at 0x5ED125] [0x58] (:Vector3)i
    Vector3*(__cdecl* m_TMatrix_GetUp)(TMatrix* pThis); // [GetUp at 0x5ED14B] [0x5C] ():Vector3
    int(__cdecl* m_TMatrix_SetUp)(TMatrix* pThis, Vector3* a1); // [SetUp at 0x5ED17D] [0x60] (:Vector3)i
    TMatrix*(__cdecl* fn_Identity)(); // [Identity at 0x5ED1A3] [0x64] ():TMatrix
    TMatrix*(__cdecl* m_TMatrix_Copy)(TMatrix* pThis); // [Copy at 0x5ED1BA] [0x68] ():TMatrix
    int(__cdecl* m_TMatrix_CopyTo)(TMatrix* pThis, TMatrix* a1); // [CopyTo at 0x5ED1FE] [0x6C] (:TMatrix)i
};


// 16 members
struct TMatrix {
    TMatrixDecl* decl; // 0x0
    int    refs;  // 0x4
    float m_M11; // 0x8 <type_f>
    float m_M12; // 0xC <type_f>
    float m_M13; // 0x10 <type_f>
    float m_M14; // 0x14 <type_f>
    float m_M21; // 0x18 <type_f>
    float m_M22; // 0x1C <type_f>
    float m_M23; // 0x20 <type_f>
    float m_M24; // 0x24 <type_f>
    float m_M31; // 0x28 <type_f>
    float m_M32; // 0x2C <type_f>
    float m_M33; // 0x30 <type_f>
    float m_M34; // 0x34 <type_f>
    float m_M41; // 0x38 <type_f>
    float m_M42; // 0x3C <type_f>
    float m_M43; // 0x40 <type_f>
    float m_M44; // 0x44 <type_f>
};


