#include "arrayIncludedInArray_funct.h"

bool isElementInArray(int* array, int size, int element) {
    for (int* p = array; p < array+size; ++p)
        if (*p == element)
            return true;

    return false;
}

bool arrayIncludedInArray(int* t1, int size1, int* t2, int size2) {
    for (int* p = t1; p < t1+size1; ++p)
        if (!isElementInArray(t2, size2, *p))
            return false;

    return true;
}
