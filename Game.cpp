//
// Created by odin2 on 31.10.2024.
//
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>


#include "Game.h"

#include "Board.h"
#include "Snake.h"


using namespace std;

int score = 0;
bool playing = true;

void startgame() {
    int direction[] = {1,0};
    int size = 9;
    Board board(size);
    Snake snake(0, board);

    board.printBoard();


    cout << "Do you want to play the snake?" << endl;

    while (playing) {
        system("CLS");
        snake.moveSnake('d');
        board.printBoardWithScore(score);
    }
}

void endGame() {
    playing = false;
    cout << "Game ended, You lost" << endl;
    cout << "Score: " + score << endl;
}