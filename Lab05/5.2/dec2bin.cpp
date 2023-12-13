#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int N = 10;
    bool binNum[N];
    int decNum;

    cout << "Inserire un numero intero positivo minore di " << pow(2, N) << ": ";
    cin >> decNum;

    if (decNum < 0 || decNum >= pow(2, N)) {
        cout << "Numero NON valido" << endl;
        return 1;
    }

    int tmp = decNum;
    for (int i = N-1; i >= 0; --i) {
        binNum[i] = tmp % 2;
        tmp /= 2;
    }

    for (int elem : binNum)
        cout << elem;
    cout << endl;

    return 0;
}
