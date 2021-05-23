#pragma once

#include "defines.h"

// 32 methods, 23 functions
struct TplDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 864(0x360)
    int(__cdecl* m_Tpl_New)(Tpl* pThis); // [New at 0x63A376] [0x10] ()i
    int(__cdecl* m_Tpl_Delete)(Tpl* pThis); // [Delete at 0x63AC14] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_assistsExist)(); // [assistsExist at 0x63AF3D] [0x30] ()i
    int(__cdecl* m_Tpl_resetDamageFrom)(Tpl* pThis); // [resetDamageFrom at 0x63AFB1] [0x34] ()i
    int(__cdecl* m_Tpl_takeDamage)(Tpl* pThis, int a1, int a2); // [takeDamage at 0x63AFEE] [0x38] (i,i)i
    int(__cdecl* m_Tpl_resetDamageTaken)(Tpl* pThis); // [resetDamageTaken at 0x63B061] [0x3C] ()i
    int(__cdecl* fn_freeall)(); // [freeall at 0x63B09C] [0x40] ()i
    int(__cdecl* fn_free)(int a1); // [free at 0x63B21B] [0x44] (i)i
    int(__cdecl* fn_count_t)(); // [count_t at 0x63B4C8] [0x48] ()i
    int(__cdecl* fn_count_ct)(); // [count_ct at 0x63B532] [0x4C] ()i
    int(__cdecl* fn_count_t_nobot)(); // [count_t_nobot at 0x63B59C] [0x50] ()i
    int(__cdecl* fn_count_ct_nobot)(); // [count_ct_nobot at 0x63B628] [0x54] ()i
    int(__cdecl* fn_count_t_bot)(); // [count_t_bot at 0x63B6B4] [0x58] ()i
    int(__cdecl* fn_count_ct_bot)(); // [count_ct_bot at 0x63B740] [0x5C] ()i
    int(__cdecl* fn_count_look)(int a1, int a2); // [count_look at 0x63B7CC] [0x60] (i,i)i
    int(__cdecl* fn_count_living)(int a1); // [count_living at 0x63B8D2] [0x64] (i)i
    int(__cdecl* fn_count_in_area)(int a1, int a2, int a3, int a4); // [count_in_area at 0x63B9D3] [0x68] (i,i,i,i)i
    Tpl*(__cdecl* fn_add)(int a1, int a2); // [add at 0x63BAFC] [0x6C] (i,i):Tpl
    int(__cdecl* fn_getMuteByID)(int a1); // [getMuteByID at 0x63BFCB] [0x70] (i)i
    int(__cdecl* fn_setMuteAll)(int a1); // [setMuteAll at 0x63BFF2] [0x74] (i)i
    int(__cdecl* m_Tpl_setMute)(Tpl* pThis, int a1); // [setMute at 0x63C05C] [0x78] (i)i
    int(__cdecl* m_Tpl_getMute)(Tpl* pThis); // [getMute at 0x63C08C] [0x7C] ()i
    Tpl*(__cdecl* fn_get)(int a1); // [get at 0x63C09B] [0x80] (i):Tpl
    Tpl*(__cdecl* fn_getbot)(int a1); // [getbot at 0x63C101] [0x84] (i):Tpl
    Tudp_con*(__cdecl* fn_getcon)(int a1); // [getcon at 0x63C147] [0x88] (i):Tudp_con
    Tpl*(__cdecl* fn_getbycon)(Tudp_con* a1); // [getbycon at 0x63C171] [0x8C] (:Tudp_con):Tpl
    Tpl*(__cdecl* fn_getbyipport)(int a1, void* a2); // [getbyipport at 0x63C1DA] [0x90] (i,s):Tpl
    Tpl*(__cdecl* fn_getbystring)(BBString* a1); // [getbystring at 0x63C2C2] [0x94] ($):Tpl
    int(__cdecl* m_Tpl_getFrame)(Tpl* pThis); // [getFrame at 0x63C3BF] [0x98] ()i
    TImage*(__cdecl* m_Tpl_getAvatarImage)(Tpl* pThis); // [getAvatarImage at 0x63C569] [0x9C] ():TImage
    TImage*(__cdecl* m_Tpl_getArmorImage)(Tpl* pThis); // [getArmorImage at 0x63C60E] [0xA0] ():TImage
    int(__cdecl* m_Tpl_getAssist)(Tpl* pThis, int a1); // [getAssist at 0x63C6C9] [0xA4] (i)i
    int(__cdecl* fn_update)(); // [update at 0x63C73F] [0xA8] ()i
    int(__cdecl* m_Tpl_drawAvatarRect)(Tpl* pThis, int a1, int a2, int a3, int a4); // [drawAvatarRect at 0x63E3ED] [0xAC] (i,i,i,i)i
    int(__cdecl* m_Tpl_drawFlag)(Tpl* pThis, int a1, int a2); // [drawFlag at 0x63E509] [0xB0] (i,i)i
    int(__cdecl* m_Tpl_getFlagID)(Tpl* pThis); // [getFlagID at 0x63E656] [0xB4] ()i
    int(__cdecl* m_Tpl_draw)(Tpl* pThis); // [draw at 0x63E69F] [0xB8] ()i
    int(__cdecl* fn_drawAll)(); // [drawAll at 0x63FFE3] [0xBC] ()i
    int(__cdecl* m_Tpl_move)(Tpl* pThis, float a1, float a2, int a3, int a4); // [move at 0x640043] [0xC0] (f,f,i,i)i
    int(__cdecl* m_Tpl_tilepos)(Tpl* pThis, int a1); // [tilepos at 0x640F88] [0xC4] (i)i
    int(__cdecl* m_Tpl_setweapon)(Tpl* pThis, int a1, int a2); // [setweapon at 0x6431A6] [0xC8] (i,i)i
    Titem*(__cdecl* m_Tpl_getweapon)(Tpl* pThis, int a1); // [getweapon at 0x6433C7] [0xCC] (i):Titem
    Titem*(__cdecl* m_Tpl_giveweapon)(Tpl* pThis, int a1); // [giveweapon at 0x643438] [0xD0] (i):Titem
    int(__cdecl* m_Tpl_setprevweapon)(Tpl* pThis, int a1); // [setprevweapon at 0x6434D8] [0xD4] (i)i
    int(__cdecl* m_Tpl_bestweapon)(Tpl* pThis); // [bestweapon at 0x64351E] [0xD8] ()i
    int(__cdecl* m_Tpl_freeweapons)(Tpl* pThis); // [freeweapons at 0x643686] [0xDC] ()i
    int(__cdecl* m_Tpl_shoot)(Tpl* pThis, int a1, int a2, int a3, int a4, int a5, int a6, int a7); // [shoot at 0x643725] [0xE0] (i,i,i,i,i,i,i)i
    int(__cdecl* m_Tpl_shoot_recoil)(Tpl* pThis, int a1, float a2, int a3, int a4, int a5); // [shoot_recoil at 0x643899] [0xE4] (i,f,i,i,i)i
    int(__cdecl* m_Tpl_drawflashlight)(Tpl* pThis, int a1); // [drawflashlight at 0x64391A] [0xE8] (i)i
    int(__cdecl* m_Tpl_setspray)(Tpl* pThis, BBString* a1, int a2); // [setspray at 0x643AA0] [0xEC] ($,i)i
    int(__cdecl* m_Tpl_getspray)(Tpl* pThis); // [getspray at 0x643D4B] [0xF0] ()i
    int(__cdecl* m_Tpl_getspecialbyte)(Tpl* pThis); // [getspecialbyte at 0x643E98] [0xF4] ()i
    int(__cdecl* m_Tpl_setspecialbyte)(Tpl* pThis, int a1); // [setspecialbyte at 0x643F08] [0xF8] (i)i
    int(__cdecl* m_Tpl_getammo)(Tpl* pThis); // [getammo at 0x644011] [0xFC] ()i
    int(__cdecl* m_Tpl_decammo)(Tpl* pThis); // [decammo at 0x644056] [0x100] ()i
};


