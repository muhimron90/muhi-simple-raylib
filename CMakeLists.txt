cmake_minimum_required(VERSION 3.20)
project(demo VERSION 0.1.0 LANGUAGES CXX)
set(CMAKE_TOOLCHAIN_FILE "C:\\dev\\vcpkg\\scripts\\buildsystems\\vcpkg.cmake")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


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
add_compile_options(
  "$<$<COMPILE_LANGUAGE:CXX>:-Ofast;-DNDEBUG;-std=c++17;-march=native;-ftree-vectorize>"
)
#FILE(GENERATE OUTPUT main.cpp)
add_executable(demo main.cpp)
TARGET_LINK_LIBRARIES(demo PRIVATE raylib)
