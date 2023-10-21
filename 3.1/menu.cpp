#include <iostream>

using namespace std;

int main() {
    int answer;

    do {
        cout << "1 Prima scelta" << endl;
        cout << "2 Seconda scelta" << endl;
        cout << "3 Terza scelta" << endl;
        cout << "0 Uscita dal programma" << endl;
        cout << "Fai una scelta: ";
        cin >> answer;

        if (answer == 1) 
            cout << "Hai fatto la prima scelta" << endl;
        else if (answer == 2)
            cout << "Hai fatto la seconda scelta" << endl;
        else if (answer == 3)
            cout << "Hai fatto la terza scelta" << endl;
        else if (answer == 0) {
            cout << "Hai scelto di uscire dal programma" << endl;
            break;
        }
        else
            cout << "Scelta non valida" << endl;
    } while (answer != 0);

    return 0;
}
