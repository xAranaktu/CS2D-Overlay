#pragma once

#include "defines.h"

// 2 methods, 4 functions
struct Thud_killCamDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_Thud_killCam_New)(Thud_killCam* pThis); // [New at 0x75476F] [0x10] ()i
    int(__cdecl* m_Thud_killCam_Delete)(Thud_killCam* pThis); // [Delete at 0x754791] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_showKill)(float a1, float a2, Tpl* a3, int a4); // [showKill at 0x75479F] [0x30] (f,f,:Tpl,i)i
    int(__cdecl* fn_reset)(); // [reset at 0x75496F] [0x34] ()i
    int(__cdecl* fn_update)(); // [update at 0x7549AA] [0x38] ()i
    int(__cdecl* fn_hudFx)(float a1, float a2, float a3, float a4); // [hudFx at 0x754D9F] [0x3C] (f,f,f,f)i
};


// 0 members
struct Thud_killCam {
    Thud_killCamDecl* decl; // 0x0
    int    refs;  // 0x4
};


