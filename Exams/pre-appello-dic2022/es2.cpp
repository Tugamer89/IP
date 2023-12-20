#include <iostream>
#include <vector>

using namespace std;

vector<unsigned int> allMultiples(unsigned int n) {
    if (n == 0)
        throw (string)"n è uguale a zero";

    vector<unsigned int> res;
    for (unsigned int i = 1; i <= n; ++i) 
        res.push_back(i*n);
    return res;
}

vector<unsigned int> allDivisors(unsigned int n) {
    if (n == 0)
        throw (string)"n è uguale a zero";

    vector<unsigned int> res;
    for (unsigned int i = 1; i <= n; ++i) 
        if (n % i == 0)
            res.push_back(i);
    return res;
}

int main() {
    unsigned int n = 50;
    vector<unsigned int> mul = allMultiples(n);
    vector<unsigned int> div = allDivisors(n);

    cout << "I primi " << n << " multiplit di " << n << " sono: ";
    for (unsigned int a : mul)
        cout << a << " ";
    cout << endl;

    cout << "I divisori di " << n << " sono: ";
    for (unsigned int a : div)
        cout << a << " ";
    cout << endl;

    return 0;
}
