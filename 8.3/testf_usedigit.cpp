#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct OutOfRangeError {
    string functionName;
    string paramName;
    string paramValue;
    string customError;
    OutOfRangeError(string fName, string pName, string pValue, string cError) : functionName(fName), paramName(pName), paramValue(pValue), customError(cError) {}
};

static inline int numDigits(int n) {
    return n == 0 ? 1 : (log10(abs(n)) + 1);
}

bool hasDigit(int n, int d) {
    while (n > 0) {
        if (n%10 == d)
            return true;
        n /= 10;
    }

    return false;
}

bool hasSequence(int n, int d, bool isFirstCheck = true, int firstD = -1) {
    if (n == d)
        return true;

    if (numDigits(n) < numDigits(d))
        return false;

    while (n > 0) {
        if (n%10 == d%10) {
            if (d < 10)
                return true;
            return hasSequence(n/10, d/10, false, d);
        }
        else if (!isFirstCheck)
            return hasSequence(n, firstD, true, firstD);

        n /= 10;
    }

    return false;
}

int useDigit(int n, int d, bool sequence = false) {
    if (n <= 10)
        throw OutOfRangeError("useDigit", "n", to_string(n), "il numero non è maggiore di zero");
    
    if (d < 0 || (!sequence && d > 9))
        throw OutOfRangeError("useDigit", "d", to_string(d), sequence ? "non è una sequenza accettabile" : "non è una cifra");

    for (int i = n-1; i > d; --i)
        if (hasSequence(i, d))
            return i;

    return d;
}

int main() {
    try {
        bool sequence = true;
        int n, d;

        cout << "Inserire un numero intero: ";
        cin >> n;

        cout << "Inserire una " << (sequence ? "sequenza: " : "cifra: ");
        cin >> d;

        int res = useDigit(n, d, sequence);
        cout << "Il più grande numero minore di " << n << " contenente la " << (sequence ? "sequenza " : "cifra ") << d << " è " << res << endl;
    }
    catch (OutOfRangeError& err) {
        cerr << "\e[31mERRORE: durante la chiamata di " << err.functionName << " con " << err.paramName << " = " << err.paramValue << 
            ", messaggio d'errore: " << err.customError << "!\e[0m" << endl;
    }

    return 0;
}
