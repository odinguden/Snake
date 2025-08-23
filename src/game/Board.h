//
// Created by odin on 6/20/25.
//

#ifndef BOARD_H
#define BOARD_H
#include <vector>
#include <string>
#include "Snake.h"

class Board {
public:
    Board();
    std::string toString();
    void moveSnake(char dir);
private:
    Snake snake;
    static int size;
    void initBoard();
    void genApple();
    int applePos[2];
    bool snakeTile(int x, int y);
};



#endif //BOARD_H
