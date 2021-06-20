#pragma once
#pragma warning(disable : 4200)
#pragma warning(disable : 4244)


#include "SDKGen/offsets.h"
#include "SDKGen/defines.h"
#include "SDKGen/TList.h"
#include "SDKGen/TListEnum.h"
#include "SDKGen/TLink.h"
#include "SDKGen/Titem.h"
#include "SDKGen/cInt.h"
#include "SDKGen/Tpl.h"
#include "SDKGen/Tpro.h"

class Validator {
public:
    static DWORD GetInvalid() {
        return g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.pInvalid;
    }

    static bool ObjIsValid(void* addr) {
        return reinterpret_cast<DWORD>(addr) != (GetInvalid());
    }
};

struct Vector2 {
    float                                           x, y;
    Vector2() { x = y = 0.0f; }
    Vector2(float _x, float _y) { x = _x; y = _y; }
};

class Screen {
public:
    static float GetScreenW() {
        return *reinterpret_cast<float*>(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.screen_width);
    }

    static float GetScreenH() {
        return *reinterpret_cast<float*>(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.screen_height);
    }

    static float GetCursorX() {
        return *reinterpret_cast<float*>(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.cursor_x);
    }

    static float GetCursorY() {
        return *reinterpret_cast<float*>(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.cursor_y);
    }

    static float GetScale() {
        return *reinterpret_cast<float*>(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.scale);
    }
};

class Camera {
public:
    static int GetX() {
        return *reinterpret_cast<int*>(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.camera_x);
    }

    static int GetY() {
        return *reinterpret_cast<int*>(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.camera_y);
    }

    static int GetXf() {
        return static_cast<float>(GetX());
    }

    static int GetYf() {
        return static_cast<float>(GetY());
    }

    static Vector2 W2S(Vector2 pos) {
        auto scale = Screen::GetScale();

        Vector2 result = Vector2(pos.x - GetXf(), pos.y - GetYf());

        result.x *= scale;
        result.y *= scale;
        
        // 0x5C4014
        //float screen_w = Screen::GetScreenW();
        //result.x = result.x * (screen_w / 640.0f);
        //
        //float screen_h = Screen::GetScreenH();
        //result.y = result.y * (screen_w / 480.0f);


        return result;
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

class ProjectileManager
{
public:
    static TList* GetFlyingProjectilesList() {
        DWORD addr = *(DWORD*)(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.g_pProjectileFlyingEntityList);
        return reinterpret_cast<TList*>(addr);
    }

    static TList* GetGroundProjectilesList() {
        DWORD addr = *(DWORD*)(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.g_pProjectileGroundEntityList);
        return reinterpret_cast<TList*>(addr);
    }
};

class ItemManager
{
public:
    static TList* GetItemsList() {
        DWORD addr = *(DWORD*)(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.g_pItemsEntityList);
        return reinterpret_cast<TList*>(addr);
    }

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

    static std::string GetName(Tpl* pPlayer) {
        std::string result = "Invalid";
        if (!Validator::ObjIsValid(pPlayer)) return result;

        // conv
        size_t nameSize = 0;
        size_t convertedChars = 0;
        char sName[256];

        // Convert Name
        nameSize = pPlayer->m_name->length + 1;
        wcstombs_s(&convertedChars, sName, nameSize, pPlayer->m_name->buf, pPlayer->m_name->length);

        result = std::string(sName);
        return result;
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

    static int GetObservedPlayerID() {
        return *reinterpret_cast<int*>(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.specFollowID);
    }

    static Tpl* GetPlayerByID(int playerid) {
        auto pPlayersList = PlayerManager::GetPlayersList();
        auto type_enum = pPlayersList->decl->m_TList_ObjectEnumerator(pPlayersList);

        while (type_enum->decl->m_TListEnum_HasNext(type_enum))
        {
            Object* next_object = type_enum->decl->m_TListEnum_NextObject(type_enum);

            if (Validator::ObjIsValid(next_object)) {
                Tpl* player = reinterpret_cast<Tpl*>(next_object);
                if (player->m_id == playerid) {
                    return player;
                }
            }
        }

        return reinterpret_cast<Tpl*>(Validator::GetInvalid());

    }
    
};
