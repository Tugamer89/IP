#include <iostream>

#define MAXN 10000

using namespace std;

int main() {
    int N;
    int matrix[MAXN][MAXN];

    cout << "Inserire la dimensione della matrice quadrata: ";
    cin >> N;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "Inserire l'elemento della colonna " << i << " e riga " << j << ": ";
            cin >> matrix[i][j];
        }
    }

    bool isSymmetrical = true;

    for (int i = 0; i < N || !isSymmetrical; ++i)
        for (int j = 0; j < N; ++j)
            if (matrix[i][j] != matrix[j][i])
                isSymmetrical = false;

    cout << "La matrice inserita ";
    if (!isSymmetrical)
        cout << "non ";
    cout << " è simmetrica" << endl;

    return 0;
}
