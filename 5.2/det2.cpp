#include <iostream>

using namespace std;

int main() {
    float A[2][2];

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "Inserire A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    float det = A[0][0] * A[1][1] - A[0][1] * A[1][0];

    cout << "Il deterimante della matrice inserita è " << det << endl;

    return 0;
}
