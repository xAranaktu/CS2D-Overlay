#pragma once
#pragma warning(disable : 4200)

#include "SDKGen/offsets.h"
#include "SDKGen/defines.h"
#include "SDKGen/TList.h"
#include "SDKGen/TLink.h"
#include "SDKGen/Titem.h"
#include "SDKGen/cInt.h"
#include "SDKGen/Tpl.h"

class Validator {
public:
    static bool ObjIsValid(void* addr) {
        return reinterpret_cast<DWORD>(addr) != (g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.pInvalid);
    }
};

//class Titem {
//public:
//    ClassDecl* pClassDecl; // 0x0 
//    int refs; 
//    int m_id; // 0x8 <type_i> 
//    int m_typ; // 0xC <type_i> 
//    int m_player; // 0x10 <type_i> 
//    int m_ammo; // 0x14 <type_i> 
//    int m_ammoin; // 0x18 <type_i> 
//    int m_mode; // 0x1C <type_i> 
//    int m_x; // 0x20 <type_i> 
//    int m_y; // 0x24 <type_i> 
//    float m_rot; // 0x28 <type_f> 
//    int m_water; // 0x2C <type_i> 
//    float m_watertimer; // 0x30 <type_f> 
//    int m_dropped; // 0x34 <type_i> 
//    int m_droptimer; // 0x38 <type_i> 
//    int m_visible; // 0x3C <type_i>
//
//    static std::string GetAmmo(Titem* p) {
//        if ( 
//            p->m_typ == 51 ||
//            p->m_typ == 52 ||
//            p->m_typ == 53 ||
//            p->m_typ == 54
//        ) {
//            // Grenade
//            return std::to_string(p->m_ammoin);
//        }
//        else if (
//            p->m_typ == 50 ||
//            p->m_typ == 55
//        ) {
//            // Knife / Bomb
//            return "";
//        }
//        else {
//            // Gun
//            return std::to_string(p->m_ammoin) + "/" + std::to_string(p->m_ammo);
//        }
//    }
//};

class ItemManager
{
public:
    static std::string GetAmmo(Titem* p) {
        if (!Validator::ObjIsValid(p)) return "";

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

class PlayerManager
{
public:
    static Tpl* GetLocalPlayer() {
        DWORD pLocalPlayer = *(DWORD*)(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.g_pLocalPlayer);
        return reinterpret_cast<Tpl*>(pLocalPlayer);
    }

    static int GetHP(Tpl* pPlayer) {
        if (!Validator::ObjIsValid(pPlayer)) return 0;

        auto hp = pPlayer->m_health;

        return hp->decl->m_cInt_Get(hp);
    }

    static int GetArmor(Tpl* pPlayer) {
        if (!Validator::ObjIsValid(pPlayer)) return 0;

        auto arm = pPlayer->m_armor;

        return arm->decl->m_cInt_Get(arm);
    }

    static std::string GetAmmo(Tpl* pPlayer) {
        if (!Validator::ObjIsValid(pPlayer)) return "";
        return ItemManager::GetAmmo(pPlayer->m_weapon);
    }

    static std::string GetKDA(Tpl* pPlayer) {
        std::string result = "";
        if (Validator::ObjIsValid(pPlayer)) {
            result = std::to_string(pPlayer->m_score) + "/" + std::to_string(pPlayer->m_deaths) + "/" + std::to_string(pPlayer->m_assists);
        }
        return result;
    }

    static TList* GetPlayersList() {
        DWORD addr = *(DWORD*)(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.g_pPlayersEntityList);
        return reinterpret_cast<TList*>(addr);
    }
    
};