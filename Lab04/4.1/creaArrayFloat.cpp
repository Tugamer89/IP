#include <iostream>

using namespace std;

int main() {
    const int N = 10;
    float a[N];
    float v;

    cout << "Inserire un valore float v: ";
    cin >> v;

    for (int i = 0; i < N; ++i)
        a[i] = i*v;

    for (int i = 0; i < N; ++i)
        cout << "Valore di a[" << i << "] = " <<  a[i] << endl;

    return 0;
}
