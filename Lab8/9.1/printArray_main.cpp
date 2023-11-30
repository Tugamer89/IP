#include <iostream>
#include "printArray_funct.h"

using namespace std;

int main() {
    const int N = 5;
    int a1[N] = {4, 18, -9, 0, 3};
    int a2[1] = {15};
    int a3[0] = {};

    printArray(a1, N);
    printArray(a2, 1);
    printArray(a3, 0);

    printArrayWithIndex(a1, N);
    printArrayWithIndex(a2, 1);
    printArrayWithIndex(a3, 0);

    return 0;
}
