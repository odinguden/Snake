//
// Created by odin on 8/23/25.
//

#ifndef NOGUI_H
#define NOGUI_H

#include "../game/Board.h"

class NoGui {
public:
    Board* board;
    NoGui(Board* inputBoard);
    int update();
    int drawBoard();
    void clearOutput();
private:
};



#endif //NOGUI_H
