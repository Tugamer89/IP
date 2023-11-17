#include <iostream>
#include <cmath>

using namespace std;

void printFactPrimes(int n) {   
    bool first = true;
    int prime = 2, exp = 0;

    cout << n << " = ";
    if (n < 0) {
        cout << "-1";
        n = -n;
        first = false;
    }

    if (n == 0 || n == 1)
        cout << n << endl;

    int maxPrime = sqrt(n);
    while (prime <= maxPrime) {
        if (n % prime == 0) {
            n /= prime;
            ++exp;
            continue;
        }

        if (exp > 0) {
            if (!first)
                cout << " * ";
            else
                first = false;

            cout << prime;
            if (exp > 1)
                cout << "^" << exp;
            exp = 0;
        }
        
        ++prime;
    }

    if (n > 1)
        cout << (first ? "" : " * ") << n;

    cout << endl;
}

int main() {
    int n;
    cout << "Inserire il numero di cui fare la scomposizione in fattori primi: ";
    cin >> n;

    printFactPrimes(n);

    return 0;
}
