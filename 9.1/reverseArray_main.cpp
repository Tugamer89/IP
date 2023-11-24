#include <iostream>
#include "reverseArray_funct.h"
#include "printArray_funct.h"

using namespace std;

int main() {
    try {
        const int N = 5;
        int source[N] = {17, 23, 0, -8, 7};
        int dest[N] = {0, 0, 0, 0, 0};

        printArray(source, N);
        printArray(dest, N);
        
        reverse(source, dest, N);

        printArray(source, N);
        printArray(dest, N);
    }
    catch (OutOfRangeError& err) {
        cerr << "\e[31mERRORE: durante la chiamata di " << err.functionName << " con " << err.paramName << " = " << err.paramValue << 
            ", messaggio d'errore: " << err.customError << "!\e[0m" << endl;
    }

    return 0;
}
