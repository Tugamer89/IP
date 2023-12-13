#include <iostream>
#include "my_vector.h"

using namespace std;

int main() {
    try {
        my_vector v = create_my_vector(5);
        push_back_my_vector_element(v, 2);
        push_back_my_vector_element(v, -8.23);
        push_back_my_vector_element(v, 0);
        push_back_my_vector_element(v, 18.002);
        push_back_my_vector_element(v, -8);

        print_my_vector_status(v);
        double getted = get_my_vector_element(v, 3);
        cout << "Element with index 3: " << getted << endl;
    } catch (const string& err) {
        cerr << err << endl;
    }

    return 0;
}
