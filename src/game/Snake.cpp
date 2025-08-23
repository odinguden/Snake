//
// Created by odin on 8/23/25.
//

#include "Snake.h"

Snake::Snake() {
    segments.push({6,5});
    segments.push({7,5});
    segments.push({8,5});
}

void Snake::move(int x, int y) {
    //TODO add apple check
    segments.push(
            {
            segments.back()[0] + x,
            segments.back()[1] + y
            }
        );
    segments.pop();
}
std::queue<int[2]> Snake::getSnake() {
    return segments;
}
