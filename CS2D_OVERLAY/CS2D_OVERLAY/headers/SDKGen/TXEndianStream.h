#pragma once

#include "defines.h"

// 15 methods, 3 functions
struct TXEndianStreamDecl {
    void* pSuper;  // 0x0 0x8FC564
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TXEndianStream_New)(TXEndianStream* pThis); // [New at 0x79CB23] [0x10] ()i
    int(__cdecl* m_TXEndianStream_Delete)(TXEndianStream* pThis); // [Delete at 0x79CB45] [0x14] ()i
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
    void* nothing_19; // 0x50
    void* nothing_20; // 0x54
    void* nothing_21; // 0x58
    void* nothing_22; // 0x5C
    void* nothing_23; // 0x60
    int(__cdecl* m_TXEndianStream_ReadShort)(TXEndianStream* pThis); // [ReadShort at 0x79CC4F] [0x64] ()i
    int(__cdecl* m_TXEndianStream_WriteShort)(TXEndianStream* pThis, int a1); // [WriteShort at 0x79CC8B] [0x68] (i)i
    int(__cdecl* m_TXEndianStream_ReadInt)(TXEndianStream* pThis); // [ReadInt at 0x79CCD0] [0x6C] ()i
    int(__cdecl* m_TXEndianStream_WriteInt)(TXEndianStream* pThis, int a1); // [WriteInt at 0x79CD0A] [0x70] (i)i
    long long(__cdecl* m_TXEndianStream_ReadLong)(TXEndianStream* pThis); // [ReadLong at 0x79CD45] [0x74] ()l
    int(__cdecl* m_TXEndianStream_WriteLong)(TXEndianStream* pThis, long long a1); // [WriteLong at 0x79CD9F] [0x78] (l)i
    float(__cdecl* m_TXEndianStream_ReadFloat)(TXEndianStream* pThis); // [ReadFloat at 0x79CDEC] [0x7C] ()f
    int(__cdecl* m_TXEndianStream_WriteFloat)(TXEndianStream* pThis, float a1); // [WriteFloat at 0x79CE24] [0x80] (f)i
    void*(__cdecl* m_TXEndianStream_ReadDouble)(TXEndianStream* pThis); // [ReadDouble at 0x79CE5F] [0x84] ()d
    int(__cdecl* m_TXEndianStream_WriteDouble)(TXEndianStream* pThis, void* a1); // [WriteDouble at 0x79CE97] [0x88] (d)i
    void* nothing_34; // 0x8C
    void* nothing_35; // 0x90
    void* nothing_36; // 0x94
    void* nothing_37; // 0x98
    void* nothing_38; // 0x9C
    void* nothing_39; // 0xA0
    void* nothing_40; // 0xA4
    int(__cdecl* m_TXEndianStream_Swap2)(TXEndianStream* pThis, void* a1); // [Swap2 at 0x79CB65] [0xA8] (*b)i
    int(__cdecl* m_TXEndianStream_Swap4)(TXEndianStream* pThis, void* a1); // [Swap4 at 0x79CB8F] [0xAC] (*b)i
    int(__cdecl* m_TXEndianStream_Swap8)(TXEndianStream* pThis, void* a1); // [Swap8 at 0x79CBD4] [0xB0] (*b)i
    TStream*(__cdecl* fn_Create)(TStream* a1); // [Create at 0x79CED2] [0xB4] (:TStream):TStream
    TStream*(__cdecl* fn_BigEndian)(TStream* a1); // [BigEndian at 0x79CF18] [0xB8] (:TStream):TStream
    TStream*(__cdecl* fn_LittleEndian)(TStream* a1); // [LittleEndian at 0x79CF2E] [0xBC] (:TStream):TStream
};


// Super: 0x8FC564
// 0 members
struct TXEndianStream {
    TXEndianStreamDecl* decl; // 0x0
    int    refs;  // 0x4
};


