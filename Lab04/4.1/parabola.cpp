#include <iostream>

using namespace std;

int main() {
    const int N = 10;
    float arr[N];
    float a, b, c;

    cout << "Fornire il valore di a = ";
    cin >> a;
    cout << "Fornire il valore di b = ";
    cin >> b;
    cout << "Fornire il valore di c = ";
    cin >> c;

    cout << "Valori nell'intervallo [0,9] della parabola " << a << "x^2 + " << b << "x + " << c << endl;

    for (int i = 0; i < N; ++i)
        arr[i] = (a * i + b) * i + c;


    for (int i = 0; i < N; ++i)
        cout << "Valore di arr[" << i << "] = " <<  arr[i] << endl;

    return 0;
}
