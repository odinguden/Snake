//
// Created by odin on 6/29/25.
//

#include "GameController.h"

#include <iostream>
#include <bits/ostream.tcc>

GameController::GameController() {
    this->score = 0;
}

void GameController::testMethod() {
    this->score++;

    std::cout << this->score << std::endl;
}

