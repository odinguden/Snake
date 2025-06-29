//
// Created by odin on 6/20/25.
//

#include "Board.h"

int Board::size = 12;

Board::Board() {
    //TODO make size a input variable and also make it effect board size
    initBoard();
}

void Board::initBoard() {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            tiles[i][j] = 0;
        }
    }
    genApple();
}

void Board::genApple() {
    tiles[0][0] = 1;
}

