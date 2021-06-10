#pragma once

#include "defines.h"

// 2 methods, 12 functions
struct LoadScreenDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_LoadScreen_New)(LoadScreen* pThis); // [New at 0x5D55C2] [0x10] ()i
    int(__cdecl* m_LoadScreen_Delete)(LoadScreen* pThis); // [Delete at 0x5D55E4] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_GetState)(); // [GetState at 0x5D55F2] [0x30] ()i
    float(__cdecl* fn_GetProgress)(); // [GetProgress at 0x5D5600] [0x34] ()f
    int(__cdecl* fn_InitIntro)(); // [InitIntro at 0x5D56A2] [0x38] ()i
    int(__cdecl* fn_Intro)(); // [Intro at 0x5D585D] [0x3C] ()i
    int(__cdecl* fn_Update)(int a1); // [Update at 0x5D5A51] [0x40] (i)i
    int(__cdecl* fn_SetProgress)(float a1); // [SetProgress at 0x5D5B00] [0x44] (f)i
    int(__cdecl* fn_SetState)(int a1); // [SetState at 0x5D5B17] [0x48] (i)i
    int(__cdecl* fn_SetTitle)(BBString* a1, BBString* a2); // [SetTitle at 0x5D5B35] [0x4C] ($,$)i
    int(__cdecl* fn_SkipIntro)(); // [SkipIntro at 0x5D5BCB] [0x50] ()i
    int(__cdecl* fn_DrawScreen)(); // [DrawScreen at 0x5D5BE3] [0x54] ()i
    int(__cdecl* fn_DrawLoadingScreen)(int a1); // [DrawLoadingScreen at 0x5D5C36] [0x58] (i)i
    int(__cdecl* fn_DrawWindow)(BBString* a1, float a2, float a3, float a4, float a5); // [DrawWindow at 0x5D6ABF] [0x5C] ($,f,f,f,f)i
};


// 0 members
struct LoadScreen {
    LoadScreenDecl* decl; // 0x0
    int    refs;  // 0x4
};


