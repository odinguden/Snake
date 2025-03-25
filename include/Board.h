//
// Created by odin2 on 31.10.2024.
//

#include<vector>

#ifndef BOARD_H
#define BOARD_H

using namespace std;

class Board {
public:
    Board(int size_);
    vector<vector<int>> initBoard();
    void placeApple();
    int getVal(int x, int y);
    void setVal(int x, int y, int newVal);
    void printBoard();
    void printBoardWithScore(int score);
private:
    int boardSize;
    vector<vector<int>> board;
};



#endif //BOARD_H
