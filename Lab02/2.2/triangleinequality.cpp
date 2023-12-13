#include <iostream>

using namespace std;

int main() {
    float a, b, c;
    cout << "Inserire tre numeri reali: ";
    cin >> a >> b >> c;

    if (a < (b+c) && b < (a+c) && c < (a+b))
        cout << "Possono essere i lati di un triangolo" << endl;
    else
        cout << "Non possono essere i lati di un triangolo" << endl;

    return 0;
}
