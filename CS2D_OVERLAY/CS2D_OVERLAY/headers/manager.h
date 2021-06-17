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

class ScoreManager {
public:
    static int GetScoreTT() {
        return *reinterpret_cast<int*>(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.ttRounds);
    }

    static int GetScoreCT() {
        return *reinterpret_cast<int*>(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.ctRounds);
    }
};

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

    static int GetMoney(Tpl* pPlayer) {
        if (!Validator::ObjIsValid(pPlayer)) return 0;

        auto money = pPlayer->m_money;

        return money->decl->m_cInt_Get(money);
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
