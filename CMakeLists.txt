cmake_minimum_required(VERSION 3.22)

project(KeySurf VERSION 1.0)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

option(DEBUG_PRINT "Output work info in stdout and stderr" ON)
add_compile_options(-Wall -Wextra -Wpedantic -Wconversion)

file(GLOB SOURCE_FILES src/*.cpp)
file(GLOB HEADER_FILES include/*.h)

add_executable(KeySurf ${SOURCE_FILES} ${HEADER_FILES})
target_include_directories(KeySurf PRIVATE include)

if (DEBUG_PRINT)
    add_compile_definitions(DEBUG_PRINT)
endif()

option(BUILD_TESTS "Build tests" ON)
IF(BUILD_TESTS)
    add_subdirectory(tests)
ENDIF()
