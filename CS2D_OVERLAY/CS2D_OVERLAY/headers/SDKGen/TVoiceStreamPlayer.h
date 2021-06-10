#pragma once

#include "defines.h"

// 4 methods, 5 functions
struct TVoiceStreamPlayerDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 40(0x28)
    int(__cdecl* m_TVoiceStreamPlayer_New)(TVoiceStreamPlayer* pThis); // [New at 0x685A6B] [0x10] ()i
    int(__cdecl* m_TVoiceStreamPlayer_Delete)(TVoiceStreamPlayer* pThis); // [Delete at 0x685AD8] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_PreparePlay)(void* a1, int a2); // [PreparePlay at 0x685B0D] [0x30] (*b,i)i
    int(__cdecl* fn_Init)(); // [Init at 0x685B73] [0x34] ()i
    int(__cdecl* fn_Create)(int a1, int a2); // [Create at 0x685BD5] [0x38] (i,i)i
    int(__cdecl* m_TVoiceStreamPlayer_Draw)(TVoiceStreamPlayer* pThis); // [Draw at 0x685C6E] [0x3C] ()i
    int(__cdecl* m_TVoiceStreamPlayer_Update)(TVoiceStreamPlayer* pThis); // [Update at 0x685DEE] [0x40] ()i
    int(__cdecl* fn_UpdateAll)(); // [UpdateAll at 0x6860EC] [0x44] ()i
    int(__cdecl* fn_DrawAll)(); // [DrawAll at 0x686177] [0x48] ()i
};


// 8 members
struct TVoiceStreamPlayer {
    TVoiceStreamPlayerDecl* decl; // 0x0
    int    refs;  // 0x4
    float m_VisualTime; // 0x8 <type_f>
    int m_RecordLength; // 0xC <type_i>
    int m_ChannelID; // 0x10 <type_i>
    int m_PlaybackTime; // 0x14 <type_i>
    int m_PlaybackStart; // 0x18 <type_i>
    void* m_AudioData; // 0x1C <type_[]b>
    TSound* m_Sound; // 0x20 <type_:TSound>
    int m_Playing; // 0x24 <type_i>
};


