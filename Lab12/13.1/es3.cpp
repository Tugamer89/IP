#include <iostream>

using namespace std;

unsigned fibonacci(unsigned n) {
    if (n == 0 || n == 1)
        return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    unsigned values[] = {5, 14, 0, 9, 3};

    for (unsigned value : values)
        cout << "Fibonacci di " << value << " è " << fibonacci(value) << endl;

    return 0;
}
