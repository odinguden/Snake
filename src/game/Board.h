//
// Created by odin on 6/20/25.
//

#ifndef BOARD_H
#define BOARD_H
#include <vector>


class Board {
public:
    Board();

private:
    static int size;
    int tiles[12][12];
    void initBoard();
    void genApple();
};



#endif //BOARD_H
