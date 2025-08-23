//
// Created by odin on 6/20/25.
//

#include "Board.h"
#include <ctime>
#include <queue>

int Board::size = 12;

Board::Board() {
    //TODO make size a input variable and also make it effect board size
    initBoard();
}

void Board::initBoard() {
    genApple();
}

std::string Board::toString() {
    std::string seperator = "+-+-+-+-+-+-+-+-+-+-+-+-+\n";
    std::string  output = seperator;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i ==  applePos[0] && j == applePos[1]) {
                output += "|a";
            } else if (snakeTile(i , j)) {
                output += "|s";
            } else {
                output += "| ";
            }
        }
        output += "|\n";
        output += seperator;
    }
    return output;
}

bool Board::snakeTile (int x, int y) {
    std::queue<int[2]> snakeTiles = snake.getSnake();
    for (int tile : snakeTiles)
    return false;
}

void Board::genApple() {
    srand(time(0));
    applePos[0] = rand() % size;
    applePos[1] = rand() % size;
}

