#include <iostream>

using namespace std;

int main() {
    const int M = 3;
    const int N = 4;
    int A[M][N];

    for (int i = 0; i < M; ++i)
        for (int j = 0; j < N; ++j)
            cin >> A[i][j];

    return 0;
}
