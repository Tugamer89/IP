#include <iostream>

using namespace std;

int main() {
    int b, B;

    cout << "Inserire base minore: ";
    cin >> b;
    cout << "Inserire base maggiore: ";
    cin >> B;
    cout << endl;

    for (int i = 0; i < B - b + 1; ++i) {
        for (int j = 0; j < b + i; ++j)
            cout << 'x';
        cout << endl;
    }

    return 0;
}
