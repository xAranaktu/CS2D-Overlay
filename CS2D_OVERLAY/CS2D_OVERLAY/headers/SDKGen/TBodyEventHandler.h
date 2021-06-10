#pragma once

#include "defines.h"

// 5 methods, 0 functions
struct TBodyEventHandlerDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TBodyEventHandler_New)(TBodyEventHandler* pThis); // [New at 0x5F099D] [0x10] ()i
    int(__cdecl* m_TBodyEventHandler_Delete)(TBodyEventHandler* pThis); // [Delete at 0x5F09CA] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TBodyEventHandler_Add)(TBodyEventHandler* pThis, TBodyEventListener* a1); // [Add at 0x5F09EC] [0x30] (:TBodyEventListener)i
    int(__cdecl* m_TBodyEventHandler_Clear)(TBodyEventHandler* pThis); // [Clear at 0x5F0A23] [0x34] ()i
    int(__cdecl* m_TBodyEventHandler_Updated)(TBodyEventHandler* pThis, Vector2* a1, float a2); // [Updated at 0x5F0A40] [0x38] (:Vector2,f)i
};


// 1 members
struct TBodyEventHandler {
    TBodyEventHandlerDecl* decl; // 0x0
    int    refs;  // 0x4
    TList* m__listeners; // 0x8 <type_:TList>
};


