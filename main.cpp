#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int score = 0;
bool playing = true;

vector<vector<int>> createBoard(int size) {
    vector<vector<int>> board;
    for (int i = 0; i < size; i++) {
        vector<int> row;
        for (int j = 0; j < size; j++) {
            row.push_back(0);
        }
        board.push_back(row);
    }
    return board;
}

void printBoard(vector<vector<int>> board) {
    string divider = "+";
    for (int i = 0; i < board.size(); i++) {
        divider = divider + "-+";
    }
    cout << divider << endl;
    for (int i = 0; i < board.size(); i++) {
        string row = "|";
        for (int j = 0; j < board[i].size(); j++) {
            string x = "";
            if (board[i][j] == 0) {
                x = " |";
            } else if (board[i][j] == 1) {
                x = "s|";
            } else {
                x = "*|";
            }
            row = row + x;
        }
        cout << row << endl;
        cout << divider << endl;
    }
}

void placeApple(vector<vector<int>> &board) {
    srand(time(0));

    bool validPlace = false;

    int randX = 0;
    int randY = 0;

    while (!validPlace) {
        randX = rand() % board.size();
        randY = rand() % board.size();

        if (board[randX][randY] != 1) {
            validPlace = true;
        }
    }
    board[randX][randY] = 3;
}

void moveSnake(int oldPos[], int newPos[], vector<vector<int>> &board) {
    if (board[newPos[0]][newPos[1]] == 3) {
        score++;
        placeApple(board);
    }
    board[oldPos[0]][oldPos[1]] = 0;
    board[newPos[0]][newPos[1]] = 1;
}

void getMovement(int &direction) {
    int* y = &direction;
    int* x = &direction + 1;
    char directionChar;
    cin >> directionChar;
    if (directionChar == 's') {
        *x = 0;
        *y = 1;
    } else if (directionChar == 'a') {
        *x = -1;
        *y = 0;
    } else if (directionChar == 'w') {
        *x = 0;
        *y = -1;
    } else if (directionChar == 'd') {
        *x = 1;
        *y = 0;
    }
}


int main()
{
    int direction[] = {1,0};
    int size = 9;
    vector<vector<int>> board = createBoard(size);

    int snakeHead[] = {0,0};
    placeApple(board);

    board[snakeHead[0]][snakeHead[1]] = 1;

    printBoard(board);


    cout << "Do you want to play the snake?" << endl;

    while (playing) {
        cout << "Score: "<< score << endl;

        getMovement(direction[0]);
        cout << "" << endl;
        int oldPos[] = {snakeHead[0],snakeHead[1]};
        snakeHead[0] = snakeHead[0] + direction[0];
        snakeHead[1] = snakeHead[1] + direction[1];
        moveSnake(oldPos, snakeHead, board);
        printBoard(board);
    }
    return 0;
}
