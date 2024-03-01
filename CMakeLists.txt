cmake_minimum_required(VERSION 3.20)
project(demo VERSION 0.1.0 LANGUAGES CXX)
set(CMAKE_TOOLCHAIN_FILE "C:\\dev\\vcpkg\\scripts\\buildsystems\\vcpkg.cmake")
set(CMAKE_CXX_STANDARD 17)

#
# include_directories(
#   ${VCPKG_ROOT}/installed/x64-windows/include
# )

include_directories(
  c:/dev/vcpkg/installed/x64-windows/include
)
# link_directories(
#   ${VCPKG_ROOT}/installed/x64-windows/lib
# )

link_directories(
  c:/dev/vcpkg/installed/x64-windows/lib
)

add_executable(demo main.cpp)
TARGET_LINK_LIBRARIES(demo raylib)
