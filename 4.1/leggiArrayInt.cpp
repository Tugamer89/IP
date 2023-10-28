#include <iostream>

using namespace std;

int main() {
    const int N = 10;
    int a[N];

    for (int i = 0; i < N; ++i) {
        int val;
        cout << "Inserisci un valore intero per a[" << i << "] = ";
        cin >> val;
        a[i] = val;
    }

    for (int i = 0; i < N; ++i)
        cout << "Valore di a[" << i << "] = " <<  a[i] << endl;

    return 0;
}
