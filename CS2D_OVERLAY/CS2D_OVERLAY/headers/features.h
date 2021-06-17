#pragma once

class FeatureManager {
public:
    std::vector<std::string> specmodes = {
        "Nothing", "Everything", "Team Only"
    };
    int current_specmode = 0;

    bool bNoFlash = false;
    bool bNoFow = false;
    DWORD patch_noflash_addr = 0;
    DWORD patch_nofow_addr = 0;
    DWORD specmode_addr = 0;

    FeatureManager();
    ~FeatureManager();

    void Init();

    void SetSpecMode(int new_val);
    void ChangeNoFlash();
    void ChangeNoFOW();
};

extern FeatureManager g_FeatureManager;