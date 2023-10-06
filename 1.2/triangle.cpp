#include <iostream>

using namespace std;

int main() {
    float altezza, base;

    cout << "Inserire base: ";
    cin >> base;
    cout << "Inserire altezza: ";
    cin >> altezza;

    float area = altezza * base / 2;
    cout << "Area = " << area << endl;

    return 0;
}
