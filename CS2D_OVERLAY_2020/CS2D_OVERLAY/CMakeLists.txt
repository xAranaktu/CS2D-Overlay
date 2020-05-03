# CMakeList.txt : CMake project for FIFA, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

SET(ALL_CPP
    "dllmain.cpp"
    "source/d3d9hook.cpp"
    "source/logger.cpp"
    
    "MinHook/src/buffer.c"
    "MinHook/src/hook.c"
    "MinHook/src/trampoline.c"
    "MinHook/src/HDE/hde32.c"
    "MinHook/src/HDE/hde64.c"
    
)

SET(ALL_HEADERS
    "headers/dllmain.h"
    "headers/d3d9hook.h"
    "headers/context.h"
    "headers/patscanner.h"
    "headers/logger.h"
    "headers/AOBs.h"

    "MinHook/include/MinHook.h"
    "MinHook/src/buffer.h"
    "MinHook/src/trampoline.h"
    "MinHook/src/HDE/hde32.h"
    "MinHook/src/HDE/hde64.h"
    "MinHook/src/HDE/pstdint.h"
    "MinHook/src/HDE/table32.h"
    "MinHook/src/HDE/table64.h"
    
    
)


# Add source to this project's dll.
add_library (${PROJECT_NAME} SHARED ${ALL_CPP} ${ALL_HEADERS} ${ASM_FILES})
target_link_libraries(${PROJECT_NAME} ${WinSDK})

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
