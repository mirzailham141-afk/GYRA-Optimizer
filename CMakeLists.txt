

cmake_minimum_required(VERSION 3.21)

project(GYRA-Optimizer VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Geode REQUIRED)

add_library(${PROJECT_NAME} SHARED
    Src/Main.cpp
    Src/features/EffectReducer.cpp
    Src/features/LowDetail.cpp
    Src/features/ParticleReducer.cpp
    Src/ui/GYRAMenu.cpp
    Src/ui/SettingsPopup.cpp
)

setup_geode_mod(${PROJECT_NAME})