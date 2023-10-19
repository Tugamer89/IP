#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Inserire un numero intero positivo: ";
    cin >> num;

    while (num < 0) {
        cout << "Hai inserito un numero negativo, inserisci un numero intero positivo: ";
        cin >> num;
    }

    int originalNum = num;
    int inv = 0;

    while (num > 0) {
        int digit = num % 10;
        inv = inv*10 + digit;
        num /= 10;
    }

    cout << "Il numero " << originalNum;
    if (originalNum != inv)
        cout << " non";
    cout << " è palindromo!" << endl;

    return 0;
}
