#include <iostream>
#include <vector>
#include "insert.h"
#include "../11.1/iovector.h"

using namespace std;

int main() {
    vector<int> v;

    // inserimento in vector vuoto
    insert(v, 0, 24);
    printVector(v);

    // inserimento in testa a vector non vuoto
    insert(v, 0, 12);
    printVector(v);

    // inserimento in coda a vector non vuoto
    insert(v, v.size(), 89);
    printVector(v);

    // inserimento in posizione generica a vector non vuoto
    insert(v, 1, 17);
    printVector(v);

    // inserimento in posizione non valida
    try {
        insert(v, 49, -9);
        printVector(v);
    } catch (int errCode) {
        cerr << "ERRORE: " << errCode << endl;
    }

    return 0;
}
