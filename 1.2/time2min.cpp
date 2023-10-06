#include <iostream>

using namespace std;

int main() {
    int ore, minuti;

    cout << "Inserire ore: ";
    cin >> ore;
    if (ore > 23) {
        cerr << "Le ore devono essere comprese tra 0 e 23 inclusi" << endl;
        return 0;
    }
    
    cout << "Inserire minuti: ";
    cin >> minuti;
    if (minuti > 59 || minuti < 0) {
        cerr << "I minuti devono essere compresi tra 0 e 59 inclusi" << endl;
        return 0;
    }

    int totMin = minuti + ore*60;
    cout << "Minuti totali: " << totMin << endl;

    return 0;
}