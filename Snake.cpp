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

Snake :: Snake(int startSize, Board &board_) {
    snakeSize = startSize;
    board = &board_;

    body = deque<vector<int>>();
    body.push_back({0, 0});
    board->setVal(0,0,1);
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
    return vector<int> ({newX, newY});

}

int Snake :: moveSnake(char dir) {
    int oldPos[] = {body.back()[0], body.back()[1]};
    vector<int> newPos = getNewPos(oldPos[0], oldPos[1], dir);
    int nextTileValue = board->getVal(newPos[0], newPos[1]);

    if (newPos[0] <0 || newPos[0] > 8 || newPos[1] < 0 || newPos[1] > 8) {
        return 1;
    }

    if (nextTileValue  == 2) {
        //If apple
        snakeSize++;
        board->setVal(newPos[0], newPos[1], 1);
        board->placeApple();
    }
    if (nextTileValue == 1) {

    }
    //If nothing
    body.push_back({newPos[0], newPos[1]});
    board->setVal(newPos[0], newPos[1], 1);
    if(nextTileValue != 2) {
        board->setVal(body.front()[0], body.front()[1], 0);
        body.pop_front();
    }
    return nextTileValue;
}