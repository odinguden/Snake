//
// Created by odin2 on 31.10.2024.
//

#ifndef MOVEMENTHANDLER_H
#define MOVEMENTHANDLER_H



class MovementHandler {
public:
    MovementHandler(char &dir_);
    void getMovement();
    char *dir;
    bool gettingMovement;
};



#endif //MOVEMENTHANDLER_H
