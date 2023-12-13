#include <iostream>

using namespace std;

int main() {
    cout << "Inserisci un numero positivo: ";
    int k;
    cin >> k;

    if (k <= 0) {
        cerr << "Valore non valido!" << endl;
        return 66;
    }

    cout << "Rovesciando " << k;

    int inv = 0;
    while (k > 0) {
        int mod = k % 10;
        k /= 10;
        inv *= 10;
        inv += mod;    
    }

    cout << " si ottiene " << inv << endl;

    return 0;
}
