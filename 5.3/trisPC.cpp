#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <string>
#include <ctime>

#define BOARD_DIMENSION 3
#define PLAYER_SYMBOL 'X'
#define PC_SYMBOL 'O'
#define CLS_DELAY 1500000

using namespace std;

void printBoard(const char gameBoard[BOARD_DIMENSION][BOARD_DIMENSION]) {
    cout << "   1   2   3" << endl;
    for (int i = 0; i < BOARD_DIMENSION; i++) {
        cout << " " << i + 1;
        for (int j = 0; j < BOARD_DIMENSION; j++)
            cout << " " << gameBoard[i][j] << (j != BOARD_DIMENSION - 1 ? " |" : "");
        cout << endl << (i != BOARD_DIMENSION - 1 ? "   -----------" : "") << endl;
    }
}

int isGameOver(const char gameBoard[BOARD_DIMENSION][BOARD_DIMENSION]) {
    /*
        0 - not finished yet
        1 - won
        2 - tie
        3 - lost
    */
    if (gameBoard[1][1] != ' ' && (
        (gameBoard[0][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][2]) ||
        (gameBoard[0][2] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][0])
        ))
        return gameBoard[1][1] == PLAYER_SYMBOL ? 1 : (gameBoard[1][1] == PC_SYMBOL ? 3 : 2);


    for (int i = 0; i < BOARD_DIMENSION; i++) {
        if (gameBoard[i][0] != ' ' && gameBoard[i][0] == gameBoard[i][1] && gameBoard[i][0] == gameBoard[i][2])
            return gameBoard[i][0] == PLAYER_SYMBOL ? 1 : (gameBoard[i][0] == PC_SYMBOL ? 3 : 2);

        if (gameBoard[0][i] != ' ' && gameBoard[0][i] == gameBoard[1][i] && gameBoard[0][i] == gameBoard[2][i])
            return gameBoard[0][i] == PLAYER_SYMBOL ? 1 : (gameBoard[0][i] == PC_SYMBOL ? 3 : 2);
    }

    for (int i = 0; i < BOARD_DIMENSION; i++)
        for (int j = 0; j < BOARD_DIMENSION; j++)
            if (gameBoard[i][j] == ' ')
                return 0;

    return 2;
}

bool isValidPosition(const char gameBoard[BOARD_DIMENSION][BOARD_DIMENSION], const string& pos) {
    if (pos.length() != 2)
        return false;
    if (pos[0] < '1' || pos[0] > '3' || pos[1] < '1' || pos[1] > '3')
        return false;
    if (gameBoard[pos[0] - '1'][pos[1] - '1'] != ' ')
        return false;
    return true;
}

int main() {
    srand(time(NULL));
    char gameBoard[BOARD_DIMENSION][BOARD_DIMENSION];
    bool playerTurn = true;

    for (int i = 0; i < BOARD_DIMENSION; ++i)
        for (int j = 0; j < BOARD_DIMENSION; ++j)
            gameBoard[i][j] = ' ';

    system("clear");
    printBoard(gameBoard);

    do {
        string position;

        if (playerTurn) {
            cout << endl << endl << "Place an " << PLAYER_SYMBOL << " to (yx): ";
            cin >> position;

            if (!isValidPosition(gameBoard, position)) {
                cout << "Invalid position!" << endl;
                usleep(CLS_DELAY);
                continue;
            }
        }
        else {
            do {
                position = to_string(rand() % 3 + 1) + to_string(rand() % 3 + 1);
            } while (!isValidPosition(gameBoard, position));
        }

        gameBoard[position[0] - '1'][position[1] - '1'] = playerTurn ? PLAYER_SYMBOL : PC_SYMBOL;

        playerTurn = !playerTurn;
        
        system("clear");
        printBoard(gameBoard);
    } while (!isGameOver(gameBoard));

    switch (isGameOver(gameBoard)) {
    case 3:
        cout << endl << "You lost!" << endl;
        break;
    case 2:
        cout << endl << "Tie!" << endl;
        break;
    case 1:
        cout << endl << "You won!" << endl;
        break;
    }

    return 0;
}
