#include "array.h"
#include <iostream>

using namespace std;

static inline void printDivisor() {
    cout << "***********" << endl;
}

int main() {
    int array[] = {77, 56, 104, 15, 48, -7, 50, 4, 0};
    int size = sizeof(array) / sizeof(int);

    // test of stampa
    printDivisor();
    cout << stampa(array, 0) << endl;
    cout << stampa(array, 1) << endl;
    cout << stampa(array, size/2) << endl;
    cout << stampa(array, size) << endl;

    // test of stampaKelementi
    printDivisor();
    cout << stampaKelementi(array, size, 0) << endl;
    cout << stampaKelementi(array, size, 1) << endl;
    cout << stampaKelementi(array, size, size-1) << endl;
    cout << stampaKelementi(array, size, size) << endl;
    cout << stampaKelementi(array, size, size+3) << endl;

    // test of sort
    printDivisor();
    sort(array, size);
    cout << stampa(array, size) << endl;

    return 0;
}
