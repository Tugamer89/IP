#include "reverseArrayInStruct_funct.h"

void printArray(const array_str& s) {
    for (int i = 0; i < s.size; ++i)
        cout << *(s.array+i) << " ";
    cout << endl;
}

void reverseArrayInStruct(const array_str& source, array_str& dest) {
    if (source.array == dest.array)
        throw OutOfRangeError("reverseArrayInStruct", "source, dest", "UNKNOWN", "i due array coincidono");

    if (source.size != dest.size)
        throw OutOfRangeError("reverseArrayInStruct", "source, dest", "UNKNOWN", "i due array hanno dimensioni diverse");

    for (int i = 0; i < source.size; ++i)
        dest.array[source.size-i-1] = source.array[i];
}

