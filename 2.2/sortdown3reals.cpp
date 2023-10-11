#include <iostream>

using namespace std;

int main() {
    float a, b, c;
    cout << "Inserire tre numeri reali: ";
    cin >> a >> b >> c;

    float max = std::max(std::max(a, b), c);
    float min = std::min(std::min(a, b), c);
    float mid = a;

    if (b != max && b != min)
        mid = b;
    else if (c != max && c != min)
        mid = c;

    cout << "Numeri ordinati: " << max << " " << mid << " " << min << endl;
    return 0;
}