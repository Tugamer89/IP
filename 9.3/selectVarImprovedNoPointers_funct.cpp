#include <iostream>
#include "selectVarImprovedNoPointers_funct.h"

using namespace std;

char proposeVar(const string& message, char& var) {
    char answer;
    cout << message;
    cin >> answer;

    if (answer == 'y' || answer == 'Y')
        return var;

    return '\0'; 
}

void printChoice(char& choice, char& var, const string& varName) {
    if (choice == var)
        cout << "hai scelto " << varName << endl;
}

char selectVar(char& a, char& b, char& c) {
    char answer;
    char tmp;
    char selected = '\0';

    cout << "Scegli fra queste variabili: " << a << ", " << b << ", " << c << endl;
    cout << "potrai cambiare idea in seguito e sceglierne una diversa che preferisci" << endl;

    tmp = proposeVar("Vuoi la prima (y/n)? ", a);
    if (tmp != '\0')
        selected = tmp;

    tmp = proposeVar("Preferisci la seconda (y/n)? ", b);
    if (tmp != '\0')
        selected = tmp;

    tmp = proposeVar("Preferisci la terza (y/n)? ", c);
    if (tmp != '\0')
        selected = tmp;
    
    return selected;
}
