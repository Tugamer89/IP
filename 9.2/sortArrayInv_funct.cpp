#include <iostream>
#include "sortArrayInv_funct.h"

void sortArrayInv(int* t, int size) {
    int greatestIndex;
    for (int i = 0; i < size; ++i) {
        greatestIndex = i;

        for (int j = i+1; j < size; ++j)
            if (*(t+j) > *(t+greatestIndex))
                greatestIndex = j;

        std::swap(*(t+i), *(t+greatestIndex));
    }
}
