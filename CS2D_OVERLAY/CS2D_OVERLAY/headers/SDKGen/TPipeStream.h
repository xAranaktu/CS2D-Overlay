#pragma once

#include "defines.h"

// 9 methods, 1 functions
struct TPipeStreamDecl {
    void* pSuper;  // 0x0 0x8FC2BC
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_TPipeStream_New)(TPipeStream* pThis); // [New at 0x78A6F6] [0x10] ()i
    int(__cdecl* m_TPipeStream_Delete)(TPipeStream* pThis); // [Delete at 0x78A745] [0x14] ()i
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
    int(__cdecl* m_TPipeStream_Flush)(TPipeStream* pThis); // [Flush at 0x78A7F9] [0x40] ()i
    int(__cdecl* m_TPipeStream_Close)(TPipeStream* pThis); // [Close at 0x78A778] [0x44] ()i
    int(__cdecl* m_TPipeStream_Read)(TPipeStream* pThis, void* a1, int a2); // [Read at 0x78A7BB] [0x48] (*b,i)i
    int(__cdecl* m_TPipeStream_Write)(TPipeStream* pThis, void* a1, int a2); // [Write at 0x78A7DA] [0x4C] (*b,i)i
    void* nothing_19; // 0x50
    void* nothing_20; // 0x54
    void* nothing_21; // 0x58
    void* nothing_22; // 0x5C
    void* nothing_23; // 0x60
    void* nothing_24; // 0x64
    void* nothing_25; // 0x68
    void* nothing_26; // 0x6C
    void* nothing_27; // 0x70
    void* nothing_28; // 0x74
    void* nothing_29; // 0x78
    void* nothing_30; // 0x7C
    void* nothing_31; // 0x80
    void* nothing_32; // 0x84
    void* nothing_33; // 0x88
    BBString*(__cdecl* m_TPipeStream_ReadLine)(TPipeStream* pThis); // [ReadLine at 0x78A885] [0x8C] ()$
    void* nothing_35; // 0x90
    void* nothing_36; // 0x94
    void* nothing_37; // 0x98
    void* nothing_38; // 0x9C
    void* nothing_39; // 0xA0
    int(__cdecl* m_TPipeStream_ReadAvail)(TPipeStream* pThis); // [ReadAvail at 0x78A815] [0xA4] ()i
    void*(__cdecl* m_TPipeStream_ReadPipe)(TPipeStream* pThis); // [ReadPipe at 0x78A82C] [0xA8] ()[]b
    TPipeStream*(__cdecl* fn_Create)(int a1, int a2); // [Create at 0x78A99A] [0xAC] (i,i):TPipeStream
};


// Super: 0x8FC2BC
// 4 members
struct TPipeStream {
    TPipeStreamDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_readbuffer; // 0x8 <type_[]b>
    int m_bufferpos; // 0xC <type_i>
    int m_readhandle; // 0x10 <type_i>
    int m_writehandle; // 0x14 <type_i>
};


