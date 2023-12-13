#include <iostream>
#include <vector>
#include "primes.h"

using namespace std;

int main() {
    int n = 1000;
    vector<int> fPrimes = primes(n);

    cout << "I primi " << n << " numeri primi sono: ";
    for (int elem : fPrimes)
        cout << elem << " ";
    cout << endl;

    return 0;
}
