#include <iostream>

using namespace std;

int main() {
    cout << "Di quanti numeri vuoi fare la media?" << endl;
    int how_many;
    cin >> how_many;

    if (how_many <= 0) {
        cerr << "Il numero doveva essere positivo" << endl;
        return 42;
    }

    float sum = 0;
    int i = 0;

    while (i++ < how_many) {
        cout << "\nInserisci un numero ";
        float x;
        cin >> x;
        sum += how_many;
    }

    cout << "\nLa media è " << sum / how_many << endl;

    return 0;
}
