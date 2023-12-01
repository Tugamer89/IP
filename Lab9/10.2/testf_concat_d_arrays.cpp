#include <iostream>
#include "d_array.h"

using namespace std;

int main() {

    try {
        dynamic_array dArr1, dArr2, dArr3;
        read_d_array(dArr1);
        read_d_array(dArr2);
        concat_d_arrays(dArr1, dArr2, dArr3);
        print_d_array(dArr3);
    } catch (const string& err) {
        cerr << "ERRORE: " << err << endl;
    }
    return 0;
}
