#pragma once

#include "defines.h"

// 16 methods, 11 functions
struct TxmlXPathObjectDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TxmlXPathObject_New)(TxmlXPathObject* pThis); // [New at 0x78CFD9] [0x10] ()i
    int(__cdecl* m_TxmlXPathObject_Delete)(TxmlXPathObject* pThis); // [Delete at 0x78D002] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TxmlXPathObject*(__cdecl* fn__create)(void* a1); // [_create at 0x78D010] [0x30] (*b):TxmlXPathObject
    TxmlXPathObject*(__cdecl* fn_XPointerNewCollapsedRange)(TxmlNode* a1); // [XPointerNewCollapsedRange at 0x78D03A] [0x34] (:TxmlNode):TxmlXPathObject
    TxmlXPathObject*(__cdecl* fn_XPointerNewLocationSetNodeSet)(TxmlNodeSet* a1); // [XPointerNewLocationSetNodeSet at 0x78D05B] [0x38] (:TxmlNodeSet):TxmlXPathObject
    TxmlXPathObject*(__cdecl* fn_XPointerNewLocationSetNodes)(TxmlNode* a1, TxmlNode* a2); // [XPointerNewLocationSetNodes at 0x78D07C] [0x3C] (:TxmlNode,:TxmlNode):TxmlXPathObject
    TxmlXPathObject*(__cdecl* fn_XPointerNewRange)(TxmlNode* a1, int a2, TxmlNode* a3, int a4); // [XPointerNewRange at 0x78D0C3] [0x40] (:TxmlNode,i,:TxmlNode,i):TxmlXPathObject
    TxmlXPathObject*(__cdecl* fn_XPointerNewRangeNodeObject)(TxmlNode* a1, TxmlXPathObject* a2); // [XPointerNewRangeNodeObject at 0x78D0F4] [0x44] (:TxmlNode,:TxmlXPathObject):TxmlXPathObject
    TxmlXPathObject*(__cdecl* fn_XPointerNewRangeNodePoint)(TxmlNode* a1, TxmlXPathObject* a2); // [XPointerNewRangeNodePoint at 0x78D11B] [0x48] (:TxmlNode,:TxmlXPathObject):TxmlXPathObject
    TxmlXPathObject*(__cdecl* fn_XPointerNewRangeNodes)(TxmlNode* a1, TxmlNode* a2); // [XPointerNewRangeNodes at 0x78D142] [0x4C] (:TxmlNode,:TxmlNode):TxmlXPathObject
    TxmlXPathObject*(__cdecl* fn_XPointerNewRangePointNode)(TxmlXPathObject* a1, TxmlNode* a2); // [XPointerNewRangePointNode at 0x78D169] [0x50] (:TxmlXPathObject,:TxmlNode):TxmlXPathObject
    TxmlXPathObject*(__cdecl* fn_XPointerNewRangePoints)(TxmlXPathObject* a1, TxmlXPathObject* a2); // [XPointerNewRangePoints at 0x78D190] [0x54] (:TxmlXPathObject,:TxmlXPathObject):TxmlXPathObject
    TxmlXPathObject*(__cdecl* fn_XPointerWrapLocationSet)(TxmlLocationSet* a1); // [XPointerWrapLocationSet at 0x78D1B7] [0x58] (:TxmlLocationSet):TxmlXPathObject
    int(__cdecl* m_TxmlXPathObject_getType)(TxmlXPathObject* pThis); // [getType at 0x78D1D8] [0x5C] ()i
    TxmlNodeSet*(__cdecl* m_TxmlXPathObject_getNodeSet)(TxmlXPathObject* pThis); // [getNodeSet at 0x78D1EF] [0x60] ():TxmlNodeSet
    int(__cdecl* m_TxmlXPathObject_nodeSetIsEmpty)(TxmlXPathObject* pThis); // [nodeSetIsEmpty at 0x78D210] [0x64] ()i
    BBString*(__cdecl* m_TxmlXPathObject_getStringValue)(TxmlXPathObject* pThis); // [getStringValue at 0x78D249] [0x68] ()$
    int(__cdecl* m_TxmlXPathObject_castToBoolean)(TxmlXPathObject* pThis); // [castToBoolean at 0x78D260] [0x6C] ()i
    void*(__cdecl* m_TxmlXPathObject_castToNumber)(TxmlXPathObject* pThis); // [castToNumber at 0x78D277] [0x70] ()d
    BBString*(__cdecl* m_TxmlXPathObject_castToString)(TxmlXPathObject* pThis); // [castToString at 0x78D28E] [0x74] ()$
    TxmlXPathObject*(__cdecl* m_TxmlXPathObject_convertBoolean)(TxmlXPathObject* pThis); // [convertBoolean at 0x78D2A5] [0x78] ():TxmlXPathObject
    TxmlXPathObject*(__cdecl* m_TxmlXPathObject_convertNumber)(TxmlXPathObject* pThis); // [convertNumber at 0x78D2C6] [0x7C] ():TxmlXPathObject
    TxmlXPathObject*(__cdecl* m_TxmlXPathObject_convertString)(TxmlXPathObject* pThis); // [convertString at 0x78D2E7] [0x80] ():TxmlXPathObject
    TxmlXPathObject*(__cdecl* m_TxmlXPathObject_copy)(TxmlXPathObject* pThis); // [copy at 0x78D308] [0x84] ():TxmlXPathObject
    TxmlNode*(__cdecl* m_TxmlXPathObject_XPointerBuildNodeList)(TxmlXPathObject* pThis); // [XPointerBuildNodeList at 0x78D329] [0x88] ():TxmlNode
    TxmlLocationSet*(__cdecl* m_TxmlXPathObject_XPointerLocationSetCreate)(TxmlXPathObject* pThis); // [XPointerLocationSetCreate at 0x78D34A] [0x8C] ():TxmlLocationSet
    int(__cdecl* m_TxmlXPathObject_free)(TxmlXPathObject* pThis); // [free at 0x78D36B] [0x90] ()i
};


// 1 members
struct TxmlXPathObject {
    TxmlXPathObjectDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_xmlXPathObjectPtr; // 0x8 <type_*b>
};


