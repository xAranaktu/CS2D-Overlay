#pragma once

#include "defines.h"

// 10 methods, 24 functions
struct TdoDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 208(0xD0)
    int(__cdecl* m_Tdo_New)(Tdo* pThis); // [New at 0x666995] [0x10] ()i
    int(__cdecl* m_Tdo_Delete)(Tdo* pThis); // [Delete at 0x666B7F] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_freeall)(); // [freeall at 0x666C6D] [0x30] ()i
    int(__cdecl* fn_free)(int a1, int a2); // [free at 0x666DF8] [0x34] (i,i)i
    Tdo*(__cdecl* fn_add)(int a1, int a2, int a3, int a4); // [add at 0x667047] [0x38] (i,i,i,i):Tdo
    int(__cdecl* fn_getnextfreeid)(); // [getnextfreeid at 0x6672CB] [0x3C] ()i
    int(__cdecl* m_Tdo_healthpercent)(Tdo* pThis); // [healthpercent at 0x66735B] [0x40] ()i
    int(__cdecl* m_Tdo_hpupnetvalue)(Tdo* pThis); // [hpupnetvalue at 0x6673A5] [0x44] ()i
    Tdo*(__cdecl* fn_get)(int a1); // [get at 0x667468] [0x48] (i):Tdo
    Tdo*(__cdecl* fn_getatpos)(int a1, int a2, int a3); // [getatpos at 0x6674CE] [0x4C] (i,i,i):Tdo
    int(__cdecl* m_Tdo_damage)(Tdo* pThis, int a1, int a2, int a3); // [damage at 0x6675AE] [0x50] (i,i,i)i
    int(__cdecl* m_Tdo_doupgrade)(Tdo* pThis, int a1); // [doupgrade at 0x66799B] [0x54] (i)i
    int(__cdecl* fn_kill)(int a1, int a2); // [kill at 0x667DDA] [0x58] (i,i)i
    int(__cdecl* fn_draw_reset)(); // [draw_reset at 0x66893C] [0x5C] ()i
    int(__cdecl* fn_draw_background)(); // [draw_background at 0x668968] [0x60] ()i
    int(__cdecl* fn_draw_ground)(); // [draw_ground at 0x668A0B] [0x64] ()i
    int(__cdecl* fn_draw_obstacle)(); // [draw_obstacle at 0x66C568] [0x68] ()i
    int(__cdecl* fn_draw_wall)(); // [draw_wall at 0x66C6F8] [0x6C] ()i
    int(__cdecl* fn_draw_overwall)(); // [draw_overwall at 0x66C9CC] [0x70] ()i
    int(__cdecl* fn_draw_hud)(); // [draw_hud at 0x66CA85] [0x74] ()i
    int(__cdecl* fn_killfromplayer)(int a1, int a2, int a3); // [killfromplayer at 0x66CB15] [0x78] (i,i,i)i
    int(__cdecl* fn_sametypetoclose)(int a1, int a2, int a3, int a4, int a5); // [sametypetoclose at 0x66CE7B] [0x7C] (i,i,i,i,i)i
    int(__cdecl* fn_counttype)(int a1, int a2, int a3); // [counttype at 0x66D0AE] [0x80] (i,i,i)i
    int(__cdecl* m_Tdo_shoot)(Tdo* pThis, Tpl* a1, float a2, float a3, int a4, int a5, int a6); // [shoot at 0x66D189] [0x84] (:Tpl,f,f,i,i,i)i
    int(__cdecl* fn_getdata)(int a1, int a2, Tudp_p* a3, int a4); // [getdata at 0x66D290] [0x88] (i,i,:Tudp_p,i)i
    int(__cdecl* m_Tdo_sameteam)(Tdo* pThis, Tpl* a1); // [sameteam at 0x66DAD8] [0x8C] (:Tpl)i
    Tdo*(__cdecl* fn_inibuilding)(int a1, int a2, int a3, int a4, int a5, int a6); // [inibuilding at 0x66DB81] [0x90] (i,i,i,i,i,i):Tdo
    int(__cdecl* fn_getBuildAchievement)(int a1, int a2); // [getBuildAchievement at 0x66DCB6] [0x94] (i,i)i
    int(__cdecl* m_Tdo_iniimage)(Tdo* pThis); // [iniimage at 0x66DD5F] [0x98] ()i
    int(__cdecl* m_Tdo_inlasermine)(Tdo* pThis, int a1, int a2); // [inlasermine at 0x66E6FF] [0x9C] (i,i)i
    int(__cdecl* fn_spawn)(int a1, int a2, int a3, int a4, float a5, int a6, int a7, int a8, int a9); // [spawn at 0x66E990] [0xA0] (i,i,i,i,f,i,i,i,i)i
    int(__cdecl* fn_checkentity)(int a1, int a2); // [checkentity at 0x66EDE5] [0xA4] (i,i)i
    int(__cdecl* fn_checkareaentity)(int a1, int a2, int a3); // [checkareaentity at 0x66EECF] [0xA8] (i,i,i)i
    int(__cdecl* fn_setteamcolor)(int a1, int a2); // [setteamcolor at 0x66F018] [0xAC] (i,i)i
};


