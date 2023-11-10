#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n < 2)
        return false;

    for (int i = 2; i < sqrt(n); ++i)
        if (n % i == 0)
            return false;

    return true;
}

int main() {
    int elementsToTest[] = {-5, 0, 1, 2, 5, 27, 31, 14, 3, 15, 89, 3769};

    for (int elem : elementsToTest)
        cout << "Il numero " << elem << (isPrime(elem) ? "" : " non") << " è primo!" << endl;

    return 0;
}
