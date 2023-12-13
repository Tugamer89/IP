#include "allDiffArrayElements_funct.h"

bool isElementInArray(int* array, int size, int element) {
    for (int i = 0; i < size; ++i)
        if (*(array+i) == element)
            return true;

    return false;
}

bool allDiffArrayElements(int* t, int size) {
    for (int i = 0; i < size; ++i)
        if (isElementInArray(t+i+1, size, *(t+i)))
            return false;

    return true;
}
