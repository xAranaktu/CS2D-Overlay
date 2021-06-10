#pragma once

#include "defines.h"

// 5 methods, 3 functions
struct TLightingRoomDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 72(0x48)
    int(__cdecl* m_TLightingRoom_New)(TLightingRoom* pThis); // [New at 0x5D963F] [0x10] ()i
    int(__cdecl* m_TLightingRoom_Delete)(TLightingRoom* pThis); // [Delete at 0x5D96CF] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TLightingRoom_ChangeState)(TLightingRoom* pThis, int a1); // [ChangeState at 0x5D96DD] [0x30] (i)i
    int(__cdecl* m_TLightingRoom_Remove)(TLightingRoom* pThis); // [Remove at 0x5D9709] [0x34] ()i
    int(__cdecl* fn_UpdateRooms)(int a1, int a2); // [UpdateRooms at 0x5D973E] [0x38] (i,i)i
    int(__cdecl* m_TLightingRoom_ReInit)(TLightingRoom* pThis, int a1, int a2, int a3, int a4, int a5, void* a6, int a7, int a8, int a9, int a10, int a11, int a12, float a13); // [ReInit at 0x5D9896] [0x3C] (i,i,i,i,i,[]i,i,i,i,i,i,i,f)i
    TLightingRoom*(__cdecl* fn_CreateRoom)(int a1, int a2, int a3, int a4, int a5, void* a6, int a7, int a8, int a9, int a10, int a11, int a12, float a13); // [CreateRoom at 0x5D991F] [0x40] (i,i,i,i,i,[]i,i,i,i,i,i,i,f):TLightingRoom
    int(__cdecl* fn_DrawRoomsLight)(float a1); // [DrawRoomsLight at 0x5D9989] [0x44] (f)i
};


// 16 members
struct TLightingRoom {
    TLightingRoomDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_x; // 0x8 <type_i>
    int m_y; // 0xC <type_i>
    int m_w; // 0x10 <type_i>
    int m_h; // 0x14 <type_i>
    int m_mode; // 0x18 <type_i>
    int m_ColorR; // 0x1C <type_i>
    int m_ColorG; // 0x20 <type_i>
    int m_ColorB; // 0x24 <type_i>
    int m_Height; // 0x28 <type_i>
    int m_state; // 0x2C <type_i>
    int m_shadow; // 0x30 <type_i>
    int m_DayColor; // 0x34 <type_i>
    float m_Transparency; // 0x38 <type_f>
    int m_OffsetX; // 0x3C <type_i>
    int m_OffSetY; // 0x40 <type_i>
    int m_layer; // 0x44 <type_i>
};


