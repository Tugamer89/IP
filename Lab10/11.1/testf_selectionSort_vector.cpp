#include <iostream>
#include <vector>
#include "selectionSort_vector.h"
#include "iovector.h"

using namespace std;

int main() {
    vector<int> v;

    readVector(v);
    printVector(v);
    selectionSort_vector(v, true);
    printVector(v);
    selectionSort_vector(v, false);
    printVector(v);

    return 0;
}
