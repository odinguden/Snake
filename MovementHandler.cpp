//
// Created by odin2 on 31.10.2024.
//
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

#include "MovementHandler.h"

using namespace std;

void getMovement(int &direction) {
    int* y = &direction;
    int* x = &direction + 1;
    char directionChar;
    cin >> directionChar;
    if (directionChar == 's') {
        *x = 0;
        *y = 1;
    } else if (directionChar == 'a') {
        *x = -1;
        *y = 0;
    } else if (directionChar == 'w') {
        *x = 0;
        *y = -1;
    } else if (directionChar == 'd') {
        *x = 1;
        *y = 0;
    } else if (directionChar == 'c') {
        //endGame();
    }
}