#include <iostream>
#include <cmath>

using namespace std;

int factZeroes(int num) {
    int numZeroes = 0;
    for (int i = 1; num >= pow(5, i); ++i)
        numZeroes += num / pow(5, i);

    return numZeroes;
}

int main() {
    int num;

    cout << "Inserisci un numero intero positivo: ";
    cin >> num;

    while (num < 0) {
        cout << "ERRORE: hai inserito un numero negativo. Inserisci un numero intero positivo: ";
        cin >> num;
    }

    cout << num << "! ha " << factZeroes(num) << " zeri in fondo" << endl;

    return 0;
}
