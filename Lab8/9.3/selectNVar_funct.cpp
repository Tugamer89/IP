#include <iostream>
#include <string>
#include "selectNVar_funct.h"

using namespace std;

char* proposeVar(const string& message, char& var) {
    char answer;
    cout << message;
    cin >> answer;

    if (answer == 'y' || answer == 'Y')
        return &var;

    return nullptr; 
}

void printChoice(char* choice, char& var, const string& varName) {
    if (choice == &var)
        cout << "hai scelto " << varName << endl;
}

char* selectVar(char* vars, int size) {
    char answer;
    char* p = nullptr;

    cout << "Scegli fra queste variabili: "; 
    for (int i = 0; i < size; ++i)
        cout << (i != 0 ? ", " : "") << *(vars+i);
    cout << "\npotrai cambiare idea in seguito e sceglierne una diversa che preferisci" << endl;

    for (int i = 0; i < size; ++i) {
        char* tmp = proposeVar("Vuoi la " + to_string(i+1) + "-esima (y/n)? ", *(vars+i));
        if (tmp != nullptr)
            p = tmp;
    }
    
    return p;
}
