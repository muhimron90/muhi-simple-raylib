cmake_minimum_required(VERSION 3.20.0)

# the name of the target operating system
set(CMAKE_SYSTEM_NAME Windows)

# define PROJECT 
project(muhi-raylib VERSION 0.1.0 LANGUAGES CXX DESCRIPTION "Muhi Raylib")

##set necessary options

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# compilers  C++
set(CMAKE_CXX_COMPILER g++)

# Define PROJECT_SOURCES
file(GLOB_RECURSE PROJECT_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_LIST_DIR}/sources/*.cpp") 
# project includes 
set(PROJECT_INCLUDE "$ENV{VCPKG_ROOT}\\installed\\x64-windows\\include")

# add libraries or add multiple libs and add into _target_link_libraries()
find_library(RAYLIB_SRC raylib HINTS "$ENV{VCPKG_ROOT}\\installed\\x64-windows\\lib")

add_compile_options(
  "$<$<COMPILE_LANGUAGE:CXX>:-Ofast;-DNDEBUG;-march=native;-ftree-vectorize>"
)
add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_INCLUDE} )
target_link_libraries(${PROJECT_NAME} PRIVATE ${RAYLIB_SRC})

#assets 
target_compile_definitions(${PROJECT_NAME} PUBLIC ASSETS_PATH="${CMAKE_CURRENT_SOURCE_DIR}/assets/")
