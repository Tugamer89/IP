#include <iostream>
#include "maxArray_funct.h"

using namespace std;

int main() {
    try {
        const int N = 5;
        int v[N] = {0, 7, 12, -9, 3};

        int maxElem = maxArray(v, N);
        cout << "L'elemento più grande è " << maxElem << endl;
    } catch(const string& err) {
        cerr << "ERRORE: " << err << "!" << endl;
    }

    return 0;
}
