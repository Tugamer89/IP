#include <iostream>
#include "selectVar_func.h"

using namespace std;

char* selectVar(char& a, char& b, char& c) {
    char answer;
    char* p = nullptr;

    cout << "Scegli fra queste variabili" << endl;
    cout << "potrai cambiare idea in seguito e sceglierne una diversa che preferisci" << endl;

    cout << "Vuoi la prima (y/n)? contiene " << a << endl;
    cin >> answer;
    if (answer == 'y' || answer == 'Y')
        p = &a;

    cout << "Preferisci la seconda (y/n)? contiene " << b << endl;
    cin >> answer;
    if (answer == 'y' || answer == 'Y')
        p = &b;

    cout << "Preferisci la terza (y/n)? contiene " << c << endl;
    cin >> answer;
    if (answer == 'y' || answer == 'Y')
        p = &b;

    return p;
}
