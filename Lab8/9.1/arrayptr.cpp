#include <iostream>

using namespace std;

const int N = 4;

void f(int* array) {
    cout << "Dimensione del parametro = " << sizeof(array) << endl;
}


int main() {
    int v[N];
    int* p = v;

    cout << "Dimensione di v = " << sizeof(v) << endl;
    cout << "Dimensione di p = " << sizeof(p) << endl;
    f(v);

    return 0;
}
