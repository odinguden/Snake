cmake_minimum_required(VERSION 3.10)
project(Snake)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-3.0)

include_directories(${GTKMM_INCLUDE_DIRS})
link_directories(${GTKMM_LIBRARY_DIRS})
add_definitions(${GTKMM_CFLAGS_OTHER})

add_executable(
        Snake
        main.cpp
        src/gui/AppWindow.cpp
        src/game/Board.cpp
        src/game/Board.h
        src/controller/GameController.cpp
        src/controller/GameController.h
        src/gui/BoardTile.cpp
        src/gui/BoardTile.h
        src/no-gui/NoGui.cpp
        src/no-gui/NoGui.h
        src/game/Snake.cpp
        src/game/Snake.h

)

target_link_libraries(Snake ${GTKMM_LIBRARIES})
