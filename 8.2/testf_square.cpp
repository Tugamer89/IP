#include <iostream>

using namespace std;

void square(int n) {
    if (n <= 0)
        throw (string)"lato del quadrato negativo o nullo";

    for (int i = 0; i < n; ++i)
        cout << "x ";
    cout << endl;

    for (int i = 0; i < n-2; ++i) {
        cout << "x ";

        for (int j = 0; j < n-2; ++j)
            cout << "  ";

        cout << "x \n";
    }

    if (n > 1)
        for (int i = 0; i < n; ++i)
            cout << "x ";
}

int main() {
    try {
        int len;
        cout << "Inserire lunghezza del lato del quadrato: ";
        cin >> len;
        square(len);
    }
    catch (string& err) {
        cerr << "\e[31mERRORE: " << err << "!\e[0m" << endl;
    }

    return 0;
}
