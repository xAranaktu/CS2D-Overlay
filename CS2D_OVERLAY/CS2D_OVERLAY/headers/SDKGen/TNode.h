#pragma once

#include "defines.h"

// 8 methods, 0 functions
struct TNodeDecl {
    void* pSuper;  // 0x0 0x8E7C74
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 32(0x20)
    int(__cdecl* m_TNode_New)(TNode* pThis); // [New at 0x799DBE] [0x10] ()i
    int(__cdecl* m_TNode_Delete)(TNode* pThis); // [Delete at 0x799E08] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    Object*(__cdecl* m_TNode_Key)(TNode* pThis); // [Key at 0x79A025] [0x30] ():Object
    Object*(__cdecl* m_TNode_Value)(TNode* pThis); // [Value at 0x79A034] [0x34] ():Object
    TNode*(__cdecl* m_TNode_NextNode)(TNode* pThis); // [NextNode at 0x799E5D] [0x38] ():TNode
    TNode*(__cdecl* m_TNode_PrevNode)(TNode* pThis); // [PrevNode at 0x799E9A] [0x3C] ():TNode
    int(__cdecl* m_TNode_Clear)(TNode* pThis); // [Clear at 0x799ED7] [0x40] ()i
    TNode*(__cdecl* m_TNode_Copy)(TNode* pThis, TNode* a1); // [Copy at 0x799F34] [0x44] (:TNode):TNode
};


// Super: 0x8E7C74
// 4 members
struct TNode {
    TNodeDecl* decl; // 0x0
    unsigned int    kind;  // 0x4 DebugeclCodes (?)
    int m__color; // 0x10 <type_i>
    TNode* m__parent; // 0x14 <type_:TNode>
    TNode* m__left; // 0x18 <type_:TNode>
    TNode* m__right; // 0x1C <type_:TNode>
};


