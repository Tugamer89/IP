#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Inserisci due numeri: ";
    cin >> a >> b;
    
    int max = (a + b + abs(a - b)) / 2;
    int min = (a + b - abs(a - b)) / 2;
    cout << "Numeri ordinati: " << min << " " << max << endl;

    return 0;
}