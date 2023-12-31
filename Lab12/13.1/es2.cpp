#include <iostream>

using namespace std;

unsigned coeffBin(unsigned n, unsigned k) {
    if (k > n)
        throw (string)"ERRORE: k > n";
    if (n == k || k == 0)
        return 1;
    return coeffBin(n-1, k-1) + coeffBin(n-1, k);
}

struct Couple {
    unsigned first;
    unsigned second;
};

int main() {
    Couple values[] = {{5, 4}, {3, 2}, {3, 3}, {8, 2}, {14, 0}};

    for (Couple value : values)
        cout << "Il binomiale di " << value.first << " in " << value.second << " è " << coeffBin(value.first, value.second) << endl;

    return 0;
}
