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

    for (int i = 0; i < min(abs(N), D); ++i) {
        if (N < 0) {
            for (int j = 1; j < D; ++j)
                vec[j-1] = vec[j];
            vec[D-1] = 0;
        }
        else {
            for (int j = D-1; j > 0; --j)
                vec[j] = vec[j-1];
            vec[0] = 0;
        }
    }

    cout << "Vettore shiftato: ";
    for (int elem : vec)
        cout << elem << " ";
    cout << endl;

    return 0;
}
