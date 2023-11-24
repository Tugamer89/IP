#include <iostream>
#include "allDiffArrayElements_funct.h"

using namespace std;

int main() {
    const int size1 = 4;
    const int size2 = 6;
    int t1[size1] = {1, 2, 7, 9};
    int t2[size2] = {5, 8, 7, 2, 8, 0};

    cout << boolalpha;
    cout << allDiffArrayElements(t1, size1) << endl;
    cout << allDiffArrayElements(t2, size2) << endl;

    return 0;
}
