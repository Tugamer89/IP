#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Inserire un numero intero: ";
    cin >> n;

    cout << "Il numero " << n;
    if (n % 13 != 0)
        cout << " non";
    cout << " è divisibile per 13" << endl;

    return 0;
}
