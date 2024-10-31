//
// Created by odin2 on 31.10.2024.
//
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

#include "Board.h"

using namespace std;

vector<vector<int>> board;


vector<vector<int>> initBoard(int size_) {
    int boardSize = size_;
    for (int i = 0; i < boardSize; i++) {
        vector<int> row;
        for (int j = 0; j < boardSize; j++) {
            row.push_back(0);
        }
        board.push_back(row);
    }
}

void printBoard() {
    string divider = "+";
    for (int i = 0; i < board.size(); i++) {
        divider = divider + "-+";
    }
    cout << divider << endl;
    for (int i = 0; i < board.size(); i++) {
        string row = "|";
        for (int j = 0; j < board[i].size(); j++) {
            string x = "";
            if (board[i][j] == 0) {
                x = " |";
            } else if (board[i][j] == 1) {
                x = "s|";
            } else if (board[i][j] == 2) {
                x = "*|";
            }
            row = row + x;
        }
        cout << row << endl;
        cout << divider << endl;
    }
}

void printBoardWithScore(int score) {
    cout << "Score: " << score << endl;
    printBoard();
}

void placeApple(vector<vector<int>> &board) {
    srand(time(0));

    bool validPlace = false;

    int randX = 0;
    int randY = 0;

    while (!validPlace) {
        randX = rand() % board.size();
        randY = rand() % board.size();

        if (board[randX][randY] != 1) {
            validPlace = true;
        }
    }
    board[randX][randY] = 2;
}

int getVal(int x, int y) {
    if (x < board.size() && y < board.size()) {
        return board[y][x];
    } else {
        return 0;
    }
}
void setVal(int x, int y, int newVal) {
    if (x < board.size() && y < board.size()) {
        board[y][x] = newVal;
    }
}

