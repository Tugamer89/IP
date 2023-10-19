#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

static inline bool validMove(char move) {
    return move == 'f' || move == 'c' || move == 's';
}

int main() {
    srand(time(NULL));

    int winner;
    char tryAgain;
    char aMove, bMove;

    do {
        aMove = bMove = ' ';

        cout << "Inserire la tua mossa (f|c|s): ";
        cin >> aMove;
        while (!validMove(aMove)) {
            cout << "La mossa non è valida, reinserire la tua mossa (f|c|s): ";
            cin >> aMove;
        }

        switch (rand() % 3) {
        case 0:
            bMove = 'f';
            break;
        case 1:
            bMove = 'c';
            break;
        case 2:
            bMove = 's';
        }

        if (aMove == bMove)
            winner = 0;
        else if (aMove == 'f') {
            if (bMove == 'c')
                winner = 1;
            else
                winner = 2;
        }
        else if (aMove == 'c') {
            if (bMove == 's')
                winner = 1;
            else
                winner = 2;
        }
        else if (aMove == 's') {
            if (bMove == 'f')
                winner = 1;
            else
                winner = 2;
        }

        switch (winner) {
        case 0:
            cout << "Pareggio!" << endl;
            break;
        case 1:
            cout << "Hai vinto!" << endl;
            break;
        case 2:
            cout << "Hai perso!" << endl;
        }

        cout << "Vuoi continuare ('s' o 'S' per continuare)? ";
        cin >> tryAgain;
        cout << endl;
    } while (tolower(tryAgain) == 's');

    return 0;
}
