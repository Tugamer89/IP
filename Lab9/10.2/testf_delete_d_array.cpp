#include <iostream>
#include "d_array.h"

using namespace std;

int main() {
    try {
        dynamic_array dArr;

        read_d_array(dArr);
        print_d_array(dArr);
        delete_d_array(dArr);
        delete_d_array(dArr);
    } catch(const string& err) {
        cout << "ERRORE: " << err << endl;
    }

    return 0;
}
