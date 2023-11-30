#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Inserire un numero intero positivo: ";
    cin >> n;

    while (n <= 0) {
        cout << "Hai inserito un numero negativo, inserisci un numero intero positivo: ";
        cin >> n;
    }
    
    for (int i = n; i > 0; --i) {
        for (int j = 0; j < i; ++j)
            cout << " ";
        for (int j = 0; j < 2 * (n - i) + 1; ++j)
            cout << "*";
        cout << endl;
    }

    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j < i; ++j)
            cout << " ";
        for (int j = 0; j < 2 * (n - i) + 1; ++j)
            cout << "*";
        cout << endl;
    }

    return 0;
}
