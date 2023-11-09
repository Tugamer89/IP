#include <iostream>

using namespace std;

float area(float base, float altezza) {
    if (base <= 0 && altezza <= 0)
        return -3;
    if (base <= 0)
        return -1;
    if (altezza <= 0)
        return -2;

    return base * altezza;
}

int main() {
    float b, h;
    cin >> b >> h;
    
    float a;
    a = area(b, h);

    switch(a) {
    case -3:
        cerr << "La base e l'altezza non sono positivi!" << endl;
        break;
    case -2:
        cerr << "L'altezza non è positiva!" << endl;
        break;
    case -1:
        cerr << "La base non è positiva!" << endl;
        break;
    default:
        cout << "L'area vale " << a << endl;
    }

    return 0;
}
