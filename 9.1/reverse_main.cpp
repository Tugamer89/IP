#include <iostream>
#include "reverse_func.h"

#define MAXN 10000

using namespace std;

int main() {
    try {
        int N;
        int source[MAXN], dest[MAXN];

        cout << "Inserire numero di elementi da inserire: ";
        cin >> N;
        
        for (int i = 0; i < N; ++i) {
            cout << "Inserire " << i+1 << "-esimo elemento: ";
            cin >> source[i];
        }

        reverse(source, dest, N);

        cout << "Source: " << endl;
        for (int i = 0; i < N; ++i)
            cout << source[i] << " ";
        
        cout << "\nDest: " << endl;
        for (int i = 0; i < N; ++i)
            cout << dest[i] << " ";
    }
    catch (OutOfRangeError& err) {
        cerr << "\e[31mERRORE: durante la chiamata di " << err.functionName << " con " << err.paramName << " = " << err.paramValue << 
            ", messaggio d'errore: " << err.customError << "!\e[0m" << endl;
    }

    return 0;
}
