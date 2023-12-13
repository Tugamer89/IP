#include <iostream>

using namespace std;

int main() {
    cout << "Inserisci il valore di a: ";
    int a;
    cin >> a;
    
    cout << "Inserisci il valore di b: ";
    int b;
    cin >> b;

    cout << "\na vale " << a << "\nb vale " << b;

    int c = a;
    a = b;
    b = c;

    cout << "\na vale " << a << "\nb vale " << b;
    
    return 0;
}
