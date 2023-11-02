#include <iostream>

using namespace std;

int main() {
    const int M = 3;
    const int N = 4;
    int A[M][N] = {
        {56, 34, 72, 11},
        {89, 27, 5, 68},
        {47, 3, 61, 20}
    };

    for (int i = 0; i < M; ++i)
        for (int j = 0; j < N; ++j)
            cout << A[i][j];

    return 0;
}
