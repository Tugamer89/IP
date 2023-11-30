#include <iostream>

using namespace std;

int main() {
    const int D = 4;
    int vec[D];

    for (int i = 0; i < D; ++i) {
        cout << "Inserire " << i+1 << "-esimo elemento: ";
        cin >> vec[i];
    }

    for (int i = 1; i < D; ++i)
        vec[i-1] = vec[i];
    vec[D-1] = 0;

    cout << "Vettore shiftato: ";
    for (int elem : vec)
        cout << elem << " ";
    cout << endl;

    return 0;
}
