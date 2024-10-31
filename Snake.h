//
// Created by odin2 on 31.10.2024.
//

#ifndef SNAKE_H
#define SNAKE_H

#include <deque>
#include "Board.h"

using namespace std;

class Snake {
public:
    Snake(int startSize, Board &board_);
    bool moveSnake(char dir);
    int snakeSize;
    Board *board;
    deque<vector<int>> body;
};



#endif //SNAKE_H
