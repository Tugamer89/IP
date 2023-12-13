#include <iostream>
#include "selectVar_funct.h"

using namespace std;

int main() {
    char ch1 = 'f', ch2 = 'g', ch3 = 'h';
    char* selected = selectVar(ch1, ch2, ch3);

    if (selected == &ch1)
        cout << "hai scelto ch1 che ha valore = " << ch1 << endl;
    else if (selected == &ch2)
        cout << "hai scelto ch2 che ha valore = " << ch3 << endl;
    else if (selected == &ch3)
        cout << "hai scelto ch3 che ha valore = " << ch3 << endl;
    else
        cout << "non hai scelto niente" << endl;

    return 0;
}
