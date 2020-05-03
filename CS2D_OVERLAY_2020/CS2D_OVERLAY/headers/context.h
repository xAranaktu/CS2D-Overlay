#pragma once
#include <psapi.h>
#include <string>
#include "logger.h"
#include "patscanner.h"
#include "AOBs.h"

//https://github.com/E66666666/GTAVManualTransmission/blob/b2854a1896456c80826e076a2e99131acd2281b6/Gears/Util/Paths.cpp
namespace core
{
    class Context
    {
    public:

        struct ModuleContext
        {
            std::string m_Name;
            uintptr_t m_Base;
            uintptr_t m_Size;
        };

        ModuleContext    m_ModuleContext;
        std::string        sfullModPath;

        std::string GetFolder()
        {
            return sfullModPath.substr(0, sfullModPath.find_last_of("\\"));
        };

        std::string GetName()
        {
            size_t lastIndex = sfullModPath.find_last_of("\\") + 1;
            return sfullModPath.substr(lastIndex, sfullModPath.length() - lastIndex);
        };

        void Update(HMODULE hModule)
        {
            MODULEINFO modinfo;
            HANDLE hProcess = GetCurrentProcess();

            if (GetModuleInformation(hProcess, hModule, &modinfo, sizeof(MODULEINFO)))
            {
                m_ModuleContext.m_Base = reinterpret_cast<uintptr_t>(modinfo.lpBaseOfDll);
                m_ModuleContext.m_Size = static_cast<uintptr_t>(modinfo.SizeOfImage);
            }
            char fullModPath[MAX_PATH];
            if (GetModuleFileNameA(hModule, fullModPath, MAX_PATH))
            {
                sfullModPath = fullModPath;
                m_ModuleContext.m_Name = GetName();
            }
        }

        uintptr_t getAddr(const char* aob_name, bool resolve_offset = false, int offsetpos = 0) {
            uintptr_t result_addr = 0;

            const char* pattern = g_AOBs[aob_name].c_str();
            logger.Write(LOG_INFO,
                "Find Pattern (%s) - %s, Module: %s", 
                aob_name,
                pattern,
                m_ModuleContext.m_Name.c_str()
            );
            
            result_addr = PatScanner::Find(
                m_ModuleContext.m_Base,
                m_ModuleContext.m_Size,
                pattern
            );

            if (result_addr) {
                logger.Write(
                    LOG_INFO,
                    "Found %s: 0x%08lX (%s+0x%08lX)",
                    aob_name,
                    result_addr,
                    m_ModuleContext.m_Name.c_str(),
                    result_addr - m_ModuleContext.m_Base
                );
                if (resolve_offset) {
                    result_addr = PatScanner::ResolvePtr(result_addr, offsetpos);
                    logger.Write(LOG_INFO, "Resolved Ptr - 0x%08lX", result_addr);
                }
            }
            else {
                logger.Write(LOG_INFO, "Find Pattern - %s failed", aob_name);
            }
            return result_addr;
        }
    };
}