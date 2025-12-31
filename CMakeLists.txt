cmake_minimum_required(VERSION 3.31)
project(units)

set(CMAKE_CXX_STANDARD 23)

include(FetchContent)

set(MP_UNITS_BUILD_INSTALL OFF CACHE BOOL "" FORCE)
set(MP_UNITS_API_CONTRACTS "NONE" CACHE STRING "" FORCE)
set(MP_UNITS_API_STD_FORMAT ON CACHE BOOL "" FORCE)
set(MP_UNITS_LIB_FORMAT_SUPPORTED ON CACHE BOOL "" FORCE)

FetchContent_Declare(
        mp-units
        GIT_REPOSITORY https://github.com/mpusz/mp-units
        GIT_TAG master
        GIT_SHALLOW true
        SOURCE_SUBDIR src
        SYSTEM YES
        EXCLUDE_FROM_ALL YES
)
FetchContent_MakeAvailable(mp-units)

add_executable(units main.cpp)

target_link_libraries(units mp-units::mp-units)
