#include <iostream>

using namespace std;

float average(int hm) {
    if (hm <= 0) {
        cerr << "Il valore inserito non è positivo" << endl;
        exit(0);
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
    cout << "Di quanti numeri vuoi fare la media?" << endl;
    int how_many;
    cin >> how_many;

    float avg = average(how_many);
    cout << "\nLa media è " << svg << endl;

    return 0;
}
