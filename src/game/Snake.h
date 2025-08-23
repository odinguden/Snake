//
// Created by odin on 8/23/25.
//

#ifndef SNAKE_H
#define SNAKE_H

#include <queue>

class Snake {
public:
    Snake();
    void move(int x, int y);
    std::queue<int[2]> getSnake();
private:
    std::queue<int[2]> segments;
};



#endif //SNAKE_H
