#include <iostream>

using namespace std;

void divide(int a, int b, int& q, int& r) {
    q = a / b;
    r = a % b;
}

int main() {
    int a, b, q, r;

    cout << "Inserire dividendo: ";
    cin >> a;

    cout << "Inserire divisore: ";
    cin >> b;

    divide(a, b, q, r);

    cout << a << " / " << b << " = " << q << " + " << r << endl;

    return 0;
}
