//
// Created by odin2 on 31.10.2024.
//

#ifndef GAME_H
#define GAME_H



class Game {
    public:
    Game() {
        startGame();
    };
    void startGame();
    void endGame();
    int score;
    bool playing;

};



#endif //GAME_H
