#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int D = 4;
    int N;
    int vec[D];

    cout << "Inserire fattore di shift: ";
    cin >> N;

    for (int i = 0; i < D; ++i) {
        cout << "Inserire " << i+1 << "-esimo elemento: ";
        cin >> vec[i];
    }

    int times = (N <= 0) ? D - (-N % D) : N % D;
    for (int i = 0; i < times; ++i) {
        int first = vec[D-1];
        for (int i = D-1; i > 0; --i)
            vec[i] = vec[i-1];
        vec[0] = first;
    }

    cout << "Vettore shiftato: ";
    for (int elem : vec)
        cout << elem << " ";
    cout << endl;

    return 0;
}
