#pragma once

#include "defines.h"

// 6 methods, 3 functions
struct TImageDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 52(0x34)
    int(__cdecl* m_TImage_New)(TImage* pThis); // [New at 0x7A852D] [0x10] ()i
    int(__cdecl* m_TImage_Delete)(TImage* pThis); // [Delete at 0x7A85A4] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TImage__pad)(TImage* pThis); // [_pad at 0x7A85EA] [0x30] ()i
    TImageFrame*(__cdecl* m_TImage_Frame)(TImage* pThis, int a1); // [Frame at 0x7A85F8] [0x34] (i):TImageFrame
    TPixmap*(__cdecl* m_TImage_Lock)(TImage* pThis, int a1, int a2, int a3); // [Lock at 0x7A8695] [0x38] (i,i,i):TPixmap
    int(__cdecl* m_TImage_SetPixmap)(TImage* pThis, int a1, TPixmap* a2); // [SetPixmap at 0x7A8734] [0x3C] (i,:TPixmap)i
    TImage*(__cdecl* fn_Create)(int a1, int a2, int a3, int a4, int a5, int a6, int a7); // [Create at 0x7A87DD] [0x40] (i,i,i,i,i,i,i):TImage
    TImage*(__cdecl* fn_Load)(Object* a1, int a2, int a3, int a4, int a5); // [Load at 0x7A889C] [0x44] (:Object,i,i,i,i):TImage
    TImage*(__cdecl* fn_LoadAnim)(Object* a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9); // [LoadAnim at 0x7A8920] [0x48] (:Object,i,i,i,i,i,i,i,i):TImage
};


// 11 members
struct TImage {
    TImageDecl* decl; // 0x0
    int refs;
    int m_width; // 0x8 <type_i>
    int m_height; // 0xC <type_i>
    int m_flags; // 0x10 <type_i>
    int m_mask_r; // 0x14 <type_i>
    int m_mask_g; // 0x18 <type_i>
    int m_mask_b; // 0x1C <type_i>
    float m_handle_x; // 0x20 <type_f>
    float m_handle_y; // 0x24 <type_f>
    void* m_pixmaps; // 0x28 <type_[]:TPixmap>
    void* m_frames; // 0x2C <type_[]:TImageFrame>
    void* m_seqs; // 0x30 <type_[]i>
};


