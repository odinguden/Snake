//
// Created by odin2 on 31.10.2024.
//
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

#include "MovementHandler.h"

using namespace std;

MovementHandler::MovementHandler(char &dir_) {
    dir = &dir_;
}


void MovementHandler :: getMovement() {
    while (true) {
        char newDir;
        std::cin >> newDir;
        *dir = newDir;
    }

}