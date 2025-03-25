cmake_minimum_required(VERSION 3.28.6)
project(Snake)

set(CMAKE_CXX_STANDARD 20)

add_executable(Snake
        src/main.cpp
        src/Game.cpp
        include/Game.h
        src/Board.cpp
        include/Board.h
        src/Snake.cpp
        include/Snake.h
        src/MovementHandler.cpp
        include/MovementHandler.h
        src/gui/MainStage.cpp
        include/gui/MainStage.h
)
