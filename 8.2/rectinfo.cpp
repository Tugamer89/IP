#include <iostream>

using namespace std;

void computeRectInfo(const double& l1, const double& l2, double& area, double& perimetro) {
    if (l1 < 0 && l2 < 0)
        throw (string)"entrambi i lati non sono vaidi";
    if (l1 < 0)
        throw (string)"il primo lato non è valido";
    if (l2 < 0)
        throw (string)"il secondo lato non è valido";

    area = l1*l2;
    perimetro = (l1+l2)*2;
}

int main() {
    try {
        double l1, l2, area, perimeter;

        cout << "Inserire i due lati del rettangolo: ";
        cin >> l1 >> l2;

        computeRectInfo(l1, l2, area, perimeter);
        cout << "Il rettangolo ha area " << area << " e perimetro " << perimeter << endl;
    }
    catch (string& err) {
        cerr << "ERRORE: " << err << endl;
    }

    return 0;
}
