#pragma once

#include "defines.h"

// 11 methods, 1 functions
struct Tgui_joinmenDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 124(0x7C)
    int(__cdecl* m_Tgui_joinmen_New)(Tgui_joinmen* pThis); // [New at 0x72984F] [0x10] ()i
    int(__cdecl* m_Tgui_joinmen_Delete)(Tgui_joinmen* pThis); // [Delete at 0x7298FF] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_joinmen_draw)(Tgui_joinmen* pThis); // [draw at 0x729A52] [0x30] ()i
    int(__cdecl* m_Tgui_joinmen_Update)(Tgui_joinmen* pThis); // [Update at 0x729A44] [0x34] ()i
    int(__cdecl* m_Tgui_joinmen_AutoFit)(Tgui_joinmen* pThis); // [AutoFit at 0x72B4D1] [0x38] ()i
    Tgui_joinmen*(__cdecl* fn_Create)(Tgui* a1); // [Create at 0x7299A9] [0x3C] (:Tgui):Tgui_joinmen
    int(__cdecl* m_Tgui_joinmen_reset)(Tgui_joinmen* pThis); // [reset at 0x72B060] [0x40] ()i
    int(__cdecl* m_Tgui_joinmen_pwprompt)(Tgui_joinmen* pThis); // [pwprompt at 0x72B100] [0x44] ()i
    int(__cdecl* m_Tgui_joinmen_errorprompt)(Tgui_joinmen* pThis, int a1); // [errorprompt at 0x72B1EE] [0x48] (i)i
    int(__cdecl* m_Tgui_joinmen_uservalidation)(Tgui_joinmen* pThis); // [uservalidation at 0x72B2FD] [0x4C] ()i
    int(__cdecl* m_Tgui_joinmen_autoretry)(Tgui_joinmen* pThis); // [autoretry at 0x72B379] [0x50] ()i
    int(__cdecl* m_Tgui_joinmen_mapdownload)(Tgui_joinmen* pThis); // [mapdownload at 0x72B408] [0x54] ()i
};


// Super: 0x88E898
// 16 members
struct Tgui_joinmen {
    Tgui_joinmenDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_menu; // 0x3C <type_i>
    int m_error; // 0x40 <type_i>
    Ttimer* m_jointimer; // 0x44 <type_:Ttimer>
    BBString* m_joinname; // 0x48 <type_$>
    int m_joinid; // 0x4C <type_i>
    BBString* m_mapname; // 0x50 <type_$>
    BBString* m_clientverification; // 0x54 <type_$>
    int m_joinstep; // 0x58 <type_i>
    BBString* m_dlfile; // 0x5C <type_$>
    BBString* m_dlprog; // 0x60 <type_$>
    float m_dlperc; // 0x64 <type_f>
    int m_dlfnum; // 0x68 <type_i>
    int m_dlftotal; // 0x6C <type_i>
    Ttimer* m_retrytimer; // 0x70 <type_:Ttimer>
    int m_holepunch; // 0x74 <type_i>
    BBString* m_banreason; // 0x78 <type_$>
};


