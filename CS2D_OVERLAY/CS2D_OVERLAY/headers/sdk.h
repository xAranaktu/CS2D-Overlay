#pragma once
#pragma warning(disable : 4200)

#pragma region BRL
// https://github.com/bmx-ng/brl.mod/tree/master/blitz.mod

typedef struct BBDebugDecl BBDebugDecl;
typedef struct BBDebugScope BBDebugScope;

enum DebugeclCodes {
    BBDEBUGDECL_END = 0,
    BBDEBUGDECL_CONST = 1,
    BBDEBUGDECL_LOCAL = 2,
    BBDEBUGDECL_FIELD = 3,
    BBDEBUGDECL_GLOBAL = 4,
    BBDEBUGDECL_VARPARAM = 5,

    BBDEBUGDECL_TYPEMETHOD = 6,
    BBDEBUGDECL_TYPEFUNCTION = 7
};

enum DebugScopeCodes {
    BBDEBUGSCOPE_FUNCTION = 1,
    BBDEBUGSCOPE_USERTYPE = 2,
    BBDEBUGSCOPE_LOCALBLOCK = 3,
    BBDEBUGSCOPE_USERINTERFACE = 4,
    BBDEBUGSCOPE_USERSTRUCT = 5,
    BBDEBUGSCOPE_USERENUM = 6,
};

struct BBDebugDecl {
    unsigned int    kind;  // DebugeclCodes
    const char* name;
    const char* type_tag;
    unsigned int    offset;
};

struct BBDebugScope {
    unsigned int    kind;   // DebugScopeCodes
    const char*     name;
    BBDebugDecl     decls;
    // ... 
    // decls until BBDEBUGDECL_END
};

struct BBString {
    void* cls;
    unsigned int    kind;   // DebugScopeCodes (?)
    int length; //0x0008
    wchar_t buf[]; //0x000C
};

#pragma endregion BRL

struct GameOffsets {
    // DWORD tickCount =       0x496BC4;

    DWORD pInvalid = 0x3C7BC0;   // EmptyPtr
    DWORD g_pPlayersEntityList = 0x487330;
    DWORD isMatchLive = 0x497DAC;
    DWORD g_pLocalPlayer = 0x497E04;
    DWORD clockMin = 0x497F10;
    DWORD specFollow = 0x497FA4;
    DWORD specBase = 0x498364;
    DWORD patchNoFlash = 0x2A3441;
    DWORD patchNoFow = 0x27CBF0;

    DWORD totalRounds = isMatchLive + 0x8;
    DWORD ttRounds = totalRounds + 0x4;
    DWORD ctRounds = ttRounds + 0x4;

    DWORD clockSec = clockMin + 0x4;

    DWORD specFollowID = specFollow + 0x4;

    // CPlayer
    DWORD pEntListOff1 = 0x8;
    DWORD pEntListOff2 = 0xC;
    DWORD pEntListOff3 = 0x0;

    // SpecMode
    DWORD specModeOff1 = 0x19;
} inline gameOffsets;

typedef class TList  TList;
typedef class TLink  TLink;
typedef class cInt cInt;
typedef class Titem  Titem;
typedef class Ttimer   Ttimer;
typedef class CPlayer CPlayer;

class Validator {
public:
    static bool ObjIsValid(void* addr) {
        return reinterpret_cast<DWORD>(addr) != (g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.pInvalid);
    }
};


class ClassDecl
{
public:
    void* pSuper; //0x0000
    void* fnFree; //0x0004
    BBDebugScope* pDebugScope; //0x0008
    size_t sz; //0x000C

    // functions...
    char pad_0010[4]; //0x0010
}; //Size: 0x0014

class TLink {
public:
    ClassDecl* pClassDecl; // 0x0 
    unsigned int    kind;  // 0x4 DebugeclCodes (?) 
    void* m_value; // 0x8 <type_:Object> 
    TLink* m_succ; // 0xC <type_:TLink> 
    TLink* m_pred; // 0x10 <type_:TLink>

    static TLink* Next(TLink* p) {
        return p->m_succ;
    }

    static TLink* Prev(TLink* p) {
        return p->m_pred;
    }

