#include <iostream>
#include "my_vector.h"

using namespace std;

int main() {
    try {
        my_vector v = create_my_vector(5);
        push_back_my_vector_element(v, 2);
        push_back_my_vector_element(v, -8.23);
        
        print_my_vector_status(v);
    } catch (const string& err) {
        cerr << err << endl;
    }
    return 0;
}
