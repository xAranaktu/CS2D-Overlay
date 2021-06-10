#pragma once

#include "defines.h"

// 15 methods, 7 functions
struct TxmlValidCtxtDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TxmlValidCtxt_New)(TxmlValidCtxt* pThis); // [New at 0x78EAFD] [0x10] ()i
    int(__cdecl* m_TxmlValidCtxt_Delete)(TxmlValidCtxt* pThis); // [Delete at 0x78EB26] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TxmlValidCtxt*(__cdecl* fn__create)(void* a1); // [_create at 0x78EB34] [0x30] (*b):TxmlValidCtxt
    int(__cdecl* fn_validateAttributeValue)(int a1, BBString* a2); // [validateAttributeValue at 0x78EB5E] [0x34] (i,$)i
    TxmlValidCtxt*(__cdecl* fn_newValidCtxt)(); // [newValidCtxt at 0x78EB77] [0x38] ():TxmlValidCtxt
    int(__cdecl* fn_validateNameValue)(BBString* a1); // [validateNameValue at 0x78EB8F] [0x3C] ($)i
    int(__cdecl* fn_validateNamesValue)(BBString* a1); // [validateNamesValue at 0x78EBA4] [0x40] ($)i
    int(__cdecl* fn_validateNmtokenValue)(BBString* a1); // [validateNmtokenValue at 0x78EBB9] [0x44] ($)i
    int(__cdecl* fn_validateNmtokensValue)(BBString* a1); // [validateNmtokensValue at 0x78EBCE] [0x48] ($)i
    int(__cdecl* m_TxmlValidCtxt_isValid)(TxmlValidCtxt* pThis); // [isValid at 0x78EBE3] [0x4C] ()i
    int(__cdecl* m_TxmlValidCtxt_isFinishedDtd)(TxmlValidCtxt* pThis); // [isFinishedDtd at 0x78EBFA] [0x50] ()i
    TxmlDoc*(__cdecl* m_TxmlValidCtxt_getDocument)(TxmlValidCtxt* pThis); // [getDocument at 0x78EC11] [0x54] ():TxmlDoc
    int(__cdecl* m_TxmlValidCtxt_validateDocument)(TxmlValidCtxt* pThis, TxmlDoc* a1); // [validateDocument at 0x78EC32] [0x58] (:TxmlDoc)i
    int(__cdecl* m_TxmlValidCtxt_validateDocumentFinal)(TxmlValidCtxt* pThis, TxmlDoc* a1); // [validateDocumentFinal at 0x78EC4F] [0x5C] (:TxmlDoc)i
    int(__cdecl* m_TxmlValidCtxt_validateDtd)(TxmlValidCtxt* pThis, TxmlDoc* a1, TxmlDtd* a2); // [validateDtd at 0x78EC6C] [0x60] (:TxmlDoc,:TxmlDtd)i
    int(__cdecl* m_TxmlValidCtxt_validateDtdFinal)(TxmlValidCtxt* pThis, TxmlDoc* a1, TxmlDtd* a2); // [validateDtdFinal at 0x78EC8F] [0x64] (:TxmlDoc,:TxmlDtd)i
    int(__cdecl* m_TxmlValidCtxt_validateRoot)(TxmlValidCtxt* pThis, TxmlDoc* a1); // [validateRoot at 0x78ECAC] [0x68] (:TxmlDoc)i
    int(__cdecl* m_TxmlValidCtxt_validateElement)(TxmlValidCtxt* pThis, TxmlDoc* a1, TxmlNode* a2); // [validateElement at 0x78ECC9] [0x6C] (:TxmlDoc,:TxmlNode)i
    int(__cdecl* m_TxmlValidCtxt_validateElementDecl)(TxmlValidCtxt* pThis, TxmlDoc* a1, TxmlDtdElement* a2); // [validateElementDecl at 0x78ECEC] [0x70] (:TxmlDoc,:TxmlDtdElement)i
    int(__cdecl* m_TxmlValidCtxt_validateAttributeDecl)(TxmlValidCtxt* pThis, TxmlDoc* a1, TxmlDtdAttribute* a2); // [validateAttributeDecl at 0x78ED0F] [0x74] (:TxmlDoc,:TxmlDtdAttribute)i
    int(__cdecl* m_TxmlValidCtxt_buildContentModel)(TxmlValidCtxt* pThis, TxmlDtdElement* a1); // [buildContentModel at 0x78ED32] [0x78] (:TxmlDtdElement)i
    int(__cdecl* m_TxmlValidCtxt_free)(TxmlValidCtxt* pThis); // [free at 0x78ED4F] [0x7C] ()i
};


// 1 members
struct TxmlValidCtxt {
    TxmlValidCtxtDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_xmlValidCtxtPtr; // 0x8 <type_*b>
};


