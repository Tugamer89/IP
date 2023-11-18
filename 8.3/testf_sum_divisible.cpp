#include <iostream>

using namespace std;

struct OutOfRangeError {
    string functionName;
    string paramName;
    string paramValue;
    string customError;
    OutOfRangeError(string fName, string pName, string pValue, string cError) : functionName(fName), paramName(pName), paramValue(pValue), customError(cError) {}
};

int sumDivisible(int a, int b, int max) {
    if (a <= 0)
        throw OutOfRangeError("sumDivisible", "a", to_string(a), "il valore non è strettamente positivo");

    if (b <= 0)
        throw OutOfRangeError("sumDivisible", "b", to_string(b), "il valore non è strettamente positivo");

    if (max <= 0)
        throw OutOfRangeError("sumDivisible", "max", to_string(max), "il massimo non è strettamente positivo");

    int sum = 0;
    for (int n = max; n > 0; --n)
        if (a%n == 0 || b%n == 0)
            sum += n;

    return sum;
}

int main() {
    try {
        int a, b, max;

        cout << "Inserire i due dividendi strettamenti positivi: ";
        cin >> a >> b;

        cout << "Inserire il massimo strettamente positivo: ";
        cin >> max;

        int sum = sumDivisible(a, b, max);
        cout << "La somma dei numeri compresi tra 0 e " << max << " divisibili per " << a << " e " << b << " è " << sum << endl;
    }
    catch (OutOfRangeError& err) {
        cerr << "\e[31mERRORE: durante la chiamata di " << err.functionName << " con " << err.paramName << " = " << err.paramValue << 
            ", messaggio d'errore: " << err.customError << "!\e[0m" << endl;
    }

    return 0;
}
