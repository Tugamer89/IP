#include <iostream>

using namespace std;

int main() {
    float base, heigh;
    
    cout << "Inserire base: ";
    cin >> base;
    cout << "Inserire altezza: ";
    cin >> heigh;
    
    float area = heigh * base;
    float peri = (heigh + base)*2;

    cout << "Area = " << area << endl;
    cout << "Perimetro = " << peri << endl;

    return 0;
}
