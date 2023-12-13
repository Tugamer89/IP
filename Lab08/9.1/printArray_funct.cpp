#include <iostream>
#include "printArray_funct.h"

using namespace std;

void printArray(int* s, int size) {
    for (int i = 0; i < size; ++i)
        cout << *(s++) << " ";
    cout << endl;
}

void printArrayWithIndex(int s[], int size) {
    for (int i = 0; i < size; ++i)
        cout << s[i] << " ";
    cout << endl;
}
