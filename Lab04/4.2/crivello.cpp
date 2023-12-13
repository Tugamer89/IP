#include <iostream>

#define N 1000

using namespace std;

int main() {
    bool isPrime[N];

    isPrime[0] = false;
    for (int i = 1; i < N; ++i)
        isPrime[i] = true;

    int p = 2;

    do {
        for (int i = 2; i <= N/p; ++i)
            isPrime[i*p - 1] = false;

        for (++p; p <= N; ++p)
            if (isPrime[p - 1])
                break;
    } while (p <= N);

    cout << "Tutti i numeri primi minori di " << N << " sono:" << endl;
    for (int i = 0; i < N; i++) 
        if (isPrime[i])
            cout << i+1 << " ";
    cout << endl;

    return 0;
}
