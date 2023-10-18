#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num;

    cout << "Inserisci un numero intero positivo: ";
    cin >> num;

    while (num < 0) {
        cout << "ERRORE: hai inserito un numero negativo. Inserisci un numero intero positivo: ";
        cin >> num;
    }
    
    /*
        Il numero di zeri in fondo al fattoriale e` il numero di 2*5 presenti nella fattorizzazione
        in numeri primi del fattoriale e, visto che nella fattorizzazione ci sono sempre piu` 2 che
        5, posso calcolare soltanto il numero di 5.
    */

    int numZeroes = 0;
    for (int i = 1; num >= pow(5, i); ++i)
        numZeroes += num / pow(5, i);

    cout << num << "! ha " << numZeroes << " zeri in fondo" << endl;

    return 0;
}
