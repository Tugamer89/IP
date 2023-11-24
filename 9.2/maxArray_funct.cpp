#include <iostream>
#include "maxArray_funct.h"

int maxArray(int* t, int size) {
    if (size <= 0)
        throw (std::string)"la dimensione è negativa o nulla";

    int maxElem = *t;

    for (int i = 1; i < size; ++i)
        if (*(t+i) > maxElem)
            maxElem = *(t+i);

    return maxElem;
}
