#include <iostream>

using namespace std;

int main() {
    cout << "Inserisci un numero maggiore di 0: ";
    int len;
    cin >> len;

    if (len <= 0) {
        cerr << "Avevo detto positivo!" << endl;
        return 1;
    }

    cout << "Inserisci il carattere da replicare: ";
    char c;
    cin >> c;

    for (int i = 1; i <= len; ++i)
        cout << c;
    cout << endl;

    return 0;
}
