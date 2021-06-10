#pragma once

#include "defines.h"

// 8 methods, 3 functions
struct SmartImageBufferDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_SmartImageBuffer_New)(SmartImageBuffer* pThis); // [New at 0x5C3167] [0x10] ()i
    int(__cdecl* m_SmartImageBuffer_Delete)(SmartImageBuffer* pThis); // [Delete at 0x5C31B8] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_IsSupported)(); // [IsSupported at 0x5C31FE] [0x30] ()i
    int(__cdecl* fn_Initialize)(TGraphics* a1); // [Initialize at 0x5C3330] [0x34] (:TGraphics)i
    SmartImageBuffer*(__cdecl* fn_CreateBuffer)(int a1, int a2, int a3); // [CreateBuffer at 0x5C336A] [0x38] (i,i,i):SmartImageBuffer
    int(__cdecl* m_SmartImageBuffer_SetBuffer)(SmartImageBuffer* pThis, TImage* a1); // [SetBuffer at 0x5C33D3] [0x3C] (:TImage)i
    int(__cdecl* m_SmartImageBuffer_DrawBuffer)(SmartImageBuffer* pThis, float a1, float a2, float a3, float a4); // [DrawBuffer at 0x5C3444] [0x40] (f,f,f,f)i
    int(__cdecl* m_SmartImageBuffer_DrawBufferRect)(SmartImageBuffer* pThis, float a1, float a2, float a3, float a4); // [DrawBufferRect at 0x5C34FF] [0x44] (f,f,f,f)i
    int(__cdecl* m_SmartImageBuffer_BindBuffer)(SmartImageBuffer* pThis); // [BindBuffer at 0x5C35C7] [0x48] ()i
    int(__cdecl* m_SmartImageBuffer_Clear)(SmartImageBuffer* pThis, float a1, float a2, float a3, float a4); // [Clear at 0x5C3613] [0x4C] (f,f,f,f)i
    int(__cdecl* m_SmartImageBuffer_UnBindBuffer)(SmartImageBuffer* pThis); // [UnBindBuffer at 0x5C36D9] [0x50] ()i
};


// 5 members
struct SmartImageBuffer {
    SmartImageBufferDecl* decl; // 0x0
    int    refs;  // 0x4
    tImageBufferDX9* m_bufferDX9; // 0x8 <type_:tImageBufferDX9>
    TImageBuffer* m_bufferGL; // 0xC <type_:TImageBuffer>
    TImage* m_image; // 0x10 <type_:TImage>
    int m_sizew; // 0x14 <type_i>
    int m_sizeh; // 0x18 <type_i>
};


