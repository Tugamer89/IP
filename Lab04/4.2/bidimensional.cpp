#include <iostream>

#define M 5
#define N 8

using namespace std;

int main() {
    int a[M][N];

    for (int m = 0; m < M; ++m)
        for (int n = 0; n < N; ++n)
            a[m][n] = m;

    cout << "Matrice:" << endl;
    for (int m = 0; m < M; ++m) {
        for (int n = 0; n < N; ++n)
            cout << a[m][n] << " ";
        cout << endl;
    }

    return 0;
}
