#include <iostream>
#include "my_vector.h"

using namespace std;

int main() {
    my_vector v = create_my_vector(5);

    for (unsigned int i = 0; i < v.capacity; ++i)
        cout << v.store[i] << " ";
    cout << endl;

    return 0;
}
