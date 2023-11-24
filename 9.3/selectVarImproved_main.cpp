#include <iostream>
#include "selectVarImproved_funct.h"

using namespace std;

int main() {
    char ch1 = 'f', ch2 = 'g', ch3 = 'h';
    char* selected = selectVar(ch1, ch2, ch3);

    if (selected == nullptr)
        cout << "non hai scelto nulla" << endl;
    else {
        printChoice(selected, ch1, "ch1");
        printChoice(selected, ch2, "ch2");
        printChoice(selected, ch3, "ch3");
    }

    return 0;
}
