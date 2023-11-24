#include <iostream>
#include "sortArrayInv_funct.h"

using namespace std;

int main() {
    const int N = 15;
    int v[N] = {28, 45, 62, 14, 37, 51, 9, 83, 72, 6, 91, 23, 59, 17, 32}; 

    sortArrayInv(v, N);

    for (int elem : v)
        cout << elem << " ";
    cout << endl;

    return 0;
}
