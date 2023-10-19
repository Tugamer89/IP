#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num;
    cout << "Inserire un numero intero positivo: ";
    cin >> num;

    while (num < 0) {
        cout << "Hai inserito un numero negativo, inserisci un numero intero positivo: ";
        cin >> num;
    }

    int numDigits = log10(num) + 1;

    cout << "Il numero " << num << " ha " << numDigits << " cifre" << endl;

    return 0;
}
