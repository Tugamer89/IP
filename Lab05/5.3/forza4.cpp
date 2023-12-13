#include <iostream>
#include <unistd.h>

#define DIM 7
#define PLAYER1_SYMBOL 'X'
#define PLAYER2_SYMBOL 'O'
#define CLS_DELAY 1500000

using namespace std;

void printBoard(const char gameBoard[DIM-1][DIM]) {
    for (int i = 0; i < DIM; ++i)
        cout << " " << i+1;
    cout << endl;
    
    for (int i = 0; i < DIM-1; ++i) {
        for (int j = 0; j < DIM; ++j)
            cout << " " << gameBoard[i][j];
        cout << endl;
    }
}

int isGameOver(const char gameBoard[DIM-1][DIM]) {
    for (int row = 0; row < DIM - 1; row++)
        for (int col = 0; col < DIM - 3; col++)
            if (gameBoard[row][col] != ' ' &&
                gameBoard[row][col] == gameBoard[row][col + 1] &&
                gameBoard[row][col] == gameBoard[row][col + 2] &&
                gameBoard[row][col] == gameBoard[row][col + 3])
                return (gameBoard[row][col] == PLAYER1_SYMBOL) ? 1 : 2;


    for (int col = 0; col < DIM; col++)
        for (int row = 0; row < DIM - 4; row++)
            if (gameBoard[row][col] != ' ' &&
                gameBoard[row][col] == gameBoard[row + 1][col] &&
                gameBoard[row][col] == gameBoard[row + 2][col] &&
                gameBoard[row][col] == gameBoard[row + 3][col])
                return (gameBoard[row][col] == PLAYER1_SYMBOL) ? 1 : 2;


    for (int row = 3; row < DIM - 1; row++)
        for (int col = 0; col < DIM - 3; col++)
            if (gameBoard[row][col] != ' ' &&
                gameBoard[row][col] == gameBoard[row - 1][col + 1] &&
                gameBoard[row][col] == gameBoard[row - 2][col + 2] &&
                gameBoard[row][col] == gameBoard[row - 3][col + 3])
                return (gameBoard[row][col] == PLAYER1_SYMBOL) ? 1 : 2;


    for (int row = 0; row < DIM - 4; row++)
        for (int col = 0; col < DIM - 3; col++)
            if (gameBoard[row][col] != ' ' &&
                gameBoard[row][col] == gameBoard[row + 1][col + 1] &&
                gameBoard[row][col] == gameBoard[row + 2][col + 2] &&
                gameBoard[row][col] == gameBoard[row + 3][col + 3])
                return (gameBoard[row][col] == PLAYER1_SYMBOL) ? 1 : 2;


    for (int row = 0; row < DIM - 1; row++)
        for (int col = 0; col < DIM; col++)
            if (gameBoard[row][col] == ' ')
                return 0;

    return 3;
}

bool isValidPosition(const char gameBoard[DIM-1][DIM], int pos) {
    return gameBoard[0][pos] == ' ';
}

int main() {
    char gameBoard[DIM-1][DIM];
    bool player1Turn = true;

    for (int i = 0; i < DIM-1; ++i)
        for (int j = 0; j < DIM; ++j)
            gameBoard[i][j] = ' ';

    do {
        system("clear");
        printBoard(gameBoard);

        int position;
        cout << endl << endl << "Place an " << (player1Turn ? PLAYER1_SYMBOL : PLAYER2_SYMBOL) << " to column: ";
        cin >> position;
        --position;

        if (!isValidPosition(gameBoard, position)) {
            cout << "Invalid position!" << endl;
            usleep(CLS_DELAY);
            continue;
        }

        for (int i = DIM-2; i >= 0; --i) {
            if (gameBoard[i][position] == ' ') {
                gameBoard[i][position] = player1Turn ? PLAYER1_SYMBOL : PLAYER2_SYMBOL;
                break;
            }
        }

        player1Turn = !player1Turn;
    } while (!isGameOver(gameBoard));

    system("clear");
    printBoard(gameBoard);

    switch (isGameOver(gameBoard)) {
    case 3:
        cout << endl << "Tie!" << endl;
        break;
    case 2:
        cout << endl << "Player2 won!" << endl;
        break;
    case 1:
        cout << endl << "Player1 won!" << endl;
    }

    return 0;
}