// 212 members
struct Tpl {
    TplDecl* decl; // 0x0
    unsigned int    kind;  // 0x4 DebugeclCodes (?)
    int m_id; // 0x8 <type_i>
    BBString* m_name; // 0xC <type_$>
    int m_ip; // 0x10 <type_i>
    void* m_port; // 0x14 <type_s>
    long long m_usgnid; // 0x18 <type_l>
    BBString* m_usgnname; // 0x20 <type_$>
    BBString* m_usgncountry; // 0x24 <type_$>
    int m_usgnmode; // 0x28 <type_i>
    BBString* m_usgnmodetxt; // 0x2C <type_$>
    BBString* m_localization; // 0x30 <type_$>
    BBString* m_localization_iso; // 0x34 <type_$>
    int m_random; // 0x38 <type_i>
    int m_net_random; // 0x3C <type_i>
    long long m_steamid; // 0x40 <type_l>
    BBString* m_steamname; // 0x48 <type_$>
    BBString* m_steamcountry; // 0x4C <type_$>
    int m_steamos; // 0x50 <type_i>
    StatsMap* m_roundStats; // 0x54 <type_:StatsMap>
    void* m_DamageFrom; // 0x58 <type_[]i>
    int m_rank; // 0x5C <type_i>
    int m_flagRequest; // 0x60 <type_i>
    float m_radarblink; // 0x64 <type_f>
    float m_voice; // 0x68 <type_f>
    int m_voiceMute; // 0x6C <type_i>
    float m_voiceMuteUpdate; // 0x70 <type_f>
    int m_ChatMute; // 0x74 <type_i>
    float m_ChatMuteBlink; // 0x78 <type_f>
    int m_screenResX; // 0x7C <type_i>
    int m_screenResY; // 0x80 <type_i>
    int m_screen4by3; // 0x84 <type_i>
    int m_screenWin; // 0x88 <type_i>
    int m_microphoneSupport; // 0x8C <type_i>
    Tudp_con* m_con; // 0x90 <type_:Tudp_con>
    int m_ping; // 0x94 <type_i>
    int m_clock; // 0x98 <type_i>
    int m_clock_diff; // 0x9C <type_i>
    float m_clock_ratio; // 0xA0 <type_f>
    int m_clock_highRatio; // 0xA4 <type_i>
    TList* m_nodes; // 0xA8 <type_:TList>
    int m_validrconpw; // 0xAC <type_i>
    int m_net_mode; // 0xB0 <type_i>
    int m_net_joinmode; // 0xB4 <type_i>
    int m_net_moved; // 0xB8 <type_i>
    int m_net_mxsent; // 0xBC <type_i>
    int m_net_mysent; // 0xC0 <type_i>
    int m_net_xsent_pass; // 0xC4 <type_i>
    int m_net_ysent_pass; // 0xC8 <type_i>
    int m_net_xsent; // 0xCC <type_i>
    int m_net_ysent; // 0xD0 <type_i>
    int m_net_rotated; // 0xD4 <type_i>
    float m_net_mspec; // 0xD8 <type_f>
    int m_net_mdist; // 0xDC <type_i>
    Ttimer* m_net_synctimer; // 0xE0 <type_:Ttimer>
    Ttimer* m_net_lastmsg; // 0xE4 <type_:Ttimer>
    int m_net_msgactiontimer; // 0xE8 <type_i>
    int m_net_leave; // 0xEC <type_i>
    int m_net_changemap; // 0xF0 <type_i>
    int m_net_idletimer; // 0xF4 <type_i>
    int m_net_highping; // 0xF8 <type_i>
    Ttimer* m_net_trace; // 0xFC <type_:Ttimer>
    Ttimer* m_net_tracelr; // 0x100 <type_:Ttimer>
    int m_net_fw; // 0x104 <type_i>
    int m_net_fwd; // 0x108 <type_i>
    int m_chatpersecond; // 0x10C <type_i>
    Ttimer* m_as_timer; // 0x110 <type_:Ttimer>
    int m_as_toofast; // 0x114 <type_i>
    int m_as_toofastframes; // 0x118 <type_i>
    int m_as_pps; // 0x11C <type_i>
    float m_as_dps; // 0x120 <type_f>
    int m_as_packetoverflow; // 0x124 <type_i>
    int m_as_speedoverflow; // 0x128 <type_i>
    int m_c_weaponswitch; // 0x12C <type_i>
    int m_c_reload; // 0x130 <type_i>
    int m_bot; // 0x134 <type_i>
    void* m_ai_autoengage; // 0x138 <type_b>
    int m_ai_flash; // 0x13C <type_i>
    float m_ai_rot; // 0x140 <type_f>
    int m_ai_item_scan; // 0x144 <type_i>
    int m_ai_item_rebound; // 0x148 <type_i>
    int m_ai_bought; // 0x14C <type_i>
    int m_ai_lasthit; // 0x150 <type_i>
    int m_ai_aim_tx; // 0x154 <type_i>
    int m_ai_aim_ty; // 0x158 <type_i>
    int m_ai_aim_x; // 0x15C <type_i>
    int m_ai_aim_y; // 0x160 <type_i>
    TList* m_ai_path; // 0x164 <type_:TList>
    int m_ai_path_nx; // 0x168 <type_i>
    int m_ai_path_ny; // 0x16C <type_i>
    int m_ai_path_rot; // 0x170 <type_i>
    int m_ai_path_free; // 0x174 <type_i>
    int m_ai_path_freex; // 0x178 <type_i>
    int m_ai_path_freey; // 0x17C <type_i>
    int m_ai_path_cdx; // 0x180 <type_i>
    int m_ai_path_cdy; // 0x184 <type_i>
    int m_ai_mgoal; // 0x188 <type_i>
    int m_ai_mgoal_x; // 0x18C <type_i>
    int m_ai_mgoal_y; // 0x190 <type_i>
    int m_ai_goal; // 0x194 <type_i>
    int m_ai_goal_x; // 0x198 <type_i>
    int m_ai_goal_y; // 0x19C <type_i>
    int m_ai_goal_mode; // 0x1A0 <type_i>
    int m_ai_goal_id; // 0x1A4 <type_i>
    int m_ai_goal_timer; // 0x1A8 <type_i>
    int m_ai_target_scan; // 0x1AC <type_i>
    int m_ai_target; // 0x1B0 <type_i>
    int m_ai_target_freelinescan; // 0x1B4 <type_i>
    int m_ai_target_freeline; // 0x1B8 <type_i>
    int m_ai_target_aim; // 0x1BC <type_i>
    BBString* m_ai_debugtext; // 0x1C0 <type_$>
    int m_team; // 0x1C4 <type_i>
    int m_specstate; // 0x1C8 <type_i>
    int m_specpl; // 0x1CC <type_i>
    int m_look; // 0x1D0 <type_i>
    float m_x; // 0x1D4 <type_f>
    float m_y; // 0x1D8 <type_f>
    float m_rot; // 0x1DC <type_f>
    float m_wrot; // 0x1E0 <type_f>
    int m_tilex; // 0x1E4 <type_i>
    int m_tiley; // 0x1E8 <type_i>
    int m_tempx; // 0x1EC <type_i>
    int m_tempy; // 0x1F0 <type_i>
    cInt* m_health; // 0x1F4 <type_:cInt>
    cInt* m_maxhealth; // 0x1F8 <type_:cInt>
    cInt* m_armor; // 0x1FC <type_:cInt>
    cInt* m_money; // 0x200 <type_:cInt>
    int m_money_add; // 0x204 <type_i>
    int m_score; // 0x208 <type_i>
    float m_scoreIncTime; // 0x20C <type_f>
    int m_assists; // 0x210 <type_i>
    float m_assistsIncTime; // 0x214 <type_f>
    int m_mvp; // 0x218 <type_i>
    int m_deaths; // 0x21C <type_i>
    float m_deadTime; // 0x220 <type_f>
    int m_teamchanges; // 0x224 <type_i>
    int m_namechanges; // 0x228 <type_i>
    BBString* m_namechangeto; // 0x22C <type_$>
    int m_teammatekilled; // 0x230 <type_i>
    int m_teamkills; // 0x234 <type_i>
    int m_hostagekills; // 0x238 <type_i>
    Tstats_user* m_userstats; // 0x23C <type_:Tstats_user>
    int m_teambuildingkills; // 0x240 <type_i>
    BBString* m_grenrebuy; // 0x244 <type_$>
    int m_firstteamselection; // 0x248 <type_i>
    Titem* m_weapon; // 0x24C <type_:Titem>
    cInt* m_nv; // 0x250 <type_:cInt>
    int m_defuse; // 0x254 <type_i>
    int m_bomb; // 0x258 <type_i>
    int m_flag; // 0x25C <type_i>
    int m_gasmask; // 0x260 <type_i>
    int m_flashlight; // 0x264 <type_i>
    int m_prevwpn; // 0x268 <type_i>
    float m_recoil; // 0x26C <type_f>
    Ttimer* m_firetimer; // 0x270 <type_:Ttimer>
    int m_firebuffer; // 0x274 <type_i>
    float m_knifeslash; // 0x278 <type_f>
    int m_reload; // 0x27C <type_i>
    Ttimer* m_reloadtimer; // 0x280 <type_:Ttimer>
    float m_reloadani; // 0x284 <type_f>
    int m_reloadblock; // 0x288 <type_i>
    TChannel* m_reloadchan; // 0x28C <type_:TChannel>
    int m_proc; // 0x290 <type_i>
    Ttimer* m_proctimer; // 0x294 <type_:Ttimer>
    Ttimer* m_respawn; // 0x298 <type_:Ttimer>
    float m_dynamic_recoil; // 0x29C <type_f>
    TImage* m_avatar; // 0x2A0 <type_:TImage>
    int m_avatar_request; // 0x2A4 <type_i>
    int m_avatar_process; // 0x2A8 <type_i>
    float m_feetspeed; // 0x2AC <type_f>
    int m_movedframe; // 0x2B0 <type_i>
    int m_lastmove; // 0x2B4 <type_i>
    float m_laststep; // 0x2B8 <type_f>
    float m_feetframe; // 0x2BC <type_f>
    float m_feettimer; // 0x2C0 <type_f>
    int m_feetrot; // 0x2C4 <type_i>
    int m_rotoffset; // 0x2C8 <type_i>
    cInt* m_speedmod; // 0x2CC <type_:cInt>
    int m_mx; // 0x2D0 <type_i>
    int m_my; // 0x2D4 <type_i>
    float m_mdist; // 0x2D8 <type_f>
    int m_moved_x; // 0x2DC <type_i>
    int m_moved_y; // 0x2E0 <type_i>
    float m_fx_snow; // 0x2E4 <type_f>
    float m_fx_water; // 0x2E8 <type_f>
    float m_fx_flash; // 0x2EC <type_f>
    TImage* m_spray; // 0x2F0 <type_:TImage>
    TBank* m_spraybank; // 0x2F4 <type_:TBank>
    BBString* m_sprayname; // 0x2F8 <type_$>
    int m_spraycol; // 0x2FC <type_i>
    int m_spraytimer; // 0x300 <type_i>
    int m_rsarmor; // 0x304 <type_i>
    int m_votekick; // 0x308 <type_i>
    int m_votemap; // 0x30C <type_i>
    int m_lastvote; // 0x310 <type_i>
    int m_temp; // 0x314 <type_i>
    int m_sortval; // 0x318 <type_i>
    void* m_givestuff; // 0x31C <type_[]i>
    int m_fog; // 0x320 <type_i>
    int m_lastspawnmoney; // 0x324 <type_i>
    int m_favteam; // 0x328 <type_i>
    TList* m_transfer; // 0x32C <type_:TList>
    int m_transferdone; // 0x330 <type_i>
    int m_transfersetting; // 0x334 <type_i>
    int m_httptransfer; // 0x338 <type_i>
    int m_httptransferdone; // 0x33C <type_i>
    float m_fpsfacs; // 0x340 <type_f>
    int m_fpsmove; // 0x344 <type_i>
    float m_plantanimation; // 0x348 <type_f>
    float m_plantanimframe; // 0x34C <type_f>
    int m_plantanimationbeep; // 0x350 <type_i>
    int m_plantanimationstart; // 0x354 <type_i>
    int m_plantanimationtimer; // 0x358 <type_i>
    TList* m_trail; // 0x35C <type_:TList>
};


