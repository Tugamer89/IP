#include <iostream>

using namespace std;

bool isOne(float a, float b, float c) {
    float res = 1;

    res *= a;
    res *= b;
    res *= c;

    res /= a;
    res /= b;
    res /= c;

    return res == 1;
}

int main() {
    float a, b, c;
    cout << "Inserire 3 valori float: ";
    cin >> a >> b >> c;

    cout << boolalpha << isOne(a, b, c) << endl;

    return 0;
}
