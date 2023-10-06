#include <iostream>

using namespace std;

int main() {
    float a, b, c;

    cout << "Inserire tre variabili float: ";
    cin >> a >> b >> c;

    cout << "Prima dello scambio: a = " << a << ", b = " << b << ", c = " << c << endl;

    float temp_a = a;
    a = b;
    b = c;
    c = temp_a;

    cout << "Dopo lo scambio: a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}