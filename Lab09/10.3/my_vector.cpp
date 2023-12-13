#include "my_vector.h"
#include <iostream>

using namespace std;

my_vector create_my_vector(unsigned int capacity) {
    my_vector v;

    if (capacity != 0)
        v.store = new double[capacity];
    else
        v.store = nullptr;
    v.capacity = capacity;
    v.size = 0;

    return v;
}

void print_my_vector_status(const my_vector& v) {
    cout << "**********************" << endl;
    cout << "my_vector size = " << v.size << endl;
    cout << "my_vector capacity = " << v.capacity << endl;
    cout << "my_vector store = {";
    for (unsigned int i = 0; i < v.size; ++i)
        cout << (i != 0 ? ", " : " ") << v.store[i];
    cout << " }" << endl;
    cout << "**********************" << endl;
}

void push_back_my_vector_element(my_vector& v, double x) {
    if (v.size == v.capacity)
        throw (string)"push_back_my_vector_element: Impossibile inserire elemento in Array pieno";
    else if (v.size < v.capacity)
        v.store[v.size++] = x;
}

double pop_back_my_vector_element(my_vector& v) {
    if (v.size == 0)
        throw (string)"pop_back_my_vector_element: Impossibile estrarre elemento da Array vuoto";
    return v.store[--v.size];
}

void set_my_vector_element(my_vector& v, double value, unsigned int index) {
    if (v.size == 0)
        throw (string)"get_my_vector_element: Impossibile leggere un elemento da un My_Vector vuoto";
    if (index >= v.size)
        throw (string)"set_my_vector_element: Indice fornito non ammissibile";
    v.store[index] = value;
}

double get_my_vector_element(const my_vector& v, unsigned int index) {
    if (v.size == 0)
        throw (string)"get_my_vector_element: Impossibile leggere un elemento da un My_Vector vuoto";
    if (index >= v.size)
        throw (string)"get_my_vector_element: Indice fornito non ammissibile";
    return v.store[index];
}

void resize_my_vector(my_vector& v, unsigned int new_capacity) {
    if (new_capacity <= 0)
        throw (string)"resize_my_vector: new_capacity fornita non positiva";

    double* tmp = new double[new_capacity];
    
    for (unsigned int i = 0; i < min(v.size, new_capacity); ++i)
        tmp[i] = v.store[i];

    if (v.capacity > 0)
        delete[] v.store;
    
    v.store = tmp;
    v.capacity = new_capacity;
    v.size = min(v.size, new_capacity);
}

void safe_push_back_my_vector_element(my_vector& v, double x) {
    try {
        push_back_my_vector_element(v, x);
    } catch (const string& err) {
        resize_my_vector(v, max((unsigned int)1, v.capacity*2));
        push_back_my_vector_element(v, x);
    }
}

void destroy_my_vector(my_vector& v) {
    if (v.capacity == 0)
        return;
    
    v.size = 0;
    v.capacity = 0;
    delete[] v.store;
}

bool looks_consistent_my_vector(const my_vector& v) {
    return v.store != nullptr && v.size <= v.capacity && v.capacity > 0;
}

void sort_my_vector(my_vector& v) {
    for (unsigned int i = 0; i < v.size-1; ++i)
        for (unsigned int j = 0; j < v.size-i-1; ++j)
            if (v.store[j] > v.store[j+1])
                swap(v.store[j], v.store[j+1]);
}
