#include <iostream>
#include "selectVarImproved_funct.h"

using namespace std;

char* proposeVar(const string& message, char& var) {
    char answer;
    cout << message << endl;
    cin >> answer;

    if (answer == 'y' || answer == 'Y')
        return &var;

    return nullptr; 
}

void printChoice(char* choice, char& var, const string& varName) {
    if (choice == &var)
        cout << "hai scelto " << varName << endl;
}

char* selectVar(char& a, char& b, char& c) {
    char answer;
    char* tmp = nullptr;
    char* p = nullptr;

    cout << "Scegli fra queste variabili: " << a << ", " << b << ", " << c << endl;
    cout << "potrai cambiare idea in seguito e sceglierne una diversa che preferisci" << endl;

    p = proposeVar("Vuoi la prima (y/n)? ", a);

    tmp = proposeVar("Preferisci la seconda (y/n)? ", b);
    if (tmp != nullptr)
        p = tmp;
    
    tmp = proposeVar("Preferisci la terza (y/n)? ", c);
    if (tmp != nullptr)
        p = tmp;
    
    return p;
}
