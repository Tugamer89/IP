#include <iostream>

using namespace std;

int main() {
    char a, b;

    cout << "Inserire due caratteri: ";
    cin >> a >> b;

    cout << "Prima dello scambio: a = '" << a << "', b = '" << b << "'\n";

    char c = a;
    a = b;
    b = c;

    cout << "Dopo lo scambio: a = '" << a << "', b = '" << b << "'\n";

    return 0;
}
