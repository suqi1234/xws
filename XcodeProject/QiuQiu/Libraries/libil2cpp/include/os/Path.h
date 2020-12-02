#pragma once
#include <string>
#include <stdint.h>
#include "il2cpp-config.h"

namespace il2cpp
{
namespace os
{
    class Path
    {
    public:
#if __ENABLE_UNITY_PLUGIN__
#if IL2CPP_TARGET_ANDROID || IL2CPP_TARGET_IOS || IL2CPP_TARGET_WINDOWS || IL2CPP_TARGET_OSX
        static std::string GetApplicationPath();
        static std::string GetFrameworksPath();
#endif
#endif // 
        static std::string GetExecutablePath();
        static std::string GetTempPath();
        static bool IsAbsolute(const std::string& path);
    };
}
}
