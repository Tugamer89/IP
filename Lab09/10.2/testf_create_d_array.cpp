#include <iostream>
#include "d_array.h"

using namespace std;

int main() {
    try {
        dynamic_array dArr;

        create_d_array(dArr, 6, -9.2);
        print_d_array(dArr);
    } catch(const string& err) {
        cout << "ERRORE: " << err << endl;
    }

    return 0;
}
