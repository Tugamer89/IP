#include "array.h"

using namespace std;

string stampa(int arrayInteri[] , int dimensione) {
    string str = "";
    for (int i = 0; i < dimensione; ++i)
        str += (i > 0 ? "," : "") + to_string(arrayInteri[i]);
    return str;
}

string stampaKelementi(int arrayInteri[] , int dimensione , int k) {
    string str = "";
    for (int i = 0; i < min(dimensione, k); ++i)
        str += (i > 0 ? "," : "") + to_string(arrayInteri[i]);
    return str;
}

void sort(int arrayInteri[] , int dimensione) {
    for (int i = 0; i < dimensione; ++i)
        for (int j = 0; j < dimensione - i - 1; ++j)
            if (arrayInteri[j] > arrayInteri[j+1])
                swap(arrayInteri[j], arrayInteri[j+1]);
}
