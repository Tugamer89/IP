#include "array.h"

dyn_array indexOfInArray(int v, const int* arr, unsigned int dim) {
    dyn_array ret{nullptr, 0};

    for (unsigned int i = 0; i < dim; ++i) {
        if (arr[i] == v) {
            dyn_array old = ret;

            ++ret.D;
            ret.A = new unsigned int[ret.D];

            for (unsigned int j = 0; j < old.D; ++j)
                ret.A[j] = old.A[j];
            ret.A[ret.D-1] = i;

            if (old.A)
                delete old.A;
        }
    }

    return ret;
}
