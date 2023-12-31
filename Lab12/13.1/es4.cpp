#include <iostream>

using namespace std;

unsigned MCD(unsigned m, unsigned n) {
    if (m == n)
        return m;
    return m > n ? MCD(m-n, n) : MCD(m, n-m);
}

struct Couple {
    unsigned first;
    unsigned second;
};

int main() {
    Couple values[] = {{5, 4}, {3, 2}, {15, 9}, {8, 2}, {14, 1}, {20, 25}};

    for (Couple value : values)
        cout << "Il Massimo Comun Divisore tra " << value.first << " e " << value.second << " è " << MCD(value.first, value.second) << endl;

    return 0;
}
