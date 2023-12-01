#include <iostream>
#include "my_vector.h"

using namespace std;

int main() {
    my_vector v = create_my_vector(5);
    print_my_vector_status(v);

    return 0;
}
