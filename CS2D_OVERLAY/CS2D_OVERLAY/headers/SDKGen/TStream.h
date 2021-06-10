#pragma once

#include "defines.h"

// 23 methods, 0 functions
struct TStreamDecl {
    void* pSuper;  // 0x0 0x8FBFD4
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TStream_New)(TStream* pThis); // [New at 0x7B3D8B] [0x10] ()i
    int(__cdecl* m_TStream_Delete)(TStream* pThis); // [Delete at 0x7B3DAD] [0x14] ()i
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
    void* nothing_18; // 0x4C
    int(__cdecl* m_TStream_ReadBytes)(TStream* pThis, void* a1, int a2); // [ReadBytes at 0x7B3DCD] [0x50] (*b,i)i
    int(__cdecl* m_TStream_WriteBytes)(TStream* pThis, void* a1, int a2); // [WriteBytes at 0x7B3E21] [0x54] (*b,i)i
    int(__cdecl* m_TStream_SkipBytes)(TStream* pThis, int a1); // [SkipBytes at 0x7B3E75] [0x58] (i)i
    int(__cdecl* m_TStream_ReadByte)(TStream* pThis); // [ReadByte at 0x7B3EF0] [0x5C] ()i
    int(__cdecl* m_TStream_WriteByte)(TStream* pThis, int a1); // [WriteByte at 0x7B3F18] [0x60] (i)i
    int(__cdecl* m_TStream_ReadShort)(TStream* pThis); // [ReadShort at 0x7B3F4A] [0x64] ()i
    int(__cdecl* m_TStream_WriteShort)(TStream* pThis, int a1); // [WriteShort at 0x7B3F74] [0x68] (i)i
    int(__cdecl* m_TStream_ReadInt)(TStream* pThis); // [ReadInt at 0x7B3FA7] [0x6C] ()i
    int(__cdecl* m_TStream_WriteInt)(TStream* pThis, int a1); // [WriteInt at 0x7B3FCF] [0x70] (i)i
    long long(__cdecl* m_TStream_ReadLong)(TStream* pThis); // [ReadLong at 0x7B3FF8] [0x74] ()l
    int(__cdecl* m_TStream_WriteLong)(TStream* pThis, long long a1); // [WriteLong at 0x7B4040] [0x78] (l)i
    float(__cdecl* m_TStream_ReadFloat)(TStream* pThis); // [ReadFloat at 0x7B407B] [0x7C] ()f
    int(__cdecl* m_TStream_WriteFloat)(TStream* pThis, float a1); // [WriteFloat at 0x7B40A1] [0x80] (f)i
    void*(__cdecl* m_TStream_ReadDouble)(TStream* pThis); // [ReadDouble at 0x7B40CA] [0x84] ()d
    int(__cdecl* m_TStream_WriteDouble)(TStream* pThis, void* a1); // [WriteDouble at 0x7B40F0] [0x88] (d)i
    BBString*(__cdecl* m_TStream_ReadLine)(TStream* pThis); // [ReadLine at 0x7B4119] [0x8C] ()$
    int(__cdecl* m_TStream_WriteLine)(TStream* pThis, BBString* a1); // [WriteLine at 0x7B41E5] [0x90] ($)i
    BBString*(__cdecl* m_TStream_ReadString)(TStream* pThis, int a1); // [ReadString at 0x7B4269] [0x94] (i)$
    int(__cdecl* m_TStream_WriteString)(TStream* pThis, BBString* a1); // [WriteString at 0x7B42B1] [0x98] ($)i
    Object*(__cdecl* m_TStream_ReadObject)(TStream* pThis); // [ReadObject at 0x7B42EE] [0x9C] ():Object
    int(__cdecl* m_TStream_WriteObject)(TStream* pThis, Object* a1); // [WriteObject at 0x7B4309] [0xA0] (:Object)i
};


// Super: 0x8FBFD4
// 0 members
struct TStream {
    TStreamDecl* decl; // 0x0
    int    refs;  // 0x4
};


