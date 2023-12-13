#include <iostream>

using namespace std;

int main() {
    int hours, minutes;

    cout << "Inserire ore: ";
    cin >> hours;
    if (hours > 23 || hours < 0) {
        cerr << "Le ore devono essere comprese tra 0 e 23 inclusi" << endl;
        return 0;
    }
    
    cout << "Inserire minuti: ";
    cin >> minutes;
    if (minutes > 59 || minutes < 0) {
        cerr << "I minuti devono essere compresi tra 0 e 59 inclusi" << endl;
        return 0;
    }

    int totMin = minutes + hours*60;
    cout << "Minuti totali: " << totMin << endl;

    return 0;
}
