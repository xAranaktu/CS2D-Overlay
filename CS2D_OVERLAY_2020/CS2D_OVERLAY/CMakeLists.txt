# CMakeList.txt : CMake project for FIFA, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

SET(ALL_CPP
    "dllmain.cpp"
)

SET(ALL_HEADERS
    "headers/dllmain.h"
)


# Add source to this project's dll.
add_library (${PROJECT_NAME} SHARED ${ALL_CPP} ${ALL_HEADERS} ${ASM_FILES})
target_link_libraries(${PROJECT_NAME} ${WinSDK})

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
