#include <iostream>

using namespace std;

int main() {
    const int N = 20;
    int v[N];

    for (int i = 0; i < N; ++i) {
        cout << "Inserire " << i+1 << "-esimo elemento: ";
        cin >> v[i];
    }

    for (int i = 0; i < N; ++i)
        cout << "Valore di v[" << i << "] = " <<  v[i] << endl;

    int greatestIndex;
    for (int i = 0; i < N; ++i) {
        greatestIndex = i;

        for (int j = i+1; j < N; ++j)
            if (v[j] < v[greatestIndex])
                greatestIndex = j;

        swap(v[i], v[greatestIndex]);
    }

    for (int i = 0; i < N; ++i)
        cout << "Valore di v[" << i << "] = " <<  v[i] << endl;

    return 0;
}
