#include "reverseArray_funct.h"

void reverse(int* source, int* dest, int size) {
    if (source == dest)
        throw OutOfRangeError("reverse", "source, dest", "UNKNOWN", "i due array coincidono");

    for (int i = 0; i < size; ++i)
        dest[size-i-1] = source[i];
}

