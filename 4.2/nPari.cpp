#include <iostream>

#define MAXN 10000

using namespace std;

int main() {
    int N;
    int arr[MAXN];

    cout << "Inserire numero di elementi da inserire: ";
    cin >> N;
    
    for (int i = 0; i < N; ++i) {
        cout << "Inserire " << i+1 << "-esimo elemento: ";
        cin >> arr[i];
    }

    int P = 0;
    for (int i = 0; i < N; ++i)
        if (arr[i] % 2 == 0)
            ++P;

    cout << "Numeri pari: " << P << endl;
    cout << "Numeri dispari: " << N - P << endl;

    return 0;
}
