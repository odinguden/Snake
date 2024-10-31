//
// Created by odin2 on 31.10.2024.
//

#ifndef GAME_H
#define GAME_H
#include "Board.h"
#include "MovementHandler.h"
#include "Snake.h"


class Game {
    public:
    Game();
    void startGame();
    void endGame();

    Board *board;
    Snake *snake;
    int score;
    bool playing;
    char dir;

};



#endif //GAME_H
