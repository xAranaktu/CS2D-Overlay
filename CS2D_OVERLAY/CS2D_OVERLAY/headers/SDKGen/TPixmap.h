#pragma once

#include "defines.h"

// 11 methods, 2 functions
struct TPixmapDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 36(0x24)
    int(__cdecl* m_TPixmap_New)(TPixmap* pThis); // [New at 0x7AD124] [0x10] ()i
    int(__cdecl* m_TPixmap_Delete)(TPixmap* pThis); // [Delete at 0x7AD17B] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TPixmap__pad)(TPixmap* pThis); // [_pad at 0x7AD1B0] [0x30] ()i
    void*(__cdecl* m_TPixmap_PixelPtr)(TPixmap* pThis, int a1, int a2); // [PixelPtr at 0x7AD1BE] [0x34] (i,i)*b
    TPixmap*(__cdecl* m_TPixmap_Window)(TPixmap* pThis, int a1, int a2, int a3, int a4); // [Window at 0x7AD1ED] [0x38] (i,i,i,i):TPixmap
    TPixmap*(__cdecl* m_TPixmap_Copy)(TPixmap* pThis); // [Copy at 0x7AD240] [0x3C] ():TPixmap
    int(__cdecl* m_TPixmap_Paste)(TPixmap* pThis, TPixmap* a1, int a2, int a3); // [Paste at 0x7AD2AB] [0x40] (:TPixmap,i,i)i
    TPixmap*(__cdecl* m_TPixmap_Convert)(TPixmap* pThis, int a1); // [Convert at 0x7AD310] [0x44] (i):TPixmap
    int(__cdecl* m_TPixmap_ReadPixel)(TPixmap* pThis, int a1, int a2); // [ReadPixel at 0x7AD37F] [0x48] (i,i)i
    int(__cdecl* m_TPixmap_WritePixel)(TPixmap* pThis, int a1, int a2, int a3); // [WritePixel at 0x7AD4AA] [0x4C] (i,i,i)i
    TPixmap*(__cdecl* fn_Create)(int a1, int a2, int a3, int a4); // [Create at 0x7AD63B] [0x50] (i,i,i,i):TPixmap
    TPixmap*(__cdecl* fn_CreateStatic)(void* a1, int a2, int a3, int a4, int a5); // [CreateStatic at 0x7AD6B6] [0x54] (*b,i,i,i,i):TPixmap
    int(__cdecl* m_TPixmap_ClearPixels)(TPixmap* pThis, int a1); // [ClearPixels at 0x7AD6F7] [0x58] (i)i
};


// 7 members
struct TPixmap {
    TPixmapDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_pixels; // 0x8 <type_*b>
    int m_width; // 0xC <type_i>
    int m_height; // 0x10 <type_i>
    int m_pitch; // 0x14 <type_i>
    int m_format; // 0x18 <type_i>
    int m_capacity; // 0x1C <type_i>
    Object* m__source; // 0x20 <type_:Object>
};


