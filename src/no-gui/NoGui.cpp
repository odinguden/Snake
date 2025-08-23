//
// Created by odin on 8/23/25.
//

#include "NoGui.h"

#include <iostream>

NoGui::NoGui(Board *inputBoard) {
    board = inputBoard;
}

int NoGui::update() {
    drawBoard();
}

int NoGui::drawBoard() {
    std::cout << board->toString() << std::endl;
}

void NoGui::clearOutput() {
#if defined(__linux__)
    std::cout << "clear" << std::endl;
#elif  defined(_win64)
    std::cout << "cls" << sts::endl;
#endif
    return;
}

