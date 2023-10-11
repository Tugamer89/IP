#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c;
    cout << "Considerando l'equazione di secondo grado ax^2 + bx + c = 0" << endl;
    
    cout << "Inserisci il valore di a: ";
    cin >> a;
    cout << "Inserisci il valore di b: ";
    cin >> b;
    cout << "Inserisci il valore di c: ";
    cin >> c;

    float delta = b*b - 4*a*c;
    float minRoot = (-b - sqrt(delta)) / (2 * a);
    float maxRoot = (-b + sqrt(delta)) / (2 * a);

    if (delta < 0)
        cout << "L'equazione non ha radici reali" << endl;
    else if (delta == 0)
        cout << "La radice dell'equazione è " << maxRoot << " con doppia valenza" << endl;
    else
        cout << "\nLe radici dell'equazione sono " << minRoot << " e " << maxRoot << endl;

    return 0;
}
