//
// Created by odin2 on 31.10.2024.
//
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>


#include "Game.h"

#include <thread>

#include "Board.h"
#include "Snake.h"


using namespace std;

Game::Game() {
    int boardSize = 9;
    playing = true;
    dir = 's';
    board = new Board(boardSize);
    snake = new Snake(1, *board);
    score = 0;
}


void Game :: startGame() {

    cout << "Do you want to play the snake?" << endl;
    MovementHandler movement_handler(dir);
    thread threadObj(&MovementHandler::getMovement, &movement_handler);

    while (playing) {
        system("CLS");
        int moveState = snake->moveSnake(dir);
        board->printBoardWithScore(score);
        _sleep(500);
        if (moveState == 1) {
            endGame();
        } else if (moveState == 2) {
            score++;
        }


    }
}

void Game :: endGame() {
    playing = false;
    cout << "Game ended, You lost" << endl;
    cout << "Score: " + score << endl;
}