#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Inserisci due numeri: ";
    cin >> a >> b;

    cout << "Prima dello scambio: a=" << a << " b=" << b << endl;

    a ^= b;
    b ^= a;
    a ^= b;

    cout << "Dopo lo scambio: a=" << a << " b=" << b << endl;
    
    return 0;
}
