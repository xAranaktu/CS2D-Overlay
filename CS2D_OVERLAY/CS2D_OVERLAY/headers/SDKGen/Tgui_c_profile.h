#pragma once

#include "defines.h"

// 9 methods, 1 functions
struct Tgui_c_profileDecl {
    void* pSuper;  // 0x0 0x88E898
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 64(0x40)
    int(__cdecl* m_Tgui_c_profile_New)(Tgui_c_profile* pThis); // [New at 0x713EC4] [0x10] ()i
    int(__cdecl* m_Tgui_c_profile_Delete)(Tgui_c_profile* pThis); // [Delete at 0x713EF1] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tgui_c_profile_draw)(Tgui_c_profile* pThis); // [draw at 0x713FCA] [0x30] ()i
    int(__cdecl* m_Tgui_c_profile_Update)(Tgui_c_profile* pThis); // [Update at 0x713FBC] [0x34] ()i
    int(__cdecl* m_Tgui_c_profile_AutoFit)(Tgui_c_profile* pThis); // [AutoFit at 0x714F4C] [0x38] ()i
    Tgui_c_profile*(__cdecl* fn_Create)(Tgui* a1, int a2, int a3, int a4, int a5); // [Create at 0x713F24] [0x3C] (:Tgui,i,i,i,i):Tgui_c_profile
    int(__cdecl* m_Tgui_c_profile_reset)(Tgui_c_profile* pThis, TImage* a1, int a2, int a3); // [reset at 0x713F98] [0x40] (:TImage,i,i)i
    int(__cdecl* m_Tgui_c_profile_drawserver)(Tgui_c_profile* pThis, int a1, int a2, int a3, int a4, BBString* a5, BBString* a6, BBString* a7); // [drawserver at 0x714C41] [0x44] (i,i,i,i,$,$,$)i
    int(__cdecl* m_Tgui_c_profile_drawShade)(Tgui_c_profile* pThis, int a1, int a2, int a3, int a4); // [drawShade at 0x714DA8] [0x48] (i,i,i,i)i
    int(__cdecl* m_Tgui_c_profile_DrawStatIcon)(Tgui_c_profile* pThis, float a1, float a2, BBString* a3, int a4); // [DrawStatIcon at 0x714E9C] [0x4C] (f,f,$,i)i
};


// Super: 0x88E898
// 1 members
struct Tgui_c_profile {
    Tgui_c_profileDecl* decl; // 0x0
    int    refs;  // 0x4
    tpl* m_p; // 0x3C <type_:tpl>
};


