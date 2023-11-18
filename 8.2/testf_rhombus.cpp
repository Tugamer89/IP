#include <iostream>

using namespace std;

struct OutOfRangeError {
    string functionName;
    string paramName;
    string paramValue;
    string customError;
    OutOfRangeError(string fName, string pName, string pValue, string cError) : functionName(fName), paramName(pName), paramValue(pValue), customError(cError) {}
};

void replicate(int n, char c) {
    for (int i = 0; i < n; ++i)
        cout << c;
}

void printRhombus(int n) {
    if (n <= 0)
        throw OutOfRangeError("printRhombus", "n", to_string(n), "il numero inserito è negativo o nullo");

    for (int i = n; i > 0; --i) {
        replicate(i, ' ');
        replicate(2 * (n - i) + 1, '*');
        cout << endl;
    }

    for (int i = 0; i <= n; ++i) {
        replicate(i, ' ');
        replicate(2 * (n - i) + 1, '*');
        cout << endl;
    }
}

int main() {
    try {
        int n;
        cout << "Inserire un numero intero positivo: ";
        cin >> n;
    
        printRhombus(n);
    }
    catch (OutOfRangeError& err) {
        cerr << "\e[31mERRORE: durante la chiamata di " << err.functionName << " con " << err.paramName << " = " << err.paramValue << 
            ", messaggio d'errore: " << err.customError << "!\e[0m" << endl;
    }

    return 0;
}
