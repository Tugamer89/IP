#include <iostream>
#include <cmath>

using namespace std;

static inline bool isSqrt(const double& x, const double& sqrt_x) {
    return sqrt_x == sqrt(x);   // se uso pow, o sqrt_x*sqrt_x non funge
}

int main() {
    double x, sqrt_x;

    cout << "Inserire un numero reale: ";
    cin >> x;

    cout << "Inserire la sua radice quadrata: ";
    cin >> sqrt_x;

    cout << "Il numero " << sqrt_x;
    if (!isSqrt(x, sqrt_x))
        cout << " non";
    cout << " è la radice quadrata di " << x << endl;

    return 0;
}
