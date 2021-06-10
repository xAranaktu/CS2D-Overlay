#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct BITMAPINFOHEADERDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 48(0x30)
    int(__cdecl* m_BITMAPINFOHEADER_New)(BITMAPINFOHEADER* pThis); // [New at 0x7A5B18] [0x10] ()i
    int(__cdecl* m_BITMAPINFOHEADER_Delete)(BITMAPINFOHEADER* pThis); // [Delete at 0x7A5B85] [0x14] ()i
};


// 11 members
struct BITMAPINFOHEADER {
    BITMAPINFOHEADERDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_biSize; // 0x8 <type_i>
    int m_biWidth; // 0xC <type_i>
    int m_biHeight; // 0x10 <type_i>
    short m_biPlanes; // 0x14 <type_s>
    short m_biBitCount; // 0x16 <type_s>
    int m_biCompression; // 0x18 <type_i>
    int m_biSizeImage; // 0x1C <type_i>
    int m_biXPelsPerMeter; // 0x20 <type_i>
    int m_biYPelsPerMeter; // 0x24 <type_i>
    int m_biClrUsed; // 0x28 <type_i>
    int m_biClrImportant; // 0x2C <type_i>
};


