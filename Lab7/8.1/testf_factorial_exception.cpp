#include <iostream>

using namespace std;

int factorial(int n) {
    if (n < 0) {
        string err = "Il numero inserito è negativo";
        throw err;
    }

    if (n == 0)
        return 1;

    for (int i = n-1; i > 1; --i)
        n *= i;

    return n;
}


int main() {
    try {
        cout << "Inserire un numero positivo: ";
        int num;
        cin >> num;
        cout << factorial(num) << " è il fattoriale di " << num << endl;
    }
    catch(string& err) {
        cerr << "ERRORE: " << err << endl;
    }

    return 0;
}
