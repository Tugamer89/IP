#include <iostream>

using namespace std;

int main() {
    int hours, minutes;

    cout << "Inserire ore: ";
    cin >> hours;
    if (hours > 12 || hours < 1) {
        cerr << "Le ore devono essere comprese tra 1 e 12 inclusi";
        return -1;
    }
    
    cout << "Inserire minuti: ";
    cin >> minutes;
    if (minutes > 59 || minutes < 0) {
        cerr << "I minuti devono essere compresi tra 0 e 59 inclusi";
        return -1;
    }

    cout << "Sono le ore ";

    switch (hours) {
        case 1:
            cout << "una";
            break;
        case 2:
            cout << "due";
            break;
        case 3:
            cout << "tre";
            break;
        case 4:
            cout << "quattro";
            break;
        case 5:
            cout << "cinque";
            break;
        case 6:
            cout << "sei";
            break;
        case 7:
            cout << "sette";
            break;
        case 8:
            cout << "otto";
            break;
        case 9:
            cout << "nove";
            break;
        case 10:
            cout << "dieci";
            break;
        case 11:
            cout << "undici";
            break;
        case 12:
            cout << "dodici";
            break;
    }

    switch (minutes / 15) {
        case 1:
            cout << " e un quarto"; 
            break;
        case 2:
            cout << " e mezza";
            break;
        case 3:
            cout << " e mezza";
            break;
    }

    if (minutes % 15 != 0)
        cout << " circa";

    cout << endl;

    return 0;
}
