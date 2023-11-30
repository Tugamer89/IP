#include <iostream>

using namespace std;

static inline bool validMove(char move) {
    return move == 'f' || move == 'c' || move == 's';
}

int main() {
    // dichiarazione variabili
    int winner;
    char aMove = ' ', bMove = ' ';
    
    // gestione input
    cout << "Inserire mossa del giocatore 1 (f|c|s): ";
    cin >> aMove;
    while (!validMove(aMove)) {
        cout << "La mossa non è valida, reinserire la mossa del giocatore 1 (f|c|s): ";
        cin >> aMove;
    }

    cout << "Inserire mossa del giocatore 2 (f|c|s): ";
    cin >> bMove;
    while (!validMove(bMove)) {
        cout << "La mossa non è valida, reinserire la mossa del giocatore 2 (f|c|s): ";
        cin >> bMove;
    }

    // controllo del vincitore
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

    // gestione output
    if (winner != 0)
        cout << "Giocatore " << winner << " hai vinto!" << endl;
    else
        cout << "Pareggio!" << endl;

    return 0;
}
