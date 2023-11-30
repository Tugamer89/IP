#include <iostream>
#include "d_array.h"

using namespace std;

void read_d_array(dynamic_array& d) {
    int s = -1;

    while (s < 0) {
        cout << "Inserisci la dimensione dell'array: ";
        cin >> s;
    }
    
    d.size = s;
    d.store = new double[s];

    for (int i = 0; i < s; ++i) {
        cout << "Inserisci un valore: ";
        cin >> d.store[i];
    }
}

void print_d_array(const dynamic_array& d) {
    double* p = d.store;

    cout << "I valori contenuti nell'array sono: { ";
    for (int i = 0; i < d.size; ++i)
        cout << (i != 0 ? ", " : "") << p[i];
    cout << " }" << endl;
}

void delete_d_array(dynamic_array& d) {
    if (d.size == 0)
        throw (string)"L'array è già stato eliminato!";
    
    d.size = 0;
    delete[] d.store;
}

void create_d_array(dynamic_array& d, int size, double value) {
    if (size < 0)
        throw (string)"La dimensione indicata è negativa";
    
    if (d.size != 0)
        delete_d_array(d);

    d.size = size;
    d.store = new double[size];

    for (int i = 0; i < size; ++i)
        d.store[i] = value;
}

void set_d_array_element(dynamic_array& d, unsigned int index, double value) {
    if (index >= d.size)
        throw (string)"L'indice è maggiore della dimensione dell'array";

    d.store[index] = value;
}

double get_d_array_element(const dynamic_array& d, unsigned int index) {
    if (index >= d.size)
        throw (string)"L'indice è maggiore della dimensione dell'array";

    return d.store[index];
}

void concat_d_arrays(dynamic_array& t1, dynamic_array& t2, dynamic_array& t3) {
    t3.size = t1.size + t2.size;
    t3.store = new double[t3.size];

    for (int i = 0; i < t3.size; ++i)
        t3.store[i] = (i < t1.size ? t1.store[i] : t2.store[i - t1.size]);
}

void sort_d_array(dynamic_array& d) {
    int greatestIndex;

    for (int i = 0; i < d.size; ++i) {
        greatestIndex = i;

        for (int j = i+1; j < d.size; ++j)
            if (d.store[j] < d.store[greatestIndex])
                greatestIndex = j;

        swap(d.store[i], d.store[greatestIndex]);
    }
}
