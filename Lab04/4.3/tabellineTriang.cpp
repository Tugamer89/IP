#include <iostream>

#define N 10

using namespace std;

int main() {
    const int size = N * (N-1) / 2 + N;
    int tavolaPitagorica[size];

    int index = 0;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j <= i; ++j)
            tavolaPitagorica[index++] = (i+1) * (j+1);

    int row, column;
    cout << "Inserisci due valori compresi tra 1 e " << N << ": ";
    cin >> column >> row;

    while (row < 1 || row > N || column < 1 || column > N) {
        cout << "ERRORE: hai inserito una coppia non valida.\nInserire un'altra coppia di valori compresi tra 1 e " << N << ": ";
        cin >> column >> row;
    }

    int i = max(row, column) - 1;
    int j = min(row, column) - 1;

    cout << "L'elemento nella colonna " << column << " e riga " << row << " della tavola pitagorica è " << tavolaPitagorica[i * (i-1) / 2 + i + j] << endl;
    
    return 0;
}
