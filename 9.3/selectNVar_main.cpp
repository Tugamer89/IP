#include <iostream>
#include <string>
#include "selectNVar_funct.h"

using namespace std;

int main() {
    const int N = 4;
    char vars[N] = {'f', 'g', 'h', 'k'};
    char* selected = selectVar(vars, N);

    if (selected != nullptr)
        for (int i = 0; i < N; ++i)
            printChoice(selected, vars[i], "il " + to_string(i+1) + "-esimo");
    else
        cout << "non hai scelto nulla" << endl;
        


    return 0;
}
