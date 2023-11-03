#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

#define PI 3.141592653589793238462643383279502884197

using namespace std;

string doubleToString(const double& num) {
    ostringstream ss;
    ss << num;
    return ss.str();
}

struct Complex {
    double real;
    double immaginary;
    double module;
    double argument;

    void fixCartesian() {
        real = module * cos(argument * 180 / PI);
        immaginary = module * sin(argument * 180 / PI);
    }

    void fixExponential() {
        module = sqrt(pow(real, 2) + pow(immaginary, 2));
        argument = atan(immaginary / real) * 180 / PI;

        if (real < 0)
            argument += 90 * (immaginary > 0 ? 1 : -2);
        else if (immaginary < 0)
            argument -= 90;
    }

    string cartesian() {
        return doubleToString(real) + (immaginary >= 0 ? " + " : " - ") + doubleToString(fabs(immaginary)) + "i";
    }

    string exponential() {
        return doubleToString(module) + " * e^(" + doubleToString(argument) + "i)";
    }

    Complex operator+(const Complex& other) const {
        Complex tmp;
        tmp.real = real + other.real;
        tmp.immaginary = immaginary + other.immaginary;
        tmp.fixExponential();
        return tmp;
    }

    Complex operator-(const Complex& other) const {
        Complex tmp;
        tmp.real = real - other.real;
        tmp.immaginary = immaginary - other.immaginary;
        tmp.fixExponential();
        return tmp;
    }

    Complex operator*(const Complex& other) const {
        Complex tmp;
        tmp.module = module * other.module;
        tmp.argument = argument + other.argument;
        tmp.fixCartesian();
        return tmp;
    }

    Complex operator/(const Complex& other) const {
        Complex tmp;
        tmp.module = module / other.module;
        tmp.argument = argument - other.argument;
        tmp.fixCartesian();
        return tmp;
    }
};

int main() {
    Complex z, w;

    cout << "Inserisci parte reale e immaginaria (re im) del numero complesso z: ";
    cin >> z.real >> z.immaginary;
    cout << "Inserisci parte reale e immaginaria (re im) del numero complesso w: ";
    cin >> w.real >> w.immaginary;

    z.fixExponential();
    w.fixExponential();

    Complex sum = z + w;
    Complex dif = z - w;
    Complex mul = z * w;
    Complex div = z / w; 

    cout << "z + w = " << sum.cartesian() << " = " << sum.exponential() << endl;
    cout << "z - w = " << dif.cartesian() << " = " << dif.exponential() << endl;
    cout << "z * w = " << mul.cartesian() << " = " << mul.exponential() << endl;
    cout << "z / w = " << div.cartesian() << " = " << div.exponential() << endl;

    return 0;
}
