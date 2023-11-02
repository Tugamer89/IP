#include <iostream>

using namespace std;

int main() {
    const int D = 4;
    int vec[D];

    for (int i = 0; i < D; ++i) {
        cout << "Inserire " << i+1 << "-esimo elemento: ";
        cin >> vec[i];
    }

    int first = vec[D-1];
    for (int i = D-1; i > 0; --i)
        vec[i] = vec[i-1];
    vec[0] = first;

    cout << "Vettore rotato: ";
    for (int elem : vec)
        cout << elem << " ";
    cout << endl;

    return 0;
}
