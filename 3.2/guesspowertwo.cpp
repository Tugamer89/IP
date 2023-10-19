#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num, power;
    cout << "Inserire un numero intero: ";
    cin >> num;

    cout << "Prova ad indovinare il quadrato di " << num << ": ";
    cin >> power;

    while (pow(num, 2) != power) {
        cout << "Hai sbagliato, ritenta: ";
        cin >> power;
    }

    cout << "Bravo!" << endl;

    return 0;
}
