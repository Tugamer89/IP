#include <iostream>

#define N 10

using namespace std;

int main() {
    int tavolaPitagorica[N][N];

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            tavolaPitagorica[i][j] = (i+1) * (j+1);

    int i, j;
    cout << "Inserisci due valori compresi tra 1 e 10: ";
    cin >> i >> j;

    while (i < 1 || i > 10 || j < 1 || j > 10) {
        cout << "ERRORE: hai inserito una coppia non valida.\nInserire un'altra coppia di valori compresi tra 1 e 10: ";
        cin >> i >> j;
    }

    cout << "L'elemento nella colonna " << i << " e riga " << j << " della tavola pitagorica è " << tavolaPitagorica[i-1][j-1] << endl;

    return 0;
}
