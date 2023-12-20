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

    return 0;
}
