#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct TBBUTTONDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_TBBUTTON_New)(TBBUTTON* pThis); // [New at 0x7A54E3] [0x10] ()i
    int(__cdecl* m_TBBUTTON_Delete)(TBBUTTON* pThis); // [Delete at 0x7A5531] [0x14] ()i
};


// 8 members
struct TBBUTTON {
    TBBUTTONDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_iBitmap; // 0x8 <type_i>
    int m_idCommand; // 0xC <type_i>
    char m_fsState; // 0x10 <type_b>
    char m_fsStyle; // 0x11 <type_b>
    char m_pad0; // 0x12 <type_b>
    char m_pad1; // 0x13 <type_b>
    void* m_dwData; // 0x14 <type_*b>
    void* m_iString; // 0x18 <type_*b>
};


