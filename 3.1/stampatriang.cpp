#include <iostream>

using namespace std;

int main(){
    cout << "Inserisci un numero maggiore di 0: ";
    int length;
    cin >> length;

    if (length <= 0) {
        cerr << "Avevo detto positivo!" << endl;
        return 1;
    }

    for (int i = 1; i <= length; ++i) {
        for (int j = 1; j <= i; ++j)
            cout << "*";
        cout << endl;
    }

    return 0;
}
