#include <iostream>

using namespace std;

int main() {
    int hours, minutes;

    cout << "Inserire ore: ";
    cin >> hours;
    if (hours > 23 || hours < 0) {
        cerr << "Le ore devono essere comprese tra 0 e 23 inclusi";
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
        case 0:
            cout << "mezzanotte";
            break;
        case 1:
            cout << "l'una";
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
            cout << "mezzogiorno";
            break;
        case 13:
            cout << "tredici";
            break;
        case 14:
            cout << "quattordici";
            break;
        case 15:
            cout << "quindici";
            break;
        case 16:
            cout << "sedici";
            break;
        case 17:
            cout << "diciassette";
            break;
        case 18:
            cout << "diciotto";
            break;
        case 19:
            cout << "diciannove";
            break;
        case 20:
            cout << "venti";
            break;
        case 21:
            cout << "ventuno";
            break;
        case 22:
            cout << "ventidue";
            break;
        case 23:
            cout << "ventitre";
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
            cout << " e tre quarti";
            break;
    }

    if (minutes % 15 != 0)
        cout << " passate";

    cout << endl;

    return 0;
}
