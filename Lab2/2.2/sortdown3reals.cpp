#include <iostream>

using namespace std;

int main() {
    float a, b, c;
    cout << "Inserire tre numeri reali: ";
    cin >> a >> b >> c;

    float nMin, nMid, nMax;

    if (a >= b && a >= c) {
        nMax = a;
        nMid = max(b, c);
        nMin = min(b, c);
    }
    else if (b >= a && b >= c) {
        nMax = b;
        nMid = max(a, c);
        nMin = min(a, c);
    }
    else {
        nMax = c;
        nMid = max(a, b);
        nMin = min(a, b);
    }

    cout << "Numeri ordinati: " << nMax << " " << nMid << " " << nMin << endl;

    return 0;
}
