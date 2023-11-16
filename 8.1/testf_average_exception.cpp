#include <iostream>

using namespace std;

float average(int hm) {
    if (hm <= 0) {
        int err = 1;
        throw err;
    }
    
    float sum = 0;

    for (int i = 0; i < hm; ++i) {
        cout << "\nInserisci un numero ";
        float x;
        cin >> x;
        sum += x;
    }
    
    return sum/hm;
}

int main() {
    try {
        cout << "Di quanti numeri vuoi fare la media? ";
        int how_many;
        cin >> how_many;
        float avg = average(how_many);
        cout << "\nLa media è " << avg << endl;
    }
    catch(int& err) {
        cout << "ERRORE: hai inserito un valore non valido!" << endl;
    }

    return 0;
}
