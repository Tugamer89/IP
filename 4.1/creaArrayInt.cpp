#include <iostream>
#define N 10

using namespace std;

int main() {
    int a[N];

    for (int i = 0; i < N; ++i)
        a[i] = N-i;

    for (int i = 0; i < N; ++i)
        cout << a[i] << endl;

    return 0;
}
