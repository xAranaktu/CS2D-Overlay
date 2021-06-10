#pragma once

#include "defines.h"

// 8 methods, 6 functions
struct TResGfxDecl {
    void* pSuper;  // 0x0 0x8F8184
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 104(0x68)
    int(__cdecl* m_TResGfx_New)(TResGfx* pThis); // [New at 0x651063] [0x10] ()i
    int(__cdecl* m_TResGfx_Delete)(TResGfx* pThis); // [Delete at 0x6510E8] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    void* nothing_12; // 0x34
    void* nothing_13; // 0x38
    void* nothing_14; // 0x3C
    void* nothing_15; // 0x40
    void* nothing_16; // 0x44
    void* nothing_17; // 0x48
    TresGfx*(__cdecl* fn_Init)(BBString* a1, int a2, int a3, int a4); // [Init at 0x65112C] [0x4C] ($,i,i,i):TresGfx
    TResGfx*(__cdecl* fn_InitAnim)(BBString* a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9); // [InitAnim at 0x65118B] [0x50] ($,i,i,i,i,i,i,i,i):TResGfx
    TResGfx*(__cdecl* fn_InitPixmap)(BBString* a1); // [InitPixmap at 0x651213] [0x54] ($):TResGfx
    int(__cdecl* m_TResGfx_LoadData)(TResGfx* pThis); // [LoadData at 0x651261] [0x58] ()i
    int(__cdecl* m_TResGfx_CreateFallback)(TResGfx* pThis); // [CreateFallback at 0x651827] [0x5C] ()i
    int(__cdecl* m_TResGfx_ClearData)(TResGfx* pThis); // [ClearData at 0x6518A2] [0x60] ()i
    int(__cdecl* m_TResGfx_InitTImageValues)(TResGfx* pThis, int a1, int a2, int a3, int a4, int a5, int a6); // [InitTImageValues at 0x65198C] [0x64] (i,i,i,i,i,i)i
    int(__cdecl* m_TResGfx_SetImage)(TResGfx* pThis, TImage* a1); // [SetImage at 0x651A3C] [0x68] (:TImage)i
    int(__cdecl* m_TResGfx_LoadNeeded)(TResGfx* pThis); // [LoadNeeded at 0x651AEB] [0x6C] ()i
    int(__cdecl* fn_LoadNeededAll)(); // [LoadNeededAll at 0x651B58] [0x70] ()i
    int(__cdecl* fn_LoadAll)(); // [LoadAll at 0x651BC1] [0x74] ()i
    int(__cdecl* fn_ClearAll)(); // [ClearAll at 0x651C49] [0x78] ()i
};


// Super: 0x8F8184
// 13 members
struct TResGfx {
    TResGfxDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_path; // 0x34 <type_$>
    BBString* m_sourcePath; // 0x38 <type_$>
    int m_frameWOrig; // 0x3C <type_i>
    int m_frameHOrig; // 0x40 <type_i>
    int m_frameW; // 0x44 <type_i>
    int m_frameH; // 0x48 <type_i>
    int m_frameFirst; // 0x4C <type_i>
    int m_frameCount; // 0x50 <type_i>
    int m_midHandled; // 0x54 <type_i>
    int m_maskMode; // 0x58 <type_i>
    int m_hd; // 0x5C <type_i>
    int m_isLoaded; // 0x60 <type_i>
    int m_isEssential; // 0x64 <type_i>
};


