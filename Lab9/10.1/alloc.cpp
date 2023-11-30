#include <iostream>

using namespace std;

int main() {
    const int N = 10;
    int* v;
    v = new int[N];

    for (int i = 0; i < N; ++i)
        v[i] = 2*i+1;

    cout << "Array: { ";
    for (int i = 0; i < N; ++i)
        cout << (i != 0 ? ", " : "") << *(v + i);
    cout << " }" << endl;

    delete[] v;
    v = new int[2*N];

    for (int i = 0; i < 2*N; ++i)
        v[i] = 2*i+1;

    cout << "Array: { ";
    for (int i = 0; i < 2*N; ++i)
        cout << (i != 0 ? ", " : "") << *(v + i);
    cout << " }" << endl;

    delete[] v;

    return 0;
}