// 50 members
struct Tdo {
    TdoDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_id; // 0x8 <type_i>
    int m_typ; // 0xC <type_i>
    int m_health; // 0x10 <type_i>
    int m_mode; // 0x14 <type_i>
    int m_team; // 0x18 <type_i>
    int m_player; // 0x1C <type_i>
    float m_x; // 0x20 <type_f>
    float m_y; // 0x24 <type_f>
    float m_rot; // 0x28 <type_f>
    PhysicsUniqueID* m_phys_parent; // 0x2C <type_:PhysicsUniqueID>
    int m_phys_parent_typ; // 0x30 <type_i>
    int m_phys_parent_typid; // 0x34 <type_i>
    int m_phys_parent_mode; // 0x38 <type_i>
    int m_shadow; // 0x3C <type_i>
    Ttimer* m_t1; // 0x40 <type_:Ttimer>
    Ttimer* m_t2; // 0x44 <type_:Ttimer>
    int m_countdown; // 0x48 <type_i>
    float m_rrot; // 0x4C <type_f>
    int m_idle; // 0x50 <type_i>
    float m_rotvar; // 0x54 <type_f>
    int m_target; // 0x58 <type_i>
    int m_upgrade; // 0x5C <type_i>
    void* m_entity; // 0x60 <type_[]i>
    int m_skin; // 0x64 <type_i>
    TImage* m_skinimg; // 0x68 <type_:TImage>
    int m_frame; // 0x6C <type_i>
    int m_frames; // 0x70 <type_i>
    TImage* m_img; // 0x74 <type_:TImage>
    int m_img_avatar; // 0x78 <type_i>
    tpl* m_img_avatar_player; // 0x7C <type_:tpl>
    int m_img_width; // 0x80 <type_i>
    int m_img_height; // 0x84 <type_i>
    int m_img_light; // 0x88 <type_i>
    TLightSource* m_light; // 0x8C <type_:TLightSource>
    BBString* m_path; // 0x90 <type_$>
    void* m_color; // 0x94 <type_[]i>
    float m_alpha; // 0x98 <type_f>
    float m_scalex; // 0x9C <type_f>
    float m_scaley; // 0xA0 <type_f>
    int m_blendmode; // 0xA4 <type_i>
    int m_parentId; // 0xA8 <type_i>
    Tdo* m_parent; // 0xAC <type_:Tdo>
    int m_spritesheet; // 0xB0 <type_i>
    Tdoc* m_col; // 0xB4 <type_:Tdoc>
    int m_coltemp; // 0xB8 <type_i>
    float m_m_x; // 0xBC <type_f>
    float m_m_y; // 0xC0 <type_f>
    float m_m_rot; // 0xC4 <type_f>
    int m_m_lk_x; // 0xC8 <type_i>
    int m_m_lk_y; // 0xCC <type_i>
};


