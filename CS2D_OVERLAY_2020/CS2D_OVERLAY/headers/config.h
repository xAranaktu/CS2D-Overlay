#pragma once
#include <Shlobj.h>
#include "dllmain.h"

namespace config {
    char* GetDirectoryFile(char* filename);
    int Load(char* szSection, char* szKey, int iDefaultValue);
    char* iniLoadString(char* szSection, char* szKey, const char* iDefaultValue);
    void Save(char* szSection, char* szKey, int iValue);
}