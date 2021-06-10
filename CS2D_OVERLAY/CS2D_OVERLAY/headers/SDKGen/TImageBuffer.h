#pragma once

#include "defines.h"

// 9 methods, 2 functions
struct TImageBufferDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 44(0x2C)
    int(__cdecl* m_TImageBuffer_New)(TImageBuffer* pThis); // [New at 0x5C2BBF] [0x10] ()i
    int(__cdecl* m_TImageBuffer_Delete)(TImageBuffer* pThis); // [Delete at 0x5C2C44] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TImageBuffer*(__cdecl* fn_SetBuffer)(TImage* a1, int a2); // [SetBuffer at 0x5C2C9B] [0x30] (:TImage,i):TImageBuffer
    int(__cdecl* fn_Init)(); // [Init at 0x5C2D00] [0x34] ()i
    int(__cdecl* m_TImageBuffer_GenerateFBO)(TImageBuffer* pThis); // [GenerateFBO at 0x5C2D13] [0x38] ()i
    int(__cdecl* m_TImageBuffer_CheckStatus)(TImageBuffer* pThis); // [CheckStatus at 0x5C2E40] [0x3C] ()i
    int(__cdecl* m_TImageBuffer_BindBuffer)(TImageBuffer* pThis); // [BindBuffer at 0x5C2E8C] [0x40] ()i
    int(__cdecl* m_TImageBuffer_UnBindBuffer)(TImageBuffer* pThis); // [UnBindBuffer at 0x5C2F73] [0x44] ()i
    int(__cdecl* m_TImageBuffer_Cls)(TImageBuffer* pThis, float a1, float a2, float a3, float a4); // [Cls at 0x5C3018] [0x48] (f,f,f,f)i
    int(__cdecl* m_TImageBuffer_BufferWidth)(TImageBuffer* pThis); // [BufferWidth at 0x5C305F] [0x4C] ()i
    int(__cdecl* m_TImageBuffer_BufferHeight)(TImageBuffer* pThis); // [BufferHeight at 0x5C3071] [0x50] ()i
};


// 9 members
struct TImageBuffer {
    TImageBufferDecl* decl; // 0x0
    int    refs;  // 0x4
    TImage* m_Image; // 0x8 <type_:TImage>
    void* m_rb; // 0xC <type_[]i>
    void* m_fb; // 0x10 <type_[]i>
    TGLImageframe* m_Imageframe; // 0x14 <type_:TGLImageframe>
    int m_Frame; // 0x18 <type_i>
    int m_OrigX; // 0x1C <type_i>
    int m_OrigY; // 0x20 <type_i>
    int m_OrigW; // 0x24 <type_i>
    int m_OrigH; // 0x28 <type_i>
};


