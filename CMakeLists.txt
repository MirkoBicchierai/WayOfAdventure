cmake_minimum_required(VERSION 3.14)
project(WayOfAdventure)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(googleTest)

set(SFML_INCLUDE_DIR "lib/SFML/include")
set(SFML_LIBRARY_DIR "lib/SFML/lib")
set(SFML_DIR "lib/SFML/lib/cmake/SFML")

link_directories(SFML_LIBRARY_DIR)
include_directories(SFML_INCLUDE_DIR)

find_package(SFML 2.5.1 COMPONENTS system window graphics network audio REQUIRED)

if(SFML_FOUND)
    message(STATUS "SFML_INCLUDE_DIR: ${SFML_INCLUDE_DIR}")
    message(STATUS "SFML_LIBRARIES: ${SFML_LIBRARIES}")
    message(STATUS "SFML_VERSION: ${SFML_VERSION}")
endif()

set(SOURCE_FILES main.cpp config.cpp Game.h Game.cpp Menu.h Menu.cpp ConcreteStateMenu.h ConcreteStateMenu.cpp GameState.h GameState.cpp ConcreteStateGame.cpp ConcreteStateGame.h Player.cpp Player.h TileMap.cpp TileMap.h Tile.cpp Tile.h)

include_directories(${SFML_INCLUDE_DIR})
add_executable(WayOfAdventure main.cpp config.cpp Game.h Game.cpp Menu.h Menu.cpp ConcreteStateMenu.h ConcreteStateMenu.cpp GameState.h GameState.cpp ConcreteStateGame.cpp ConcreteStateGame.h Player.cpp Player.h TileMap.cpp TileMap.h Tile.cpp Tile.h)
add_library(core ${SOURCE_FILES})

target_link_libraries (WayOfAdventure sfml-graphics sfml-window sfml-system sfml-audio core)