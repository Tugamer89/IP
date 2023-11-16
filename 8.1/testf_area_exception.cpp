#include <iostream>

using namespace std;

float area(float base, float altezza) {
    if (base < 0 && altezza < 0) {
        int err = 3;
        throw err;
    }
    if (base < 0) {
        int err = 1;
        throw err;
    }    
    if (altezza < 0) {
        int err = 2;
        throw err;
    }

    return base * altezza;    
}

int main() {
    float b, h;
    cin >> b >> h;

    try {
        float a;
        a = area(b, h);
        cout << "L'area vale " << a << endl;
    }
    catch (int& err) {
        cerr << "ERRORE: ";
        
        switch(err) {
        case 1:
            cerr << "la base inserita non è valida!" << endl;
            break;
        case 2:
            cerr << "l'altezza inserita non è valida!" << endl;
            break;
        case 3:
            cerr << "la base e l'altezza inserite non sono valide!" << endl;
            break;
        default:
            cerr << "codice d'errore " << err << endl;
        }
    }

    return 0;
}
