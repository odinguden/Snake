cmake_minimum_required(VERSION 3.28.6)
project(Snake)

set(CMAKE_CXX_STANDARD 20)

add_executable(Snake main.cpp
        Game.cpp
        Game.h
        Board.cpp
        Board.h
        Snake.cpp
        Snake.h
        MovementHandler.cpp
        MovementHandler.h
)
