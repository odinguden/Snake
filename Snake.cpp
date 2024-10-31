//
// Created by odin2 on 31.10.2024.
//

#include "Snake.h"
#include "Board.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <deque>

using namespace std;

deque<int[2]> body;
int snakeSize;
Board *board;

void initSnake(int startSize, Board &board_) {
    snakeSize = startSize;
    board = &board_;
    body.push_back({0, 0});
}

vector<int> getNewPos(int oldX, int oldY, char dir) {
    int x;
    int y;
    if (dir == 's') {
        x = 0;
        y = 1;
    } else if (dir == 'a') {
        x = -1;
        y = 0;
    } else if (dir == 'w') {
        x = 0;
        y = -1;
    } else if (dir == 'd') {
        x = 1;
        y = 0;
    } else if (dir == 'c') {
        //endGame();
    }
    int newX = oldX + x;
    int newY = oldY + y;
    return vector<int> ({oldX, oldY});

}

bool moveSnake(char dir) {
    int oldPos[] = {body.back()[0], body.back()[1]};
    vector<int> newPosVector = getNewPos(oldPos[0], oldPos[1], dir);

    int newPos[] = {newPosVector[0], newPosVector[1]};

    int nextTileValue = board->getVal(newPos[0], newPos[1]);

    if (nextTileValue  == 2) {
        //If apple
        snakeSize++;
        //placeApple(board);
    }
    if (nextTileValue == 1) {
        //If snake
        //score++;
        return false;
    }
    //If nothing

    board->setVal(newPos[0], newPos[1], 1);
    if(nextTileValue != 3) {
        board->setVal(body.front()[0], body.front()[1], 1);
        body.pop_front();
    }
    return true;
}

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