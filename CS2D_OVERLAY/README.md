# Warframe D3D Source x86 & x64 (aim test version 0.2)

How to compile:
- open wfdxhook.vcxproj (not wfdxhook.vcxproj.filters) with Visual Studio Community 2017 (..\Microsoft Visual Studio\2017\Community\Common7\IDE\devenv.exe)
- select x86(32bit) or x64(64bit)
- to compile dll, press f5 or click the green triangle

Optional: remove dependecy on vs runtime:
- click: project -> properties -> configuration properties -> C/C++ -> code generation -> runtime library: Multi-threaded (/MT)

How to use:
- start warframe launcher
- click options
- disable fullscreen, disable dx10, disable dx11, disable 64 bit if you compiled in x86, enable 64 bit if you compiled in x64
- click OK, press PLAY
- if x86 -> inject dll in main screen into Warframe.exe
- if x64 -> inject dll in main screen into Warframe.x64.exe

Menu key:
- insert

Recommended setting for aimbot:
- turn off "damage/affinity numbers" in game options -> hud 
