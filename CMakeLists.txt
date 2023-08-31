cmake_minimum_required(VERSION 3.22) #CMake version check
project(somethingtodo)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

file(GLOB SOURCES "./*.cpp")
add_executable(somethingtodo ${SOURCES})
target_link_libraries(somethingtodo ${SDL2_LIBRARIES})