#include <iostream>

using namespace std;

int main() {
    float a, b, c;
    cout << "Inserire tre numeri reali: ";
    cin >> a >> b >> c;

    cout << "Numeri ordinati: ";

    if (a >= b && a >= c) {
        if (b >= c)
            cout << a << " " << b << " " << c << endl;
        else
            cout << a << " " << c << " " << b << endl;
    }
    else if (b >= a && b >= c) {
        if (a >= c)
            cout << b << " " << a << " " << c << endl;
        else
            cout << b << " " << c << " " << a << endl;
    }
    else {
        if (b >= a)
            cout << c << " " << b << " " << a << endl;
        else
            cout << c << " " << a << " " << b << endl;
    }

    return 0;
}
