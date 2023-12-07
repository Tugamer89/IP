#include <vector>
#include "primes.h"

using namespace std;

vector<int> primes(int n) {
    vector<int> firstPrimes;

    bool* isPrime = new bool[n];

    isPrime[0] = false;
    for (int i = 1; i < n; ++i)
        isPrime[i] = true;

    int p = 2;

    do {
        for (int i = 2; i <= n/p; ++i)
            isPrime[i*p - 1] = false;

        for (++p; p <= n; ++p)
            if (isPrime[p - 1])
                break;
    } while (p <= n);

    for (int i = 0; i < n; i++) 
        if (isPrime[i])
            firstPrimes.push_back(i+1);
    
    delete[] isPrime;
    return firstPrimes;
}
