#include <iostream>
#include "my_vector.h"

using namespace std;

int main() {
    try {
        my_vector v = create_my_vector(2);
        safe_push_back_my_vector_element(v, 2);
        safe_push_back_my_vector_element(v, -8.23);
        safe_push_back_my_vector_element(v, 42.9);
        
        print_my_vector_status(v);
        destroy_my_vector(v);
        print_my_vector_status(v);
    } catch (const string& err) {
        cerr << err << endl;
    }
    return 0;
}
