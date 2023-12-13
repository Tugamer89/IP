#include <iostream>

using namespace std;

int main() {
    cout << "Inserire tre numeri interi: ";
    int a0, a1, a2;
    cin >> a0 >> a1 >> a2;

    int aux = a1;

    if (a0 > a1) {
        a1 = a0;
        a0 = aux;
        aux = a1;
    }
    if (a0 > a2) {
        a1 = a0;
        a0 = a2;
        a2 = aux;
    }
    else if (a1 > a2) {
        a1 = a2;
        a2 = aux;
    }

    cout << "I numeri inseriti, in ordine crescente, sono: " << a0 << " < " << a1 << " < " << a2 << endl;

    return 0;
}
