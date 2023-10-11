#include <iostream>

using namespace std;

int main() {
    float a, b, c;
    cout << "Inserire tre numeri reali: ";
    cin >> a >> b >> c;

    float nMax = max(max(a, b), c);
    float nMin = min(min(a, b), c);
    float nMid = a;

    if (b != nMax && b != nMin)
        nMid = b;
    else if (c != nMax && c != nMin)
        nMid = c;

    cout << "Numeri ordinati: " << nMax << " " << nMid << " " << nMin << endl;

    return 0;
}
