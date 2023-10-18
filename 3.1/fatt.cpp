#include <iostream>

using namespace std;

int main() {
    cout << "Inserire un numero positivo: ";
    int n;
    cin >> n;

    if (n < 0) {
        cerr << "Avevo detto positivo!" << endl;
        return 7;
    }
    else if (n > 65) {
        cerr << "Troppo grande!" << endl;
        return 8;
    }

    unsigned long int F = n;

    for (int i = n-1; i > 1; --i)
        F *= i;

    if (F == 0)
        cout << "Il fattoriale di 0 è 1" << endl;
    else
        cout << "Il fattoriale di " << n << " è " << F << endl;
    
    return 0;
}
