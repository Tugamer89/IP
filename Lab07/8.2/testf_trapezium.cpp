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

void printTrapezium(int lowBase, int highBase) {
    if (lowBase <= 0)
        throw OutOfRangeError("printTrapezium", "lowBase", to_string(lowBase), "il valore inserito è negativo o nullo");
    
    if (highBase <= 0)
        throw OutOfRangeError("printTrapezium", "highBase", to_string(highBase), "il valore inserito è negativo o nullo");

    if (highBase <= lowBase)
        throw OutOfRangeError("printTrapezium", "highBase", to_string(highBase), "la base maggiore è minore o uguale a quella minore");

    for (int i = lowBase; i <= highBase; ++i) {
        replicate(i, 'x');
        cout << endl;
    }
}

int main() {
    try {
        int b, B;
        
        cout << "Inserire base minore del trapezio: ";
        cin >> b;

        cout << "Inserire base maggiore del trapezio: ";
        cin >> B;

        printTrapezium(b, B);
    }
    catch (OutOfRangeError& err) {
        cerr << "\e[31mERRORE: durante la chiamata di " << err.functionName << " con " << err.paramName << " = " << err.paramValue << 
            ", messaggio d'errore: " << err.customError << "!\e[0m" << endl;
    }

    return 0;
}
