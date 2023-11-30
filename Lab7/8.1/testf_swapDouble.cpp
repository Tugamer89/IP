#include <iostream>

using namespace std;

void swapDouble(double& a, double& b) {
    double tmp = a;
    a = b;
    b = tmp;
}

int main() {
    double a = 5, b = 12;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    swapDouble(a, b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}
