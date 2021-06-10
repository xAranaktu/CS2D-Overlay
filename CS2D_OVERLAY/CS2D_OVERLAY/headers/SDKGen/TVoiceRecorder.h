#pragma once

#include "defines.h"

// 2 methods, 10 functions
struct TVoiceRecorderDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TVoiceRecorder_New)(TVoiceRecorder* pThis); // [New at 0x6861D4] [0x10] ()i
    int(__cdecl* m_TVoiceRecorder_Delete)(TVoiceRecorder* pThis); // [Delete at 0x6861F6] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_GetError)(); // [GetError at 0x686204] [0x30] ()i
    int(__cdecl* fn_SetError)(int a1); // [SetError at 0x686212] [0x34] (i)i
    int(__cdecl* fn_Init)(); // [Init at 0x68643C] [0x38] ()i
    int(__cdecl* fn_Record)(); // [Record at 0x686535] [0x3C] ()i
    int(__cdecl* fn_Stop)(); // [Stop at 0x686662] [0x40] ()i
    int(__cdecl* fn_StopCheck)(); // [StopCheck at 0x68668C] [0x44] ()i
    int(__cdecl* fn_Update)(); // [Update at 0x686799] [0x48] ()i
    int(__cdecl* fn_DrawError)(); // [DrawError at 0x686A72] [0x4C] ()i
    int(__cdecl* fn_Draw)(); // [Draw at 0x687146] [0x50] ()i
    int(__cdecl* fn_Clear)(); // [Clear at 0x687658] [0x54] ()i
};


// 0 members
struct TVoiceRecorder {
    TVoiceRecorderDecl* decl; // 0x0
    int    refs;  // 0x4
};


