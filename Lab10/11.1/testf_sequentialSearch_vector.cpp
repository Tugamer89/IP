#include <iostream>
#include <vector>
#include "sequentialSearch_vector.h"
#include "iovector.h"

using namespace std;

int main() {
    vector<int> v = {12, 3, -9, 0, 48, 52};
    printVector(v);

    cout << "L'elemento 48 è stato trovato in posizione " << sequentialSearch_vector(v, 48) << endl;
    cout << "L'elemento 9 è stato trovato in posizione " << sequentialSearch_vector(v, 9) << endl;

    return 0;
}
