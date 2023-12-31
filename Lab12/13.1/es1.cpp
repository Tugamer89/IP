#include <iostream>

using namespace std;

unsigned fact(unsigned n) {
    if (n == 0)
        return 1;
    return n * fact(n-1);
}

int main() {
    unsigned values[] = {5, 14, 0, 9, 3};

    for (unsigned value : values)
        cout << "Il fattoriale di " << value << " è " << fact(value) << endl;

    return 0;
}