    static void* Get(TLink* p) {
        return p->m_value;
    }
};

class TList {
public:
    ClassDecl* pClassDecl; // 0x0 
    unsigned int    kind;  // 0x4 DebugeclCodes (?) 
    TLink* m_head; // 0x8 <type_:TLink>

    static TLink* GetFirstLink(TList* p) {
        return p->m_head->m_succ;
    }
};

class cInt
{
public:
    ClassDecl* pClassDecl; // 0x0
    unsigned int    kind;  // DebugeclCodes (?) 
    int m_value; // 0x8 <type_i> 
    int m_valueRND; // 0xC <type_i> 
    void* m_check; // 0x10 <type_[]i> 

    static int Get(cInt* p) {
        return p->m_value + p->m_valueRND;
    }
}; //Size: 0x0010

class Titem {
public:
    ClassDecl* pClassDecl; // 0x0 
    unsigned int    kind;  // 0x4 DebugeclCodes (?) 
    int m_id; // 0x8 <type_i> 
    int m_typ; // 0xC <type_i> 
    int m_player; // 0x10 <type_i> 
    int m_ammo; // 0x14 <type_i> 
    int m_ammoin; // 0x18 <type_i> 
    int m_mode; // 0x1C <type_i> 
    int m_x; // 0x20 <type_i> 
    int m_y; // 0x24 <type_i> 
    float m_rot; // 0x28 <type_f> 
    int m_water; // 0x2C <type_i> 
    float m_watertimer; // 0x30 <type_f> 
    int m_dropped; // 0x34 <type_i> 
    int m_droptimer; // 0x38 <type_i> 
    int m_visible; // 0x3C <type_i>

    static std::string GetAmmo(Titem* p) {
        if ( 
            p->m_typ == 51 ||
            p->m_typ == 52 ||
            p->m_typ == 53 ||
            p->m_typ == 54
        ) {
            // Grenade
            return std::to_string(p->m_ammoin);
        }
        else if (
            p->m_typ == 50 ||
            p->m_typ == 55
        ) {
            // Knife / Bomb
            return "";
        }
        else {
            // Gun
            return std::to_string(p->m_ammoin) + "/" + std::to_string(p->m_ammo);
        }
    }
};

class Ttimer {
public:
    ClassDecl* pClassDecl; // 0x0 
    unsigned int    kind;  // 0x4 DebugeclCodes (?) 
    int m_time; // 0x8 <type_i> 
};

// Tpl
class CPlayer
{
public:
    ClassDecl* pClassDecl; // 0x0 
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
    void* m_roundStats; // 0x54 <type_:StatsMap> 
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
    void* m_con; // 0x90 <type_:Tudp_con> 
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
    void* m_userstats; // 0x23C <type_:Tstats_user> 
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
    void* m_reloadchan; // 0x28C <type_:TChannel> 
    int m_proc; // 0x290 <type_i> 
    Ttimer* m_proctimer; // 0x294 <type_:Ttimer> 
    Ttimer* m_respawn; // 0x298 <type_:Ttimer> 
    float m_dynamic_recoil; // 0x29C <type_f> 
    void* m_avatar; // 0x2A0 <type_:TImage> 
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
    void* m_spray; // 0x2F0 <type_:TImage> 
    void* m_spraybank; // 0x2F4 <type_:TBank> 
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

    static CPlayer* GetLocalPlayer() {
        DWORD pLocalPlayer = *(DWORD*)(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.g_pLocalPlayer);
        return reinterpret_cast<CPlayer*>(pLocalPlayer);
    }

    static TList* GetPlayersList() {
        DWORD addr = *(DWORD*)(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.g_pPlayersEntityList);
        return reinterpret_cast<TList*>(addr);
    }

    static std::string GetAmmo(CPlayer* p) {
        return Titem::GetAmmo(p->m_weapon);
    }

    static std::string KDA(CPlayer* p) {
        std::string result = std::to_string(p->m_score) + "/" + std::to_string(p->m_deaths) + "/" + std::to_string(p->m_assists);
        return result;
    }
}; //Size: 0x0C40