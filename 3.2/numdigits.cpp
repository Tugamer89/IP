#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num;
    cout << "Inserisci un numero intero strettamente positivo: ";
    cin >> num;

    if (num <= 0)
        cout << "Il numero inserito NON e' valido" << endl;
    else if (num < 10)
        cout << "Il numero inserito e' composto da 1 cifra" << endl;
    else
        cout << "Il numero inserito e' composto da " << static_cast<int>(log10(num)) + 1 << " cifre" << endl;

    return 0;
}
