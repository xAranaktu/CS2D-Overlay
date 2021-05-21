# CMakeList.txt : CMake project for FIFA, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

SET(ImGUI_H
    "imgui/imconfig.h"
    "imgui/imgui.h"
    "imgui/imgui_internal.h"
    "imgui/imstb_rectpack.h"
    "imgui/imstb_textedit.h"
    "imgui/imstb_truetype.h"
    "imgui/imgui_impl_dx9.h"
    "imgui/imgui_impl_win32.h"
    "imgui/imgui_stdlib.h"
)
SET(ImGUI_CPP
    "imgui/imgui.cpp"
    "imgui/imgui_demo.cpp"
    "imgui/imgui_draw.cpp"
    "imgui/imgui_widgets.cpp"
    "imgui/imgui_impl_dx9.cpp"
    "imgui/imgui_impl_win32.cpp"
    "imgui/imgui_tables.cpp"
    "imgui/imgui_stdlib.cpp"
)

SET(MinHook_H
    "MinHook/include/MinHook.h"
    "MinHook/src/buffer.h"
    "MinHook/src/trampoline.h"
    "MinHook/src/HDE/hde32.h"
    "MinHook/src/HDE/hde64.h"
    "MinHook/src/HDE/pstdint.h"
    "MinHook/src/HDE/table32.h"
    "MinHook/src/HDE/table64.h"
)

SET(MinHook_CPP
    "MinHook/src/buffer.c"
    "MinHook/src/hook.c"
    "MinHook/src/trampoline.c"
    "MinHook/src/HDE/hde32.c"
    "MinHook/src/HDE/hde64.c"
)


SET(ALL_CPP
    "dllmain.cpp"
    "source/d3d9hook.cpp"
    "source/logger.cpp"
    "source/config.cpp"
    "source/features.cpp"
    "source/overlay.cpp"

    ${MinHook_CPP}
    ${ImGUI_CPP}
    
)

SET(ALL_HEADERS
    "headers/dllmain.h"
    "headers/fonts.h"
    "headers/IconsFontAwesome5.h"
    "headers/d3d9hook.h"
    "headers/context.h"
    "headers/patscanner.h"
    "headers/logger.h"
    "headers/AOBs.h"
    "headers/sdk.h"
    "headers/sprites.h"
    "headers/config.h"
    "headers/features.h"
    "headers/overlay.h"

    ${MinHook_H}
    ${ImGUI_H}
)


# Add source to this project's dll.
add_library (${PROJECT_NAME} SHARED ${ALL_CPP} ${ALL_HEADERS})

get_filename_component(DXSDK_DIR "DXSDK/x86/" ABSOLUTE)

target_link_libraries(${PROJECT_NAME} ${DXSDK_DIR}/d3dx9.lib)
target_link_libraries(${PROJECT_NAME} ${WinSDK})

target_include_directories(${PROJECT_NAME} PRIVATE "DXSDK/")
target_include_directories(${PROJECT_NAME} PRIVATE "MinHook/")
target_include_directories(${PROJECT_NAME} PRIVATE "headers/")
target_include_directories(${PROJECT_NAME} PRIVATE ${WinSDK})

set(JSON_BuildTests OFF CACHE INTERNAL "")

# add WALL + PDB flags
if(MSVC)
  # force static lib
  set(CompilerFlags
        CMAKE_CXX_FLAGS
        CMAKE_CXX_FLAGS_DEBUG
        CMAKE_CXX_FLAGS_RELEASE
        CMAKE_C_FLAGS
        CMAKE_C_FLAGS_DEBUG
        CMAKE_C_FLAGS_RELEASE
        )
	foreach(CompilerFlag ${CompilerFlags})
		string(REPLACE "/MD" "/MT" ${CompilerFlag} "${${CompilerFlag}}")
	endforeach()
endif()

target_compile_options(${PROJECT_NAME} PRIVATE /std:c++latest)
# TODO: Add tests and install targets if needed.
