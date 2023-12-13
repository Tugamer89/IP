#include <iostream>
#include "d_array.h"

using namespace std;

int main() {
    try {
        dynamic_array dArr;

        create_d_array(dArr, 6, -9.2);
        print_d_array(dArr);

        set_d_array_element(dArr, 3, 14.2);
        print_d_array(dArr);

        set_d_array_element(dArr, 443, 14.2);
    } catch(const string& err) {
        cout << "ERRORE: " << err << endl;
    }

    return 0;
}
