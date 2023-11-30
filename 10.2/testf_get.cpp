#include <iostream>
#include "d_array.h"

using namespace std;

int main() {
    try {
        dynamic_array dArr;

        create_d_array(dArr, 6, -9.2);
        set_d_array_element(dArr, 3, 14.2);
        print_d_array(dArr);
        cout << "Il 3o elemento dell'array è " << get_d_array_element(dArr, 3) << endl;
    } catch(const string& err) {
        cout << "ERRORE: " << err << endl;
    }

    return 0;
}
