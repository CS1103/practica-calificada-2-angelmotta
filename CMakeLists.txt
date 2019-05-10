cmake_minimum_required(VERSION 3.13.2)
project(PC2)

set(CMAKE_CXX_STANDARD 14)

add_executable(PC2 main.cpp Defense.cpp Defense.h Attack.cpp Attack.h Elude.cpp Elude.h Shield.cpp Shield.h Armor.cpp Armor.h Punch.cpp Punch.h Saber.cpp Saber.h Firearm.cpp Firearm.h Figther.cpp Figther.h)