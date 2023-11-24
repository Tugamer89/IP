#include <iostream>
#include "reverseArrayInStruct_funct.h"

using namespace std;

int main() {
    try {
        const int N = 5;
        array_str source(N, new int[N] {17, 23, 0, -8, 7});
        array_str dest(N, new int[N] {0, 0, 0, 0, 0});

        printArray(source);
        printArray(dest);
        
        reverseArrayInStruct(source, dest);

        printArray(source);
        printArray(dest);

        delete[] source.array;
        delete[] dest.array;
    }
    catch (OutOfRangeError& err) {
        cerr << "\e[31mERRORE: durante la chiamata di " << err.functionName << " con " << err.paramName << " = " << err.paramValue << 
            ", messaggio d'errore: " << err.customError << "!\e[0m" << endl;
    }

    return 0;
}
