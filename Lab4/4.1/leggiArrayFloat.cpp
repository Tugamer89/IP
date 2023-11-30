#include <iostream>

using namespace std;

int main() {
    const int N = 5;
    float a[N];

    for (int i = 0; i < N; ++i) {
        float val;
        cout << "Inserisci un valore float per a[" << i << "] = ";
        cin >> val;
        a[i] = val;
    }

    cout << "I valori contenuti nell'array sono: {";
    for (int i = 0; i < N; ++i)
        cout << (i > 0 ? ", " : " ") <<  a[i];
    cout << " }" << endl;

    return 0;
}
