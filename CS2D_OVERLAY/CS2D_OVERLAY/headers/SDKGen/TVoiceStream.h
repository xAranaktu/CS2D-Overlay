#pragma once

#include "defines.h"

// 3 methods, 2 functions
struct TVoiceStreamDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_TVoiceStream_New)(TVoiceStream* pThis); // [New at 0x687818] [0x10] ()i
    int(__cdecl* m_TVoiceStream_Delete)(TVoiceStream* pThis); // [Delete at 0x687878] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TVoiceStream*(__cdecl* fn_Export)(void* a1, int a2, void* a3, int a4); // [Export at 0x6878AD] [0x30] (*b,i,*b,i):TVoiceStream
    int(__cdecl* fn_Create)(void* a1, int a2, int a3); // [Create at 0x687947] [0x34] (*b,i,i)i
    int(__cdecl* m_TVoiceStream_Init)(TVoiceStream* pThis, void* a1, int a2, int a3); // [Init at 0x6879C1] [0x38] (*b,i,i)i
};


// 4 members
struct TVoiceStream {
    TVoiceStreamDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_AudioStream; // 0x8 <type_[]b>
    int m_size; // 0xC <type_i>
    void* m_Compressed; // 0x10 <type_[]b>
    int m_CompressedSize; // 0x14 <type_i>
};


