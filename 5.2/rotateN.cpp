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
        for (int j = D-1; j > 0; --j)
            vec[j] = vec[j-1];
        vec[0] = first;
    }

    cout << "Vettore shiftato: ";
    for (int elem : vec)
        cout << elem << " ";
    cout << endl;

    return 0;
}
