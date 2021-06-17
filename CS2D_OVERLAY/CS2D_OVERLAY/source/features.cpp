#pragma once
#include <windows.h>
#include "SDKGen/offsets.h"
#include "dllmain.h"
#include "misc.h"
#include "features.h"


FeatureManager::FeatureManager() {}
FeatureManager::~FeatureManager() {
        // War spec mode
        SetSpecMode(0);

        bNoFlash = false;
        ChangeNoFlash();

        bNoFow = false;
        ChangeNoFOW();
    }

void FeatureManager::Init() {
    patch_noflash_addr = g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.patchNoFlash;
    patch_nofow_addr = g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.patchNoFow;

    DWORD base_specmode_addr = *(DWORD*)(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.specBase);
    specmode_addr = base_specmode_addr + gameOffsets.specModeOff1;
}

void FeatureManager::SetSpecMode(int new_val) {
    *reinterpret_cast<char*>(specmode_addr) = static_cast<char>(new_val);
}

void FeatureManager::ChangeNoFlash() {
    // 83 C4 0C 68 FF 00 00 00 68 FF 00 00 00 68 FF 00 00 00
    if (bNoFlash) {
        // cmp eax,01
        char BytesToPath[] = "\x83\xF8\x01";
        MemPatcher::WriteToMemory(patch_noflash_addr, BytesToPath, 3);
    }
    else {
        // cmp eax,00
        char BytesToPath[] = "\x83\xF8\x00";
        MemPatcher::WriteToMemory(patch_noflash_addr, BytesToPath, 3);
    }
}

void FeatureManager::ChangeNoFOW() {
    if (bNoFow) {
        char BytesToPath[] = "\x0A";
        MemPatcher::WriteToMemory(patch_nofow_addr, BytesToPath, 1);
    }
    else {
        char BytesToPath[] = "\x00";
        MemPatcher::WriteToMemory(patch_nofow_addr, BytesToPath, 1);
    }
}

FeatureManager g_FeatureManager;