#include <iostream>
#include "shiftArray_func.h"

using namespace std;

int main() {
    const int D = 4;
    int vec[D];

    for (int i = 0; i < D; ++i) {
        cout << "Inserire " << i+1 << "-esimo elemento: ";
        cin >> vec[i];
    }

    shift(vec, D);

    cout << "Vettore rotato: ";
    for (int elem : vec)
        cout << elem << " ";
    cout << endl;

    return 0;
}
