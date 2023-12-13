#include <iostream>
#include "arrayIncludedInArray_funct.h"

using namespace std;

int main() {
    const int size1 = 3;
    const int size2 = 6;
    int t1[size1] = {1, 2, 7};
    int t2[size2] = {5, 8, 8, 7, 2, 0};
    int t3[size2] = {5, 8, 8, 7, 2, 1};

    cout << boolalpha;
    cout << arrayIncludedInArray(t1, size1, t2, size2) << endl;
    cout << arrayIncludedInArray(t1, size1, t3, size2) << endl;

    return 0;
}
