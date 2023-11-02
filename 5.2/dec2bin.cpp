#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int N = 8;
    bool binNum[N];
    int decNum;

    cout << "Inserire un numero intero positivo minore di " << pow(2, N) << ": ";
    cin >> decNum;

    while (decNum < 0 || decNum >= pow(2, N)) {
        cout << "Hai inserito un numero negativo o troppo grande, inserisci un numero intero positivo: ";
        cin >> decNum;
    }

    int tmp = decNum;
    for (int i = N-1; i >= 0; --i) {
        binNum[i] = tmp % 2;
        tmp /= 2;
    }

    cout << decNum << " verrà stampato ";
    for (int elem : binNum)
        cout << elem;
    cout << endl;

    return 0;
}
