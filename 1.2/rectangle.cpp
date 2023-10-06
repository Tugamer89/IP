#include <iostream>

using namespace std;

int main() {
    float altezza, base;
    
    cout << "Inserire altezza: ";
    cin >> altezza;
    cout << "Inserire base: ";
    cin >> base;

    float area = altezza*base;
    float peri = (altezza + base)*2;

    cout << "Area: " << area << endl;
    cout << "Perimetro: " << peri << endl;

    return 0;
}